# include<stdio.h>
# include<stdlib.h> // for atoi()
# include <math.h>
# include <assert.h>
# include "writeIV.h"
# include "IDrain.h"
# include "VdArray.h"
# include "IdArray.h"
# include "VT.h"
# include "GlobalVar.h"

int main(int argc, char* argv[]){
if(argc!=4) 
{
	printf("\nmake sure to put Values of Vgs, Vds, and n\n");
	return EXIT_FAILURE;
}

int n=atoi(argv[3]);
double EpsilonOx=Epsilon0*3.0, EpsilonS=Epsilon0*11.9;
double Cox = EpsilonOx/tox;
double Vgs=atof(argv[1]), Vds=atof(argv[2]);
double phi0 = 2*kt*log(Na/ni) + 5*kt;

double Vdrain[n];
double Idrain[n];

char* file[]={"VI1.txt","VI2.txt","VI3.txt","VI4.txt","VI5.txt"};
double Vt = Vth(Vfb, Vsb, phi0, EpsilonS, Na, ni,Cox );

Vdarray(Vdrain,Vds,n);

for(int i=0;i<5;i++){ 
double dVgs=Vgs/4;
double vgs=Vt + 0.1 + i*dVgs;
Idarray(Idrain, Vdrain, vgs, Vt, phi0, mu, EpsilonOx, tox, W, L, Cox, n);
WriteIV(Idrain, Vdrain, n, file[i]);
}
return 0;
}


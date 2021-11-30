#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"Constants.h"
#include"Psi.h"
#include"InitialGuess.h"
#include"Newton.h"
#include"Differentiation.h"
#include"WritePsi.h"

int main(int argc, char** argv)
{

double h=atof(argv[1]), error=atof(argv[2]);
unsigned int maxiter=atoi(argv[3]), n=atoi(argv[4]);
double Vgmax=5;


double* root=malloc(n*sizeof(double));
double* Vg=malloc(n*sizeof(double));
double* IniG=malloc(n*sizeof(double));

double dvg = Vgmax/(n -1); 
double ig1=0.0, ig2=0.0, ig=0.0;
for(int i=0;i<n;i++)
{

*(Vg+i)=0.0;
*(IniG+i)=0.0;
*(root+i)=0.0;
*(Vg+i) = dvg*i ;

ig1=Ig1dm(*(Vg+i));
ig2=Ig2si(*(Vg+i));
ig=fmin(ig1,ig2);
*(IniG+i)=ig;
*(root+i) = NewtonRaphson(Psi,*(Vg+i),ig,h,error,maxiter);

printf("\n Function value at root %lf is %e\n",*(root+i),Psi(*(root+i),*(Vg+i)));

}

WritePsi(Vg,root,n,"Psi.txt");
WritePsi(Vg,IniG,n,"IniG.txt");

free(IniG);
free(Vg);
free(root);

return EXIT_SUCCESS;
}

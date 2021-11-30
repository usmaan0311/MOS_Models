#ifndef NEWTONRAPHSON
#define NEWTONRAPHSON
#include"Differentiation.h"

double NewtonRaphson(double (*f)(double x, double Vgb),double Vgb, double ig, double h, double error, unsigned int maxiter)
{
unsigned int iter=0;
double xr=0;
double funtol=0.5;

if(f(ig,Vgb)==0)
{

printf("%lf is the root of the function",ig);

}
else
{
double x0=ig;
while((funtol>error) && (iter<maxiter))
{

	xr = x0 - f(x0,Vgb)/diff(f,x0,Vgb,h);
	funtol = fabs( f(xr,Vgb) - f(x0,Vgb) );
	iter+=1;
	x0=xr;



}



printf("\nRoot of function is %lf with accuracy %e, converged int %i iterations\n",xr,funtol,iter);

}


return xr;


}





#endif

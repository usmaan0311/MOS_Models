#ifndef Differentiation_
#define Differentiation_
double diff(double (*f)(double x, double vg), double x, double Vg, double h)
{

return ( f(x + h, Vg) - f(x - h, Vg) )/(2*h) ;


}

#endif

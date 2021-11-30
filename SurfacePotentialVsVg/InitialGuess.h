#ifndef InitialGuess
#define InitialGuess
double Ig1dm(double Vg)
{

	return pow((-gamma/2 + sqrt(fabs( pow(gamma/2,2) - (Vfb - Vg)    )) ),2);


}

double Ig2si(double Vg)
{

	return 2*( phif + kt*log( fabs(Vg - Vfb)/(gamma*sqrt(kt)) )   );



}

#endif

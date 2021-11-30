#ifndef PSI_
#define PSI_

double Psi(double x, double Vg)
{

	return Vfb + x + gamma*sqrt( fabs(x + kt*exp( (x - 2*phif)/kt) ) ) - Vg;


}


#endif

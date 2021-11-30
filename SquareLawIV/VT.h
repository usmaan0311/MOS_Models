# include "GlobalVar.h"
/* Since Vfb, Vsb etc have been defined using # define change its name here in function declaration otherwise it substitute it here and its like double 0.2 (since Vfb is 0.2) it will give error since 0.2 is a numeric constant instead of identifier, so to avoid it change argument name other that waht define using # define, i.e Vfb_ */

double Vth(double Vfb_, double Vsb_, double phi0, double EpsilonS,  double Na_, double ni_, double Cox){
	double gamma = sqrt(2*q*Na_*EpsilonS)/Cox;
	double Vt = Vfb_ + phi0 + gamma*sqrt(Vsb_ + phi0);

	return Vt;
}

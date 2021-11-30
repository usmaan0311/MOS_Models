double ID(double Vgs, double Vds, double Vt, double phi0, double mu, double EpsilonOx, double tox, double W, double L, double Cox){
	double Id;

	assert(Vgs>Vt && "Make sure Vgs > Vt, Its square law model Valid only in strong Inversion"); 

	if(Vds<Vgs - Vt){
			Id = (mu*Cox*W/L)*(Vgs - Vt - 0.5*Vds)*Vds;
				}
	else
	{
			Id = (0.5*mu*Cox*W/L)*pow((Vgs - Vt),2);
				
	}

	return Id;

}

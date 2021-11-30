double* Idarray(double Id[], double Vds[], double Vgs, double Vt, double phi0, double mu, double EpsilonOx, double tox, double W, double L, double Cox, int n)
{
	for(int i=0; i<n; i++)
	{
		Id[i]=0;
		Id[i]=ID(Vgs, Vds[i], Vt, phi0, mu,EpsilonOx,tox,W,L,Cox);

	}
	return Id;
}

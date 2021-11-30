double* Vdarray(double Vd[], double Vds, int n)
{
	double dv = Vds/(n-1);
	for(int i=0; i<n; i++)
	{
		Vd[i]=0;
		Vd[i]=i*dv;

	}

	return Vd;
}

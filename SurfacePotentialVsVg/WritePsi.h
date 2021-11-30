#ifndef WritePSI_
#define WritePSI_
void WritePsi(double* Vg, double* Psi, unsigned int n, char* name)
{
FILE* f=fopen(name,"w");
if(f!=NULL)
{
for(int i=0;i<n;i++)
{

fprintf(f,"%lf %lf\n",*(Vg+i),*(Psi+i));


}


}
fclose(f);


}


#endif

void WriteIV(double I[], double Vd[], int n, char* name){

FILE* file;
if((file=fopen(name,"w")))
{
for(int i=0;i<n;i++)
{

fprintf(file,"%lf %lf \n",Vd[i],I[i]);

}

}


fclose(file);


}






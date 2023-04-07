#include <stdio.h> 

void InitHostMem(float *Layer1_Weights_CPU,float *Layer2_Weights_CPU,float *Layer3_Weights_CPU,float *Layer4_Weights_CPU)
{
	// initial layer 1 weight
	FILE * pFile1 = fopen ("lw1.wei","rb");
	if (pFile1 != NULL)
	{
	    int i;
	    for(i=0;i<156;++i)
		fread(&(Layer1_Weights_CPU[i]),sizeof(float),1,pFile1);
		fclose (pFile1);
	}

	// initial layer 2 weight
	FILE * pFile2 = fopen ("lw2.wei","rb");
	if (pFile2 != NULL)
	{
		fread(Layer2_Weights_CPU,sizeof(float),7800,pFile2);
		fclose (pFile2);
	}
	// initial layer 3 weight
	FILE * pFile3 = fopen ("lw3.wei","rb");
	if (pFile3 != NULL)
	{
		fread(Layer3_Weights_CPU,sizeof(float),125100,pFile3);
		fclose (pFile3);
	}
	// initial layer 4 weight
	FILE * pFile4 = fopen ("lw4.wei","rb");
	if (pFile4 != NULL)
	{
		fread(Layer4_Weights_CPU,sizeof(float),1010,pFile4);
		fclose (pFile4);
	}
}

void readIn(float *layer1)
{
	FILE *fp;
	fp=fopen("in.neu","rb");
	if(fp)
	{
		fread(layer1,sizeof(float),29*29,fp);
		fclose(fp);
	}
}

void output(double *final)
{
	FILE *fp=0;
	fp=fopen("out.res","wb");
	if(fp)
	{
		fwrite(final,sizeof(double),10,fp);
		fclose(fp);
	}
}
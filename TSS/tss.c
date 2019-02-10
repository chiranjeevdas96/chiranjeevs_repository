#include<stdio.h>
#include<stdlib.h>

int main()

{
	float total,hits,occurance;
	FILE *ftotal, *fhits;

	system("clear");
	printf("Working in directory:\n");
	system("pwd");
	printf("\n");
	printf("Please wait...\n");
	printf("\n");

	ftotal 	= fopen("input/temp/total1","r");
	fhits 	= fopen("input/output/hits1","r");

	system("cat input/1 | grep -o CG > input/temp/all1");
	system("cat input/1 | grep -o CG | wc -m > input/output/outfile");
	system("cat input/1 | grep -o CG | wc -l >> input/output/outfile");

	printf("PROCESS COMPLETE!\n");
	printf("\n");

	printf("Number of CpG islets:\n");
	system("cat input/1 | grep -o CG | wc -l");
	printf("Total sequence length:\n");
	system("cat input/1 | grep -o CG | wc -m");
	printf("\n");

	fscanf(ftotal,"%f",&total);
	fscanf(fhits,"%f",&hits);

	occurance=hits/total;
	printf("CpG islet occurance = %f\n",occurance);

	if (occurance > 0.067)
	{
		printf("Sequence has high probablity of containing a TSS.\n");
		system("echo Sequence has high probablity of containing a TSS >> input/output/outfile");
	}
	else 
	{
		printf("Sequence has low probablity of containing a TSS.\n");
		system("echo Sequence has low probablity of containing a TSS >> input/output/outfile");
	}
	
	printf("Output saved to: input/output/\n");
}

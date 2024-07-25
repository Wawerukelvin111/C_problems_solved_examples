/*write a program that that opens a file named myfile.txt
pn write mode and write 100(integer) into that file*/
#include <stdio.h>

int main()
{
	FILE *fp;
	fp=fopen("myfile.txt","w"); 
	fprintf(fp,"%d",100);
	fclose(fp);
	return 0;
}

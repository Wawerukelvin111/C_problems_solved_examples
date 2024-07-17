/*write a program that outputs the following output using loop
1
2 4
3 6 9
4 8 12 16
5 10 15 20 25
6 12 18 24 30 36
*/
#include <stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=6;i++){
		for(j=i;j<=(i*i);j+=1){
			if((j)%i==0){
				printf("%d ",j);
			}
			
		}
		printf("\n");
	}
	
	return 0;
}

/*Take an array of integer type of size 5
Scan the values from the user
Print the average of integers that are greater than 100 */
#include <stdio.h>

int main()
{
	int arr[5],i,count=0;
	for(i=0;i<5;i++){//loop
		printf("\nEnter value %d\n:",i);
		scanf("%d",&arr[i]);
		if(arr[i]>100)
		count++;//the record increases when the condition is satisfied
	}
	printf("Those greater than 100 are:\n%d",count);
	//we output only the nnumber of values greater than 100
		
	return 0;
}

//Problem 02 :Max integer
//Say you are give the following array of integer data type 
//[-99,45,100,37,89,-327,245]
//write a program which will find the biggest integer 
//and print it together with its index
#include<stdio.h>
int main(){
    int arr[7]={-99,45,100,245,37,89,-327};//declaring the array length 
    int i,max=arr[0],maxIndex=0;//declaring the variables
    for (i=0;i<7;i++){
        if(arr[i]>max){//looping through the arrays testing each number with all the others 
            max=arr[i];//loops till it finds the greatest of the values
            maxIndex=i;//identifies the location for the greatest valufe in the array            
        }
    }
    printf("The Greatest number in the set is:%d and its index is: %d",max,maxIndex);
    //printing the output of the largest array  while refrencing its index/location.remmember the array indexes sratt at 0 
    return 0;
}
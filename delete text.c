/*write a program which will delete all the text from a text file
and write DELETED  on that file*/
#include <stdio.h>

int main (){
    FILE *fp;
    fp= fopen("myfile.txt","w");
    fprintf(fp,"%s","DELETED");
    return 0;
}
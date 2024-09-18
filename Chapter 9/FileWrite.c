#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Test.txt","w");
    // fptr = fopen("Test.txt","a");

    
    // fprintf(fptr,"%c",'M');
    // fprintf(fptr,"%c",'I');
    // fprintf(fptr,"%c",'H');
    // fprintf(fptr,"%c",'R');

    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
}
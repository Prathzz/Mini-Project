#include"record.h"

#include<stdio.h>
    FILE *fp, *ft;
    char check, selection;
    struct emp
    {
        char name[40]; 
        int age; 
        float bs; 
    };
    struct emp e; 
    char empname[40]; 
    long int recsize;
void showallrecord(){
 rewind(fp); 
            while(fread(&e,recsize,1,fp)==1)  
            {
                printf("\n%s %d %.2f",e.name,e.age,e.bs); 
            }
            getch();

}
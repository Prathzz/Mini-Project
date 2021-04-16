
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
void addnewname(){fseek(fp,0,SEEK_END); 
            check = 'y';
            while(check == 'y') 
            {
                printf("\nEnter Employee's name : ");
                scanf("%s",e.name);
                printf("\nEnter his age: ");
                scanf("%d", &e.age);
                printf("\nEnter his basic salary: ");
                scanf("%f", &e.bs);

                fwrite(&e,recsize,1,fp); 

                printf("\nDo you want to add another employee's record(y/n)? ");
                fflush(stdin);
                check = getche();
            }
}
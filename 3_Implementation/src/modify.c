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
void modify()
{
check = 'y';
            while(check == 'y')
            {
                printf("Enter the employee's name to be modified: ");
                scanf("%s", empname);
                rewind(fp);
                while(fread(&e,recsize,1,fp)==1)  
                {
                    if(strcmp(e.name,empname) == 0)  
                    {
                        printf("\nEnter new name,age and bs: ");
                        scanf("%s%d%f",e.name,&e.age,&e.bs);
                        fseek(fp,-recsize,SEEK_CUR); 
                        fwrite(&e,recsize,1,fp);
                        break;
                    }
                }
                printf("\nDo you want to modify another employee's record(y/n)?");
                fflush(stdin);
                check = getche();
            }

}
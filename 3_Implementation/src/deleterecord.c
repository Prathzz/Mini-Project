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
void deleterecord()
{check = 'y';
            while(check == 'y')
            {
                printf("\nEnter name of the employee to be deleted: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  
                rewind(fp); 
                while(fread(&e,recsize,1,fp) == 1)  
                {
                    if(strcmp(e.name,empname) != 0)  
                    {
                        fwrite(&e,recsize,1,ft); 
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("EMPLOYEE.DAT"); 
                rename("Temp.dat","EMPLOYEE.DAT"); 
                fp = fopen("EMPLOYEE.DAT", "rb+");
                printf("Do you want to delete another employee's record(y/n)?");
                fflush(stdin);
                check = getche();
            }
            }
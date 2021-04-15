#include "record.h"
int main()
{
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

    fp = fopen("EMPLOYEE.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("EMPLOYEE.DAT","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }
    recsize = sizeof(e);
    for(;;)
    {
        system("cls"); 
        gotoxy(30,10); 
        printf("1. Add New Record"); 
        gotoxy(30,12);
        printf("2. Show all the Records");
        gotoxy(30,14);
        printf("3. Modify Records"); 
        gotoxy(30,16);
        printf("4. Delete Records"); 
        gotoxy(30,18);
        printf("5. Exit"); 
        gotoxy(30,20);
        printf("Your Choice: "); 
        fflush(stdin); 
        selection  = getche();
        switch(selection)
        {
        case '1':  
            system("cls");
            fseek(fp,0,SEEK_END); 
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
            break;
        case '2':
            system("cls");
            rewind(fp); 
            while(fread(&e,recsize,1,fp)==1)  
            {
                printf("\n%s %d %.2f",e.name,e.age,e.bs); 
            }
            getch();
            break;

        case '3':  
            system("cls");
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
            break;
        case '4':
            system("cls");
            check = 'y';
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
            break;
        case '5':
            fclose(fp);  
            exit(0); 
        }
    }
    return 0;
}
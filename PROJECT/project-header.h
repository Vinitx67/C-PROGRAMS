#include <stdio.h>
#include <string.h>
struct Employee
{
    int empid;
    char firstName[20];
    char lastName[20];
    double salary;
    char department[40];
} emp;

// declaration
void printStructure(struct Employee tempEmp)
{
    printf("\nEMPLOYEES DETAILS\n");
    printf("EMPLOYEE ID : %d\n", tempEmp.empid);
    printf("FIRST NAME : %s\n", tempEmp.firstName);
    printf("LAST NAME : %s\n", tempEmp.lastName);
    printf("DEPARTMENT : %s\n", tempEmp.department);
    printf("SALARY : %.2lf\n", tempEmp.salary);
}

FILE *fptr; // global
char filePath[] = "PROJECT/project-demo.txt";

// INSERT NEW EMPLOYEE TO FILE
void saveEmployee()
{
    // definition
    int numOfEmp;
    // open file
    fptr = fopen(filePath, "ab");
    // taking input n times
    printf("PLEASE ENTER NUMBERS OF EMPLOYEE TO BE STORED : ");
    scanf("%d", &numOfEmp);

    for (int i = 1; i <= numOfEmp; i++)
    {
        printf("\nPLEASE ENTER EMP ID : ");
        scanf("%d", &emp.empid);
        fflush(stdin);

        printf("PLEASE ENTER FIRST NAME : ");
        gets(emp.firstName);

        printf("PLEASE ENTER LAST NAME : ");
        gets(emp.lastName);

        printf("PLEASE ENTER DEPARTMENT : ");
        gets(emp.department);
        strupr(emp.department);

        printf("PLEASE ENTER SALARY : ");
        scanf("%lf", &emp.salary);

        int result = fwrite(&emp, sizeof(emp), 1, fptr);
        if (result > 0)
        {
            printf("EMPLOYEE SAVED SUCCESSFULLY !!!\n");
        }
        else
        {
            printf("WHO ARE YOU DAWG !!!\n");
        }
    }
    fclose(fptr);
}

// READ ALL EMPLOYEE
void readAllEmployee()
{
    fptr = fopen(filePath, "rb");
    if (fptr == NULL)
    {
        printf("FILE NOT FOUND !!!");
    }
    else
    {
        // READ ALL EMPLOYEE STRUCTURE BY STRUCTURE
        while (fread(&emp, sizeof(emp), 1, fptr))
        {
            printStructure(emp);
        }
        fclose(fptr);
    }
}

// READ EMPLOYEE BY EMPID
void readEmpByID()
{
    int isFound = 0;
    fptr = fopen(filePath, "rb");
    if (fptr == NULL)
    {
        printf("FILE NOT FOUND !!!");
    }
    else
    {
        int empID;
        printf("PLEASE ENTER EMP ID TO FETCH EMPLLOYEE DETAILS : ");
        scanf("%d", &empID);
        // READ ALL EMPLOYEE STRUCTURE BY STRUCTURE
        while (fread(&emp, sizeof(emp), 1, fptr))
        {
            if (empID == emp.empid)
            {
                printStructure(emp);

                isFound = 1;
                break;
            }
        }
        if (isFound == 0)
        {
            printf("EMPLOYEE WITH EMP ID %d IS NOT FOUND !!!\n", empID);
        }
        fclose(fptr);
    }
}

// READ EMPLOYEE BY DEPARTMENT
void readEmpByDepartment()
{
    int isFound = 0;
    fptr = fopen(filePath, "rb");
    if (fptr == NULL)
    {
        printf("FILE NOT FOUND !!!");
    }
    else
    {
        char Department[30];
        printf("PLEASE ENTER EMP ID TO FETCH EMPLLOYEE DETAILS : ");
        scanf("%s", &Department);
        strupr(Department);
        // READ ALL EMPLOYEE STRUCTURE BY STRUCTURE
        while (fread(&emp, sizeof(emp), 1, fptr))
        {
            if (strcmp(Department, emp.department) == 0)
            {
                printStructure(emp);

                isFound = 1;
            }
        }
        if (isFound == 0)
        {
            printf("EMPLOYEE WITH EMP ID %d IS NOT FOUND !!!\n", Department);
        }
        fclose(fptr);
    }
}

// DELETE EMPLOYEE BY ID
void deleteEmployee()
{
    int empID;
    int isFound = 0;
    fptr = fopen(filePath, "rb");
    if (fptr == NULL)
    {
        printf("FILE NOT FOUND !!!");
    }
    else
    {
        printf("PLEASE ENTER EMPLOYEE ID TO BE DELETED : ");
        scanf("%d", &empID);
        FILE *tempFptr = fopen("temp.txt", "wb+");
        while (fread(&emp, sizeof(emp), 1, fptr))
        {
            if (emp.empid != empID)
            {
                fwrite(&emp, sizeof(emp), 1, tempFptr);
            }
            else if (emp.empid == empID)
            {
                isFound = 1;
            }
        }
        if (isFound == 0)
        {
            printf("EMPLOYEE WITH EMP ID %d IS NOT FOUND !!!\n", empID);
        }
        else
        {
            printf("EMPLOYEE WITH EMP ID %d IS SUCCESSFULLY DELETED !!!\n", empID);
        }
        fclose(fptr);
        fclose(tempFptr);

        remove(filePath);
        rename("temp.txt", filePath);
    }
}

// UPDATE EMPLOYEE
void updateEmployee()
{
    int empID, choice;
    int isFound = 0;
    fptr = fopen(filePath, "rb+");
    if (fptr == NULL)
    {
        printf("FILE NOT FOUND !!!");
    }
    else
    {
        printf("PLEASE ENTER EMPLOYEE ID TO BE UPDATED : ");
        scanf("%d", &empID);
        fflush(stdin);
        while (fread(&emp, sizeof(emp), 1, fptr))
        {
            if (emp.empid == empID)
            {
                fseek(fptr, -sizeof(emp), SEEK_CUR);
                printf("\n__________________________________________________________________\n");
                printf("\nPLEASE SELECT OPTIONS TO BE UPDATED : \n1. FIRST NAME\n2. SECOND NAME\n3. DEPARTMENT\n4. SALARY\n5. ALL\n6. EXIT\n");
                printf("\n__________________________________________________________________\n");
                scanf("%d", &choice);
                fflush(stdin);
                switch (choice)
                {
                case 1:
                    printf("PLEASE ENTER FIRST NAME : ");
                    gets(emp.firstName);
                    break;
                case 2:
                    printf("PLEASE ENTER LAST NAME : ");
                    gets(emp.lastName);
                    break;
                case 3:
                    printf("PLEASE ENTER DEPARTMENT : ");
                    gets(emp.department);
                    strupr(emp.department);
                    break;
                case 4:
                    printf("PLEASE ENTER SALARY : ");
                    scanf("%lf", &emp.salary);
                    break;
                case 5:
                    printf("PLEASE ENTER FIRST NAME : ");
                    gets(emp.firstName);
                    printf("PLEASE ENTER LAST NAME : ");
                    gets(emp.lastName);
                    printf("PLEASE ENTER DEPARTMENT : ");
                    gets(emp.department);
                    strupr(emp.department);
                    printf("PLEASE ENTER SALARY : ");
                    scanf("%lf", &emp.salary);
                    break;
                case 6:
                    printf("\n__________________________________________________________________\n");
                    printf("\nTHANKS FOR CHOOSING OUR EMPLOYEE MANAGEMENT SYSTEM\n");
                    printf("\n__________________________________________________________________\n");
                    break;
                default:
                    printf("PLEASE CHOOSE CORRECT OPTION :");
                }

                fwrite(&emp, sizeof(emp), 1, fptr);

                isFound = 1;
                break;
            }
        }
        if (isFound == 0)
        {
            printf("EMPLOYEE WITH EMP ID %d IS NOT FOUND !!!\n", empID);
        }
        else
        {
            printf("EMPLOYEE WITH EMP ID %d IS SUCCESSFULLY UPDATED !!!\n", empID);
        }
        fclose(fptr);
    }
}
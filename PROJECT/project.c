#include <stdio.h>
#include "project-header.h"

int main()
{
    int choice;
    printf("\n__________________________________________________________________\n");
    printf("\nWELCOME TO EMPLOYEE MANAGEMENT SYSTEM\n");
    printf("\n__________________________________________________________________\n");
    do
    {
        printf("\n__________________________________________________________________\n");
        printf("\nPLEASE SELECT BELOW CHOICES \n1. INSERT EMPLOYEE\n2. GET DETAILS OF ALL EMPLOYEES\n3. GET EMPLOYEE BY ID\n4. GET EMPLOYEES BY DEPARTMENT\n5. DELETE EMPLOYEE\n6. UPDATE EMPLOYEE\n7. EXIT\n");
        printf("\n__________________________________________________________________\n");

        scanf("%d", &choice);
        fflush(stdin);
        switch (choice)
        {
        case 1:
            saveEmployee();
            break;
        case 2:
            readAllEmployee();
            break;
        case 3:
            readEmpByID();
            break;
        case 4:
            readEmpByDepartment();
            break;
        case 5:
            deleteEmployee();
            break;
        case 6:
            updateEmployee();
            break;
        case 7:
            printf("\n__________________________________________________________________\n");
            printf("\nTHANKS FOR CHOOSING OUR EMPLOYEE MANAGEMENT SYSTEM\n");
            printf("\n__________________________________________________________________\n");
            break;
        default:
            printf("PLEASE SELECT CORRECT OPTION\n");
        }
    } while (choice != 7);

    return 0;
}
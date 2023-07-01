#include <stdio.h>

struct employee{
    char    name[30];
    int     empId;
    float   salary;
};
 
int main()
{ struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Enter the Name ?:");          gets(emp.name);
    printf("Enter the ID ?:");            scanf("%d",&emp.empId);
    printf("Enter the Salary ?:");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:\n");
    printf("Name: %s\t"   ,emp.name);
    printf("Id: %d\t"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
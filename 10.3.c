//This program is written by Dhruv Kotadiya(22CE054)
#include<stdio.h>

struct employee
{
    struct Info
    {
    char name[30];
    int age;
    char address[50];
    }Personal;
    int salary;
}emp;

int main()
{
    printf("\nEnter the name : ");
    gets(emp.Personal.name);
    printf("\nEnter the age : ");
    scanf("%d" ,&emp.Personal.age);
    fflush(stdin);
    printf("\nEnter the address : ");
    gets(emp.Personal.address);
    printf("\nEnter Salary :");
    scanf("%d" ,&emp.salary);
    printf("\n Employee Name: %s" ,emp.Personal.name);
    printf("\n Employee age: %d" ,emp.Personal.age);
    printf("\n Employee Address: %s" ,emp.Personal.address);
    printf("\n Employee Total Salary: %d" ,emp.salary);
    printf("\n\nThis program is written by Dhruv Kotadiya(22CE054)");
    return 0;
}




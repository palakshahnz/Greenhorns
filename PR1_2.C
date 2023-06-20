//Program for Gross salary includes HRA DA TA
#include<stdio.h>
#include<conio.h>
void main()
{
float B_salary,Hra,Da,Ta,Gross_salary;
clrscr();
printf("Enter Basic salary:");
scanf("%f",&B_salary);
Hra=(B_salary*10)/100;
Da=(B_salary*5)/100;
Ta=(B_salary*2)/100;
printf("\nHra=%0.2f \nDa=%0.2f \nTa=%0.2f",Hra,Da,Ta);
Gross_salary=(B_salary+Hra+Da+Ta);
printf("\nGross salary is %0.2f",Gross_salary);






getch();
}
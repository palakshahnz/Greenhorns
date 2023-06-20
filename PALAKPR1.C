#include<stdio.h>
#include<conio.h>
void main()
{
float faheranhit,celsius;
clrscr();

printf("Enter temperature in celcius:");
scanf("%f", &celsius);
faheranhit =(celsius*(1.8))+32;
printf("Temperature in feranhit =%f",faheranhit);



getch();
}
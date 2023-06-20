//To find third angle of triange when two angles are given

#include<stdio.h>
#include<conio.h>
void main()
{
float F_angle,S_angle,T_angle;
clrscr();

printf("Enter value of First angle:");
scanf("%f",&F_angle);
printf("Enter value of Second angle:");
scanf("%f",&S_angle);


T_angle=180-(F_angle+S_angle);
printf("Third angle =%0.2f",T_angle);


getch();

}
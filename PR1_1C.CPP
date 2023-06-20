//WRITE A PROGRAM TO CONVERT TEMPERATURE FROM DEGREES CELSIUS TO FAHRENHEIT.

#include<stdio.h>
#include<conio.h>

void main(){
int f,c;
clrscr();
printf("the temperature in celsius :");
scanf("%d",&c);
f = (c*9/5)+32;
printf("the temperature in fahrenheit : %d",f);

getch();
}
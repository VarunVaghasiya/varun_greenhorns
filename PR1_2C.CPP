//WRITE C PROGRAM TO FIND GROSS SALARY BY ADDING %  OF HRA,DA, AND TA OF USER.

#include<stdio.h>
#include<conio.h>

void main(){
int x,y,HRA,DA,TA;

clrscr();

printf("the salary is :");
scanf("%d",&x);
printf("HRA=");
scanf("%d",&HRA);
HRA = (x*HRA)/100;
printf("DA=");
scanf("%d",DA);
DA = (x*DA)/100;
printf("TA=");
scanf("%d",TA);
TA = (x*TA)/100;
y = x+HRA+DA+TA;
printf("gross salary is %d",y);


getch();
}
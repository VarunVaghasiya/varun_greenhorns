//WEITE C PROGRAM TO FIND THE THIRD ANGLE OF TRIANGLE IF TWO OTHER ANGLES ARE GIVEN.

#include<stdio.h>
#include<conio.h>

void main(){
int p,q,r;

clrscr();
printf("first angle:");
scanf("%d",&p);

printf("second angle:");
scanf("%d",q);

r = 180 - (p+q);
printf("third angle %d",r);

getch();
}
#include<stdio.h>
#include<stdlib.h>

union b1
{
int day;
int month;
};

union A
{
int x;
int y;
char ch;
union b1 d1;
};

main()
{
union A a1;

a1.x=10; 
a1.d1.day=10;
a1.d1.month=8;
 printf("Day=%d,month= %d",a1.d1.day,a1.d1.month);
printf("NEW=%d",a1.d1.day);
}

OUTPUT:-
Day=8,month= 8NEW=8
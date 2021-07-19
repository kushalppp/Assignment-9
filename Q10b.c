#include<stdio.h>
#include<stdlib.h>

union b1
{
int day;
int month;
};

struct A
{
int x;
int y;
char ch;
union b1 d1;
};

main()
{
struct A a1;

a1.x=10; 
a1.d1.day=12;
a1.d1.month=7;
 printf("Day=%d,month= %d",a1.d1.day,a1.d1.month);
}

OUTPUT:-
Day=7,month= 7
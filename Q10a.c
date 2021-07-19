#include<stdio.h>
#include<stdlib.h>

struct b1
{
int day;
int month;
};

union A
{
int x;
int y;
char ch;
struct b1 d1;
};

main()
{
union A a1;

a1.x=10; 
a1.d1.day=12;
a1.d1.month=7;
 printf("Day=%d,month= %d",a1.d1.day,a1.d1.month);
}

OUTPUT:-
Day=12,month= 7



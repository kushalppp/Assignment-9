#include<stdio.h>
#include<stdlib.h>

union A
{
int x;
int y;
char ch;
};
main()
{
union A a1;
union A *ptr=0;
ptr++;
printf("\nsize of union is %d Bytes.",ptr);
a1.x=10;
printf("\n%d",a1.x);
}

OUTPUT:-
size of union is 4 Bytes.
10
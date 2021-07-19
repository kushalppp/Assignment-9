#include<stdio.h>
#include <stdlib.h>

struct A {
int x;
double y;
float z;
char ch;
}a1;
main()
{
struct A *ptr=0;
ptr++;
printf(" structure size is %d",ptr);
struct A *p;
p=&a1;
printf(" \n address of stru p is %d",p);
printf(" \n address of stru x is %d",a1.x);
printf(" \n address of stru y is %d",a1.y);
printf(" \n address of stru z is %d",a1.z);
printf(" \n address of stru ch is %d",&a1.ch);
}
OUTPUT:-

structure size is 24
 address of stru p is 229007392
 address of stru x is 0
 address of stru y is 228999247
 address of stru z is 228999274
 address of stru ch is 229007412
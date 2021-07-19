#include<stdio.h>
#include <stdlib.h>

struct A
{
int x;
char *str; // (or) char str[20];
};
main()
{
struct A a1 = { 101, "abc" } , a2;
a1.x=10;
a1.str="hello"; //works?:-when we used array this not works array assignment used only integer value.
scanf("%d%s",&a1.x,a1.str); //works?:- when we used pointer this not works because pointer cannot get input directly
a2 = a1; //shallow copy or deep copy?:- yes works in both.
 }
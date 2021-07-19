#include<stdio.h>
#include <stdlib.h>

struct  {
int x;
char ch[20];
}a1,a2;

struct student{
int x;
char c[20];
};
 
typedef struct stud {
int x;
char c[20];
} boy;



main()
{
boy s2;
s2.x=55;
printf("\nwith typedef %d",s2.x);
struct student s1;
printf("\nstud is name of structure is without typedef");
a1.x=10;
a2.x=20;
printf("\nThe structure not declare name called anonymous structure");
scanf("%s",a1.ch);
printf("\n%s",a1.ch);

}
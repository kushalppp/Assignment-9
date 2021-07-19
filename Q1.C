#include<stdio.h>
#include <stdlib.h>

struct student
{
char a[10];
int x;
float y;
char *p;
};
 main()
{
struct student s1,s2,*m;
m=(struct student*)malloc(sizeof(struct student));
m -> p="guru";
printf("%s\n",m->p);
printf(" enter a student info\n");
printf(" s1 name");
scanf("%s",s1.a);
printf("\n roll no and perc");
scanf("%d%f",&s1.x,&s1.y);
printf("\n s2 name");
scanf("%s",s2.a);
printf("\n roll no and perc");
scanf("%d%f",&s2.x,&s2.y);
printf("student s1\n");
printf("Name:-%s\n",s1.a);
printf("Roll no:-%d\n",s1.x);
printf("Percentage:-%f\n",s1.y);
printf("student s2\n");
printf("Name:-%s\n",s2.a);
printf("Roll no:-%d\n",s2.x);
printf("Percentage:-%f\n",s2.y);
}


OUTPUT:-
guru 
enter a student info
 s1 namekush

 roll no and perc1
95

 s2 namenandu

 roll no and perc2 99.9
student s1
Name:-kush
Roll no:-1
Percentage:-95.000000
student s2
Name:-nandu
Roll no:-2
Percentage:-99.900002

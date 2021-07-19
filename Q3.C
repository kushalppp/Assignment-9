#include<stdio.h>
#include<stdlib.h>

struct student
{
char name[5];
int rollno;
int marks[5];
float total;
};
main()
{
int i;
struct student s1,s2;
s1.total=0;
s2.total=0;
printf("student result");
printf("\nName:-");
scanf("%s",s1.name);
printf("\nRoll no:-");
scanf("%d",&s1.rollno);
printf("enter a marks of five subjects:-");
for(i=0;i<=4;i++){
scanf("%d",&s1.marks[i]);
(s1.total)=(s1.total)+(s1.marks[i]);
}
printf("\nName:-");
scanf("%s",s2.name);
printf("\nRoll no:-");
scanf("%d",&s2.rollno);
printf("enter a marks of five subjects:-");
for(i=0;i<=4;i++){
scanf("%d",&s2.marks[i]);
(s2.total)=(s2.total)+(s2.marks[i]);
}
printf("\n Name:-    %s 	  %s ",s1.name,s2.name);
printf("\n Roll no:- %d  	   %d ",s1.rollno,s2.rollno);
printf("\n Gujarati:-%d		  %d ",s1.marks[0],s2.marks[0]);
printf("\n English:- %d		  %d ",s1.marks[1],s2.marks[1]);
printf("\n Hindi:-   %d 	  %d ",s1.marks[2],s2.marks[2]);
printf("\n Computer:-%d 	  %d ",s1.marks[3],s2.marks[3]);
printf("\n Maths:-   %d  	  %d ",s1.marks[4],s2.marks[4]);
printf("\nTotal:-%f     %f",(s1.total),(s2.total));
}

OUTPUT:-
student result
Name:-guru

Roll no:-1
enter a marks of five subjects:-80
90
60
70
50

Name:-chaku

Roll no:-3
enter a marks of five subjects:-90
80
70
60
50

 Name:-   guru  chaku
 Roll no:- 1    3
 Gujarati:-80  90
 English:- 90  80
 Hindi:-   60  70
 Computer:-70  60
 Maths:-   50  50
Total:-    350.000000     350.000000
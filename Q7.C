#include<stdio.h>
#include<stdlib.h>

struct dob
 {
 int day;
int month;
int year;
};

struct student
 {
 int rollno;
 char name[20];
 struct dob d1;
};


main()
{
struct student s1;
printf("\n Roll no:-");
scanf("%d",&s1.rollno);
printf("\nenter a name:-");
scanf("\n%s",s1.name);
printf("\nDate of Birth:-");
scanf("%d %d %d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
printf(" \nstudent info");
printf("\n Roll no:- %d",s1.rollno);
printf("\n Name:-%s",s1.name);
printf("\n DOB:-%d/%d/%d",s1.d1.day,s1.d1.month,s1.d1.year);
}

OUTPUT:-

 Roll no:-45

enter a name:-chaku

Date of Birth:-08
12
2000

student info
 Roll no:- 45
 Name:-chaku
 DOB:-8/12/2000
 
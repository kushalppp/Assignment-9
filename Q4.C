#include<stdio.h>
#include<stdlib.h>

struct employee
{
int empid;
char employename[6];
int salary;
int yearofjoin;
};

int service(int a[])
{
if(a[0]<a[1])
{  
   if(a[1]<a[2])
	{  printf("\n Maximum service is e3 %d year",a[2]);
           printf("\n minimum service is e1 %d year",a[0]);
         }
    else{
        printf("\n Maximum service is e2 %d year",a[1]);
        if(a[0]<a[2])
	{ printf("\n minimum service is e1 %d year",a[0]);
         }
          else
           printf("\n minimum service is e3 %d year",a[2]);
         }
}
else {
    if(a[0]>a[2])
     {
       printf("\n Maximum service is e1 %d year",a[0]);
       if(a[1]>a[2])
         {
          printf("\n minimum service is e3 %d year",a[2]);
          }
       else
           {
           printf("\n mimimum service is e2 %d year",a[1]);
           }
           }
}
}
   
main()
{
struct employee e1,e2,e3;
int total=0;
int servi[3];
int avrg=0;
printf("\n please fill this manner emp id, name, salary,year of join");
scanf("\n%d",&e1.empid);
scanf("\n%s",e1.employename);
scanf("\n%d",&e1.salary);
scanf("\n%d",&e1.yearofjoin);
scanf("\n%d",&e2.empid);
scanf("\n%s",e2.employename);
scanf("\n%d",&e2.salary);
scanf("\n%d",&e2.yearofjoin);
scanf("\n%d",&e3.empid);
scanf("\n%s",e3.employename);
scanf("\n%d",&e3.salary);
scanf("\n%d",&e3.yearofjoin);
printf("\nEmployee details");
printf("\n EMP ID:-%d",e1.empid);
printf("\n Employee name:- %s",e1.employename);
printf("\n Employee salary:- %d",e1.salary);
printf("\n Year of join:-%d",e1.yearofjoin);
total=2021-(e1.yearofjoin);
servi[0]=total;
total=total*12*(e1.salary);
printf("\n Total:- %d",total);
printf("\n EMP ID:-%d",e2.empid);
printf("\n Employee name:- %s",e2.employename);
printf("\n Employee salary:- %d",e2.salary);
printf("\n Year of join:-%d",e2.yearofjoin);
total=0;
total=2021-(e2.yearofjoin);
servi[1]=total;
total=total*12*(e2.salary);
printf("\n Total:- %d",total);
printf("\n EMP ID:-%d",e3.empid);
printf("\n Employee name:- %s",e3.employename);
printf("\n Employee salary:- %d",e3.salary);
printf("\n Year of join:-%d",e3.yearofjoin);
total=0;
total=2021-(e3.yearofjoin);
servi[2]=total;
total=total*12*(e3.salary);
printf("\n Total:- %d",total);
avrg=((e1.salary)+(e2.salary)+(e3.salary))/3;
printf("\n Average salary is %d",avrg);
if((e1.salary)<(e2.salary))
{
  if((e2.salary)<(e3.salary))
	{ printf(" \n e3 salary is Maximum:-%d",(e3.salary));
          printf(" \n e1 salary is minimum:-%d",(e1.salary));
        }
   else if((e2.salary)>(e3.salary)){
       printf(" e2 salary is Maximum:-%d",(e2.salary));
	  printf(" e1 salary is Minimum:-%d",(e1.salary));
        }
}
else if((e1.salary)<(e3.salary)){
         printf(" \n e3 salary is Maximum:-%d",(e3.salary));
          printf(" \n e1 salary is minimum:-%d",(e1.salary));
        }
else
    {
          printf(" \n e1 salary is Maximum:-%d",(e1.salary));
          if((e2.salary)<(e3.salary)){
	  printf(" \n e2 salary is minimum:-%d",(e2.salary));
        }
     else{
        printf(" \n e3 salary is minimum:-%d",(e3.salary));
        }
}

service(servi);
}


OUTPUT:-
 please fill this manner emp id, name, salary,year of join55
chaku
3000
2018
66
kesa
2500
2019
77
nandu
2000
2020

Employee details
 EMP ID:-55
 Employee name:- chaku
 Employee salary:- 3000
 Year of join:-2018
 Total:- 108000
 EMP ID:-66
 Employee name:- kesa
 Employee salary:- 2500
 Year of join:-2019
 Total:- 60000
 EMP ID:-77
 Employee name:- nandu
 Employee salary:- 2000
 Year of join:-2020
 Total:- 24000
 Average salary is 2500
 e1 salary is Maximum:-3000
 e3 salary is minimum:-2000
 Maximum service is e1 3 year
 minimum service is e3 1 year
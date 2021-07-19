#include<stdio.h>
#include<stdlib.h>

union A
{
int x;
float y;
double z;
int arr[2];
}a1;

union B
{
int x;
short int y;
char ch;
char carr[4];
}b1;

main()
{
int i;
b1.x=0x41424344;
printf("B1.Y =%hi\n",b1.y);
printf("B1.CH=%c\n",b1.ch);

for(i=0;i<=4;i++)
printf("CARR[4]=%c\n",b1.carr[i]);
b1.y=10;
printf("CHANGING=%hi",b1.x);
}


OUTPUT:-

B1.Y=17220
B1.CH=D
CARR[4]=D
CARR[4]=C
CARR[4]=B
CARR[4]=A
CARR[4]=
CHANGING=10
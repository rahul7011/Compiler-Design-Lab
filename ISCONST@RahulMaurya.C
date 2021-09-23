#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
char ch[100];
int i=0,flag=0;
clrscr();
printf("Name:Rahul Maurya \n");
printf("Roll No.:1901330100210 \n");
printf("Branch/Section: C.S.E. ,5 C \n");
printf("Enter-");
scanf("%s",&ch);
while(ch[i]!='\0')
{
if(isdigit(ch[i])==0)
{
flag=1;
break;
}
i++;
}
if(flag)
{
printf("Not A Constant");
}
else
{
printf("Is A Constant");
}
getch();
}

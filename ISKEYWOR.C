#include<conio.h>
#include<stdio.h>
void main()
{
char str[100];
int i,j,flag=1,count=0;
char a[20][100]={"int","char","float","const","double","struct","long","if","else","switch","printf","scanf","string","return","continue","break","goto","strcpy","strcmp","case"};
clrscr();
printf("Enter a string-");
scanf("%s",&str);
for(i=0;i<7;i++)
{
if(a[i][0]==str[0])
{
for(j=0;a[i][j]!='\0';j++)
{
if(str[j]!='\0'&&a[i][j]==str[j])
{
flag=0;
count++;
}
}
}
}
if(flag)
{
printf("not a keyword");
}
else
{
printf("is a keyword");
}
getch();
}

//finding grade using else if ladder
#include<stdio.h>
int main()
{
int marks;
printf("enter marks\n:");
scanf("%d",&marks);
if ((marks<=100)&&(marks>=90))
{
printf("grade:A");
}
else if(marks>=80)
{
printf("grade:B");
}
else if(marks>=70)
{
printf("grade:C");
}
else if(marks>=60)
{
printf("grede:D");
}
else if(marks>=50)
{
printf("grade:E");
}
else if(marks>=40)
{
printf("fail");
}
return(0);
}

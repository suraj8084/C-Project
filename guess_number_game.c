#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main()
{
    int num,count=1,number;
srand(time(0));
number = rand()%100 +1;// 100 indicate number of random variable you want to choose
do
{
    printf("Guess the number between 1 to 100 : ");
    scanf("%d",&num);
    if(num<number)
printf("Enter greater than %d.\n",num);
else if(num>number)
    printf("Enter less than %d.\n",num);
else
{
printf("Yoy Win!\n");
printf("In %d times.\n",count);
}
count++;
} while (num!=number);
getch();
return 0;
}
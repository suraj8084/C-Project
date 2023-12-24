#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main()
{
    char baise,comp;
    int number;
srand(time(0));
number = rand()%2 +1;// 2 indicate number of random variable you want to choose
//printf("%d",number);
 printf("choose Hade = H and Tale= T.\n ");
 scanf("%c",&baise);
 if(number==1)
comp='h';
else
comp='t';
//printf("%c",comp);

 if(comp==baise)
 printf("You Win!\nComputer Choose %c And You Choose %c",comp,baise);
 else
 printf("You lose!\nComputer Choose %c And You Choose %c",comp,baise);
getch();
return 0;
}
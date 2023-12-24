#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int swg(char comp,char you)
{
    if(comp=='s' && you=='w')
    return -1;
    else if(comp=='s' && you=='g')
    return 1;
    else if(comp=='w' && you=='s')
    return 1;
    else if(comp=='w' && you=='g')
    return -1;
    else if(comp=='g' && you=='s')
    return -1;
    else if(comp=='g' && you=='w')
    return 1;
    else
    return 0;
}

void main()
{
    int number,l;
    char comp,you;
    srand(time(0));
    number = rand()%3 +1;
    if(number==1)
    comp='s';
    else if(number==2)
    comp='w';
    else
    comp='g';
    printf("Enter character : ");
    scanf("%c",&you);
    l=swg(comp,you);
    if(l==1)
    printf("You Win!\nComputer Choose %c and You Choose %c.\n",comp,you);
    else if(l==-1)
    printf("You Lose!\nComputer Choose %c and You Choose %c.\n",comp,you);
    else 
    printf("Draw!\nComputer Choose %c and You Choose %c.\n",comp,you);
}
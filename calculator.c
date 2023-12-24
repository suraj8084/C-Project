#include<stdio.h>
#include<conio.h>
void main()
{
    float i,num,n;
    char c;
    scanf("%f",&num);
    while (1)
    {
        scanf("%c",&c);
        if (c=='+')
        {
            scanf("%f",&n);
            num = num +n;
        }
        else if (c=='-')
        {
            scanf("%f",&n);
            num = num - n;
        }
        else if (c=='*')
        {
            scanf("%f",&n);
            num = num * n;
        }
        else if (c=='/')
        {
            scanf("%f",&n);
            num = num / n;
        }
        else if (c=='%')
        {
            scanf("%f",&n);
            num = (int)num % (int)n;
        }
        else if (c=='=')
        {
            break;
        }
        i++;
    }
    printf("%0.2f",num);
    getch(); 
}
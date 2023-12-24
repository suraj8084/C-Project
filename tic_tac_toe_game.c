#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print(char a[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%c ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i,j,n,b,z,k,y,w,p,q,r,s,m,c,d,e,f,g;
    char a[3][3];
    a[0][0]='_';
    a[0][1]='_';
    a[0][2]='_';
    a[1][0]='_';
    a[1][1]='_';
    a[1][2]='_';
    a[2][0]='_';
    a[2][1]='_';
    a[2][2]='_';
printf("1. ONE Player \n2. TWO Player \nEnter Option in Number = ");
scanf("%d",&g);
if(g==1)
{
a[0][0]='x';
printf("1. Easy \n2. Hard \nEnter Option in Number = ");
scanf("%d",&f);
print(a);

printf("Enter your choice position : ");
scanf("%d",&n);

if(n==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(n==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(n==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(n==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(n==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(n==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(n==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(n==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}

if(n==2 || n==3 || n==6)
{
    srand(time(0));
    b = rand()%4 +1;
    if(b==1)
    a[1][0]='x';
    else if(b==2)
    a[1][1]='x';
    else if (b==3)
    a[2][0]='x';
    else
    a[2][2]='x';
}
else if(n==5 || n==9 || n==8)
{
    srand(time(0));
    b = rand()%4 +1;
    if(b==1)
    a[0][1]='x';
    else if(b==2)
    a[0][2]='x';
    else if (b==3)
    a[1][0]='x';
    else
    a[2][0]='x';
}
else
{
    srand(time(0));
    b = rand()%4 +1;
    if(b==1)
    a[1][1]='x';
    else if(b==2)
    a[0][1]='x';
    else if (b==3)
    a[0][2]='x';
    else
    a[2][2]='x';
}

print(a);

printf("Enter your choice position : ");
scanf("%d",&y);

if(y==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(y==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(y==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(y==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(y==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(y==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(y==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(y==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}

if(a[0][1]=='x' && a[0][2]!='o'){a[0][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][2]=='x' && a[0][1]!='o'){a[0][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][0]=='x' && a[2][0]!='o'){a[2][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][0]=='x' && a[1][0]!='o'){a[1][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][1]=='x' && a[2][2]!='o'){a[2][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][2]=='x' && a[1][1]!='o'){a[1][1]='x';print(a);printf("You lose!");exit(0);}

else if(a[0][2]!='x' && a[1][2]=='o' && a[2][2]=='o'){a[0][2]='x';}
else if(a[1][2]!='x' && a[0][2]=='o' && a[2][2]=='o'){a[1][2]='x';}
else if(a[2][2]!='x' && a[1][2]=='o' && a[0][2]=='o'){a[2][2]='x';}
else if(a[2][1]!='x' && a[0][1]=='o' && a[1][1]=='o'){a[2][1]='x';}
else if(a[1][1]!='x' && a[0][1]=='o' && a[2][1]=='o'){a[1][1]='x';}
else if(a[0][1]!='x' && a[2][1]=='o' && a[1][1]=='o'){a[0][1]='x';}
else if(a[2][0]!='x' && a[0][2]=='o' && a[1][1]=='o'){a[2][0]='x';}
else if(a[1][1]!='x' && a[0][2]=='o' && a[2][0]=='o'){a[1][1]='x';}
else if(a[0][2]!='x' && a[2][0]=='o' && a[1][1]=='o'){a[0][2]='x';}
else if(a[1][0]!='x' && a[1][2]=='o' && a[1][1]=='o'){a[1][0]='x';}
else if(a[1][1]!='x' && a[1][2]=='o' && a[1][0]=='o'){a[1][1]='x';}
else if(a[1][2]!='x' && a[1][0]=='o' && a[1][1]=='o'){a[1][2]='x';}
else if(a[2][2]!='x' && a[2][0]=='o' && a[2][1]=='o'){a[2][2]='x';}
else if(a[2][1]!='x' && a[2][0]=='o' && a[2][2]=='o'){a[2][1]='x';}
else if(a[2][0]!='x' && a[2][2]=='o' && a[2][1]=='o'){a[2][0]='x';}

if(f==1)
{
if(a[0][1]=='o' && a[1][1]=='x' && a[2][2]=='o')
a[1][2]='x';//1l
else if(a[0][1]=='o' && a[1][0]=='x' && a[2][0]=='o')
a[1][2]='x';//2w
else if(a[0][1]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[0][2]='x';//3w
else if(a[0][2]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[0][1]='x';//4w
else if(a[0][2]=='o' && a[0][1]=='x' && a[1][0]=='o')
a[2][1]='x';//5w
else if(a[1][0]=='o' && a[0][1]=='x' && a[0][2]=='o')
a[2][1]='x';//15w
else if(a[1][0]=='o' && a[1][1]=='x' && a[2][2]=='o')
a[0][1]='x';//6l
else if(a[1][0]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[2][0]='x';//7w
else if(a[1][2]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[2][1]='x';//8w
else if(a[1][2]=='o' && a[1][0]=='x' && a[2][0]=='o')
a[0][2]='x';//9d
else if(a[2][0]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[1][2]='x';//10d
else if(a[2][1]=='o' && a[0][1]=='x' && a[0][2]=='o')
a[1][1]='x';//11d
else if(a[2][1]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[1][1]='x';//12l
else if(a[2][2]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[1][1]='x';//13d
else if(a[2][2]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[0][2]='x';//14
}
else if(f==2)
{
if(a[0][1]=='o' && a[1][1]=='x' && a[2][2]=='o')
a[2][0]='x';//1l
else if(a[0][1]=='o' && a[1][0]=='x' && a[2][0]=='o')
a[1][1]='x';//2w
else if(a[0][1]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[1][1]='x';//3w
else if(a[0][2]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[2][2]='x';//4w
else if(a[0][2]=='o' && a[0][1]=='x' && a[1][0]=='o')
a[1][1]='x';//5w
else if(a[1][0]=='o' && a[0][1]=='x' && a[0][2]=='o')
a[1][1]='x';//15w
else if(a[1][0]=='o' && a[1][1]=='x' && a[2][2]=='o')
a[0][2]='x';//6l
else if(a[1][0]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[1][1]='x';//7w
else if(a[1][2]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[1][1]='x';//8w
else if(a[1][2]=='o' && a[1][0]=='x' && a[2][0]=='o')
a[2][2]='x';//9d
else if(a[2][0]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[2][2]='x';//10d
else if(a[2][1]=='o' && a[0][1]=='x' && a[0][2]=='o')
a[2][2]='x';//11d
else if(a[2][1]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[1][1]='x';//12l
else if(a[2][2]=='o' && a[0][2]=='x' && a[0][1]=='o')
a[2][0]='x';//13d
else if(a[2][2]=='o' && a[2][0]=='x' && a[1][0]=='o')
a[0][2]='x';//14l
}
else
printf("Invalid Number.");
//for 3th c , c 1,z, you n,y
print(a);

printf("Enter your choice position : ");
scanf("%d",&p);
//for 4th c , c 1,z,r, you n,y,p

if(p==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(p==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(p==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(p==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(p==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(p==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(p==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(p==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}

if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][0]=='o' && a[1][1]=='o' && a[2][3]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][2]=='o' && a[1][1]=='o' && a[2][0]=='o'){print(a);printf("You Win!");exit(0);}             //for Win

else if(a[0][0]!='o' && a[1][1]=='x' && a[2][2]=='x'){a[0][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][1]!='o' && a[0][0]=='x' && a[2][2]=='x'){a[1][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][2]!='o' && a[1][1]=='x' && a[0][0]=='x'){a[2][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][2]!='o' && a[1][2]=='x' && a[2][2]=='x'){a[0][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][2]!='o' && a[0][2]=='x' && a[2][2]=='x'){a[1][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][2]!='o' && a[1][2]=='x' && a[0][2]=='x'){a[2][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][1]!='o' && a[0][1]=='x' && a[1][1]=='x'){a[2][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][1]!='o' && a[0][1]=='x' && a[2][1]=='x'){a[1][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][1]!='o' && a[2][1]=='x' && a[1][1]=='x'){a[0][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][0]!='o' && a[0][0]=='x' && a[1][0]=='x'){a[2][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][0]!='o' && a[0][0]=='x' && a[2][0]=='x'){a[1][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][0]!='o' && a[2][0]=='x' && a[1][0]=='x'){a[0][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][0]!='o' && a[0][2]=='x' && a[1][1]=='x'){a[2][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][1]!='o' && a[0][2]=='x' && a[2][0]=='x'){a[1][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][2]!='o' && a[2][0]=='x' && a[1][1]=='x'){a[0][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][0]!='o' && a[0][2]=='x' && a[0][1]=='x'){a[0][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][1]!='o' && a[0][2]=='x' && a[0][0]=='x'){a[0][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[0][2]!='o' && a[0][0]=='x' && a[0][1]=='x'){a[0][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][0]!='o' && a[1][2]=='x' && a[1][1]=='x'){a[1][0]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][1]!='o' && a[1][2]=='x' && a[1][0]=='x'){a[1][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[1][2]!='o' && a[1][0]=='x' && a[1][1]=='x'){a[1][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][2]!='o' && a[2][0]=='x' && a[2][1]=='x'){a[2][2]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][1]!='o' && a[2][0]=='x' && a[2][2]=='x'){a[2][1]='x';print(a);printf("You lose!");exit(0);}
else if(a[2][0]!='o' && a[2][2]=='x' && a[2][1]=='x'){a[2][0]='x';print(a);printf("You lose!");exit(0);} //for lose

else if(a[0][1]!='o' && a[0][1]!='x')
a[0][1]='x';
else if(a[0][2]!='o' && a[0][2]!='x')
a[0][2]='x';
else if(a[1][0]!='o' && a[1][0]!='x')
a[1][0]='x';
else if(a[1][1]!='o' && a[1][1]!='x')
a[1][1]='x';
else if(a[1][2]!='o' && a[1][2]!='x')
a[1][2]='x';
else if(a[2][0]!='o' && a[2][0]!='x')
a[2][0]='x';
else if(a[2][1]!='o' && a[2][1]!='x')
a[2][1]='x';
else if(a[2][2]!='o' && a[2][2]!='x')
a[2][2]='x';

print(a);

printf("Enter your choice position : ");
scanf("%d",&c);
//for 5th c , c 1,z,r,s you n,y,p,c

if(c==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(c==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(c==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(c==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(c==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(c==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(c==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(c==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}

if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][0]=='o' && a[1][1]=='o' && a[2][2]=='o'){print(a);printf("You Win!");exit(0);}
else if(a[0][2]=='o' && a[1][1]=='o' && a[2][0]=='o'){print(a);printf("You Win!");exit(0);}

else if(a[0][1]!='o' && a[0][1]!='x')
a[0][1]='x';
else if(a[0][2]!='o' && a[0][2]!='x')
a[0][2]='x';
else if(a[1][0]!='o' && a[1][0]!='x')
a[1][0]='x';
else if(a[1][1]!='o' && a[1][1]!='x')
a[1][1]='x';
else if(a[1][2]!='o' && a[1][2]!='x')
a[1][2]='x';
else if(a[2][0]!='o' && a[2][0]!='x')
a[2][0]='x';
else if(a[2][1]!='o' && a[2][1]!='x')
a[2][1]='x';
else if(a[2][2]!='o' && a[2][2]!='x')
a[2][2]='x';

print(a);

if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x'){printf("You lose!");exit(0);}
else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x'){printf("You lose!");exit(0);}
else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x'){printf("You lose!");exit(0);}
else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x'){printf("You lose!");exit(0);}
else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x'){printf("You lose!");exit(0);}
else if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x'){printf("You lose!");exit(0);}
else if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x'){printf("You lose!");exit(0);}
else if(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'){printf("You lose!");exit(0);}
else 
printf("Draw!");
}
else if(g==2)
{
printf("\nFirst Player is X and Second Player is O.\n");
print(a);
printf("\nEnter Position First Player : ");
scanf("%d",&b);
if(b==1)
a[0][0]='x';
else if(b==2)
a[0][1]='x';
else if(b==3)
a[0][2]='x';
else if(b==4)
a[1][0]='x';
else if(b==5)
a[1][1]='x';
else if(b==6)
a[1][2]='x';
else if(b==7)
a[2][0]='x';
else if(b==8)
a[2][1]='x';
else if(b==9)
a[2][2]='x';
else{printf("invalid number.");exit(0);}
print(a);

printf("Enter Position Second Player : ");
scanf("%d",&c);
if(c==1 && a[0][1]!='x')
a[0][0]='o';
else if(c==2 && a[0][1]!='x')
a[0][1]='o';
else if(c==3 && a[0][2]!='x')
a[0][2]='o';
else if(c==4 && a[1][0]!='x')
a[1][0]='o';
else if(c==5 && a[1][1]!='x')
a[1][1]='o';
else if(c==6 && a[1][2]!='x')
a[1][2]='o';
else if(c==7 && a[2][0]!='x')
a[2][0]='o';
else if(c==8 && a[2][1]!='x')
a[2][1]='o';
else if(c==9 && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}
print(a);

printf("Enter Position First Player : ");
scanf("%d",&d);
if(d==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='x';
else if(d==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='x';
else if(d==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='x';
else if(d==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='x';
else if(d==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='x';
else if(d==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='x';
else if(d==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='x';
else if(d==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='x';
else if(d==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='x';
else{printf("invalid number.");exit(0);}
print(a);

printf("Enter Position Second Player : ");
scanf("%d",&e);
if(e==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='o';
else if(e==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(e==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(e==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(e==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(e==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(e==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(e==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(e==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}
print(a);

printf("Enter Position First Player : ");
scanf("%d",&f);
if(f==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='x';
else if(f==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='x';
else if(f==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='x';
else if(f==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='x';
else if(f==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='x';
else if(f==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='x';
else if(f==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='x';
else if(f==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='x';
else if(f==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='x';
else{printf("invalid number.");exit(0);}
print(a);
if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}

printf("Enter Position Second Player : ");
scanf("%d",&n);
if(n==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='o';
else if(n==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(n==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(n==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(n==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(n==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(n==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(n==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(n==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}
print(a);
if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][0]=='o' && a[1][1]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][2]=='o' && a[1][1]=='o' && a[2][0]=='o'){printf("Player Second Win!");exit(0);}

printf("Enter Position First Player : ");
scanf("%d",&m);
if(m==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='x';
else if(m==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='x';
else if(m==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='x';
else if(m==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='x';
else if(m==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='x';
else if(m==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='x';
else if(m==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='x';
else if(m==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='x';
else if(m==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='x';
else{printf("invalid number.");exit(0);}
print(a);
if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}

printf("Enter Position Second Player : ");
scanf("%d",&z);
if(z==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='o';
else if(z==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='o';
else if(z==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='o';
else if(z==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='o';
else if(z==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='o';
else if(z==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='o';
else if(z==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='o';
else if(z==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='o';
else if(z==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='o';
else{printf("invalid number.");exit(0);}
print(a);
if(a[0][0]=='o' && a[0][1]=='o' && a[0][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[1][0]=='o' && a[1][1]=='o' && a[1][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[2][0]=='o' && a[2][1]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][0]=='o' && a[1][0]=='o' && a[2][0]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][1]=='o' && a[1][1]=='o' && a[2][1]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][2]=='o' && a[1][2]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][0]=='o' && a[1][1]=='o' && a[2][2]=='o'){printf("Player Second Win!");exit(0);}
else if(a[0][2]=='o' && a[1][1]=='o' && a[2][0]=='o'){printf("Player Second Win!");exit(0);}

printf("Enter Position First Player : ");
scanf("%d",&y);
if(y==1 && a[0][1]!='o' && a[0][1]!='x')
a[0][0]=='x';
else if(y==2 && a[0][1]!='o' && a[0][1]!='x')
a[0][1]='x';
else if(y==3 && a[0][2]!='o' && a[0][2]!='x')
a[0][2]='x';
else if(y==4 && a[1][0]!='o' && a[1][0]!='x')
a[1][0]='x';
else if(y==5 && a[1][1]!='o' && a[1][1]!='x')
a[1][1]='x';
else if(y==6 && a[1][2]!='o' && a[1][2]!='x')
a[1][2]='x';
else if(y==7 && a[2][0]!='o' && a[2][0]!='x')
a[2][0]='x';
else if(y==8 && a[2][1]!='o' && a[2][1]!='x')
a[2][1]='x';
else if(y==9 && a[2][2]!='o' && a[2][2]!='x')
a[2][2]='x';
else{printf("invalid number.");exit(0);}
print(a);
if(a[0][0]=='x' && a[0][1]=='x' && a[0][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[1][0]=='x' && a[1][1]=='x' && a[1][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[2][0]=='x' && a[2][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][0]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][1]=='x' && a[1][1]=='x' && a[2][1]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][2]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][0]=='x' && a[1][1]=='x' && a[2][2]=='x'){printf("Player First Win!");exit(0);}
else if(a[0][2]=='x' && a[1][1]=='x' && a[2][0]=='x'){printf("Player First Win!");exit(0);}
else {printf("Draw!");}
}
else
printf("Invalid Number.");
}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[100],l,z,a;
    printf("Enter Symbol = ");
    scanf("%c",&a);
    getchar();
    printf("Enter Name : ");
    gets(s);
    l=strlen(s);
    for(int y=1;y<=5;y++)
    {
    if(y==1)
    {
    for(int z=0;z<l;z++)
    {
        if(s[z]=='a' || s[z]=='A')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='b' || s[z]=='B')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='c' || s[z]=='C')
        printf(" %c%c%c%c ",a,a,a,a);
        else if(s[z]=='d' || s[z]=='D')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='e' || s[z]=='E')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='f' || s[z]=='F')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='g' || s[z]=='G')
        printf(" %c%c%c%c ",a,a,a,a);
        else if(s[z]=='h' || s[z]=='H')
        printf("%c   %c ",a,a);
        else if(s[z]=='i' || s[z]=='I')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='j' || s[z]=='J')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='k' || s[z]=='K')
        printf("%c   %c ",a,a);
        else if(s[z]=='l' || s[z]=='L')
        printf("%c     ",a);
        else if(s[z]=='m' || s[z]=='M')
        printf("%c   %c ",a,a);
        else if(s[z]=='n' || s[z]=='N')
        printf("%c   %c ",a,a);
        else if(s[z]=='o' || s[z]=='O')
        printf(" %c%c%c  ",a,a,a);
        else if(s[z]=='p' || s[z]=='P')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='q' || s[z]=='Q')
        printf(" %c%c%c   ",a,a,a);
        else if(s[z]=='r' || s[z]=='R')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='s' || s[z]=='S')
        printf(" %c%c%c%c ",a,a,a,a);
        else if(s[z]=='t' || s[z]=='T')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='u' || s[z]=='U')
        printf("%c   %c ",a,a);
        else if(s[z]=='v' || s[z]=='V')
        printf("%c       %c ",a,a);
        else if(s[z]=='w' || s[z]=='W')
        printf("%c   %c ",a,a);
        else if(s[z]=='x' || s[z]=='X')
        printf("%c   %c ",a,a);
        else if(s[z]=='y' || s[z]=='Y')
        printf("%c   %c ",a,a);
        else if(s[z]=='z' || s[z]=='Z')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]==' ')
        printf("   ");
    }
    printf("\n");
    }
    if(y==2)
    {
    for(int z=0;z<l;z++)
    {
        if(s[z]=='a' || s[z]=='A')
        printf("%c   %c ",a,a);
        else if(s[z]=='b' || s[z]=='B')
        printf("%c   %c ",a,a);
        else if(s[z]=='c' || s[z]=='C')
        printf("%c     ",a);
        else if(s[z]=='d' || s[z]=='D')
        printf("%c   %c ",a,a);
        else if(s[z]=='e' || s[z]=='E')
        printf("%c     ",a);
        else if(s[z]=='f' || s[z]=='F')
        printf("%c     ",a);
        else if(s[z]=='g' || s[z]=='G')
        printf("%c     ",a);
        else if(s[z]=='h' || s[z]=='H')
        printf("%c   %c ",a,a);
        else if(s[z]=='i' || s[z]=='I')
        printf("  %c   ",a);
        else if(s[z]=='j' || s[z]=='J')
        printf("  %c   ",a);
        else if(s[z]=='k' || s[z]=='K')
        printf("%c  %c  ",a,a);
        else if(s[z]=='l' || s[z]=='L')
        printf("%c     ",a);
        else if(s[z]=='m' || s[z]=='M')
        printf("%c%c %c%c ",a,a,a,a);
        else if(s[z]=='n' || s[z]=='N')
        printf("%c%c  %c ",a,a,a);
        else if(s[z]=='o' || s[z]=='O')
        printf("%c   %c ",a,a);
        else if(s[z]=='p' || s[z]=='P')
        printf("%c   %c ",a,a);
        else if(s[z]=='q' || s[z]=='Q')
        printf("%c%c  %c  ",a,a,a);
        else if(s[z]=='r' || s[z]=='R')
        printf("%c   %c ",a,a);
        else if(s[z]=='s' || s[z]=='S')
        printf("%c     ",a);
        else if(s[z]=='t' || s[z]=='T')
        printf("  %c   ",a);
        else if(s[z]=='u' || s[z]=='U')
        printf("%c   %c ",a,a);
        else if(s[z]=='v' || s[z]=='V')
        printf(" %c     %c  ",a,a);
        else if(s[z]=='w' || s[z]=='W')
        printf("%c   %c ",a,a);
        else if(s[z]=='x' || s[z]=='X')
        printf(" %c %c  ",a,a);
        else if(s[z]=='y' || s[z]=='Y')
        printf(" %c %c  ",a,a);
        else if(s[z]=='z' || s[z]=='Z')
        printf("   %c  ",a);
        else if(s[z]==' ')
        printf("   ");
    }
    printf("\n");
    }
    if(y==3)
    {
    for(int z=0;z<l;z++)
    {
        if(s[z]=='a' || s[z]=='A')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='b' || s[z]=='B')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='c' || s[z]=='C')
        printf("%c     ",a);
        else if(s[z]=='d' || s[z]=='D')
        printf("%c   %c ",a,a);
        else if(s[z]=='e' || s[z]=='E')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='f' || s[z]=='F')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='g' || s[z]=='G')
        printf("%c  %c%c ",a,a,a);
        else if(s[z]=='h' || s[z]=='H')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='i' || s[z]=='I')
        printf("  %c   ",a);
        else if(s[z]=='j' || s[z]=='J')
        printf("  %c   ",a);
        else if(s[z]=='k' || s[z]=='K')
        printf("%c%c    ",a,a);
        else if(s[z]=='l' || s[z]=='L')
        printf("%c     ",a);
        else if(s[z]=='m' || s[z]=='M')
        printf("%c %c %c ",a,a,a);
        else if(s[z]=='n' || s[z]=='N')
        printf("%c %c %c ",a,a,a);
        else if(s[z]=='o' || s[z]=='O')
        printf("%c   %c ",a,a);
        else if(s[z]=='p' || s[z]=='P')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='q' || s[z]=='Q')
        printf("%c %c %c  ",a,a,a);
        else if(s[z]=='r' || s[z]=='R')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='s' || s[z]=='S')
        printf(" %c%c%c  ",a,a,a);
        else if(s[z]=='t' || s[z]=='T')
        printf("  %c   ",a);
        else if(s[z]=='u' || s[z]=='U')
        printf("%c   %c ",a,a);
        else if(s[z]=='v' || s[z]=='V')
        printf("  %c   %c   ",a,a);
        else if(s[z]=='w' || s[z]=='W')
        printf("%c %c %c ",a,a,a);
        else if(s[z]=='x' || s[z]=='X')
        printf("  %c   ",a);
        else if(s[z]=='y' || s[z]=='Y')
        printf("  %c   ",a);
        else if(s[z]=='z' || s[z]=='Z')
        printf("  %c   ",a);
        else if(s[z]==' ')
        printf("   ");
    }
    printf("\n");
    }
    if(y==4)
    {
    for(int z=0;z<l;z++)
    {
        if(s[z]=='a' || s[z]=='A')
        printf("%c   %c ",a,a);
        else if(s[z]=='b' || s[z]=='B')
        printf("%c   %c ",a,a);
        else if(s[z]=='c' || s[z]=='C')
        printf("%c     ",a);
        else if(s[z]=='d' || s[z]=='D')
        printf("%c   %c ",a,a);
        else if(s[z]=='e' || s[z]=='E')
        printf("%c     ",a);
        else if(s[z]=='f' || s[z]=='F')
        printf("%c     ",a);
        else if(s[z]=='g' || s[z]=='G')
        printf("%c   %c ",a,a);
        else if(s[z]=='h' || s[z]=='H')
        printf("%c   %c ",a,a);
        else if(s[z]=='i' || s[z]=='I')
        printf("  %c   ",a);
        else if(s[z]=='j' || s[z]=='J')
        printf("%c %c   ",a,a);
        else if(s[z]=='k' || s[z]=='K')
        printf("%c  %c  ",a,a);
        else if(s[z]=='l' || s[z]=='L')
        printf("%c     ",a);
        else if(s[z]=='m' || s[z]=='M')
        printf("%c   %c ",a,a);
        else if(s[z]=='n' || s[z]=='N')
        printf("%c  %c%c ",a,a,a);
        else if(s[z]=='o' || s[z]=='O')
        printf("%c   %c ",a,a);
        else if(s[z]=='p' || s[z]=='P')
        printf("%c     ",a);
        else if(s[z]=='q' || s[z]=='Q')
        printf("%c  %c%c  ",a,a,a);
        else if(s[z]=='r' || s[z]=='R')
        printf("%c%c    ",a,a);
        else if(s[z]=='s' || s[z]=='S')
        printf("    %c ",a);
        else if(s[z]=='t' || s[z]=='T')
        printf("  %c   ",a);
        else if(s[z]=='u' || s[z]=='U')
        printf("%c   %c ",a,a);
        else if(s[z]=='v' || s[z]=='V')
        printf("   %c %c    ",a,a);
        else if(s[z]=='w' || s[z]=='W')
        printf("%c%c %c%c ",a,a,a,a);
        else if(s[z]=='x' || s[z]=='X')
        printf(" %c %c  ",a,a);
        else if(s[z]=='y' || s[z]=='Y')
        printf("  %c   ",a);
        else if(s[z]=='z' || s[z]=='Z')
        printf(" %c    ",a);
        else if(s[z]==' ')
        printf("   ");
    }
    printf("\n");
    }
    if(y==5)
    {
    for(int z=0;z<l;z++)
    {
        if(s[z]=='a' || s[z]=='A')
        printf("%c   %c ",a,a);
        else if(s[z]=='b' || s[z]=='B')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='c' || s[z]=='C')
        printf(" %c%c%c%c ",a,a,a,a);
        else if(s[z]=='d' || s[z]=='D')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='e' || s[z]=='E')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='f' || s[z]=='F')
        printf("%c     ",a);
        else if(s[z]=='g' || s[z]=='G')
        printf(" %c%c%c%c ",a,a,a,a);
        else if(s[z]=='h' || s[z]=='H')
        printf("%c   %c ",a,a);
        else if(s[z]=='i' || s[z]=='I')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='j' || s[z]=='J')
        printf("%c%c%c   ",a,a,a);
        else if(s[z]=='k' || s[z]=='K')
        printf("%c   %c ",a,a);
        else if(s[z]=='l' || s[z]=='L')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='m' || s[z]=='M')
        printf("%c   %c ",a,a);
        else if(s[z]=='n' || s[z]=='N')
        printf("%c   %c ",a,a);
        else if(s[z]=='o' || s[z]=='O')
        printf(" %c%c%c  ",a,a,a);
        else if(s[z]=='p' || s[z]=='P')
        printf("%c     ",a);
        else if(s[z]=='q' || s[z]=='Q')
        printf(" %c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]=='r' || s[z]=='R')
        printf("%c  %c  ",a,a);
        else if(s[z]=='s' || s[z]=='S')
        printf("%c%c%c%c  ",a,a,a,a);
        else if(s[z]=='t' || s[z]=='T')
        printf("  %c   ",a);
        else if(s[z]=='u' || s[z]=='U')
        printf(" %c%c%c  ",a,a,a);
        else if(s[z]=='v' || s[z]=='V')
        printf("    %c     ",a);
        else if(s[z]=='w' || s[z]=='W')
        printf("%c   %c ",a,a);
        else if(s[z]=='x' || s[z]=='X')
        printf("%c   %c ",a,a);
        else if(s[z]=='y' || s[z]=='Y')
        printf("  %c   ",a);
        else if(s[z]=='z' || s[z]=='Z')
        printf("%c%c%c%c%c ",a,a,a,a,a);
        else if(s[z]==' ')
        printf("   ");
    }
    }
    }
    getch();
}
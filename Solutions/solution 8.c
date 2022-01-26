#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,d,e,f;
    printf("\tEnter the No:- ");
    scanf("%d",&e);
    for(d=1; d<=e; d++)
    {
        for(f=e; f>=d; f--)
        {
            printf("  ");
        }
        for(a=d; a>=1; a--)
        {
            printf(" %d",a);
        }
        for(a=2; a<=d; a++)
        {
            printf(" %d",a);
        }
        printf("\n");
    }
    getch();
}

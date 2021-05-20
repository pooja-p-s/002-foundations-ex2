#include <stdio.h>
#include <cs50.h>

void pattern1(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("#");
        }
        printf("\n");
    }    
}

void pattern2(int n)
{
    int a=n-1,b=1;
    while(a>=0 && b<=n)
    {
        for(int i=0;i<a;i++){
            printf(" ");
        }
        for(int j=0;j<b;j++)
        {
            printf("#");
        }
        printf("\n");
        a--;b++;
    }  

}

int main(void) 
{
    int ch = get_int("Enter type of pattern (1 or 2) ");
    int n = get_int("Number of rows ");
    if(ch==1)
        pattern1(n);
    if(ch==2)
        pattern2(n);
    return 0;
 }

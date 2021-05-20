#include <stdio.h>
#include <cs50.h>

int check(int hy,int b,int h)
{
    if( hy*hy == (b*b + h*h))
        return 1;
    else
        return 0;

}

int main(void) 
{
    int s1 = get_int("side 1 ");
    int s2 = get_int("side 2 ");
    int s3 = get_int("side 3 ");
    int r;
   if(s1>s2)
   {
       if(s1>s3)
            r = check(s1,s2,s3);
        else
        {
            r = check(s3,s1,s2);
        }
   }
   else
   {
        if(s2>s3)
            r = check(s2,s1,s3);
        else
        {
            r = check(s3,s1,s2);
        }
   }
   if(r==1)
        printf("Yes");
    else
        printf("No");

    return 0;
}

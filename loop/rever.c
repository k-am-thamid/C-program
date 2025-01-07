#include<stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    int rev=0;
    int ld;

    while(n!=0)
    {
      ld=n%10;
      rev = rev*10+ld;
      n=n/10;
    }
    printf("THE reverce number is %d",rev);
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    int N=n;
    int rev=0;
    int ld;

    while(n!=0)
    {
      ld=n%10;
      rev = rev*10+ld;
      n=n/10;
    }
    printf("THE reverce number is %d",rev);
    printf("\n");
    printf("THE reverce number is %d",rev+N);

    return 0;
}
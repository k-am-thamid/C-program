#include<stdio.h>
int tabil(int n)
{
    for(int i=1;i<=10;i++){
    printf("%dx%d=%d\n",n,i,i*n);
    }
}
int main()
{
    int n;
    printf("enter a number:");
    
    scanf("%d",&n);
    tabil(n);
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("enter a nuber:");
    scanf("%d",&n);
    int a= 0;
    for (int i = 2; i <=n-1; i++)
    {
        if (n%i == 0)
        {
          a=1;
          break;
        }
    }
    if (a == 0)
        {
            printf("the number is prime \n");
            
           
        }
        else{
             printf("the number is composit \n");
          
        }
return 0;

}
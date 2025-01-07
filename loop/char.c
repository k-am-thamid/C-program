#include <stdio.h>

int main() {
     int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
 
    char ch;
    
    for ( int i= 0; i <=n; i++) {
      ch = 'A';
   
        for ( int j = 0; j <= n; j++) { 
            printf("%c ", ch);

            ch++;
           

        }
        printf("\n");
    }
    return 0;
}

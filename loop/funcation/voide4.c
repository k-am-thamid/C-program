#include<stdio.h>
void muslim(){
    printf("assalamualaikum warahmatullahi wabarakatuh\n");
}
void hindu(){
    printf("namaste");
}
int main(){
    printf("enter m for muslim or enter h for hindu: ");
    char ch;
    scanf("%c",&ch);
    if(ch=='m'){
    muslim();
    }
    else if (ch=='h')
    {
        hindu(); 
    }
    else{
        printf("type the correct key!!");
    }
  
    return 0;
}
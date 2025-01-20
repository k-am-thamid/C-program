#include<stdio.h>
void calculateprice(float value){
    value=value+(.18*value);
    printf("final price is :%f",value);
}
int main(){
    float value;
    printf("enter price: ");
    scanf("%f",&value);
    calculateprice(value);
    return 0;
}
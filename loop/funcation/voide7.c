#include<stdio.h>
#include<math.h>
float sqarearea(float side){
    return side*side ;
}
float circlearea(float red){
    return 3.1416*red*red ;
}
float rectanglearea(float a,float b){
    return a*b ;
}
int main(){
    float side;
    printf("enter the side of sqare : ");
    scanf("%f",&side);
    printf("the area of sqare is = %f \n",sqarearea(side));
    float red;
    printf("enter the redius of circle : ");
    scanf("%f",&red);
    printf("the area of circle is = %f \n", circlearea(red));
    float a,b;
    printf("enter the first side : \n");
    scanf("%f",&a);
    printf("enter the second side : \n");
    scanf("%f",&b);
    printf("the area of rectangle is = %f \n", rectanglearea(a,b));
    return 0;
}
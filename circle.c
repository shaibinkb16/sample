#include<stdio.h>
int main(){
int radius,area,perimeter ;
printf("Enter the radius : ");
scanf("%d",&radius);
area=3.14*(radius*radius);
perimeter=2*3.14*radius;
printf("the area of the circle is :%d \n",area);
printf("the perimeter of the circle is :%d",perimeter);
return 0;
} 

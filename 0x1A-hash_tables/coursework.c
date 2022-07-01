#include <stdio.h>
#include <math.h>
/**
 * find_radius - finds the radius 
 * @v: Associated volume of the solid
 * @h: Associated  height
 * Return: radius */

double find_radius(double v ,double h){
double pie = 3.143;
double radius = pow((v/(pie * h)), 0.5);
return radius;
}

int main(){

double v,h,radius;
v = (0.001 * 0.5 * 280);
h = 1.0; // You can  add the logical bound  here to protect the program  form negative and zero  heights
radius = find_radius(v,h);

printf("The radius of the  saucepan to be used is  %.2f",radius);

return 0;
}

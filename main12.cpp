#include <stdio.h> 
#include <stdlib.h> 


int main(int argc, char *argv[]) 
{ 
float x, y; 
int n;
printf ("Vvedite x :\n"); 
scanf ("%f", &x); 
printf ("Vvedite n :\n"); 
scanf ("%f", &n); 
y = x * x + 3 * n; 
printf ("y=%lf", x,y);
return 0; 
}

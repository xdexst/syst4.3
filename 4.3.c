#include <stdio.h>
#include <math.h>
int main () {
int a=1;
int n=-1;
int S=0;
int i;
int c;
printf("Enter how many numbers you want to enter .\n ");
scanf ("%d",&i);
printf("Enter numbers to find arithmetic mean.\n ");
for (c=0;c<i;c++) {
printf("Enter a number: a= ");
scanf("%d",&a);
S=S+a;
}
printf("Arithmetic mean is %d ",(S/i));
return 0;
}

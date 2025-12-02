#include <stdio.h>
#define PI 3.14159265359 // global variable also no need to put semicolon at end
#define area(r) (PI*r*r)
// float area(float r){
//     return PI*r*r;
// }
int main(){
    // double x = 3.14159265359;
    // printf("%.15f\n",x);
    // printf("%f",PI);
    // float -> can store value only upto 6 decimal places
    printf("%f",area(10));
    return 0;
}
#include <stdio.h>

int main(){
    double A, B, C;
    scanf("%lf%lf%lf", &A, &B, &C);
    if(A+B>C && A+C>B && B+C>A){
        printf("É possível formar um triângulo!");
    } else {
        printf("Não é possível formar um triângulo!");
    }
}
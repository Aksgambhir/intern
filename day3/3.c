#include<stdio.h>
int add(int a, int b);
int sub(int a,int b);
int mult(int a,int b);
int div(int a,int b);
int main(){
    int sum = add(5,3);
    printf("Sum: %d",sum);
return 0;
}
int main(){
    int diff= sub(5,3);
    printf("diff: %d",diff);
    return 0;
}
int add(int a,int b){
    return a + b;
}
int sub(int a,int b){
    return a - b;
}
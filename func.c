#include <stdio.h>
int Sum(int a,int b){
    int c;
    c=a+b;
    return c;
    }
    
    int sub(int x, int y);
void main(){
    int d;
    int a=5;
    int b=7;
    d=Sum(a,b);
    printf("%d %d",d,sub(a,b));
}

int sub (int x,int y){
    int z=x-y;
    return z;
}
// taking values in array from user
#include <stdio.h>
int main () {
    int i,arr[5];
    printf("enter the nos. :");
    for(i=0;i<5;i++) {
    scanf("%d",&arr[i]); } //sirf scan kr rha yha pr.
      printf("the entered nos. are:");
    for(i=0;i<5;i++) { //yha pr values print kr rha.
    printf("%d  ",arr[i]); }
   
    return 0;
}
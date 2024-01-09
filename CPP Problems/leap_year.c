#include<stdio.h>
int main(){
    int n;
    printf("please input year: ");
    scanf("%d",&n);
    if(n%4==0){
        printf("the year is leaf year");
    }
    else{
        printf("the year is not leaf year");
    }
    return 0;
}
#include <stdio.h>
#include<string.h>

int main ()

{
    int n;
    char eng[]={"one","two","three","four","five","six","seven","eight","nine"};
    
    scanf("%d",&n);
    
    if(n<=9)
    {
        printf("%s",eng[n]);
    }
    
    else 
    {
        printf("Greater than 9");
    }
    
    return 0;
}
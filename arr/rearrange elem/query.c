#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int ld=0;
    int sum=0;
    while(a!=0){
        ld=a%10;
        sum=sum+ld;
        a=a/10;
    }
    printf("the sum of digit is %d",sum);
    return 0;
}
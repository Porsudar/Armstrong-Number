#include<stdio.h>
int main(){
    int n,num,rem,res=0;
    scanf("%d",&n);
    num=n;
    while(num!=0){
        rem=num%10;
        res+=rem*rem*rem;
        num=num/10;
    }printf("%d\n",res);
    if(res==n){
        printf("%d is armstrong number",n);
    }
    else{
        printf("%d is not an armstrong number",n);
    }
}

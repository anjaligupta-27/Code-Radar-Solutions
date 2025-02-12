// Your code here...
#include<stdio.h>
int main(){
    int t,num,n;
    scanf("%d",&num,&n);
    if(n<0 || n>31){
        printf("Invalid bit position\n");
    }
    printf("%d\n",(num & (1<<n))?1:0);
}
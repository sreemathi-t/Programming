#include<stdio.h>
int main(){
    int n,f=1;
    scanf("%d",&n);

    if(n <= 1) f = 0;

    for(int i = 2; i <= n/2; i++)
        if(n % i == 0) {
            f = 0;
            break;
        }
    if(f) printf("Prime");
    else printf("Not Prime");

}
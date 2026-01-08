#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
   
    for(int i=0;i<=a/2;i++){
        if(i%a==0)
          c+=i;
    }
     for(int i=0;i<=b/2;i++){
        if(i%b==0)
          d+=i;
     }
     if(a==d && b==c){
         printf(" Amicable Pair");
     }
     else {
         printf("Not Amicable Pair");
     }
}

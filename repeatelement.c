#include<Stdio.h>
int main(){
    char s[100];
    scanf("%[^\n]",s);
    for(int i=0;s[i]!='\0';i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A')){
            s[i]=s[i]^32;
        }
    }
printf("%s",s);
}
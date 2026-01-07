#include <stdio.h>
int main()
{
    int a[5],min,max;
    
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    min = max = a[0];
    
    for(int i=0;i<5;i++){
        if (a[i] < min)min = a[i];
        if(a[i] > max)max = a[i];
    }
    printf("Min=%d Max=%d", min, max);
    return 0;
}
#include <stdio.h>
int main()
{
    int a,i,j;
    printf("Enter one number here:");
    scanf("%d", &a);
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            printf("%d %d\n", i,j);
        }
    }
}

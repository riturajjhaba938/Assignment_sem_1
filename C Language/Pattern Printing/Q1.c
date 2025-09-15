#include <stdio.h>

int main()
{
    printf("Enter no. to print n * : ");
    int n;
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        printf("*");
    }

    return 0;
}
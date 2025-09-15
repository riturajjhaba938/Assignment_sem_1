#include <stdio.h>

int main()
{ 
    printf("Enter an natural no. to form and Right-angled Triangle:  — Numbers (increasing)");
    int n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
       
       
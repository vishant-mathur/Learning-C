#include <stdio.h>

int main()
{
    int r,c,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=1;c<=n-r;c++){
            printf(" ");
        }
            for(c=1;c<=r;c++){
                printf("*");
        }
        printf("\n");
    }
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bas,c;
    printf("Enter how many digits binomial you want: ");
    scanf("%d",&bas);
    for(int i=0;i<bas;i++)
    {
        c=1;
     for(int k=0;k<bas-i;k++)
     {
         printf(" ");
     }
     for(int j=0;j<=i;j++)
     {
         printf("%d ",c);
         c=c*(i-j)/(j+1);
     }
     printf("\n");
    }
}


/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

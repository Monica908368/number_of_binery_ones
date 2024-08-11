#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int * numbers=(int*)malloc(n*sizeof(int));
    for (int i =0 ; i<n;i++)
    {
       scanf("%d",&numbers[i]);
    }
    for (int i =0 ; i<n;i++)
    { int count =0;
      while(numbers[i]!=0)
      {
          if(numbers[i]%2!=0)count++;
          numbers[i]/=2;
      }
      printf("%d\n",count);
    }
    return 0;
}

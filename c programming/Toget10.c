#include<stdio.h>
int main()
{ int i,f,sum=0;
scanf("%d",&i);
f=i;
 int a[i];
  for (;i>0;i--)
  {
      scanf("%d",&a[i]);
      sum+=a[i];
  }  
  printf("%d", 19*f-2*sum);
    return 0;
}
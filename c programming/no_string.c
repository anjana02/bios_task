#include<stdio.h>
int main() {
   char s1[100], s2[100];
   int i=0;
   printf("\nEnter 1st strings :");
   scanf("%s",s1);
   printf("\nEnter 2st strings :");
   scanf("%s",s2);
   while (s1[i] == s2[i] && s1[i] != '\0')
      i++;
   if (s1[i] < s2[i])
      printf("First");
   else if (s1[i] > s2[i])
      printf("Second");
   else
      printf("Equal");
   return 0;
}
#include <stdio.h>
int main() {
   char str[100];
   
   printf("Enter a string: ");
   fgets(str, 100, stdin);


   for (int i = 0, j; str[i] != '\0'; ++i) {

      while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0')) {
         for (j = i; str[j] != '\0'; ++j) {
            str[j] = str[j + 1];
         }
         str[j] = '\0';
      }
   }
   puts(str);
   return 0;
}
#include <stdio.h>
int main() {
  char s1[100] , s2[100] ;
  int length, j;
   fgets(str,100,stdin)
   fgets(str,100,stdin)
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}
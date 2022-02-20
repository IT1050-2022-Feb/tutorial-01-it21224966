/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int main() {
  int no1, no2;
  int minimun();
  int maximun();
  int multiply();
  
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

  if(no1>no2)
   printf("%d ", minimum());

   printf("%d ", maximum());
   printf("%d ", multiply());
   return 0;
}

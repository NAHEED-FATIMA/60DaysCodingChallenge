#include <stdio.h>
int main()
{
  char arr[5][10] = {"Welcome",
                     "welcome", "welcomeManuu"};
  printf("String array Elements are:\n");
   
  for (int i = 0; i < 5; i++)
  {
    printf("%s\n", arr[i]);
  }
  return 0;
}

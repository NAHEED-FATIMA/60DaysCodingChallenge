#include <stdio.h>
  int main()
{
  
    int a[5] = { 109, 22, 89, 66, 45 };
    int n = 5, i, j, t = 0;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    // printing the output
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
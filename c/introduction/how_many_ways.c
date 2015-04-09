#include <stdio.h>
int main(int argc, char const* argv[])
{
  int n, x;
  int i, j, k;
  int cnt = 0;

  while ( 1 ) {
    scanf("%d %d", &n, &x);
    if ( n == 0 && x == 0 ) { break; }
    for ( i = 1; i <= n; i++) {
      for ( j = i + 1; j <= n; j++) {
        for ( k = j + 1; k <= n; k++) {
          if ( i + j + k == x ) {
            //-- debug
            // printf("%d+%d+%d\n", i, j, k);
            cnt++;
          }
        }
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}

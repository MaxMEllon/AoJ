#include <stdio.h>
int main(int argc, char const* argv[])
{
  int mid, final, retry;
  char result;

  while ( 1 ) {
    scanf("%d %d %d", &mid, &final, &retry);
    if ( mid == -1 && final == -1 && retry == -1 ) { break; }
    int tmp = mid + final + retry;
    if ( 80 <= tmp ) { result = 'A'; }
    if ( 65 <= tmp && tmp < 80 ) { result = 'B'; }
    if ( 50 <= tmp && tmp < 65 ) { result = 'C'; }
    if ( 30 <= tmp && tmp < 50 ) { result = 'D'; }
    if ( tmp < 30 ) { result = 'F'; }
    printf("%c\n", result);
  }

  return 0;
}

#include <stdio.h>
#include "reader.h" //so we can define reader's prototype functions ("" because it's in the same directory)

/** Gets a character from standard input, but converts to upper-case
    as it reads. */
int get()
{
  int ch = getchar();
  if ( ch >= 'a' && ch <= 'z' )
    ch = ch - 'a' + 'A';

  return ch;
}

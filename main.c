#include <stdio.h>
#include <stdlib.h>
#include "reader.h" //so we can call reader's prototype functions ("" because it's in the same directory)
#include "writer.h" //so we can call writer's prototype functions ("" because it's in the same directory)

int main()
{
  int ch;

  // Keep reading characters until get tells us EOF.
  while ( ( ch = get() ) != EOF )
    put( ch );

  return EXIT_SUCCESS;
}

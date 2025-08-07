#include <stddef.h>

void* memcpy( void* dest, const void* src, unsigned int n ){

  if( dest == NULL || src == NULL ){return NULL;}

  unsigned char *d = (unsigned char *) dest;
  const unsigned char *s = (const unsigned char *) src;

  while( n-- ){
    *d++ = *s++;
    }
}
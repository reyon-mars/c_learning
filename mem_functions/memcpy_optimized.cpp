#include <stdint.h>
#include <stddef.h>

void* memcpy_optimized( void* dest, const void* src, size_t n ){
  size_t i = 0;


  size_t block_size = sizeof( size_t );
  size_t block_count = n / block_size;
  size_t remaining = n % block_size;

  size_t* d_block = (size_t*) dest;
  const size_t* s_block = (const size_t*) src;

  for( i = 0; i < block_count; i++ ){
    *d_block++ = *s_block++;
  }
  if( remaining ){
    unsigned char* d_byte = (unsigned char*) (d_block);
    const unsigned char* s_byte = ( const unsigned char*) (s_block);
    for( i = 0; i < remaining; i++ ){
      *d_byte++ = *s_byte++;
    }
  }
  return dest;
}

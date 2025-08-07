void* memset( void* ptr, int value, unsigned int count ){

  unsigned char* p = ( unsigned char* ) ptr;
  unsigned char val = (unsigned char) value;

  while( count-- ){
    *p++ = value ;
  }
  return ptr;
}
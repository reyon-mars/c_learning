int memcmp( void* src1, void* src2, unsigned int n ){

  const unsigned char *p1, *p2;
  p1 = (const unsigned char*)src1;
  p2 = (const unsigned char*)src2;

  for( unsigned int i = 0; i < n; i++ )
    if( *p1++ != *p2++ )
      return (int)p1[i] - (int)p2[i];

  return 0;
}
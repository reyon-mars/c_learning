

int exponents(int a ,int b)
{
  register int  res=1;
  int i;
  for(i=1;i<=b;i++){
    res=res*a;
  }
  return res;
}

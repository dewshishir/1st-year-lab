int main() {
  int a,b, *p1,*p2,x,y,z;
  a=12;
  b=4;
  p1=&a;
  p2=&b;
  x=*p1 * *p2-6;//42
  y=4*((-(*p2))/(*p1))+10;//10
  printf("Add of a=%u\n",p1);
  printf("Add of b=%u\n",p2);
  printf("a=%d, b=%d\n",a,b);
  printf("x=%d,y=%d\n", x,y);
 *p2=*p2+3;//7
 *p1=*p2-5;//2
 z=*p1**p2-6;//8
 printf("a=%d, b=%d\n",a,b);
  printf("z=%d\n", z);

  return 0;
}

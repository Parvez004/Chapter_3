#include<stdio.h>
int main()
{
   int x, y;
   short int z;
   x=322123;
   y=544365;
   z=x+y;
   printf("x=%d\ny=%d\nz=%d", x, y, z);
   return 0;
   /*Result is 14520, Which is incorrect.*/ 
}
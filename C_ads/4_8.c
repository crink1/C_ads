#include<stdio.h>
 //#define MAX(X,Y) ((X)>(Y)?(X):(Y))

 //int main()
 //{
 //    int a = 3;
 //    int b = 5;
 //    int c = MAX(a++, b++);
 //    printf("%d\n", c);//6
 //    printf("%d\n", a);//4
 //    printf("%d\n", b);//7

 //    return 0;
 //}
#define MAX 100
 int main()
 {
     printf("%d", MAX);
#undef MAX
     printf("%d", MAX);

     return 0;
 }
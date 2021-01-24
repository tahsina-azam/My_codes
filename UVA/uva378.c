#include<stdio.h>
 int main(){
 int n,dit;
   double  x1, y1, x2, y2, x3, y3, x4, y4, a, b, c, d, e, f;
   double k;
   scanf("%d",&n);
   printf("INTERSECTING LINES OUTPUT\n");
   while(n--){
     scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
     a = y1 - y2;
     b = x2 - x1;
     c = x2*y1 - x1*y2;
     d = y3 - y4;
     e = x4 - x3;
     f = x4*y3 - x3*y4;
     k = (a*1.0)/(d*1.0);
     if ( k*d == a && k*e == b && k*f == c ){
       printf("LINE\n");
       continue;
     }
     dit = a*e - b*d;
     if( !dit ){
       printf("NONE\n");
       continue;
     }
     printf("POINT %.2lf %.2lf\n",((c*e-b*f)/dit),((a*f-c*d)/dit));
   }
   printf("END OF OUTPUT\n");
   return 0;
 }

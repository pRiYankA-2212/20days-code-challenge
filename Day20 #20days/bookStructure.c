#include <stdio.h>
#include <string.h>
int main()
{
   struct book
   {
      int page;
      float price;
      char name[30];
   } a, b, c;
   a.page = 60;
   a.price = 60;
   // a.name ="article";
   strcpy(a.name,"article");// fo the character string type data
   printf("%d\n", a.page);
   printf("%f\n", a.price);
   printf("%s\n", a.name);
}
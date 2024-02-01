#include <stdio.h>
#include <string.h>
int main()
{
   typedef struct book
   {
      int page;
      float price;
      char name[30];
   } book;
   book a;//instead of using the stuct book fo declaeration we use the small typedef like book;
   
   book c;
   book a;
   a.page = 60;
   a.price = 60;
   // a.name ="article";
   strcpy(a.name,"article");// fo the character string type data
   printf("%d\n", a.page);
   printf("%f\n", a.price);
   printf("%s\n", a.name);
}
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
   FILE *file1 = fopen("file1.txt", "r"); 
   FILE *file2 = fopen("file2.txt", "r"); 
  
   FILE *file3 = fopen("file3.txt", "w"); 
   char c; 
  
   if (file1 == NULL || file2 == NULL || file3 == NULL) 
   { 
         puts("Could not open files"); 
         exit(0); 
   } 
  
   while ((c = fgetc(file1)) != EOF) 
      fputc(c, file3); 
  
   while ((c = fgetc(file2)) != EOF) 
      fputc(c, file3); 
  
   printf("Merged file1.txt and file2.txt into file3.txt"); 
  
   fclose(file1); 
   fclose(file2); 
   fclose(file3); 
   return 0;
}
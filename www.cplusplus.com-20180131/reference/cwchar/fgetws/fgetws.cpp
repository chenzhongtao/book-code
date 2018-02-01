/* fgetws example */
#include <stdio.h>

int main()
{
   FILE * pFile;
   wchar_t mystring [100];

   pFile = fopen ("myfile.txt" , "r");
   if (pFile != NULL)
   {
     if ( fgetws (mystring , 100 , pFile) != NULL )
       fputws ( mystring, stdout );
     fclose (pFile);
   }
   return 0;
}


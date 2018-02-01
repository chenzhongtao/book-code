/* vswprintf example */
#include <stdio.h>
#include <stdarg.h>
#include <wchar.h>

void PrintWide ( const wchar_t * format, ... )
{
  wchar_t buffer[256];
  va_list args;
  va_start ( args, format );
  vswprintf ( buffer, 256, format, args );
  fputws ( buffer, stdout );
  va_end ( args );
}

int main ()
{
   wchar_t str[] = L"test string has %d wide characters.\n";

   PrintWide ( str, wcslen(str) );

   return 0;
}


/* iswcntrl example */
#include <stdio.h>
#include <wctype.h>
int main ()
{
  int i=0;
  wchar_t str[] = L"first line \n second line \n";
  while (!iswcntrl(str[i]))
  {
    putwchar (str[i]);
    i++;
  }
  return 0;
}


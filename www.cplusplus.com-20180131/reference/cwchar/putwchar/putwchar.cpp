/* putwchar example */
#include <wchar.h>

int main ()
{
  wchar_t wc;
  for (wc = 'A' ; wc <= 'Z' ; ++wc) putwchar (wc);

  return 0;
}


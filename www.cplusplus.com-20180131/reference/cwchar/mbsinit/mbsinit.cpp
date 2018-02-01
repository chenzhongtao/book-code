/* mbsinit example */
#include <wchar.h>
#include <string.h>
#include <stdio.h>

int main()
{
  char buffer[80];
  mbstate_t mbst;
  const wchar_t wcs [] = L"mbsinit example";
  const wchar_t * p;

  p = wcs;

  if ( !mbsinit(&mbst) )
    memset (&mbst,0,sizeof(mbst));  /* set to initial state */

  wcsrtombs ( buffer, &p, 80, &mbst);
  printf (buffer);

  return 0;
}


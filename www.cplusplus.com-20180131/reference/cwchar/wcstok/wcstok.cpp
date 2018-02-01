/* wcstok example */
#include <wchar.h>

int main ()
{
  wchar_t wcs[] = L"- This, a sample string.";
  wchar_t * pwc;
  wprintf (L"Splitting wide string \"%ls\" into tokens:\n",wcs);
  pwc = wcstok (wcs,L" ,.-");
  while (pwc != NULL)
  {
    wprintf (L"%ls\n",pwc);
    pwc = wcstok (NULL,L" ,.-");
  }
  return 0;
}


/* wcsftime example */
#include <wchar.h>
#include <time.h>

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  wchar_t buffer [80];

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );

  wcsftime (buffer,80,L"Now it's %I:%M%p.",timeinfo);
  wprintf (L"%ls\n",buffer);

  return 0;
}


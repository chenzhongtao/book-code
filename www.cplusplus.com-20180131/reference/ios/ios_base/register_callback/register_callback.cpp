// stream callbacks
#include <iostream>     // std::cout, std::ios_base
#include <fstream>      // ofstream

void testfn (std::ios::event ev, std::ios_base& stream, int index)
{
  switch (ev)
  {
    case stream.copyfmt_event:
      std::cout << "copyfmt_event\n"; break;
    case stream.imbue_event:
      std::cout << "imbue_event\n"; break;
    case stream.erase_event:
      std::cout << "erase_event\n"; break;
  }
}

int main () {
  std::ofstream filestr;
  filestr.register_callback (testfn,0);
  filestr.imbue (std::cout.getloc());
  return 0;
}


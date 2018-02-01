// converting from UTF-16 to UTF-8
#include <iostream>       // std::cout, std::hex
#include <string>         // std::string, std::u16string
#include <locale>         // std::wstring_convert
#include <codecvt>        // std::codecvt_utf8_utf16

int main ()
{
  std::u16string str16 (u"\u3084\u3042");  // UTF-16 for YAA (やあ)

  std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> cv;

  std::string str8 = cv.to_bytes(str16);

  std::cout << std::hex;

  std::cout << "UTF-8: ";
  for (char c : str8)
    std::cout << '[' << int(static_cast<unsigned char>(c)) << ']';
  std::cout << '\n';

  return 0;
}


// converting from UTF-8 to UTF-32
#include <iostream>       // std::cout, std::hex
#include <string>         // std::string, std::u32string
#include <locale>         // std::wstring_convert
#include <codecvt>        // std::codecvt_utf8
#include <cstdint>        // std::uint_least32_t

int main ()
{
  std::string str8 ("en espa\xc3\xb1ol");    // UTF-8 for "en español"

  std::wstring_convert<std::codecvt_utf8<char32_t>,char32_t> cv;

  std::u32string str32 = cv.from_bytes(str8);

  std::cout << std::hex;

  for (char32_t c : str32) {
    std::cout << '[' << std::uint_least32_t(c) << ']';
  }
  std::cout << '\n';

  return 0;
}


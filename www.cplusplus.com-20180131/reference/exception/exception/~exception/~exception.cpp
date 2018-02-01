// exception virtual destructor
#include <iostream>       // std::cout
#include <exception>      // std::exception
#include <cstring>        // std::strlen, std::strcpy

// text_exception uses a dynamically-allocated internal c-string for what():
class text_exception : public std::exception {
  char* text_;
public:
  text_exception(const char* text) {
    text_ = new char[std::strlen(text)+1]; std::strcpy (text_,text);
  }
  text_exception(const text_exception& e) {
    text_ = new char[std::strlen(e.text_)+1]; std::strcpy (text_,e.text_);
  }
  ~text_exception() throw() {
    delete[] text_;
  }
  const char* what() const noexcept {return text_;}
};

int main () {
  try {
      throw text_exception("custom text");
  } catch (std::exception& ex) {
      std::cout << ex.what();
  }
  return 0;
}


// bad_array_new_length example
#include <iostream>     // std::cout
#include <exception>    // std::exception
#include <new>          // std::bad_array_new_length

int main() {
  try {
    int* p = new int[-1];
  } catch (std::bad_array_new_length& e) {
    std::cerr << "bad_array_new_length caught: " << e.what() << '\n';
  } catch (std::exception& e) {   // older compilers may throw other exceptions:
    std::cerr << "some other standard exception caught: " << e.what() << '\n';
  }
}


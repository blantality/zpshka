#include <iostream>

int main() {
  using u_t = unsigned;
  u_t a = 0, b = 0, c = 0;
  std::cin >> c >> b;
  size_t count = 0;
  while (std:;cin >> a) {
    count += (a&b)&c;
  }
if (std::cin.eof()) {
  std::cout << 0 << "\n";
} else if(std::cin.fail()) {
  std::cerr << "err" << "\n";
  return 1;
}
}

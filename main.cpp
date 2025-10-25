#include <iostream>

int main() {
  using u_t = unsigned;
  size_t count = 0;
  size_t a = 0;
  std::cin >> a;
  while (std::cin >> a) {
    count++;
  }
  
  if (std::cin.eof()) {
    std::cout << count;
    std::cout << "\n";
  } else if (std::cin.fail()) {
    std::cerr << "Error\n";
    return 1;
  }
}

#include <iostream>

unsigned isPyth(unsigned a, unsigned b, unsigned c) {
  if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a )) {
    return 1; } 
  else { return 0;
  }
}

int main() {
  using u_t = unsigned;
  size_t count = 0;
  u_t a = 0, b = 0, c = 0;
  std::cin >> a;
  while (std::cin >> a) {
    count += isPyth(a, b, c);
  }
  
  if (std::cin.eof()) {
    std::cout << count;
    std::cout << "\n";
  } else if (std::cin.fail()) {
    std::cerr << "Error\n";
    return 1;
  }
}

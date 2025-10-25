#include <iostream>
#include <limits>

bool isOverflow(unsigned a, unsigned b) {
  if (a != 0 && a > std::numeric_limits<unsigned>::max() / b) {
    return true;
  }  
  return false;
}

unsigned isPyth(unsigned a, unsigned b, unsigned c, bool &overflow) {
  if (isOverflow(a, a) || isOverflow(b, b) || isOverflow(c, c)) {
    overflow = true;
    return 0;
  }

  unsigned aa = a * a;
  unsigned bb = b * b;
  unsigned cc = c * c;

  if (aa > std::numeric_limits<unsigned>::max() - bb || 
      aa > std::numeric_limits<unsigned>::max() - cc || 
      bb > std::numeric_limits<unsigned>::max() - cc) {
    overflow = true;
    return 0;
  }

  return (aa + bb == cc) || (aa + cc == bb) || (bb + cc == aa);
}

int main() {
  using u_t = unsigned;
  size_t count = 0;
  u_t a = 0, b = 0, c = 0;
  bool overflow = false;

  while (true) {
    if (!(std::cin >> a >> b >> c)) {
      if (std::cin.eof()) {
          std::cerr << "Error: invalid input\n";
          return 1;
      } else {
        std::cerr << "Error: nvalid input\n";
        return 1;
      }
    }

    count += isPyth(a, b, c, overflow);

    if (overflow) {
      std::cerr << "Error: overflow\n";
      return 2;
    }
  }

  std::cout << count << "\n";
  return 0;

}












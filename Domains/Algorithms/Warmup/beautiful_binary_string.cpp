#include <iostream>
#include <tuple>

// min_changes changes all instances of 010 to 011
// and returns the number of changes made
int min_changes(std::string s);

int min_changes(std::string s) {
  int c;
  for (c = 0;; c++) {
    size_t i = s.find("010");
    if (i == -1) {
      return c;
    }
    s[i + 2] = '1';
  }
}

int main() {
  // read & return number/string as tuple
  auto input = [&]() -> std::tuple<int, std::string> {
    int i;
    std::cin >> i;
    std::string str;
    std::cin >> str;
    return std::make_tuple(i, str);
  };

  // loop while stdin is open
  while (!std::cin.eof()) {
    // pass string to min_changes, print output
    std::cout << min_changes(std::get<1>(input())) << std::endl;
  }
}
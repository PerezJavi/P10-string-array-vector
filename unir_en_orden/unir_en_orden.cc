#include <iostream>
#include <vector>

std::vector<int> ConcatenateVectors(const std::vector<int>& vec1, const std::vector<int>& vec2) {
  std::vector<int> result = vec1;
  result.insert(result.end(), vec2.begin(), vec2.end());
  return result;
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Uso: " << argv[0] << " <size1> <elem1_1> <elem1_2> ... <elem1_size1> <size2> <elem2_1> <elem2_2> ... <elem2_size2>" << std::endl;
    return 1;
  }

  int size1 = std::stoi(argv[1]);
  std::vector<int> vec1;
  for (int i = 2; i < 2 + size1; ++i) {
    vec1.push_back(std::stoi(argv[i]));
  }

  int size2 = std::stoi(argv[2 + size1]);
  std::vector<int> vec2;
  for (int i = 3 + size1; i < 3 + size1 + size2; ++i) {
    vec2.push_back(std::stoi(argv[i]));
  }

  std::vector<int> concatenated_vector = ConcatenateVectors(vec1, vec2);

  std::cout << "Result: ";
  for (const auto& value : concatenated_vector) {
    std::cout << value << " ";
  }
  std::cout << std::endl;

  return 0;
}
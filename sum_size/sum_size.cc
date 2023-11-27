#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <sstream>

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::vector<double> result;
  
  // Inicializa la semilla para la generación de números aleatorios
  std::srand(static_cast<unsigned int>(std::time(0)));

  for (int i = 0; i < size; ++i) {
    double random_value = lower + static_cast<double>(std::rand()) / RAND_MAX * (upper - lower);
    result.push_back(random_value);
  }

  return result;
}

double ReduceSum(const std::vector<double>& vec) {
  double sum = 0.0;
  for (const auto& value : vec) {
    sum += value;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  if (argc < 4) {
    std::cerr << "Uso: " << argv[0] << " <size> <lower> <upper>" << std::endl;
    return 1;
  }

  const int size = std::stoi(argv[1]);
  const double lower = std::stod(argv[2]);
  const double upper = std::stod(argv[3]);

  std::vector<double> my_vector = GenerateVector(size, lower, upper);

  std::cout << "Input: ";
  for (const auto& value : my_vector) {
    std::cout << value << " ";
  }
  
  std::cout << "\nOutput: " << ReduceSum(my_vector) << "\n";

  return 0;
}

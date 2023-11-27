#include <iostream>
#include <vector>
#include <limits>   // Para std::numeric_limits

std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  std::vector<double> result;

  // Inicializa la semilla para la generación de números aleatorios
  std::srand(static_cast<unsigned int>(time(0)));

  for (int i = 0; i < size; ++i) {
    double random_value = lower + static_cast<double>(std::rand()) / RAND_MAX * (upper - lower);
    result.push_back(random_value);
  }

  return result;
}

void CalculateStats(const std::vector<double>& vec, double& max, double& min, double& avg) {
  // Manejar el caso de un vector vacío
  if (vec.empty()) {
    max = std::numeric_limits<double>::quiet_NaN();
    min = std::numeric_limits<double>::quiet_NaN();
    avg = std::numeric_limits<double>::quiet_NaN();
    return;
  }

  max = vec[0];
  min = vec[0];
  avg = 0.0;

  for (const auto& value : vec) {
    // Encontrar el máximo
    if (value > max) {
      max = value;
    }

    // Encontrar el mínimo
    if (value < min) {
      min = value;
    }

    // Sumar para el promedio
    avg += value;
  }

  // Calcular el promedio
  avg /= static_cast<double>(vec.size());
}

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cerr << "Uso: " << argv[0] << " <value1> <value2> ... <valueN>" << std::endl;
    return 1;
  }

  std::vector<double> input_vector;
  for (int i = 1; i < argc; ++i) {
    input_vector.push_back(std::stod(argv[i]));
  }

  double max, min, avg;

  CalculateStats(input_vector, max, min, avg);

  std::cout << "Max: " << max << "\n";
  std::cout << "Min: " << min << "\n";
  std::cout << "Avg: " << avg << "\n";

  return 0;
}
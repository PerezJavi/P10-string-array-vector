#include <vector>

int position_maximum(const std::vector<double>& v, int m) {
  double max = v[0];
  int max_position = 0;
  for (int i = 1; i <= m; ++i) {
    if (v[i] > max) {
      max = v[i];
      max_position = i;
    }
  }
  return max_position;
}
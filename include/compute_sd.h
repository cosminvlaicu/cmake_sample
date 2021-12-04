#include <queue>
#include <vector>
#include <algorithm>
#include <numeric>
#include "math.h"

template<class T>
float calculateSD(T& container) {
  float standardDeviation = 0.0;
  float mean = (float)std::accumulate(container.begin(), container.end(), 0) / container.size();
  for(auto elem : container)
      standardDeviation += (elem - mean)*(elem - mean);
  return sqrt(standardDeviation / container.size());
}
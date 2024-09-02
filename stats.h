#include <vector>

  struct Stats
	{
		double min;
		double max;
		double average;

	};
namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
  
    Stats ComputeStatistics(const std::vector<double>& );
}

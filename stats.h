#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats
	{
		double min;
		double max;
		double average;

	};
    Stats ComputeStatistics(const std::vector<double>& );
}

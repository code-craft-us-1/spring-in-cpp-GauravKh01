#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>& vec) {
    //Implement statistics here
    Stats objStat;
    objStat.min= *min_element(vec.begin(), vec.end());
    objStat.max= *max_element(vec.begin(), vec.end())
    objStat.average = accumulate( vec.begin(), vec.end(), 0.0)/vec.size();

    return objStat;
}

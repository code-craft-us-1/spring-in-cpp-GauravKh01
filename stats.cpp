#include "stats.h"
#include <numeric>

Stats Statistics::ComputeStatistics(const std::vector<double>& vec) {
    //Implement statistics here
    Stats objStruct;
    //objStat.min= *min_element(vec.begin(), vec.end());
    //objStat.max= *max_element(vec.begin(), vec.end());
    //objStat.average = accumulate( vec.begin(), vec.end(), 0.0)/vec.size();

     double sum = 0;
     objStruct.min = objStruct.max = sum = data[0];

     for (int i = 1; i < data.size(); i++)
     {
         if (data[i] < objStruct.min)
             objStruct.min = data[i];
         if (data[i] > objStruct.max)
             objStruct.max = data[i];
    
         sum = sum + data[i];
     }

     objStruct.average = sum / data.size();

    return objStat;
}

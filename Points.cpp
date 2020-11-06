#include <string>

#include "Points.h"





float Points::calcul(const Points& p)
{
    float result;

    result = sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
    
    std::cout << "distance : ";
    
    return result;
}
#include <iostream>
#include "src/recursion.cpp"
#include <vector>
#include <memory>
int main()
{
    auto array=std::shared_ptr<std::vector<double>>(new  std::vector<double >{1,2,3,4,5,6,7,8,9,10});
    //double *array =new double [10]{1,2,3,4,5,10,7,8,9,10};
    std::cout<<avg_recu(*array,array->size(),9);
    return 0;
}


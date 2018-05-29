//p6-04-modern.cpp - меняются тип и количество параметров функции
#include <iostream>
#include <initializer_list>
#include <cassert>

template<typename x_Value> auto
minimum(::std::initializer_list<x_Value> items)
{
    assert(0 < items.size());
    auto p_item{items.begin()};
    auto p_min{p_item};
    for(;;)
    {
        ++p_item;
        if(items.end() == p_item)
        {
            break;
        }
        if(*p_item < *p_min)
        {
            p_min = p_item;
        }
    }
    return *p_min;
}

int main()
{
  ::std::cout << "\n\tminimum<long>(3, 10L, 20L, 30L) = " <<
    minimum<long>({3L, 10L, 20L, 30L});
  ::std::cout << "\n\tminimum<int>(4, 11, 3, 10, 2, 4) = " <<
    minimum<int>({4,  11, 3, 10, 2, 4});
  return 0;
}

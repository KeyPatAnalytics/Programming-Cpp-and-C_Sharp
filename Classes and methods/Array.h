#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#include<cstddef>
#include<iostream>
template <typename ELEMENT>
class Array{
    ELEMENT = rawArray;

    Array(size_t Size);
    ~Array();

    size_t getsize() const;
    ELEMENT& operator[](size_t position) const;

    std::ostream& operator<<(std::ostream& os, Array<ELEMENT> arraay)
};

#endif // ARRAY_H_INCLUDED

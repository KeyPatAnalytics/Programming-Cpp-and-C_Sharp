#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED
#include <cstring>
/**#define mini(a,b) ((a)<(b)? (a):(b))**/

template <typename T>
    T& mini(T const& first, T const& second)
    {
        return const_cast<T&>(first<second? first:second);
    } /**const_cast permet d'annuler l'effet de const
        const_cast < new_type > ( expression )**/
inline const char* mini(const char* cst1, const char* cst2)
{
    return (strcmp(cst1,cst2)<0)? cst1:cst2;
}

#endif // TEMPLATE_H_INCLUDED

#include "Floor.hpp"
#include <iostream>

Floor::Floor()
{
    _lst = new AMateria*[1];
    _lst[0] = NULL;
}

Floor::Floor(const Floor& original)
{
    if (this == &original)
       return ;
    *this = original;
}

Floor::~Floor()
{
    int i = 0;
    while (_lst[i] != NULL)
    {
        delete _lst[i];
        i++;
    }
    delete[] _lst;
}

Floor&	Floor::operator=(const Floor& original)
{
    if (this == &original)
        return (*this);
    int i = 0;
    while (original._lst[i] != NULL)
        i++;
    delete this->_lst;
    this->_lst = new AMateria*[i + 1];
    for (int j = 0; j < i; ++j)
        this->_lst[j] = original._lst[j];
    this->_lst[i] = NULL;
    return (*this);
}

void Floor::addElement(AMateria** element)
{
    int i = 0;
    while (_lst[i] != NULL)
        i++;

    AMateria** tmp = new AMateria*[i + 2];
    for (int j = 0; j < i; j++)
        tmp[j] = _lst[j];

    tmp[i] = *element;
    tmp[i + 1] = NULL;

    delete[] _lst;
    _lst = tmp;
}

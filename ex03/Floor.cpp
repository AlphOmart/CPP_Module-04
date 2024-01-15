#include "Floor.hpp"
#include <iostream>

Floor::Floor()
{
    _lst = new AMateria*[1];
    _lst[0] = NULL;
    int i = 0;
    while (_lst[i] != NULL)
        std::cout << _lst[i]->getType() << std::endl;
}

Floor::Floor(const Floor& original)
{
    (void)original;
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

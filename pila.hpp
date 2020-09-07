#pragma once
#include <deque>
template <typename T>
class pila
{
public:
    T &arriba() { return pila.front(); }
    void insertar(const T &empujarvalor) { pila.push_front(empujarvalor); }
    void extraer() { pila.pop_front(); }
    bool estavacia() const {return pila.empty();} 
    size_t_size() const { return pila.size(); }

private:
    std::deque<T> pila;
};
#include "Singleton.hpp"


namespace sir{
namespace PSystem{


template <class T> T Singleton<T>::m_i=T();


template <class T>  T& Singleton<T>::Instance()
{
        return m_i;
}


}}

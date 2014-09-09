#ifndef SINGLETON_H
#define SINGLETON_H

namespace sir{
namespace PSystem{

template <class T>
class Singleton
{

public:
	static T& Instance();
protected:
	static T m_i;

private:
        T& operator= (const T&){}
};

}}

#include "Singleton.tpp"

#endif // SINGLETON_H

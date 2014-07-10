/* 
 * File:   Vector2.hpp
 * Author: STEVE
 *
 * Created on 31 janvier 2014, 15:19
 */

#ifndef VECTOR2_HPP
#define	VECTOR2_HPP

#include <math.h>
namespace sir{
namespace PSystem{
    
template<typename Type>
class Vector2 {
public:
    Vector2(Type x = 0, Type y = 0);
    ~Vector2() {};
 
    void rotate( const Type angle );
    Type magnitude() const;
    Type normalize();
    Type dotProduct( const Vector2& v2 ) const;
    Type crossProduct( const Vector2& v2 ) const;
    Type distance( const Vector2& v1) const;
 
    static Vector2 Zero();
    
 
    Vector2& operator= ( const Vector2& v2 );
 
    Vector2& operator+= ( const Vector2& v2 );
    Vector2& operator-= ( const Vector2& v2 );
    Vector2& operator*= ( const Type scalar);
    Vector2& operator/= ( const Type scalar);
 
    const Vector2 operator+( const Vector2 &v2 ) const;
    const Vector2 operator-( const Vector2 &v2 ) const;
    const Vector2 operator*( const Type scalar ) const;
    const Vector2 operator/( const Type scalar ) const;
 
    bool operator== ( const Vector2& v2 ) const;
    bool operator!= ( const Vector2& v2 ) const;
 
public:
    Type x, y;

};

}//PSystem
}//sir

#include "Vector2.tpp"



/* Recurent vector */
namespace sir{
namespace PSystem{
    
typedef class Vector2<int> Vector2i;
typedef class Vector2<float> Vector2f;


}//PSystem
}//sir

#endif	/* VECTOR2_HPP */


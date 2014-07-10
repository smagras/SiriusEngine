/* 
 * File:   Vector2<Type>.cpp
 * Author: STEVE
 * 
 * Created on 31 janvier 2014, 15:19
 */


namespace sir{
namespace PSystem{
    

//-----------------------------------------------------------------------------
// Purpose: Constructor
//-----------------------------------------------------------------------------
template<typename Type>
Vector2<Type>::Vector2( Type x, Type y )
{
    this->x = x;
    this->y = y;
}
 
//-----------------------------------------------------------------------------
// Purpose: Rotate a vector
//-----------------------------------------------------------------------------
template<typename Type>
void Vector2<Type>::rotate( const Type angle )
{
    Type xt = (x * cosf(angle)) - (y * sinf(angle));
    Type yt = (y * cosf(angle)) + (x * sinf(angle));
    x = xt;
    y = yt;
}
 
//-----------------------------------------------------------------------------
// Purpose: Get vector magnitude
//-----------------------------------------------------------------------------
template<typename Type>
Type Vector2<Type>::magnitude() const
{
    return sqrtf(x * x + y * y);
}
 
//-----------------------------------------------------------------------------
// Purpose: Convert vector to a unit vector and return previous magnitude
//-----------------------------------------------------------------------------
template<typename Type>
Type Vector2<Type>::normalize()
{
    Type mag = magnitude();
 
    if(mag != 0.0)
    {
        x /= mag;
        y /= mag;
    }
 
    return mag;
}
 
//-----------------------------------------------------------------------------
// Purpose: Dot Product
//-----------------------------------------------------------------------------
template<typename Type>
Type Vector2<Type>::dotProduct( const Vector2<Type> &v2 ) const
{
    return (x * v2.x) + (y * v2.y);
}
 
//-----------------------------------------------------------------------------
// Purpose: Cross Product
//-----------------------------------------------------------------------------

template<typename Type>
Type Vector2<Type>::crossProduct( const Vector2<Type> &v2 ) const
{
    return (x * v2.y) - (y * v2.x);
}
 
//-----------------------------------------------------------------------------
// Purpose: Return an empty vector
//-----------------------------------------------------------------------------
template<typename Type>
Vector2<Type> Vector2<Type>::Zero()
{
    return Vector2<Type>(0, 0);
}
 
//-----------------------------------------------------------------------------
// Purpose: Get distance between two vectors
//-----------------------------------------------------------------------------
template<typename Type>
Type Vector2<Type>::distance( const Vector2<Type>& v2) const
{
    return sqrtf( pow((v2.x - x), 2 ) + pow((v2.y - y), 2) );
}
 
template<typename Type>
Vector2<Type>& Vector2<Type>::operator= ( const Vector2<Type>& v2 )
{
    if (this == &v2)
        return *this;
 
    x = v2.x;
    y = v2.y;
 
    return *this;
}
 
template<typename Type>
Vector2<Type>& Vector2<Type>::operator+= ( const Vector2<Type>& v2 )
{
    x += v2.x;
    y += v2.y;
 
    return *this;
}
 
template<typename Type>
Vector2<Type>& Vector2<Type>::operator-= ( const Vector2<Type>& v2 )
{
    x -= v2.x;
    y -= v2.y;
 
    return *this;
}

template<typename Type>
Vector2<Type>& Vector2<Type>::operator*= ( const Type scalar )
{
    x *= scalar;
    y *= scalar;
 
    return *this;
}
 
template<typename Type>
Vector2<Type>& Vector2<Type>::operator/= ( const Type scalar )
{
    x /= scalar;
    y /= scalar;
 
    return *this;
}
 
template<typename Type>
const Vector2<Type> Vector2<Type>::operator+( const Vector2<Type> &v2 ) const
{
    return Vector2<Type>(*this) += v2;
}
 
template<typename Type>
const Vector2<Type> Vector2<Type>::operator-( const Vector2<Type> &v2 ) const
{
    return Vector2<Type>(*this) -= v2;
}
 
template<typename Type>
const Vector2<Type> Vector2<Type>::operator*( const Type scalar ) const
{
    return Vector2<Type>(*this) *= scalar;
}
 
template<typename Type>
const Vector2<Type> Vector2<Type>::operator/( const Type scalar ) const
{
    return Vector2<Type>(*this) /= scalar;
}
 
template<typename Type>
bool Vector2<Type>::operator== ( const Vector2<Type>& v2 ) const
{
    return ((x == v2.x) && (y == v2.y));
}
 
template<typename Type>
bool Vector2<Type>::operator!= ( const Vector2<Type>& v2 ) const
{
    return !((x == v2.x) && (y == v2.y));
}

}//PSystem
}//sir


#ifndef Fixed_HPP
#define Fixed_HPP

#include <iostream>

class Fixed{
    private:
        int integer;
        static const int fractional = 8;
    public:
        Fixed();
        Fixed(const Fixed & other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        Fixed(const int value);
        Fixed(const float value);
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
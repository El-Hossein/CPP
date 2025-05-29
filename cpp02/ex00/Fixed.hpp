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
        ~Fixed();
        Fixed& operator=(const Fixed& other);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
#endif
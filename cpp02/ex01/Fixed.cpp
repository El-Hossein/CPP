#include "Fixed.hpp"
Fixed::Fixed() : integer(0){
    std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & other){

    std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(){
    std::cout << "destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        integer = other.getRawBits();
    }
    return *this;
}


int Fixed::getRawBits( void ) const{
    // std::cout << "getRawBits member function called" << std::endl;
    return integer;
}

void Fixed::setRawBits( int const raw ){
    integer = raw;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    integer = value << fractional;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    integer = roundf(value * (1 << fractional));
}

float Fixed::toFloat(void) const {
    // return (float)integer / (float)(1 << fractional);
    return integer * 1.0 / (1 << fractional);
}

int Fixed::toInt(void) const {
    return integer >> fractional;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

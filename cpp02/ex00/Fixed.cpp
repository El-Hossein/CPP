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
    std::cout << "getRawBits member function called" << std::endl;
    return integer;
}

void Fixed::setRawBits( int const raw ){
    integer = raw;
}

#include "Fixed.hpp"
Fixed::Fixed() : integer(0){
    // std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & other){

    // std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(){
    // std::cout << "destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
    // std::cout << "Copy assignment operator called" << std::endl;
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
    // std::cout << "Int constructor called" << std::endl;
    integer = value << fractional;
}

Fixed::Fixed(const float value) {
    // std::cout << "Float constructor called" << std::endl;
    integer = roundf(value * (1 << fractional));
}

float Fixed::toFloat(void) const {
    return (float)(integer) / (1 << fractional);
}

int Fixed::toInt(void) const {
    return integer >> fractional;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}


bool Fixed::operator>(const Fixed &other) const {
    return integer > other.integer;
}

bool Fixed::operator<(const Fixed &other) const {
    return integer < other.integer;
}

bool Fixed::operator>=(const Fixed &other) const {
    return integer >= other.integer;
}

bool Fixed::operator<=(const Fixed &other) const {
    return integer <= other.integer;
}

bool Fixed::operator==(const Fixed &other) const {
    return integer == other.integer;
}

bool Fixed::operator!=(const Fixed &other) const {
    return integer != other.integer;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.setRawBits(integer + other.integer);
    return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed result;
    result.setRawBits(integer - other.integer);
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.setRawBits((integer * other.integer) >> fractional);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    Fixed result;
    result.setRawBits((integer << fractional) / other.integer);
    return result;
}

Fixed &Fixed::operator++() {
    // Pre-increment
    integer++;
    return *this;
}

Fixed Fixed::operator++(int) {
    // Post-increment
    Fixed temp(*this);
    integer++;
    return temp;
}

Fixed &Fixed::operator--() {
    // Pre-decrement
    integer--;
    return *this;
}

Fixed Fixed::operator--(int) {
    // Post-increment
    Fixed temp(*this);
    integer--;
    return temp;
}


Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

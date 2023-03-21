#pragma once
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed {

    private:
        int _num;
        static const int    _bits;
    public:
        Fixed();    //default
        Fixed( const int i );
        Fixed( const float f );
        ~Fixed();

        Fixed( const Fixed  &copy );

        Fixed &operator=( const Fixed &assign );

        Fixed operator+( const Fixed &num );
        Fixed operator-( const Fixed &num );
        Fixed operator*( const Fixed &num );
        Fixed operator/( const Fixed &num );

        bool	operator<( const Fixed &compare ) const;
        bool	operator>( const Fixed &compare ) const;
        bool	operator<=( const Fixed &compare ) const;
        bool	operator>=( const Fixed &compare ) const;
        bool	operator==( const Fixed &compare ) const;
        bool	operator!=( const Fixed &compare ) const;
		
        Fixed operator--( void ); //prefix
        Fixed operator--( int );  //postfix
        Fixed operator++( void ); //prefix
        Fixed operator++( int ); //postfix

        float toFloat( void ) const;
        int toInt( void ) const;

        int	getRawBits( void ) const;
		void	setRawBits( int const raw );

		static const Fixed &min( Fixed &num1, Fixed &num2 );
		static const Fixed &min( const Fixed &num1, const Fixed &num2 );
		static const Fixed &max( Fixed &num1, Fixed &num2 );
		static const Fixed &max( const Fixed &num1, const Fixed &num2 );
};

std::ostream &operator<<( std::ostream &out, const Fixed &insert );

#endif

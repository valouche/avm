// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Int8.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vdiridol <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/28 14:20:12 by vdiridol          #+#    #+#             //
//   Updated: 2015/01/28 14:33:52 by vdiridol         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Int8.hpp"

/* CORE */
Int8::Int8(void) {
	return ;
}
Int8::Int8(Int8 const &src) {
	*this = src;
	return ;
}
Int8::Int8(type type) : _type(type)
{
	return ;
}
Int8::~Int8(void) {
	return ;
}

virtual int				getPrecision( void ) const;
virtual eOperandType	getType( void ) const;

virtual IOperand const * operator+( IOperand const & rhs ) const;
virtual IOperand const * operator-( IOperand const & rhs ) const;
virtual IOperand const * operator*( IOperand const & rhs ) const;
virtual IOperand const * operator/( IOperand const & rhs ) const;
virtual IOperand const * operator%( IOperand const & rhs ) const;

virtual std::string const & toString( void ) const;

/* Operator Overload */
Int8 &Int8::operator=(Int8 const &rhs) {
	this->_type = rhs.getType();
	return (*this);
}

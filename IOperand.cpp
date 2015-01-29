// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IOperand.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vdiridol <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/28 15:22:17 by vdiridol          #+#    #+#             //
//   Updated: 2015/01/28 15:47:45 by vdiridol         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "IOperand.hpp"

/* CORE */
IOperand::IOperand(void) {
	return ;
}
IOperand::IOperand(IOperand const &src) {
	*this = src;
	return ;
}
IOperand::IOperand( ) : _()
{
	return ;
}
IOperand::~IOperand(void) {
	return ;
}

IOperand const * IOperand::createOperand( eOperandType type, std::string const & value ) const {
	array[type](value);
}

IOperand const * IOperand::createInt8( std::string const & value ) const;

IOperand const *  IOperand::createInt16( std::string const & value ) const;

IOperand const *  IOperand::createInt32( std::string const & value ) const;

IOperand const *  IOperand::createFloat( std::string const & value ) const;

IOperand const *  IOperand::createDouble( std::string const & value ) const;

/* Operator Overload */
IOperand &IOperand::operator=(IOperand const &rhs) {
	this->_ = rhs.get();
	return (*this);
}

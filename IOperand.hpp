// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   IOperand.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vdiridol <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/28 13:59:44 by vdiridol          #+#    #+#             //
//   Updated: 2015/01/28 15:49:04 by vdiridol         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef IOPERAND_HPP
# define IOPERAND_HPP

# include <iostream>
# include <array>

class IOperand {

protected:

	int					_precision;

	IOperand const * createInt8( std::string const & value ) const;
	IOperand const * createInt16( std::string const & value ) const;
	IOperand const * createInt32( std::string const & value ) const;
	IOperand const * createFloat( std::string const & value ) const;
	IOperand const * createDouble( std::string const & value ) const;

	Array<IOperand const *>	_array[] {
		IOperand::createInt8(std::string const & value);
		IOperand::createInt16(std::string const & value);
		IOperand::createInt32(std::string const & value);
		IOperand::createIntFloat(std::string const & value);
		IOperand::createIntDouble(std::string const & value);
	};

public:

	virtual int getPrecision( void ) const = 0; // Precision of the type of the instance
	virtual eOperandType getType( void ) const = 0; // Type of the instance

	IOperand const * createOperand(eOperandType type, std::string const & value) const;
	virtual IOperand const * operator+( IOperand const & rhs ) const = 0; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const = 0; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const = 0; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const = 0; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const = 0; // Modulo

	virtual std::string const & toString( void ) const = 0; // String representation of the instance

	virtual ~IOperand( void ) {}

};

#endif

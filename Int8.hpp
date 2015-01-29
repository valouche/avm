// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Int8.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: vdiridol <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/28 14:14:19 by vdiridol          #+#    #+#             //
//   Updated: 2015/01/28 15:04:17 by vdiridol         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INT8_HPP
# define INT8_HPP

# include <iostream>

class Int8  public: IOperand {

public:

	Int8(void);
	Int8(const Int8 &src);
	Int8(eOperandType type);
	virtual	~Int8(void);

	virtual int				getPrecision( void ) const; // Precision of the type of the instance
	virtual eOperandType	getType( void ) const; // Type of the instance

	virtual IOperand const * operator+( IOperand const & rhs ) const; // Sum
	virtual IOperand const * operator-( IOperand const & rhs ) const; // Difference
	virtual IOperand const * operator*( IOperand const & rhs ) const; // Product
	virtual IOperand const * operator/( IOperand const & rhs ) const; // Quotient
	virtual IOperand const * operator%( IOperand const & rhs ) const; // Modulo

	virtual std::string const & toString( void ) const; // String representation of the instance

};

#endif

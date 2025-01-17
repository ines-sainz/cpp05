/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:29:39 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/17 11:29:40 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void Form::beSigned( Bureaucrat bureaucrat )
{
	if ( this->gradeToSign < bureaucrat.getGrade())
		throw (Form::GradeTooLowException());
	if (this->isSigned == 1)
		std::cout << "Already signed Form" << std::endl;
	this->isSigned = 1;
}

const std::string	Form::getName() const
{
	return (this->name);
}

const int Form::getGradeToSign() const
{
	return (this->gradeToSign);
}

const int Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

Form& Form::operator=( const Form& before )
{
	(std::string)this->name = before.getName();
	const_cast<int&>(this->gradeToExecute) = before.getGradeToExecute();
	const_cast<int&>(this->gradeToSign) = before.getGradeToSign();
	this->isSigned = before.isSigned;
	return (*this);
}

Form::Form( const Form& before ) : name(before.name), gradeToSign(before.gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToExecute < 1 || gradeToSign < 1)
		throw (Form::GradeTooHighException());
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw (Form::GradeTooLowException());
	*this = before;
}

Form::Form( std::string name, int gradeToSign, int gradeToExecute ) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form() : name(""), gradeToExecute(150), gradeToSign(150)
{
	this->isSigned = 0;
	std::cout << "Default Form Constructor called" << std::endl;
}

Form::~Form()
{
	std::cout << "Default Form Constructor called" << std::endl;
}

std::ostream&	operator<<( std::ostream &out, Form const &classToPrint )
{
	out << classToPrint.getName() << ", Form grade to sign: " << classToPrint.getGradeToSign() << " grade to execute: " << classToPrint.getGradeToExecute() << std::endl;
}

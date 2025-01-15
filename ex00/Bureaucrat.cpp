/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:31:12 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/15 12:31:14 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



void	Bureaucrat::decrementGrade()
{
	if (this->grade < 150)
		this->grade++;
	std::cout << "Can't decrement Bureaucrat grade" << std::endl;
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}
Bureaucrat& Bureaucrat::operator=( const Bureaucrat& before )
{
	std::cout << "Copy Assigment operator called" << std::endl;
	(std::string)this->name = before.getName();
	this->grade = before.getGrade();
}

Bureaucrat::Bureaucrat( const Bureaucrat& before )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = before;
}

Bureaucrat::Bureaucrat( const Bureaucrat& before )
{
	*this = before;
}

Bureaucrat::Bureaucrat( void )
{
	std::cout << "Default Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat Constructor called" << std::endl;
}

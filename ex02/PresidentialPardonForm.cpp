/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:41:00 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/20 15:41:02 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include  "Bureaucrat.hpp"

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == 0)
	{
		std::cout << "Form is not signed" << std::endl;
		return ;
	}
	if (this->gradeToExecute < executor.getGrade())
	{
		throw(AForm::GradeTooLowException());
	}
	std::cout << "Bureaucrat " << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& before)
{
	std::cout << "Copy PresidentialPardonForm Assigment operator called" << std::endl;
	this->gradeToSign = before.gradeToSign;
	this->gradeToExecute = before.gradeToExecute;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& before )
{
	std::cout << "Copy PresidentialPardonForm Constructor called" << std::endl;
	*this = before;
}

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PresidentialPardonForm", 25, 5)
{
	this->gradeToSign = 25;
	this->gradeToExecute = 5;
	std::cout << "Default PresidentialPardonForm Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default PresidentialPardonForm Destructor called" << std::endl;
}

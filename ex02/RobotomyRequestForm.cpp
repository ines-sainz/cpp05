/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:41:16 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/20 15:41:17 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	std::cout << "*Making drilling noises*\n";

}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& before )
{
	std::cout << "Copy RobotomyRequestForm Assigment Operator called" << std::endl;
	this->gradeToExecute = before.gradeToExecute;
	this->gradeToSign = before.gradeToSign;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& before )
{
	std::cout << "Copy RobotomyRequestForm Constructor called" << std::endl;
	*this = before;
}

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RobotomyRequestForm", 145, 137)
{
	this->gradeToSign = 72;
	this->gradeToExecute = 45;
	std::cout << "Default RobotomyRequestForm Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default RobotomyRequestForm Destructor called" << std::endl;
}

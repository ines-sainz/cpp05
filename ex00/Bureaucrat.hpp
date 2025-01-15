/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:31:19 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/15 12:31:21 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

	public:
		void		incrementGrade();
		void		decrementGrade();
		int			getGrade() const;
		std::string	getName() const;
		Bureaucrat&	operator=( const Bureaucrat& before);
		Bureaucrat( const Bureaucrat& before );
		Bureaucrat( void );
		~Bureaucrat();
};

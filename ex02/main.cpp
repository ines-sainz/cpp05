/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:31:26 by isainz-r          #+#    #+#             */
/*   Updated: 2025/01/20 15:40:43 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "\n";

	try
	{
		Bureaucrat	b2("b2", 1);
		PresidentialPardonForm		f2;

		b2.signForm(f2);
		b2.signForm(f2);
		b2;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

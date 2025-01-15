/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:19:19 by rabouzia          #+#    #+#             */
/*   Updated: 2024/11/30 16:28:26 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP 
#define FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		const int _signGrade;
		const int _executeGrade;
		bool _isSigned;

	public:
		Form();
		Form(const Form& form);
		Form(std::string name, int signGrade, int executeGrade);
		Form& operator=(const Form& form);
		~Form();

		std::string getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool isSigned() const;

		void beSigned(const Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
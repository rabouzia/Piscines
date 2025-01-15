/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/30 16:29:22 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "BureauCrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(Bureaucrat::lowestGrade) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
	: _name(bureaucrat._name), _grade(bureaucrat._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& bureaucrat) {
	if (this == &bureaucrat)
		return *this;
	_grade = bureaucrat._grade;
	*const_cast<std::string*>(&_name) = bureaucrat._name; // Permet de copier le nom meme si il est 'const'
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return _name; }
int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::signForm(Form& form) {
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << "." << std::endl;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cout << _name << " couldn't sign " << form.getName()
				  << " because their grade is too low." << std::endl;
	}
}

void Bureaucrat::incrementGrade() {
	if (_grade == Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	--_grade;
}

void Bureaucrat::decrementGrade() {
	if (_grade == Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
	++_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() { return "Grade too high"; }

const char* Bureaucrat::GradeTooLowException::what() const throw() { return "Grade too low"; }

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return os;
}
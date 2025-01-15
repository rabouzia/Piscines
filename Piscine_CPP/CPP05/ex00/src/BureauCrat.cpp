/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:32:27 by ramzerk           #+#    #+#             */
/*   Updated: 2024/11/26 16:57:52 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat() : _name("DefaultCrat"){
	_grade = BureauCrat::lowestGrade;
}
BureauCrat::BureauCrat(std::string name, int grade) : _name(name){
	if (grade < BureauCrat::lowestGrade)
		throw BureauCrat::GradeTooLowExecption();
	if (grade > BureauCrat::highestGrade)
		throw GradeTooHighExecption();
	else
		_grade = grade;
}

BureauCrat::BureauCrat(const BureauCrat & src) 
	: _name(src._name), _grade(src._grade){}

BureauCrat::~BureauCrat(){}

BureauCrat& BureauCrat::operator=( BureauCrat const & other ){
	if (this == &other)
		return *this;
	_grade = other._grade;
	*const_cast<std::string*>(&_name) = other._name;
	return *this;
}

std::string BureauCrat::getName() const{return _name;}

int BureauCrat::getGrade() const{return _grade;}

const char* BureauCrat::GradeTooHighExecption::what() const throw() { return "Grade too high"; }

const char* BureauCrat::GradeTooLowExecption::what() const throw() { return "Grade too low"; }

void BureauCrat::incrementGrade(){
	if (_grade == highestGrade)
		throw BureauCrat::GradeTooHighExecption();
	--_grade;
}

void BureauCrat::decrementGrade(){
	if (_grade == lowestGrade)
		throw BureauCrat::GradeTooLowExecption();
	++_grade;
}

std::ostream& operator<<(std::ostream& os, const BureauCrat& bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return os;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 15:25:33 by ramzerk           #+#    #+#             */
/*   Updated: 2024/12/24 15:25:38 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}
RPN::~RPN(){}
RPN::RPN(std::string str) : str(str){}
RPN::RPN(RPN const & src){
	*this = src;
}
RPN & RPN::operator=(RPN const & src){
	if (this != &src){
		this->str = src.str;
		this->stack = src.stack;
	}
	return *this;
}

void RPN::check_arg(std::string str)
{
	for (size_t i = 0; i < str.size(); i++){
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' \
		|| std::isdigit(str[i]) || str[i] == ' ')
			continue;
		else
			throw std::exception();
	}
}

void RPN::calculate()
{
	std::istringstream iss(this->str);
	std::string tmp;
	int a, b, c;
	check_arg(str);
	while (iss >> tmp){
		if (tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/"){
			if (this->stack.size() < 2)
				throw std::exception();
			a = this->stack.top();
			this->stack.pop();
			b = this->stack.top();
			this->stack.pop();
			if (tmp == "+")
				c = b + a;
			else if (tmp == "-")
				c = b - a;
			else if (tmp == "*")
				c = b * a;
			else if (tmp == "/"){
				if (a == 0) throw std::exception();
				c = b / a;
			}
			this->stack.push(c);
		}
		else{
			int d = std::atoi(tmp.c_str());
			if (d > 10) throw std::exception();
			this->stack.push(d);
		}
	}
	if (this->stack.size() != 1)
		throw std::exception();
	std::cout << this->stack.top() << std::endl;
}
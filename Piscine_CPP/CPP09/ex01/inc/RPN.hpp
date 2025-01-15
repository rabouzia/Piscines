/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/24 15:25:55 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <stack>
# include <cmath>
# include <sstream>
# include <iomanip>
# include <exception>

class RPN
{
private:
	std::stack<int> stack;
	std::string str;
public:
	RPN();
	RPN(std::string str);
	RPN(RPN const & src);
	RPN & operator=(RPN const & src);
	~RPN();
	void check_arg(std::string str);
	void calculate();
};

#endif
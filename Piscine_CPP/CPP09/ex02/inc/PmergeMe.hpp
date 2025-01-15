/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramzerk <ramzerk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:05:48 by rabouzia          #+#    #+#             */
/*   Updated: 2024/12/24 15:26:58 by ramzerk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include<iostream>
#include <sstream>
#include<vector>
#include<algorithm>
#include<deque>
#include<ctime>

#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[0;33m"

class PmergeMe
{
private:
	std::vector<int> vec;
	std::deque<int> deq;
	double time;
public:
	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe &operator=(PmergeMe const &src);
	~PmergeMe();

	void print(std::string str);

	void parsVector(char **av);
	void insideVector(std::string av);

	void parsDeque(char **av);
	void insideDeque(std::string av);

	void sortVector(char **av);
	void sortDeque(char **av);

	void JacobshtalNumvec(int n, std::vector<int> &jacobshtal);
	void JacobshtalNumdeq(int n, std::deque<int> &jacobshtal);
};

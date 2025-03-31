# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    spider.py                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 15:06:52 by rabouzia          #+#    #+#              #
#    Updated: 2024/05/21 09:44:16 by rabouzia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import requests

r = requests.get('https://github.com/timeline.json')

print(r.request.url)




char *ft_itoa(int n)
{
    long nb;
    char *res;
    int len;

    nb = n;
    len = n == 0;

    while(nb < 0 && ++len)
        nb = -nb;
    while(n && ++len)
        n/10;
    res = malloc(1000);
    *res = '-'
    if(!nb)
        *res= '0';
    while(n)
    {
        res[--len]= n + % 10 '0';
        nb
    }
}
int fprime(int n)
{
    int i;
    while ( n >=i++)
    {
        if ( n % i == 0)
            print i;
        i = 1;
    }
}
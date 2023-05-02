/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: michele <michele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:30:10 by michele           #+#    #+#             */
/*   Updated: 2023/05/02 15:35:10 by michele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
#include <stdio.h>

int  main(int ac, char **av)
{
    int i;
    int j;

    using std::cout;
    using std::endl;

    j = 0;
    i = 1;
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (i < ac)
        {
            while (av[i][j])
            {
                cout << (char)toupper(av[i][j]);
                j++;
            }
            j = 0;
            i++;
        }
    }
    cout << endl;
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 10:18:24 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/11 11:46:46 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
    if (ac != 4 || av[2][0] == '\0' || av[3][0] == '\0')
    {
        std :: cout << "invalid argument\n";
        return 0;
    }
    std :: string str;
    std :: ofstream replace("file.replace");
    std :: ifstream file(av[1]);
    if (file.is_open() && replace.is_open())
    {
        while (getline(file, str))
        {
            if (str.find(av[2]) != std :: string :: npos)
                replaceSubstr(&str,av[2], av[3], str.find(av[2]));
            replace << str << "\n";
        }
        file.close();
    }
    else
         std :: cout << "fail to open file\n";
    return 0;
}


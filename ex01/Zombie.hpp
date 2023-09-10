/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:20:28 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/09 18:20:29 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>
#include <string>

class Zombie
{
    private :
        std :: string name;
    public :
        Zombie();
        void announce();
        void setName(std :: string n);
};

Zombie* zombieHorde( int N, std::string name);
#endif
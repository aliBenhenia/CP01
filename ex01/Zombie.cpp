/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:20:40 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/09 18:20:41 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie :: announce()
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie :: Zombie()
{
    
}

void Zombie :: setName(std :: string n)
{
    name = n;
}
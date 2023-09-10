/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:58:15 by abenheni          #+#    #+#             */
/*   Updated: 2023/09/10 16:33:34 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB :: HumanB(std :: string n)
{
    name = n;
}

HumanB :: HumanB(std :: string n, Weapon &obj)
{
    name = n;
    weap = &obj;
}

void HumanB :: attack()
{
    std :: cout << name << " attacks with their " << weap->getType() << "\n";
}
void HumanB :: setWeapon(Weapon &obj)
{
    weap = &obj;
}
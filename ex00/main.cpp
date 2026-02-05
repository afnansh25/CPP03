/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:35:45 by marvin            #+#    #+#             */
/*   Updated: 2026/01/27 19:35:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");

	a.attack("B");
	b.takeDamage(3);
	b.beRepaired(2);

	a.takeDamage(20);
	a.attack("B");
	a.beRepaired(5);

	ClapTrap c("C");
	c.attack("X"); c.attack("X"); c.attack("X"); c.attack("X"); c.attack("X");
	c.attack("X"); c.attack("X"); c.attack("X"); c.attack("X"); c.attack("X");
	c.attack("X");

	return 0;
}

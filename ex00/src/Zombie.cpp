/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:06:35 by bazuara           #+#    #+#             */
/*   Updated: 2023/07/31 17:54:54 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.h>

// Zombie::Zombie(std::string name) : name(name) {}

Zombie::Zombie(std::string name) {
  Name = name;
}

Zombie::~Zombie() {
  std::cout << "Zombie " << Name << " has been destroyed" << std::endl;
}
void Zombie::announce() {
  std::cout << Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

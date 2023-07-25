/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunoazuara <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 17:02:12 by brunoazu          #+#    #+#             */
/*   Updated: 2023/03/02 17:04:58 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}

int main() {
    // Crear un zombie en el heap
    Zombie* zombie1 = newZombie("Alice");
    zombie1->announce();
    delete zombie1;

    // Crear un zombie en el stack
    randomChump("Bob");

    return 0;
}

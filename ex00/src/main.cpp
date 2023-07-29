/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:35:05 by bazuara           #+#    #+#             */
/*   Updated: 2023/07/29 19:44:52 by brunoazu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.h>

int main() {
  // Crear un zombie en el heap
  Zombie* zombie1 = newZombie("Alice");
  zombie1->announce();
  delete zombie1;

  // Crear un zombie en el stack
  randomChump("Bob");

  return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:35:05 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 12:10:20 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main() {
  // Crear un zombie en el heap
  Zombie* zombie1 = newZombie("Alice");
  zombie1->announce();
  delete zombie1;

  // Crear un zombie en el stack
  randomChump("Bob");

  // Check de leaks
  std::cout << "---System stopped---\n"
               "Check for leaks with 'leaks BraiiiiiiinnnzzzZ'\n"
               "Press enter when done"
            << std::endl;
  getchar();

  return 0;
}

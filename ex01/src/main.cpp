/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 19:35:05 by bazuara           #+#    #+#             */
/*   Updated: 2023/07/31 18:41:57 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <zombie.h>

int main() {
  Zombie* horde;

  horde = zombieHorde(10, "Pepe");
  horde[1].announce();
  horde[9].announce();
  delete[] horde;
  std::cout << "---System stopped---\n"
    "Check for leaks with 'leaks MoarBrainz\\!'\n"
    "Press enter when done"<< std::endl;
  getchar();
  return 0;
}

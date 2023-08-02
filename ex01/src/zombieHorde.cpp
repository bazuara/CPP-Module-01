/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:01:08 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 11:58:10 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde(int n, std::string name) {
  Zombie* horde;
  int i;

  i = 0;
  horde = new Zombie[n];
  while (i < n) {
    horde[i].setName(name);
    i++;
  }
  return horde;
}


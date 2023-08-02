/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:59:46 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 12:08:00 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_INCS_ZOMBIE_HPP_
#define EX00_INCS_ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie {
 private:
  std::string Name;

 public:
  explicit Zombie(std::string name);
  ~Zombie();
  void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif  // EX00_INCS_ZOMBIE_HPP_

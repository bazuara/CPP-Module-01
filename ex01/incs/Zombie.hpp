/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:59:46 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/02 11:56:52 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_INCS_ZOMBIE_HPP_
#define EX01_INCS_ZOMBIE_HPP_
  #include <iostream>
  #include <string>

  class Zombie {
   private:
    std::string Name;

   public:
    Zombie();
    explicit Zombie(std::string name);
    ~Zombie();
    void setName(std::string name);
    void announce();
  };

  Zombie* zombieHorde(int n, std::string name);

#endif  // EX01_INCS_ZOMBIE_HPP_

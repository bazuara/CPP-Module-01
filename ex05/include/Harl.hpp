/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:34:48 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/05 20:47:40 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP_
#define HARL_HPP_

#include <string>
#include <iostream>

class Harl {
 public:
  Harl();
  ~Harl();
  void complain(std::string level);

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
};
#endif  // HARL_HPP_

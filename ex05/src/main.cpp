/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.co       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 20:23:22 by bazuara           #+#    #+#             */
/*   Updated: 2023/08/05 21:30:02 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main(int argc, char *argv[]) {
  Harl h;
  h.complain("debug");
  h.complain("info");
  h.complain("warning");
  h.complain("error");
  h.complain("someotherthing");
  h.complain("");
  return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrifer <sabrifer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:51:45 by sabrifer          #+#    #+#             */
/*   Updated: 2025/04/14 17:51:46 by sabrifer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    if (N <= 0)
        return NULL;
    Zombie* zombieHorde = new Zombie[N]; 
    
    for (int i = 0; i < N; i++) {
        zombieHorde[i].setName(name);
    }

    return (zombieHorde);
}
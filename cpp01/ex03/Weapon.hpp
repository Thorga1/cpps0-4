/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:23:45 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/09 10:34:56 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string name);
		Weapon(void);
		~Weapon(void);

		const std::string& getType(void) const;
		void		setType(std::string newType);
};

#endif
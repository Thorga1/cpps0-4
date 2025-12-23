/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thorgal <thorgal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:28:34 by thorgal           #+#    #+#             */
/*   Updated: 2025/10/17 16:35:28 by thorgal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain ( void );
	Brain ( const Brain& src );
	Brain& operator=( const Brain& rhs );
	~Brain ( void );

	const std::string& getIdea( int index ) const;
	void setIdea( int index, const std::string& idea );
};

#endif
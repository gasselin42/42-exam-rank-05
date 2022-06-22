/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:59:58 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:55:03 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <iostream>

class Warlock {
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &);
		Warlock & operator=(Warlock const &);

	public:
		Warlock(std::string const &, std::string const &);
		~Warlock();
		
		std::string const & getName() const;
		std::string const & getTitle() const;
		void setTitle(std::string const &);
		
		void introduce() const;
};
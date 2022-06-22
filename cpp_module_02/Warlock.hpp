/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:59:58 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:42:30 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstring>
#include <iostream>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private:
		std::string name;
		std::string title;

		SpellBook book;

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

		void learnSpell(ASpell *);
		void forgetSpell(std::string const &);
		void launchSpell(std::string const &, ATarget &);
};
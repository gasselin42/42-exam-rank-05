/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:41:00 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:53:19 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

#include <iostream>

class ATarget;

class ASpell {
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell();
		ASpell(ASpell const &);
		ASpell(std::string const &, std::string const &);
		ASpell & operator=(ASpell const &);
		virtual ~ASpell();
	
		std::string const & getName() const;
		std::string const & getEffects() const;

		virtual ASpell * clone() const = 0;

		void launch(ATarget const &);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:58:39 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:45:46 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"

#include <iostream>

class ASpell;

class ATarget {
	private:
		std::string type;

	public:
		ATarget();
		ATarget(std::string const &);
		ATarget(ATarget const &);
		ATarget & operator=(ATarget const &);
		virtual ~ATarget();	

		std::string const & getType() const;
		virtual ATarget * clone() const = 0;

		void getHitBySpell(ASpell const &) const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasselin <gasselin@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:28:50 by gasselin          #+#    #+#             */
/*   Updated: 2022/06/22 16:39:52 by gasselin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {
	private:
		TargetGenerator(TargetGenerator const &);
		TargetGenerator & operator=(TargetGenerator const &);

		std::map<std::string, ATarget *> tgt;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *);
		void forgetTargetType(std::string const &);
		ATarget * createTarget(std::string const &);
};
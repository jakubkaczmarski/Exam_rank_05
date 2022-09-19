/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkaczmar <jkaczmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:40:39 by jkaczmar          #+#    #+#             */
/*   Updated: 2022/09/19 12:53:04 by jkaczmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
class Warlock
{
    public:
    Warlock(std::string name, std::string title);
    const std::string& getName() const;
    const std::string& getTitle() const;
    void    setTitle(const std::string &str);
    void introduce() const;
    ~Warlock();
    private:
    std::string name;
    std::string title;

};
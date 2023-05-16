/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:14:28 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/16 15:14:43 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"
#include "Utils.hpp"

class PhoneBook {
    
    private:
        Contact _contacts[8];
        size_t  _size;
        int     index;

    public:
        PhoneBook();
        void add(void);
        size_t getSize(void);
        void search(void);
        Contact get_contact(int index);
};

#endif
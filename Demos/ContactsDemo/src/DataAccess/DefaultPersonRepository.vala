 // -*- Mode: vala; indent-t_abs-mode: nil; t_ab-width: 4 -*-
 /*-
 * Copyright (c) 2012 Pal Dorogi <pal.dorogi@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANt_aBILITY or FIt_nESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more det_ails.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

using Daf.Core;
using ContactsDemo.Model;

namespace ContactsDemo.DataAccess {
	
    public class DefaultPersonRepository : Object, IContactsRepository {
	    
        public IListModel<Person> contacts { get; set;}

		construct {
			debug ("Construction on DefaultRepo");
			if (contacts == null) {		
				contacts = new ArrayListModel<Person> ();
				contacts.add (new Person ("Felix", "Van der Gullen", 42));
				contacts.add (new Person ("Ignaz", "Trebitsch-Lincoln", 13));
				contacts.add (new Person ("Jimmy", "Fulig", 23));
				contacts.add (new Person ("Fred", "Dirty", 52));
			    contacts.add (new Person ("John", "Fowler", 37));
			    contacts.add (new Person ("Ivan", "Gorcsev", 31));
			    contacts.add (new Person ("Levin", "Big", 28));
			    contacts.add (new Person ("Humer", "Troppauer", 28));
			    contacts.add (new Person ("Jules", "Manfred Harrincourt", 24));
		    }
		}
    }
}


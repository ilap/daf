// -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

using Daf.Core;

using SelectionInListDemo.DataAccess;

namespace SelectionInListDemo.Model {
    
    public class ContactManagerModel : Object {
        
        public IContactsService service { public get; construct set; }
        public IListModel<Person> contacts {
	        get { return (IListModel<Person>) service.contacts; }
	        private set {}
        }
        
    	construct {
	    	if (_service == null) {
		    	assert (false);
	    	}
    	}
        public ContactManagerModel (IContactsService service) {
	        debug ("Instantiating ContactMAnagerModel");
	        Object (service : service);
        }
    
        public Person? create_contact () {
	        
            Person contact = new Person ();
            if (contacts.add (contact) == true) {
    	    	return contact;
    	    } else {
            	return null;
            }
       }
    
    
       public void remove_contact (Person contact) {
           contacts.remove (contact);
       }
    }
}

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
using SelectionInListDemo.DataAccess;

namespace SelectionInListDemo.Model {

    // Decorating pattern
    public class ContactsService : Object, IContactsService {
	    
	    
		public ArrayListModel<Person> contacts  { 
	   		get {
		   		return (ArrayListModel<Person>) repository.contacts;
	   		} 
	   		set {
		   		
	   		}
		  //  construct set {
  		//		// throw Not implemented....
		  //  }
	    }
	    
        public IContactsRepository repository { get; construct set; }

        public ContactsService (IContactsRepository repository) {
            Object (repository : repository);
        }
        
        public Person? create_contact () {
	        Person? contact = new Model.Person ();
            if (repository.contacts.add (contact) == true) {
    	    	return (Person?) contact;
    	    } else {
            	return null;
            }
	    }  
    	
    	public void remove_contact (Person contact) {
	    	repository.contacts.remove (contact);
		}
     }
}
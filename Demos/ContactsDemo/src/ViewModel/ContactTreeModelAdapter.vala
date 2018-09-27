/**
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

using Gee;
using Gtk;

using Daf.Core;
using Daf.UI.Core;
using ContactsDemo.Model;

namespace ContactsDemo.ViewModel {

	public class ContactTreeModelAdapter: AbstractTreeModel<Person> {
    public ContactTreeModelAdapter  (IListModel<Person> list_model) {
        base (list_model, 3 /*num of columns*/);
    }
    
    public override Type get_column_type (int index) {
    	Type result;
      
		switch (index) {
	       	case 0: 
	           	result = typeof (string);
	        	break;
	      	case 1:
	            result = typeof (string); 
	        	break;
	        case 2:
	            result = typeof (int); 
	        	break;
	       	default:
	            result = Type.INVALID;
	        	break;
	    }

    	return result;
    }

    
    public override void get_value (TreeIter iter, int column, out Value val) {

       int key = (int) iter.user_data;
       
        if (key < 0 || key >= list_model.get_length ()) {
            val = "";
            return;
        }
        
        var person = list_model.get_at (key);     
        
	    switch (column) {
            case 0: 
                val = person.first_name;
                break;
            case 1:
                val = person.last_name;
                break;
            case 2:
                val = person.age;
                break;
            default:
                val = "Invalid";
                break;
        }
    }
}

}
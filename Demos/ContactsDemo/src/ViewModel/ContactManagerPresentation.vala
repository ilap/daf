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
using Daf.UI.Core;

using ContactsDemo.Model;

namespace ContactsDemo.ViewModel {
    
 public interface ICommand : Object {
     
    public abstract void execute ();
}
    
public class ContactManagerPresentation : Object {
    
    public IContactsService service { private get; construct set; }
    
    private ModelPresenter model_presenter;
    
    public SelectionInList<Person> contact_selection { get; private set; }

    public IValueModel first_name { get; set;}
    public IValueModel last_name { get; set;}
    public IValueModel age { get; set;} 
    public IValueModel fictional { get; set;}
    
    public IValueModel dirty { get; set;}
   
    
    //public IValueModel tree_model { get; set;} 
    public IValueModel has_selection  { get; set;}
    
   	construct {	   	
		if (_service != null) {
			initialize_components ();
		}
	}
        
	public ContactManagerPresentation (IContactsService service) {
	        Object (service : service);
	}
		
    public void initialize_components () {

	    contact_selection = 
           new SelectionInList<Person>.with_list_model (service.contacts);

        model_presenter = new ModelPresenter (contact_selection);
        
		dirty = model_presenter.dirty;
		
        first_name = model_presenter.get_value_model ("first_name"); 
        last_name = model_presenter.get_value_model ("last_name");  
        age = new IntToStringConverter (model_presenter.get_value_model ("age"));  
        
        has_selection = new IsNotNullConverter (contact_selection);
    }
    
    public void remove () {
    	if (contact_selection.get_val () != null) {
        	service.remove_contact ((Person) contact_selection.get_val ()); 
        }
    }

    public void add () {
        contact_selection.set_val (service.create_contact ());
    }

    public void commit () {
    	if (contact_selection.get_val () != null) {
        	model_presenter.commit ();
        }
    }
    public void discard () {
    	if (contact_selection.get_val () != null) {
        	model_presenter.discard (); 
        }
    }
    
    public class IsNotNullConverter : AbstractTypeConverter {
    
   	    public IsNotNullConverter (IValueModel value_model) {
     	   base (value_model);
        }    
        public override Value convert_from_model (Value? model_value) {
            return (bool) (model_value != null);
        }
    
        public override void set_val (Value? new_value) {
        	model.set_val (new_value == null);
        }
    }
    
    public class IntToStringConverter : AbstractTypeConverter {
    
    	public IntToStringConverter (IValueModel value_model) {
        	base (value_model);
        }
    
        public override Value convert_from_model (Value? model_value) {
	        if (!model_value.holds (typeof (int))) {
		        return ""; // Invalidate?
	        } else {
        		return ((int) model_value).to_string ();
        	}
        }
    
        public override void set_val (Value? new_value) {
        	model.set_val (int.parse ((string) new_value));
        }
    }

}

}

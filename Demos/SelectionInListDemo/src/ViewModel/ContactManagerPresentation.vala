 /**
  *
  * Author:
  *    Pal Dorogi "ilap" <pal.dorogi@gmail.com>
  *
  * Copyright (c) 2012 Pal Dorogi
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU Lesser General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  * 
  *  This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU Lesser General Public License for more details.
  * 
  * You should have received a copy of the GNU Lesser General Public License
  * along with this program.  If not, see <http:www.gnu.org/licenses/>.
  **/

using Gtk;

using Daf.Core;
using Daf.UI.Core;
using SelectionInListDemo.View;
using SelectionInListDemo.Model;
using SelectionInListDemo.DataAccess;

namespace SelectionInListDemo.ViewModel {
	
	class ContactManagerPresentation : Object {
		public IValueModel first_name { get; set;}
		public IValueModel last_name { get; set;}
		public IValueModel age { get; set;}
		
		public ModelPresenter presenter { get; set;}

		
		public SelectionInList selection_in_list { get; set;}
		public IListModel<Person> list_model;
		
		public ContactManagerModel contact_manager;
		
	internal ContactManagerPresentation () {
		
		var repository = new DefaultPersonRepository ();
		var service = new ContactsService (repository);
		contact_manager = new ContactManagerModel (service);
		
		list_model = contact_manager.contacts;
      	selection_in_list = new SelectionInList<Person>.with_list_model (contact_manager.contacts);
      
       	presenter = new ModelPresenter (selection_in_list);
       
        first_name = presenter.get_value_model ("first_name");
        last_name = presenter.get_value_model ("last_name");
        age = presenter.get_value_model ("age");       
	}
}
}


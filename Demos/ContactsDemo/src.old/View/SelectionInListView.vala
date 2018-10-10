 /**
  *
  * Author(s):
  *    Pal Dorogi "ilap" <pal.dorogi@gmail.com>
  *
  * Copyright (c) 2012-2013 Pal Dorogi
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
using Daf.Core.Binding;

using SelectionInListDemo.Model;
using SelectionInListDemo.DataAccess;
using SelectionInListDemo.ViewModel;


namespace SelectionInListDemo.View {
	
	/**
	 Implements the Following
	         
	    
        tree_view.setModel(selection_in_list);
        jlist.setSelectionModel(new SingleListSelectionAdapter(
                        selection_in_list.getSelectionIndexHolder()));
        
        JTable table = new JTable(new DisplayTechnologyTableAdapter(selection_in_list, new String[]{"Name", "Description",
            "Maker"}));
            
        table.setSelectionModel(new SingleListSelectionAdapter(
                selection_in_list.getSelectionIndexHolder()));
        
        
        ComboBoxAdapter comboBoxAdapter = new ComboBoxAdapter(selection_in_list);

        JComboBox comboBox = new JComboBox();
        comboBox.setModel(comboBoxAdapter);
 	 **/
	class SelectionInListView : Gtk.ApplicationWindow {
		
		ContactManagerPresentation contact_manager;
		ContactsService service;
		DefaultPersonRepository repository;
		Label left_label;
		Label right_label;
		
		ComboBox combobox1;
		ComboBox combobox2;
		ModelPresenter presenter;
		
		Binder binder;

	
		/**
	 * Table Example
	 	// We just support the single selection at the moment.
	 	// contact_selection is Array SelectionInList
	 	treemodel_adatper = new ContactTreeModelAdapter (contact_selection, string column_names[]);
	 	
	 	// Connect the selection to our TreeModel
	 	tree_model.tree_selection = treeview.get_selection ();
	 	
	 	treeview.set_model (tree_model);
	 	combobox.set_model (tree_model);
	 	binder. bind (selection_in_list.selection_index_holder). to (combobox, "active");
	 	
        contact_selection.add (person_a);   

       	has_selection = new IsNotnullConverter(contact_selection);

		ModelPresenter model_presenter = new ModelPresenter (contact_selection);

      	first_name = model_presenter.get_model ("first_name");
      	last_name = model_presenter.get_model ("last_name");
       	age = model_presenter.get_component_model ("age");

       	bind_to_models (first_name, last_name, fictional);

		// TODO: Has not implemented yet.
        binder.bind (has_selection).to (first_name, "sensitive");
        binder.bind (has_selection).to (last_name, "sensitive");
        binder.bind (has_selection).to (age, "sensitive");
        
        // Bind Action property...
        binder.bind (has_selection). to (remove, "sensitive");

	 **/

	internal SelectionInListView (SelectionInListApplication 
							application, ContactManagerPresentation contact_manager) {
								
		


		Object (application: application, title: "Selection In List Demo");
		this.contact_manager = contact_manager;
		
		presenter = this.contact_manager.presenter;
        binder = new Binder ();

		this.set_default_size (450, 300);
		this.border_width = 10;

        var view = new Gtk.TreeView ();
		//this.setup_treeview (view);
		view.expand = true;

		left_label = new Gtk.Label ("Left");
        
        var button = new Button.with_label ("Delete");

		combobox1 = new ComboBox ();
		var grid = new Gtk.Grid ();
		grid.column_spacing = 10;

		grid.attach (view, 0, 0, 1, 1);
		grid.attach (left_label, 0, 1, 1, 1);
		grid.attach (combobox1, 0, 2, 1, 1);	
		grid.attach (button, 0, 3, 1, 1);
		


		
		button.clicked.connect (()=>{
			//var rand = new GLib.Rand ();
			//contact_manager.selection_in_list.selection_index = 
			//rand.int_range (0, 9);
			//combobox1.active = contact_manager.selection_in_list.selection_index;
			
		});

		var view1 = new Gtk.TreeView ();
		//this.setup_treeview (view);
		view.expand = true;

		right_label = new Gtk.Label ("Right");
		//
		combobox2 = new ComboBox ();
        var delete_btn = new Button.with_label ("Delete2");
        delete_btn.clicked.connect (()=>{			
			//.changed ("Sin %s",  (contact_manager.selection_in_list).get_val ());
			message ("Button 2 clicked...");
			SelectionInList<Person> sin = contact_manager.selection_in_list;
			//sin.remove_at (3);
			if (sin.selection != null) {		
			   //sin.remove ((Person?) sin.selection);
			   sin.remove_at (0);
			}
			//sin.clear ();
			//contact_manager.list_model.clear ();

		});

        grid.attach (view1, 1, 0, 1, 1);
		grid.attach (right_label, 1, 1, 1, 1);
		grid.attach (combobox2, 1, 2, 1, 1);    
		grid.attach (delete_btn, 1, 3, 1, 1);         
        this.add (grid);
        
        setup_daf_core (view, view1, combobox1, combobox2);
       // debug ("binder");

        // binder.bind (contact_manager.first_name). to (left_label, "label");
        
        
		//.changed ("kickogfff");
		//contact_manager.first_name.set_val ("Bazdmeg");
		//left_label.label = (string) contact_manager.first_name.get_val ();
       // left_label.label = (string) contact_manager.first_name.get_val ();



        /*
        
        binder.bind (combobox, "active"). to (selection_in_list, "selection_index_holder");        
        IValueModel model_presenter = new ModelPresenter (selection_in_list);
        IValueModel firstname_model = model_presenter.get_value_model ("first_name");
        IValueModel lastname_model = model_presenter.get_value_model ("last_name");
        IValueModel age_model = model_presenter.get_value_model ("age");
        
        */
        binder.bind (combobox1, "active"). to (contact_manager.selection_in_list.selection_index_holder);

	}
	
	void setup_daf_core (TreeView v1, TreeView v2, ComboBox cb1, ComboBox cb2) {

		var list_model = new ContactTreeModelAdapter (contact_manager.selection_in_list);
														
		v1.set_model (list_model);
		list_model.tree_selection = v1.get_selection ();		

		v2.set_model (list_model);
		cb1.model = list_model;
		cb2.model = list_model;
		var cell = new Gtk.CellRendererText ();

		/* 'weight' refers to font boldness.
		 *  400 is normal.
		 *  700 is bold.
		 */
		cell.set ("weight_set", true);
		cell.set ("weight", 700);

		var cell1 = new Gtk.CellRendererText ();

		cb1.pack_start (cell1, true);
		cb1.set_attributes (cell1, "text", 0);
		cb2.pack_start (cell1, true);	
		cb2.set_attributes (cell1, "text", 0);

		/*columns*/
		v1.insert_column_with_attributes (-1, "First Name",
                                                cell, "text",
                                                0);

		v1.insert_column_with_attributes (-1, "Last Name",
                                                new Gtk.CellRendererText (),
                                                "text", 1);

		v1.insert_column_with_attributes (-1, "Age",
                                                new Gtk.CellRendererText (),
                                                "text", 2);
                                                
		v2.insert_column_with_attributes (-1, "First Name",
                                                cell, "text",
                                                0);

		v2.insert_column_with_attributes (-1, "Last Name",
                                                new Gtk.CellRendererText (),
                                                "text", 1);

		v2.insert_column_with_attributes (-1, "Age",
                                                new Gtk.CellRendererText (),
                                                "text", 2);

	}

	void on_combobox_changed (ComboBox combobox) {
		debug ("ComboBox.changed...");
	}
			
	void on_selection_changed (Gtk.TreeSelection selection) {
		/*Gtk.TreeModel model;
		Gtk.TreeIter iter;
		string name;
		string lastname;
		string phone;

		if (selection.get_selected (out model, out iter)) {
			model.get (iter,
                                   Column.FIRSTNAME, out name,
                                   Column.LASTNAME, out lastname,
                                   Column.PHONE, out phone);
            //model.

			label.set_text ("\n" + name + " " + lastname + " " + phone);
		}*/
	}
}
}
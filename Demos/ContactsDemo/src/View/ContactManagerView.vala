/**
 * Copyright (c) 2012-2013 Pal Dorogi <pal.dorogi@gmail.com>
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
using Gtk;

using ContactsDemo.ViewModel;
using ContactsDemo.Model;

using Daf.UI.Core;
using Daf.Core.Binding;


namespace ContactsDemo.View {
    
public class ContactManagerView : Object {

    public ContactManagerPresentation  presenter { get; construct set; }

    const string UI  =  "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/View/ContactManagerView.ui";

    public Window main_window { get; set; }
    private Binder binder;
    
    private TreeView contact_list;
    private Entry first_name;
    private Entry last_name;
    private CheckButton fictional;
    private Entry age; // This wants integer...
    
    private Button add;
    private Button remove;
    private Button commit;
    private Button discard;

    construct
    {
        try
        {
            Gtk.Builder builder  =  new Gtk.Builder ();
                        
            builder.add_from_file (UI);
                
            main_window  =  builder.get_object ("main_window") as Window;
            contact_list = builder.get_object ("contact_list") as TreeView;
			
			first_name = builder.get_object ("first_name") as Entry;
			last_name = builder.get_object ("last_name") as Entry;            
			age = builder.get_object ("age") as Entry;
            

            add = builder.get_object ("add") as Button;
            remove = builder.get_object ("remove") as Button;
            commit = builder.get_object ("commit") as Button; 
            discard = builder.get_object ("discard") as Button; 
                                            
                                           
            main_window.destroy.connect (Gtk.main_quit);
           //builder.connect_signals (this);
                                
        } catch (Error e) 
        {
              stderr.printf ("Could not load UI: %s\n", e.message);
        }
        
        if (_presenter != null) {//} && _binder != null) {
        	build_widgets ();			
		}

    }


    public ContactManagerView (ContactManagerPresentation presenter) {
        Object (presenter : presenter);
    }
    
    
    private void build_widgets () {
	    
		debug ("Building widgets");
		binder = new Binder ();
        
        binder.bind (presenter.first_name). to (first_name, "text");
        binder.bind (presenter.last_name). to (last_name, "text"); 
        binder.bind (presenter.age). to (age, "text");


        add.clicked.connect (presenter.add);
        remove.clicked.connect (presenter.remove);
       	commit.clicked.connect (presenter.commit);

       	discard.clicked.connect (presenter.discard);         

	    var tm = new ContactTreeModelAdapter (presenter.contact_selection);
		contact_list.set_model (tm);
		
		tm.tree_selection = contact_list.get_selection ();
       	commit.clicked.connect (()=> {
	       message ("Row.changed...");
	       contact_list.cursor_changed ();
       	});

				
	    contact_list.insert_column_with_attributes (-1, "First", new CellRendererText (), "text", 0);
	    contact_list.insert_column_with_attributes (-1, "Last", new CellRendererText (), "text", 1);
		contact_list.insert_column_with_attributes (-1, "Age", new CellRendererText (), "text", 2);
		
		binder.bind (presenter.dirty).to (commit, "sensitive");
        binder.bind (presenter.dirty).to (discard, "sensitive");
		
		binder.bind (presenter.has_selection).to (remove, "sensitive");        
        binder.bind (presenter.has_selection).to (first_name, "sensitive");
        binder.bind (presenter.has_selection).to (last_name, "sensitive");
        binder.bind (presenter.has_selection).to (age, "sensitive");
    }
    
    public void show () {
    	main_window.window_position = WindowPosition.CENTER;
        //main_window.resizable = false;
        main_window.title = "DAF Tutorial";
        main_window.show_all ();
    }
}

}

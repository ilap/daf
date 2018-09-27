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
using Gtk;
using Daf.Core;
using Daf.Core.Binding;

using ContactsDemo.ViewModel;

namespace ContactsDemo.View {

    public class PersonEditorView : Object {
    
        public PersonEditorPresentation presenter { get; construct set; }
        public Binder binder { get; construct set; }
        const string UI  =  "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/View/PersonEditorView.ui";
    
        public Window main_window { get; set; }

        private Container person_editor;

        private Entry first_name;
        private Entry last_name;
        private Entry age;

        private CheckButton male;
        private CheckButton female;

        private Label sex;

        private Button save;
        private Button cancel;
        private Button change;

        construct {
            try {
                Gtk.Builder builder  =  new Gtk.Builder ();
                builder.add_from_file (UI);

                person_editor = builder.get_object ("person_editor") as Container;

                first_name = builder.get_object ("first_name") as Entry;
                last_name = builder.get_object ("last_name") as Entry;
                age = builder.get_object ("age") as Entry;

                female = builder.get_object ("female") as CheckButton;
                male = builder.get_object ("male") as CheckButton;

                sex = builder.get_object ("sex") as Label;

                save = builder.get_object ("save") as Button;
                cancel = builder.get_object ("cancel") as Button;
                change = builder.get_object ("change") as Button;

            } catch (Error e) {
                stderr.printf ("Could not load UI: %s\n", e.message);
            }
            
			if (_presenter != null && _binder != null) {
            	build_widgets ();			
			}
        }
        
	    public PersonEditorView (PersonEditorPresentation presenter, Binder binder) {
		    debug ("Initializing PersonEditorView");
        	Object (presenter : presenter, binder : binder);
        }
    
        private void build_widgets () {
	        debug ("Building widgets");
	        
            main_window = new Window ();
            main_window.destroy.connect (Gtk.main_quit);
            main_window.add (person_editor);

			binder = new Binder ();
            binder.bind (presenter.first_name).to (first_name, "text");
            binder.bind (presenter.last_name).to (last_name, "text");
            binder.bind (presenter.age).to (age, "text");
            //message ("FNAME: %s", (string) presenter.first_name);

            // Any widget which implements GtkActivatable has this property/function.
            save.related_action = presenter.save;
            save.use_action_appearance = false;

            binder.bind (presenter.male).to (male, "active");
            binder.bind (presenter.female).to (female, "active");

            cancel.related_action = presenter.cancel;
            cancel.use_action_appearance = false;

            change.related_action = presenter.change;
            change.use_action_appearance = false;

			// We could use the following if we want to completely separate
			// the ViewModel/Presenter from the Gtk toolkit.
			// Means bind the presenter dirty state to the Widget's sensitive.
			
            binder.bind (presenter.dirty).to (save, "sensitive");
            binder.bind (presenter.dirty).to (cancel, "sensitive");
        }
    
        public void show () {
	        debug ("Showing");
            main_window.window_position = WindowPosition.CENTER;
            main_window.resizable = false;
            main_window.title = "DAF Tutorial";
            main_window.show_all ();
        }
    }
}


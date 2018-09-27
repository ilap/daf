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
using ContactsDemo.Model;
using Daf.Core.Binding;

namespace ContactsDemo.ViewModel {

    public class PersonEditorPresentation : Object {

        public Person model { private get; construct set; }

        private Binder binder;

        public IValueModel first_name { get; private set;}
        public IValueModel last_name { get; private set;}
        public IValueModel age { get; private set;}
        public IValueModel dirty { get; private set; }

        public IValueModel male { get; private set; }
        public IValueModel female { get; private set; }

        public Gtk.Action save { get; private set;}
        public Gtk.Action cancel { get; private set;}
        public Gtk.Action change { get; private set;}

		construct {
			if (_model != null) {
				initialize_components ();
			}
		}
        
	    public PersonEditorPresentation (Person model) {
	        Object (model : model);
		}
		
        public void initialize_components () {
	        message ("before BINDER");
            this.binder = new Binder ();

            Person jocek = new Person ("Jozsef", "Arnoth", 36);

            var value_holder = new ValueHolder (model);
            ModelPresenter person_adapter = new ModelPresenter (value_holder);


            first_name = person_adapter.get_value_model ("first_name");
            last_name = person_adapter.get_value_model ("last_name");
            debug ("FN: %s LN %s", (string) first_name.get_val (), (string) last_name.get_val ());

            age = new IntToStringConverter (person_adapter.get_value_model ("age"));
            //sex = new EnumToStringConverter (person_adapter.get_value_model ("sex"));
            //sex_value = new EnumToIntConverter (person_adapter.get_value_model ("sex"));
            male = new EnumToBoolConverter (person_adapter.get_value_model ("sex"));
            female = new EnumToInvertBoolConverter (person_adapter.get_value_model ("sex"));
            dirty = person_adapter.dirty;

            // TODO PropertyConnector.connect_and_update (has_selection, first_name, "editable");
            save = new Gtk.Action ("save", "Save", "Save the changes on the edited person.", null);
            cancel = new Gtk.Action ("cancel", "Cancel", "Cancel changes on the edited person.", null);
            change = new Gtk.Action ("cancel", "Cancel", "Cancel changes on the edited person.", null);

            // TODO PropertyConnector.connect_and_update(has_selection, remove, "enabled");

            var binder = new Binder ();

            binder.bind (person_adapter.dirty).to (save, "sensitive");
            binder.bind (person_adapter.dirty).to (cancel, "sensitive");
    
            save.activate.connect (() => {
                    person_adapter.commit ();
            });
    
    
            cancel.activate.connect (() => {
                debug ("Cancel is called...\n");
                //value_holder.set_val (jocek);
                person_adapter.discard ();
            });

            change.activate.connect (() => {
                Person current = (Person) value_holder.get_val ();
                current = current == jocek ? model : jocek;
                value_holder.set_val (current);
            });
        }
    }

        public class IntToStringConverter : AbstractTypeConverter {
    
            public IntToStringConverter (IValueModel model) {
                base (model);
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

        public class EnumToStringConverter : AbstractTypeConverter {

            public EnumToStringConverter (IValueModel model) {
                base (model);
            }

            public override Value convert_from_model (Value? model_value) {
               return ((Gender) model_value).to_string ();
            }

            public override void set_val (Value? new_value) {
                model.set_val (int.parse ((string) new_value));
            }
        }

       public class EnumToIntConverter : AbstractTypeConverter {
    
            public EnumToIntConverter (IValueModel model) {
                base (model);
            }
    
            public override Value convert_from_model (Value? model_value) {
               return (int) model_value.get_enum ();
            }

            public override void set_val (Value? new_value) {
                model.set_val ((Gender) new_value);
            }
        }

       public class EnumToBoolConverter : AbstractTypeConverter {
    
            public EnumToBoolConverter (IValueModel model) {
                base (model);
            }
    
            public override Value convert_from_model (Value? model_value) {
               return (bool) model_value.get_enum ();
            }

            public override void set_val (Value? new_value) {
                model.set_val ((bool) new_value ? Gender.FEMALE : Gender.MALE);
            }
        }

        public class EnumToInvertBoolConverter : AbstractTypeConverter {

            public EnumToInvertBoolConverter (IValueModel model) {
                base (model);
            }

           	public override Value convert_from_model (Value? model_value) {
                return !(bool) model_value.get_enum ();
            }
    
            public override void set_val (Value? new_value) {
                model.set_val ((bool) new_value ? Gender.MALE : Gender.FEMALE);
            }
        }
}

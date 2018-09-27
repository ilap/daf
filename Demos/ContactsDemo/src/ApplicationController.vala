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

using Gtk;
using Granite.Widgets;
using Granite.Services;

using ContactsDemo.Model;
using ContactsDemo.View;
using ContactsDemo.ViewModel;

namespace ContactsDemo {

    public class ApplicationController : Granite.Application  {//{Gtk.Application { //

/*
       construct {

            application_id = "daf.tutorial";
            program_name = "DaF Tutorial";
            app_years = "2013";

            build_version = "0.1";
            app_icon = "text-icon";
            main_url = "https://launchpad.net/daftutorial";
            bug_url = "https://bugs.launchpad.net/dattutorial";
            help_url = "https://answers.launchpad.net/daftutorial";
            translate_url = "https://translations.launchpad.net/daftutorial";

            about_documenters = { "Valadoc", null };
            about_artists = { "Pal Dorogi", null };

            about_authors = { "Pal Dorogi ilap <pal.dorogi@gmail.com>", null };

            about_comments = "DaF Tutorial";
            about_translators = "Launchpad Translators";
            about_license_type = Gtk.License.GPL_3_0;
        }
*/
        public override void activate () {
	        	               
           	//var view =  (PersonEditorView) Bootstrapper.get_instance (typeof (PersonEditorView));
	       	var view =  (ContactManagerView) Bootstrapper.get_instance (typeof (ContactManagerView));

	       	view.show ();
           	this.add_window (view.main_window);
           	
        }
    }
}


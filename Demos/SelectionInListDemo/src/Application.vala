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

using SelectionInListDemo.View;
using SelectionInListDemo.ViewModel;

namespace SelectionInListDemo {
	class SelectionInListApplication : Gtk.Application {
		protected override void activate () {
			new SelectionInListView (this, new ContactManagerPresentation ()).show_all ();
		}
	
		internal SelectionInListApplication () {
			Object (application_id: "demo.selectioninlist.simple.treeview");
		}
	}
}

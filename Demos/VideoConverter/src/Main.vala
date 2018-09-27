  //-*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
 /*-
  *  Main.vala
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
  */

using Gtk;

using VideoConverter.View;

namespace VideoConverter {

	static int main (string[] args) {
		//assert (false);
		Gtk.init (ref args);
		
		var view = new VideoConverterView ();
		view.show ();
	    
	    Gtk.main ();
	    return 0;
	}
}
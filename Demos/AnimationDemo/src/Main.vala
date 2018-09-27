// *- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

using Gtk;
using Daf.UI.Animation;

namespace DafAnimationTest {
	
static int main (string[] args) {
		Gtk.init (ref args);

		// Several buttons flying in a Fixed widget...
		// The child_properties shoudl be implementeddd
		//var view = new AnimatedButtonsView ();
		
		// Simple opacity adapter...
		//var view = new SimpleOpacityDemo ();
		
		// Fade-In-Out and grow-shrink...
		//var view = new AdaptOpacityDemo ();
		
		//var view = new DeckLayoutDemo ();
		var view = new AnimatedDeckLayoutDemo ();
		view.show ();	  
	    
	    Gtk.main ();
	    return 0;
	}


}

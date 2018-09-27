//-*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
/*-
 *  AnimatedButtonsView.vala
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
	
	public class AnimatedButtonsView {
		private Window window;
		private Fixed fixed;
		
		public AnimatedButtonsView () {
			window = new Window ();
			window.set_size_request (640, 480);
			var hbox = new HBox (false, 0);
		
			window.add (hbox);
			fixed = new Fixed ();
			hbox.add (fixed);
		
		
			window.destroy.connect (Gtk.main_quit);
		}
	
		public void show () {
			Timeout.add (1500, animation);
			window.show_all ();
		}
		
		public  bool animation () {

		int i;
	
	 	debug ("KAPDD BE");
		for (i = 0; i < 10; i++) {
			var l = new Button.with_label ("XXXX");
			//var l = new Label ("XXX");
			l.visible = true;
				
			//((Container) fixed).add_with_properties (l, "x", i * 20, "y", i * 25);		
			(fixed as Fixed).put (l,i*20, i*25);
			//var anim = Animator.create_advanced (l, 2000, AnimationMode.EASE_IN_OUT_QUAD,
			//				  "x", 500,
			//				  "y", 50 * i);
			//anim.start ();
			debug ("AAAAAA");				 
			var anim = PropertyAnimator.animate (l, AnimationMode.EASE_IN_OUT_QUAD, 2000,
							  "x", 500,
							  "y", 50 * i);
			debug ("BBBBBBB");
			anim.timeline.start ();
		}
	
		return false;
		}

		
	}
}




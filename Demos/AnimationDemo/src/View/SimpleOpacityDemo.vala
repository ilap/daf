  //-*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
 /*-
  *  SimpleOpacityDemo.vala
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

using Daf.UI.Animation;
using Daf.UI.Widgets;

namespace DafAnimationTest {
	public class SimpleOpacityDemo : Object {

		private Gtk.Window window;
		private Box box1;
		private Box container;		
		private Image image = new Image.from_file ("/usr/share/icons/gnome/256x256/emotes/face-angel.png");
		
		private PropertyAnimator fade_in_out;

		private AnimatableAdapter adapt_opacity;
		
		private Button button;
		private Button button1;				
						
		public SimpleOpacityDemo () {
			setup_widgets ();
		}
	
		public void setup_widgets () {

			window = new Gtk.Window ();
			window.resizable = true;
			window.set_default_size (300, 300);
			window.window_position = WindowPosition.CENTER_ON_PARENT;
			
			Gdk.Color red;
        	Gdk.Color.parse ("red", out red);
        	window.modify_bg (StateType.NORMAL, red);
        
			window.show_all ();



			button = new Button.with_label ("Click on me...");
			var box = new Box (Orientation.VERTICAL, 10);
			box.add (image);
			button1 = new Button.with_label ("Alma");
			//adapt_opacity = new AnimatableAdapter (button1);
			//adapt_opacity.opacity = 0.5f;

			var grid = new Box (Orientation.VERTICAL, 10);
			//grid.orientation = Orientation.VERTICAL;
						
			grid.add (button);
			grid.add (button1);
		
			window.add (grid);
			

			fade_in_out = PropertyAnimator.animate (button1, AnimationMode.LINEAR, 1000, "width-request", 600);
			
			fade_in_out.set_keyframe (0.3, "width-request", 100);
			fade_in_out.set_keyframe (0.6, "width-request", 800);
			
			button.clicked.connect (() => {
				
				var tl = fade_in_out.timeline;
				if (!tl.playing) {
					

					button1.width_request = button1.get_allocated_width ();
					window.resizable = false;
					tl.start ();
				}
			});
		
			window.destroy.connect (Gtk.main_quit);

		}
						
		public void show () {
			window.show_all ();
		}
}
}

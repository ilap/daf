//-*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
/*-
 *  AdaptOpacityDemo.vala
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
using Daf.UI.Widgets;
//using Cairo;


namespace DafAnimationTest {
	public class AdaptOpacityDemo : Object {

		private Gtk.Window window;
		private Box box1;
		private Box container;		
		private Image image1 = new Image.from_file ("/usr/share/icons/gnome/256x256/emotes/face-angel.png");
		
		private PropertyAnimator fade_out;
		private PropertyAnimator fade_in;

		private PropertyAnimator anim_grow;
		private PropertyAnimator anim_shrink;

		private AnimatableAdapter adapt_opacity;
		
		private Button button;
				
		private int orig_w;
		private int orig_h;
						
		public AdaptOpacityDemo () {
			setup_widgets ();
		}
	
		public void setup_widgets () {

			window = new Gtk.Window ();
			window.resizable = true;
			window.set_default_size (640, 480);
			window.window_position = WindowPosition.CENTER_ON_PARENT;
			
			Gdk.Color red;
        	Gdk.Color.parse ("red", out red);
        	window.modify_bg (StateType.NORMAL, red);
        
			window.show_all ();

			box1 = new Box (Orientation.VERTICAL, 10);
			var box2 = new Box (Orientation.VERTICAL, 10);
			container = new Box (Orientation.VERTICAL, 10);
			adapt_opacity = new AnimatableAdapter (container);
			//adapt_opacity.fill = false;
			
			
			var tl = new TimeLine.full (AnimationMode.EASE_IN_OUT_QUAD, 1500);
			fade_out = PropertyAnimator.animate_with_timeline (adapt_opacity, tl, "opacity", 0.1f);
			anim_grow = PropertyAnimator.animate_with_timeline (adapt_opacity, tl, 
				"width-request", 800,
				"height-request", 600
			);
			
			fade_out.set_keyframe (0.5, "opacity", 0.8);
			
			tl.completed.connect (on_grow_completed);	
			
			button = new Button.with_label ("Click on me...");
			button.clicked.connect (() => {
				
				var tl2 = fade_out.timeline;
				if (!tl2.playing) {
					get_allocated_size ();
					tl2.start ();
				}
			});

			box2.add (button);
			container.add (image1);
			container.add (new Button.with_label ("Click on me1..."));
			container.add (new Button.with_label ("Click on me2..."));
			container.add (new Button.with_label ("Click on me3..."));
			
			
			//var boxX = new Box (Orientation.VERTICAL, 10);
			var boxX = new DeckLayout ();
			
			boxX.add (adapt_opacity);
			//container.homogeneous = true;
			boxX.add (container);
			box1.add (box2);
			box1.add (boxX);
			
			window.add (box1);
			
				
			window.destroy.connect (Gtk.main_quit);

		}
				
		public void get_allocated_size () {
			
			orig_w = adapt_opacity.get_allocated_width ();
			orig_h = adapt_opacity.get_allocated_height ();
			adapt_opacity.width_request = orig_w;
			adapt_opacity.height_request = orig_h;
			
			// The root window resizable property must be set to "false" to get the window shrink.
			window.resizable = false;
			button.sensitive = false;
		}				
		
		public void on_grow_completed (Object object) {
			
			debug ("On grow completed");
			
			fade_in = PropertyAnimator.animate (adapt_opacity, AnimationMode.EASE_IN_OUT_QUAD, 1500, "opacity", 1f);
			anim_shrink = PropertyAnimator.animate_with_timeline (adapt_opacity, fade_in.timeline, 
				"width-request", orig_w,
				"height-request", orig_h
			);			

			var tl = fade_in.timeline;
			tl.completed.connect (on_shrink_completed);
			tl.start ();		
		}
		
		public void on_shrink_completed () {
			debug ("On shrink completed");

			adapt_opacity.width_request = -1;
			adapt_opacity.height_request = -1;
			window.resizable = true;
			button.sensitive = true;			
		}
		
		
		public void show () {
			window.show_all ();
		}
}
}
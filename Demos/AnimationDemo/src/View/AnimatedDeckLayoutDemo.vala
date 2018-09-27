// // -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
/**
 *  AnimatedDeckLayoutDemo.vala
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

using Daf.UI.Widgets;
using Daf.UI.Animation;

namespace DafAnimationTest {
	
	public class AnimatedDeckLayoutDemo : Object {

		private Gtk.Window window;
		private Box box1;		
		private Image image1 = new Image.from_file ("/usr/share/icons/gnome/256x256/emotes/face-angel.png");
		private Image image2 = new Image.from_file ("/usr/share/icons/gnome/256x256/emotes/face-angry.png");
				
		private AnimatableAdapter oa1;
		private AnimatableAdapter oa2;
		private AnimatableAdapter oa3;
		
		private AnimatedDeckLayout deck;
		
		public AnimatedDeckLayoutDemo () {
			setup_widgets ();
		}
	
		public void setup_widgets () {

			window = new Gtk.Window ();
			window.resizable = false;
			window.window_position = WindowPosition.CENTER_ON_PARENT;
			window.show_all ();
			
			Gdk.Color red;
        	Gdk.Color.parse ("red", out red);
        	window.modify_bg (StateType.NORMAL, red);
        		     
        	 deck = new AnimatedDeckLayout ();
        	deck.border_width = 10;
        
        	var buttono1 = new Button.with_label ("Opacity +");
        	var buttono2 = new Button.with_label ("Opacity -");
        	var button1 = new Button.with_label  ("Next");
        	var button2 = new Button.with_label  ("Dummy");
        	var button3 = new Button.with_label  ("Next");
            var button4 = new Button.with_label  ("Prev");
        	
        	var box = new Box (Orientation.VERTICAL, 10);
        	var box1 = new Box (Orientation.VERTICAL, 10);
        	var box2 = new Box (Orientation.VERTICAL, 10);
        	var box3 = new Box (Orientation.VERTICAL, 10);
        	
        	box1.add (button1);
        	box1.add (button2);
        	
        	button3.expand = true;
        	
        	box2.add (button3);
        	box2.expand = true;
        	
        	//box2.fill = true;

            button1.name = "Next Button";
        	button2.name = "Dummy Button";
        	button3.name = "Next Button";
 	
 			box3.add (button4);
 			box3.add (image1);
 			box3.expand = true;
 			
        	//var oa1 = box1;
        	 oa1 = new AnimatableAdapter (box1); 
        	oa1.opacity = 1f;

			//var oa2 = box2;
         	 oa2 = new AnimatableAdapter (box2);
        	oa2.opacity = 1f;

        	 oa3 = new AnimatableAdapter (box3);
        	oa3.opacity = 1f;
        	
        	       	       	
			oa1.width_request = 300;
			oa1.height_request = 300;
			deck.add (oa1);
			oa1.name = "Opacity Adapter 1";

			oa2.width_request = 600;
			oa2.height_request = 600;
			deck.add (oa2);
			oa2.name = "Opacity Adapter 2";

									
			oa3.width_request = 250;
			oa3.height_request = 250;
			deck.add (oa3);
			oa3.name = "Opacity Adapter 3";
			
			buttono1.clicked.connect (() => {
	            if (deck.active_card != null) {
		            var a = deck.active_card.widget;
		            if (a is AnimatableAdapter) {
			        	(a as AnimatableAdapter).opacity += 0.05f;
			        }
			    }
            });
            
			buttono2.clicked.connect (() => {
	            if (deck.active_card != null) {
		            var a = deck.active_card.widget;
		            if (a is AnimatableAdapter) {
			        	(a as AnimatableAdapter).opacity -= 0.05f;
			        }
			    }
            });            
         	
			button1.clicked.connect (() => {
	            deck.switch_widget (oa2);
            });

            button3.clicked.connect (() => {
	            deck.switch_widget (oa3);
            });
	                  
		    button4.clicked.connect (() => {
	            deck.switch_widget (oa1);
            });
  
            deck.expand = true;		
            box.add (buttono1);
            box.add (buttono2);
            box.add (deck);           											            						
			window.add (box);

			window.destroy.connect (Gtk.main_quit);
		}
								
		public void show () {
			window.show_all ();
		}
}
}

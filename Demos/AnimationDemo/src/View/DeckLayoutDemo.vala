//-*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
/*-
 *  DeckLayoutDemo.vala
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
	public class DeckLayoutDemo : Object {

		private Gtk.Window window;
		private Box box1;		
		private Image image1 = new Image.from_file ("/usr/share/icons/gnome/256x256/emotes/face-angel.png");
			
		private AnimatableAdapter adapt_opacity1;
		private AnimatableAdapter adapt_opacity2;
		
		public DeckLayoutDemo () {
			setup_widgets ();
		}
	
		public void setup_widgets () {

			window = new Gtk.Window ();
			window.resizable = true;
			window.window_position = WindowPosition.CENTER_ON_PARENT;
			window.show_all ();
			
			Gdk.Color red;
        	Gdk.Color.parse ("red", out red);
        	window.modify_bg (StateType.NORMAL, red);
			     
        	var deck = new DeckLayout ();
        	deck.border_width = 10;
        
        	var button = new Button.with_label  ("Delete");
        	
        	var button1 = new Button.with_label  ("First");
        	var button2 = new Button.with_label  ("Second");
        	var button3 = new Button.with_label  ("Third");
        	var button4 = new Button.with_label  ("Fourth");
        	
        	var box = new Box (Orientation.VERTICAL, 10);
        	var box1 = new Box (Orientation.VERTICAL, 10);
        	var box2 = new Box (Orientation.VERTICAL, 10);
        	
        	box1.add (button1);
        	box1.add (button3);
        	box2.add (button2);
        	box2.add (button4);        	         
        	  
            button1.name = "Button1";
        	button2.name = "Button2";
        	button3.name = "Button3";
        	button4.name = "Button4";


            var button5 = new Button.with_label  ("Fifth"); 
       	    var button6 = new Button.with_label  ("Sixth"); 
       	    var button7 = new Button.with_label  ("Seventh"); 
       	    var button8 = new Button.with_label  ("Eigth");
       	           
       	    var oa5 = new AnimatableAdapter (button5); 
       	    var oa6 = new AnimatableAdapter (button6); 
       	    var oa7 = new AnimatableAdapter (button7); 
       	    var oa8 = new AnimatableAdapter (button8); 
	
            button5.name = "Button5";
        	button6.name = "Button6";
        	button7.name = "Button7";
        	button8.name = "Button8";
        	
            oa5.opacity = 0.5;
        	oa6.opacity = 0.5;
        	oa7.opacity = 0.5;
        	oa8.opacity = 0.5;
    	
        	var oa1 = new AnimatableAdapter (box1);
        	oa1.opacity = 0.5;

         	var oa2 = new AnimatableAdapter (box2);
        	oa2.opacity = 0.5;
        	
			deck.add (oa1);
			oa1.name = "OA1";
			deck.add (oa2);
			oa2.name = "OA2";
			
			deck.add (oa5);
			deck.add (oa6);
			deck.add (oa7);
			deck.add (oa8);
				
			button.clicked.connect (() => {
	            debug ("Clicked OA1...");
	            if (deck.active_card != null) {
	            	deck.remove (deck.active_card.widget);
	    		}

            });
            	
			button1.clicked.connect (() => {
	            debug ("Clicked OA1...");
	            deck.switch_widget (oa2);
            });
            
            button2.clicked.connect (() => {
	            debug ("Clicked OA2...");
	            //deck.remove (deck.active_card.widget);
	            deck.switch_widget (oa1);
            });

            button3.clicked.connect (() => {
	            debug ("Clicked OA3...");
	            //deck.remove (deck.active_card.widget);
	            deck.switch_widget (oa1);
            });
         
            button4.clicked.connect (() => {
	            debug ("Clicked OA4...");
	            //deck.remove (deck.active_card.widget);
	            deck.switch_widget (oa5);
            });
         
            button5.clicked.connect (() => {
	            debug ("Clicked OA5...");
	            // deck.remove (deck.active_card.widget);
	            deck.switch_widget (oa6);
            });
         
            button6.clicked.connect (() => {
	            debug ("Clicked OA6...");
	            // deck.remove (deck.active_card.widget);
	            deck.switch_widget (oa7);
            });
         
            button7.clicked.connect (() => {
	            debug ("Clicked OA7...");
	            // deck.remove (deck.active_card.widget);
	            deck.switch_widget (oa8);
            });
         
            button8.clicked.connect (() => {
	            debug ("Clicked OA8...");
	             deck.remove (deck.active_card.widget);
	            //deck.switch_widget (oa1);
            });
         
            
            deck.expand = true;			
            box.add (button);
            box.add (deck);	            											            						
			window.add (box);

			window.destroy.connect (Gtk.main_quit);
		}
								
		public void show () {
			window.show_all ();
		}
}
}
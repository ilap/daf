 // -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-
 /*-
  *  VideoConvertView.vala
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

using Daf.UI.Widgets;
using Daf.UI.Animation;

namespace VideoConverter.View {
	
	/**
	 * Autonomous View pattern example.
	 *
	 */
	public class VideoConverterView {

		// Constants
		private const int BHH = 100; // Base Header Height
		private const int TITLE_HEIGHT = 20;
		
		private const int HEADER_HEIGHT = BHH - TITLE_HEIGHT;

		private const int WINDOW_WIDTH = 400;
		private const int WINDOW_HEIGHT = WINDOW_WIDTH - BHH;
		
		private const int SPACING = 20;
		private const int BORDER_WIDTH = 20;
		
		private const int FRAME_WIDTH = WINDOW_WIDTH / 2;
		private const int FRAME_HEIGHT = WINDOW_HEIGHT / 2 + 20;
		
		private const int PANED_POS = 175;
		// Properties		
		public Gtk.Window main_window { get; private set; }
		public Gdk.Window win;
				
		///private Cairo.Pattern pattern;

		private Paned main_paned;
	
		private PropertyAnimator paned_anim;
		private PropertyAnimator footer_anim;
		
		// Header
		///////////////////////////////////////////////////////////////
		private Label header;
				
		//Content
		///////////////////////////////////////////////////////////////
		private Frame content_frame;
		private AnimatedDeckLayout content_deck;
		//private Image image;
		
		private Label filename_label;
		private Label filename_label2;
		private Label choose;
		
		// Animation properties.
		private Image image;
		private AnimatableAdapter animated_image;
		private AnimatableAdapter animated_ready;
		private AnimatableAdapter animated_converted;
		private AnimatableAdapter animated_grid;
		
		private ButtonBox button_box;
		
		// Success buttons
		private Button show_button;
		private Button play_button;
		private Button info_button;
				
		// Footer
		///////////////////////////////////////////////////////////////
		private AnimatedDeckLayout footer_deck;
		private ProgressBar progress_bar;
		private ComboBox select_device;
		private Button button;

		private Gtk.Action cancel;
		private Gtk.Action convert;

		public VideoConverterView () {
			main_window = new Window ();
			//main_window.resizable = false;
            main_window.destroy.connect (Gtk.main_quit);
            
           // var surface = new Cairo.ImageSurface.from_png ("/home/ilap/Projects//Mockups/DaF/clipboard2.png");
 		   //pattern = new Cairo.Pattern.for_surface (surface);
 		   //pattern = new Cairo.Pattern.rgba (1f, 0f, 0f, 0.5f);
 			
 			
 		//	var style_context = main_window.get_style_context ();

		  //  } catch (Error e) {
		  //  	return;
		  //  }
			//style_context.add_provider (style_provider, Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION);
 			
 			
 			///var style_provider = new CssProvider ();
            
           // try {
	        //	style_provider.load_from_data ("GtkWindow {                      
            //                                      background-image: url('file:///home/ilap/Projects//Mockups/DaF/clipboard2.png');   
            //                                   }", -1); 						} catch (Error e) {
			//	return;
			//}
		//	var screen = Gdk.Screen.get_default ();			
		//	StyleContext.add_provider_for_screen (screen, style_provider, Gtk.STYLE_PROVIDER_PRIORITY_USER);

            
   			initialize_components ();
		}
		
		
		private void initialize_components () {
			
		    var main_grid = new Grid ();
            main_grid.orientation = Orientation.VERTICAL;	              
         
            // Set up the Actions;
            convert = new Gtk.Action ("convert", "Convert", "Convert the Video.", null);
            convert.activate.connect (on_convert_activated);
            
            cancel = new Gtk.Action ("cancel", "Cancel", "Cancel converting the Video.", null);
            cancel.activate.connect (on_cancel_activated);
            
            convert.sensitive = false;
                      
            // Setup the Header area
            ///////////////////////////////////////////////////////////////////
            header = new Label ("Convert a Video");            
            header.height_request = HEADER_HEIGHT;            
            set_widget_style (header, "header", ".header", "font: open sans bold 12");                   
  			set_widget_layout (header, Align.FILL, Align.END, true, true);
                    
            main_grid.add (header);
            
            // Setup content /w Footer area.
            ///////////////////////////////////////////////////////////////////
            main_paned = new Paned (Orientation.VERTICAL);
            set_widget_layout (main_paned, Align.FILL, Align.FILL, true, true);
            
            main_grid.add (main_paned);  
                                         
            // Setup the Content area
            ///////////////////////////////////////////////////////////////////

            content_frame = new Frame (null);
            set_widget_layout (content_frame, Align.CENTER, Align.START, true, true);
            set_widget_style (content_frame, "frame", ".frame", "border-color: shade (@bg_color, 0.75);" + 
            								"border-radius: 6px;" + 
            								"border-style: inset;" + 
            								"border-width: 1px;");

            var frame_grid = new Grid ();
            set_widget_layout (frame_grid, Align.FILL, Align.FILL, true, true);
            
            frame_grid.orientation = Orientation.VERTICAL;
            frame_grid.border_width = 0;
            
            // Setup the Frame's children.
            //////////////////////////////////////////////////////////////////
            content_deck = new AnimatedDeckLayout ();
            //set_widget_layout (content_deck, Align.FILL, Align.FILL, true, true);
			
			// Content Video Image (Deck #1)
            image = new Image ();			
            image.set_from_file ("/home/ilap/Projects//Mockups/DaF/multimedia-video-player.svg");
            set_widget_layout (image, Align.FILL, Align.CENTER, false, false);
            
			animated_image = new AnimatableAdapter (image);
			set_widget_layout (animated_image, Align.START, Align.START, false, false);
			animated_image.width_request = FRAME_WIDTH;
			animated_image.height_request = FRAME_HEIGHT;
            
            // Content chose file (Deck #2)         
           	filename_label = new Label ("Big Buck Bunny animation (1080p HD)");
           	set_widget_style (filename_label, "header", ".header", "font: open sans bold 11"); 
			filename_label.ellipsize = Pango.EllipsizeMode.MIDDLE;
			set_widget_layout (filename_label, Align.CENTER, Align.CENTER, true, true);

           	filename_label2 = new Label ("Big Buck Bunny animation (1080p HD).avi");
           	set_widget_style (filename_label2, "header", ".header", "font: open sans bold 11"); 
			filename_label2.ellipsize = Pango.EllipsizeMode.MIDDLE;
			set_widget_layout (filename_label2, Align.CENTER, Align.CENTER, true, true);
           
            var tmp_grid = new Grid ();
            tmp_grid.orientation = Orientation.VERTICAL;
            set_widget_layout (tmp_grid, Align.FILL, Align.FILL, true, true);
            
            tmp_grid.add (filename_label2);
            button_box = new ButtonBox (Orientation.HORIZONTAL);
            button_box.layout_style = ButtonBoxStyle.SPREAD;
            set_widget_layout (button_box, Align.FILL, Align.END, true, true);
           
            
            Gtk.Settings.get_default ().gtk_button_images = true;
            show_button = new Button.with_label ("Show");
            set_widget_style (show_button, "GtkButton", "GtkButton:hover", "
			    background-image: none;			    
            ");
          
            play_button = new Button.with_label ("Play");
            set_widget_style (play_button, "GtkButton", "GtkButton:hover", "
			    background-image: none;			    
            ");
             
             info_button = new Button.with_label ("Info");
             set_widget_style (info_button, "GtkButton", "GtkButton:hover", "
			    background-image: none;			    
            ");
            
            var image1 = new Image ();			
            image1.set_from_file ("/home/ilap/Projects//Mockups/DaF/Show.svg");
            show_button.set_image (image1);
            show_button.image_position = PositionType.TOP;
            show_button.relief = ReliefStyle.NONE;
            show_button.focus_on_click = false;
        
            var image2 = new Image ();
            image2.set_from_file ("/home/ilap/Projects//Mockups/DaF/Play.svg");
            play_button.set_image (image2);
            play_button.image_position = PositionType.TOP;
            play_button.relief = ReliefStyle.NONE;
            play_button.focus_on_click = false;
                        
            var image3 = new Image ();
            image3.set_from_file ("/home/ilap/Projects//Mockups/DaF/Info.svg");
            info_button.image = image3;
            info_button.image_position = PositionType.TOP;
			info_button.relief = ReliefStyle.NONE;
            info_button.focus_on_click = false;
            
            button_box.add (show_button);
            button_box.add (play_button);
            button_box.add (info_button);                    

            tmp_grid.add (button_box);
            
			animated_ready = new AnimatableAdapter (tmp_grid);	
					
			set_widget_layout (animated_ready, Align.START, Align.START, false, false);
			animated_ready.width_request = WINDOW_WIDTH - 2 * BORDER_WIDTH;
			animated_ready.height_request = WINDOW_HEIGHT / 2 - 2 * BORDER_WIDTH;
						
			content_deck.add (animated_image);
			content_deck.add (animated_ready);
			
		
            frame_grid.add (content_deck);
          
            choose = new Label ("");
			choose.set_markup ("<span size=\"small\">" + "Drag a video here or " + "<a href=\""  + "\">" + "select a file" + "</a></span>\n");
			set_widget_layout (choose, Align.CENTER, Align.END, false, false);
			//choose.height_request = 10;
			
			choose.activate_link.connect (do_openfile);

			var oa4 = new AnimatableAdapter (choose);
			set_widget_layout (oa4, Align.FILL, Align.FILL, true, true);

			oa4.height_request = 15;
			
			frame_grid.add (oa4);
	
            content_frame.add (frame_grid);
			main_paned.pack1 (content_frame, false, true);
			//main_paned.pack1 (content_frame, true, true);           
            // Setup Footer.
            ///////////////////////////////////////////////////////////////////
            var footer = new Grid ();
            footer.column_spacing = 20;
            
            set_widget_layout (footer, Align.FILL, Align.FILL, true, false);            
            //footer.orientation = Orientation.VERTICAL;
            
            // Image setup.  
   			image = new Image ();
            image.set_from_file ("/home/ilap/Projects//Mockups/DaF/ipod54_33.svg");   
            set_widget_layout (image, Align.CENTER, Align.CENTER, false, false);

            footer_deck = new AnimatedDeckLayout ();
            set_widget_layout (footer_deck, Align.FILL, Align.CENTER, true, true);
     
            // Combobox setup...
            
            var list_store = new ListStore (1, typeof (string));
            var tree_view = new TreeView.with_model (list_store);
            
            select_device = new ComboBox.with_model (list_store);
            select_device.halign = Align.FILL;
            select_device.changed.connect(on_combobox_changed);
            
            TreeIter iter;
            list_store.append (out iter);
            list_store. set (iter, 0, "Choose the Video format");
            list_store.append (out iter);
            list_store. set (iter, 0, "iPhone4/iPod4");
            list_store.append (out iter);
            list_store. set (iter, 0, "Samsung Galaxy S II");
            
            var cell = new CellRendererText ();
            select_device.pack_start (cell, false);
            select_device.set_attributes (cell, "text", 0);
            
            //select_device.set_model (list_store);
            select_device.set_active (0);

			
			progress_bar = new ProgressBar ();
			progress_bar.fraction = 0.7f;
			progress_bar.text = "Big Buck Bunny animation (1080p HD).iphone4.mp4";
			set_widget_layout (progress_bar, Align.FILL, Align.START, true, true);
          	footer_deck.add (progress_bar);
           	footer_deck.switch_next ();            
            
            
            var footer_grid2 = new Grid ();
            footer_grid2.orientation = Orientation.VERTICAL;

            var filename_label2 = new Label ("WBig Buck Bunny animation (1080p HD).avi");
           	filename_label2.set_markup ("<span size=\"large\" background=\"white\">" + "Big Buck Bunny animation (1080p HD).avi" + "</span>\n");
			filename_label2.ellipsize = Pango.EllipsizeMode.MIDDLE;
            set_widget_layout (filename_label2, Align.START, Align.START, true, true);
            
            var choose2 = new Label ("jkjljljlkj");
			choose2.set_markup ("<span size=\"small\">" + "Drag a vivedeo here or " + "<a href=\""  + "\">" + "select a file" + "</a></span>\n");
			
			footer_grid2.add (filename_label2);
			//footer_grid2.add (progress_bar);
			footer_grid2.add (choose2);
			
			footer_deck.add (select_device);
            footer_deck.add (footer_grid2);

			footer_deck.switch_widget (select_device, true);
            button = new Button ();        
            button.related_action = convert;
			set_widget_layout (button, Align.END, Align.END, false, false);
			button.width_request = 100;
			
			var footer_grid = new Grid ();
			set_widget_layout (footer_grid, Align.FILL, Align.START, true, true);
			footer_grid.column_spacing = 15;
            footer_grid.attach (image, 0, 0, 1, 1);
            footer_grid.attach (footer_deck, 1, 0, 1, 1);

			footer.attach (footer_grid, 0, 0, 1, 1);
            footer.attach (button, 0, 1, 1, 1); 
            footer.border_width = 15;
           // footer.row_spacing = 5;
            footer.column_spacing = 10;
            
            var oa5 = new AnimatableAdapter (footer);
            oa5.width_request = 1;
            oa5.height_request = 1;
            oa5.opacity = 0f;
           // main_paned.set_size_request (400, 400);
            ///main_paned.pack2 (footer, true, false);
            var tl = content_deck.timeline;          
            paned_anim = PropertyAnimator.animate_with_timeline (main_paned, tl, "position", 160, "height-request", WINDOW_HEIGHT);
          
            footer_anim = PropertyAnimator.animate_with_timeline (oa5, tl, "opacity", 1f);
            footer_anim.set_keyframe (0.7, "opacity", 0f);
            
            main_paned.pack2 (oa5, false, true);
           // main_paned.pack2 (oa5, false, false);
           // main_paned.add2 (footer);
 
            main_window.add (main_grid);	    
		}
		
		private void on_combobox_changed () {
			convert.sensitive = select_device.active != 0;
		}
				
		private void on_convert_activated () {
			debug ("Convert activated");

			var tl = content_deck.timeline;  
			main_window.resizable = false;
			
			paned_anim.set_keyframe (1f, "position", 0);
			paned_anim.set_keyframe (1f, "height-request", 80);
           	//header1.label = "Wanted-2010-EngSub.avi";
           	header.label = "Converting Video";
           	footer_deck.switch_widget (progress_bar);	
           	progress_bar. text = "Big Buck Bunny animation (1080p HD).iphone4.mp4";
           	progress_bar.show_text = true;
           	progress_bar.ellipsize = Pango.EllipsizeMode.MIDDLE;
           	button.related_action = cancel;
           	           		
           	tl.start ();
           	activate_progressbar ();
		}

		private void on_cancel_activated () {
			//button_box.visible = true;
			header.label = "Video Converted";
			filename_label2.label = "Big Buck Bunny animation (1080p HD).iphone4.mp4";
			//choose.set_markup ("<span size=\"small\">" + "Drag a different video here or " + "<a href=\""  + "\">" + "select one" + "</a></span>\n");
			
			paned_anim.set_keyframe (1f, "height-request", WINDOW_HEIGHT);
			paned_anim.set_keyframe (1f, "position", PANED_POS);
			footer_deck.switch_widget (select_device);
			//content_deck.switch_widget (animated_ready);
			button_box.visible = true;
           	button.related_action = convert;
			paned_anim.timeline.start ();
		}
			
		public bool do_openfile (string uri) {
			header.label = "Ready to Convert";
			choose.set_markup ("<span size=\"small\">" + "Drag a different video here or " + "<a href=\""  + "\">" + "select one" + "</a></span>\n");
			
			if (content_deck.active_widget == animated_image) {				
				footer_anim.set_keyframe (1f, "opacity", 1f);	
				content_deck.switch_widget (animated_ready);
				button_box.visible = false;
			} else {

				if (animated_converted != null) {
					content_deck.switch_widget (animated_converted);
				}
			}
			
			return true;
		}
		
		public void activate_progressbar () {
			progress_bar.fraction = 0f;
			GLib.Timeout.add (500, fill_progressbar);
		}
		
		private bool fill_progressbar () {
			double fraction = progress_bar.fraction;
			
			fraction += 0.1;
			
			progress_bar.fraction = fraction;
			
			var result = fraction < 1f ? true: false;
			if (result == false) {
				on_cancel_activated ();
			}
			return result;
		}
				
		public void show () {
      
            main_paned.width_request = WINDOW_WIDTH;
        	main_paned.height_request = WINDOW_HEIGHT;
			hack_paned ();           	
			         	     	
			main_window.window_position = WindowPosition.CENTER;
            main_window.resizable = false;
            main_window.title = "DAF Video Converter Demo";
            main_window.show_all ();

        }

		private void set_widget_style (Widget widget, string class, string class_str, string style) {
			
		    var style_context = widget.get_style_context ();
            
            style_context.add_class (class);
			var style_provider = new CssProvider ();
      
	        try { 
	        	style_provider.load_from_data ( class_str + " {" + style + "}", -1);
		    } catch (Error e) {
		    	return;
		    }
			style_context.add_provider (style_provider, Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION);

		}
		
		private void set_widget_layout (Widget widget, Align halign, Align valign, bool hexpand, bool vexpand) {
			widget.halign = halign;
			widget.valign = valign;
			widget.hexpand = hexpand;
			widget.vexpand = vexpand;			
		}
           	
     	private void hack_paned () {
	     	
           	// Dirty hack: Remove the Paned handle.
           	// Destroy the handle's Gdk.Wwindow and overwrite the "handle-size" Style prop.
           	//////var handle_win = paned.get_handle_window ();
           	////handle_win.set_user_data (null);
           ///	handle_win.destroy ();
            // Reset the handle's window events..
            // Gdk.EventMask event_mask = 0;//win.get_events () & Gdk.EventMask.ALL_EVENT_MASK;
			// win.set_events (event_mask);
           	           	
           	// Reset the handle for Paned...
           	//set_widget_style (main_paned, "GtkPaned", "{ handle-size: 0px; }");
           	//return;
            string data = "* {
    			-GtkPaned-handle-size: 0px;
			}";

			var css_prov = new CssProvider ();
			try {
				css_prov.load_from_data (data, (ssize_t) data.length);
			} catch (Error e) {
				return;
			}
			var screen = Gdk.Screen.get_default ();			
			StyleContext.add_provider_for_screen (screen, css_prov, Gtk.STYLE_PROVIDER_PRIORITY_USER); 
        }
	}
}
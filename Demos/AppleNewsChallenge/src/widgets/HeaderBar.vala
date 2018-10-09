/*
* Copyright (c) 2017 Robert San <robertsanseries@gmail.com>
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*/

using App.Configs;
using App.Utils;

namespace App.Widgets {

    /**
     * The {@code HeaderBar} class is responsible for displaying top bar. Similar to a horizontal box.
     *
     * @see Gtk.HeaderBar
     * @since 0.1.0
     */
    public class HeaderBar : Gtk.HeaderBar {

        public signal void item_selected ();
        
        public Gtk.MenuButton app_menu;
        public Gtk.Menu       menu;   

        /**
         * Constructs a new {@code HeaderBar} object.
         *
         * @see App.Configs.Properties
         * @see icon_settings
         */
        public HeaderBar () {
            this.set_title (Properties.TITLE_HEADER_BAR);
            this.show_close_button = true;
            icon_settings ();
        }

        /**
         * Add gear icon to open settings menu.
         * 
         * @see menu_settings
         * @return {@code void}
         */
        private void icon_settings () {
            this.app_menu = new Gtk.MenuButton();
            this.app_menu.set_image (new Gtk.Image.from_icon_name ("open-menu-symbolic", Gtk.IconSize.LARGE_TOOLBAR));
            this.app_menu.tooltip_text = ("Settings");
            
            menu_settings ();
            
            this.app_menu.popup = this.menu;
            this.pack_end (this.app_menu);
        }

        /**
         * Creates the settings menu. When the user clicks the preferences option, {@code Gtk.MenuItem} will call
         * the signal "item_selected". The actions of this signal are in the "on_activate_button_preferences" method
         * of the AppController;
         *
         * @return {@code void}
         */
        private void menu_settings () {
            var about_item = new Gtk.MenuItem.with_label ("Preferences");
            about_item.activate.connect(() => {
                item_selected ();
            });

            this.menu = new Gtk.Menu ();
            this.menu.add (about_item);
            this.menu.show_all ();
        }
    }
}

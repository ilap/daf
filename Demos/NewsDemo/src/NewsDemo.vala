/* main.vala
 *
 * Copyright 2018 Pal Dorogi
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE X CONSORTIUM BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name(s) of the above copyright
 * holders shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in this Software without prior written
 * authorization.
 */

public class Granite.Demo : Gtk.Application {
    construct {
        application_id = "com.github.ilap.daf.demos.news";
        flags = ApplicationFlags.FLAGS_NONE;
    }

    public override void activate () {
        var window = new Gtk.Window ();

        var splash_view = new SplashView ();
        // TODO: var main_view = new MainView ();

        var main_stack = new Gtk.Stack ();
        main_stack.add_titled (splash_view, "splash", "SplashView");
        //TODO: main_stack.add_titled (main_view, "main", "MainView");

        var gtk_settings = Gtk.Settings.get_default ();

        var mode_switch = new Granite.ModeSwitch.from_icon_name ("display-brightness-symbolic", "weather-clear-night-symbolic");
        mode_switch.primary_icon_tooltip_text = ("Light background");
        mode_switch.secondary_icon_tooltip_text = ("Dark background");
        mode_switch.valign = Gtk.Align.CENTER;
        mode_switch.bind_property ("active", gtk_settings, "gtk_application_prefer_dark_theme");

        var exit_mode = new Granite.Widgets.ModeButton ();
        exit_mode.append_icon ("pane-hide-symbolic", Gtk.IconSize.BUTTON);
        exit_mode.valign = Gtk.Align.CENTER;

        var heart_mode = new Granite.Widgets.ModeButton ();
        heart_mode.append_icon ("face-heart-symbolic", Gtk.IconSize.BUTTON);
        heart_mode.append_icon ("face-heart-broken-symbolic", Gtk.IconSize.BUTTON);
        heart_mode.valign = Gtk.Align.CENTER;

        var headerbar = new Gtk.HeaderBar ();
        headerbar.get_style_context ().add_class ("default-decoration");
        headerbar.show_close_button = true;
        headerbar.pack_end (exit_mode);
        headerbar.pack_end (heart_mode);
        var css_provider = new Gtk.CssProvider ();
        css_provider.load_from_resource ("/css/style.css");

        //Granite.Widgets.Utils.set_color_primary (window, {0.34, 0.38, 0.49, 0.5});

        window.add (main_stack);
        window.set_default_size (900, 600);
        window.set_size_request (750, 500);
        window.set_titlebar (headerbar);
        window.title = "Granite Demo";
        window.show_all ();

        add_window (window);
    }

    public static int main (string[] args) {
        var application = new Granite.Demo ();
        return application.run (args);
    }
}
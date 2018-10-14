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
        css_provider.load_from_resource ("/com/github/ilap/daf/demos/news/css/Application.css");
        Gtk.StyleContext.add_provider_for_screen (
            Gdk.Screen.get_default (),
            css_provider,
            Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION
        );

        window.get_style_context ().add_class (Gtk.STYLE_CLASS_FLAT);
        window.get_style_context ().add_class ("rounded");

        window.add (splash_view);
        window.set_default_size (600, 425);
        window.set_titlebar (headerbar);
        window.title = "News";
        window.show_all ();

        add_window (window);
    }

    public static int main (string[] args) {
        var application = new Granite.Demo ();
        return application.run (args);
    }
}

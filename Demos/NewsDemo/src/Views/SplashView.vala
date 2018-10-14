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

using Daf.UI.Animation;

public class SplashView : Gtk.Stack {

    private const uint DURATION = 600;
    private TimeLine timeline = null;
    private PropertyAnimator paned_anim;

    construct {
        var paned = new Gtk.Paned (Gtk.Orientation.VERTICAL);
        paned.set_position (350);

        var top_box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        top_box.halign = Gtk.Align.CENTER;
        top_box.valign = Gtk.Align.CENTER;

        var bottom_box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        bottom_box.halign = Gtk.Align.CENTER;
        bottom_box.valign = Gtk.Align.CENTER;

        var bottom_stack = new Gtk.Stack ();
        var spinner = new Gtk.Spinner ();
        var action_box = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);

        var header1 = new Gtk.Label ("Welcome to");
        header1.halign = Gtk.Align.START;
        header1.get_style_context ().add_class (Granite.STYLE_CLASS_H1_LABEL);

        var header2 = new Gtk.Label ("Apple News");
        header2.halign = Gtk.Align.START;
        header2.get_style_context ().add_class (Granite.STYLE_CLASS_H2_LABEL);

        var header3 = new Gtk.Label ("The best stories the sources you love,\n" +
        "selected just for you.");
        header3.halign = Gtk.Align.START;
        header3.get_style_context ().add_class (Granite.STYLE_CLASS_H3_LABEL);
        header3.max_width_chars = 40;

        var header4 = new Gtk.Label ("Siri suggest stories, channels and " +
        "channels based on Safari and app usage.\n" +
        "You can change this in News Preferences.");
        header4.halign = Gtk.Align.CENTER;
        header4.get_style_context ().add_class (Granite.STYLE_CLASS_H4_LABEL);
        header4.max_width_chars = 55;
        header4.set_line_wrap(true);


        var header5 = new Gtk.Label ("Your locations is sent to Apple to " +
        "provide you with geographicaly relevant ads in Apple News and Stocks. " +
        "You can change this in News Preferences.");
        header5.halign = Gtk.Align.CENTER;
        header5.get_style_context ().add_class (Granite.STYLE_CLASS_H4_LABEL);
        header5.max_width_chars = 55;
        header5.set_line_wrap(true);
        header5.justify = Gtk.Justification.FILL;

        var url = "<span foreground=\"#FA4666\" weight=\"900\" underline=\"none\" ><a href=\"http://www.apple.com/news\" ><b>About Appple News &amp; Privacy...</b></a></span>";

        var header6 = new Gtk.Label (url);
        header6.halign = Gtk.Align.CENTER;
        header6.get_style_context ().add_class (Granite.STYLE_CLASS_H4_LABEL);
        header6.set_use_markup (true);
        header6.set_line_wrap(true);

        var button = new Gtk.Button.with_label ("Continue");
        button.get_style_context ().add_class (Gtk.STYLE_CLASS_FLAT);
        button.halign = Gtk.Align.CENTER;
        button.valign = Gtk.Align.CENTER;
        button.set_size_request (200, 32);

        halign = Gtk.Align.FILL;
        valign = Gtk.Align.FILL;

        var img = new Gtk.Image();
        img.set_from_resource("/com/github/ilap/daf/demos/news/images/logo.svg");
        img.halign = Gtk.Align.START;

        paned.pack1 (top_box, true, false);
        top_box.pack_start (img, false, false, 0);
        top_box.pack_start (header1, false, false, 0);
        top_box.pack_start (header2, false, false, 0);
        top_box.pack_start (header3, false, false, 0);

        paned.pack2 (bottom_stack, true, true);
        bottom_box.pack_start (header4, true, true, 0);
        bottom_box.pack_start (header5, true, true, 0);
        bottom_box.pack_start (header6, true, true, 0);
        bottom_box.pack_start (button, false, false, 5);

        bottom_stack.add_named (spinner, "spinner");
        bottom_stack.add_named (bottom_box, "bottom_box");

        spinner.halign = Gtk.Align.CENTER;
        spinner.valign = Gtk.Align.START;
        spinner.set_size_request (24, 24);
        spinner.active = true;

        GLib.Timeout.add (5000, () => {
           spinner.stop();
           bottom_stack.transition_type = Gtk.StackTransitionType.CROSSFADE;
           bottom_stack.transition_duration = DURATION;
           bottom_stack.set_visible_child (bottom_box);
           timeline.start ();
           return true;
        });

        add_named (paned, "paned");
        visible_child_name = "paned";

        // DaF UI 2D Property Animation
        timeline = new TimeLine.full (AnimationMode.EASE_IN_OUT_QUAD, DURATION);
        paned_anim = PropertyAnimator.animate_with_timeline (paned, timeline, "position", 225);

    }
}

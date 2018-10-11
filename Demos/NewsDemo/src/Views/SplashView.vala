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

public class SplashView : Gtk.Grid {
    construct {
        var header1 = new Gtk.Label ("Welcome to");
        header1.halign = Gtk.Align.CENTER;
        header1.get_style_context ().add_class (Granite.STYLE_CLASS_H1_LABEL);

        var header2 = new Gtk.Label ("Apple News");
        header2.halign = Gtk.Align.CENTER;
        header2.get_style_context ().add_class (Granite.STYLE_CLASS_H2_LABEL);

        var header3 = new Gtk.Label ("The best stories the sources you love,\n" +
        "selected just for you.");
        header3.halign = Gtk.Align.CENTER;
        header3.get_style_context ().add_class (Granite.STYLE_CLASS_H3_LABEL);

        var header4 = new Gtk.Label ("Siri suggest stories, channels and " +
        "channels based on Safari and app usage.\n" +
        "You can change this in News Preferences.");
        header4.halign = Gtk.Align.CENTER;
        header4.get_style_context ().add_class (Granite.STYLE_CLASS_H3_LABEL);

        var header5 = new Gtk.Label ("Your locations is sent to Apple to " +
        "provide you with geographicaly relevant ads and Stocks. " +
        "You can change this in News Preferences.");
        header5.halign = Gtk.Align.CENTER;
        header5.get_style_context ().add_class (Granite.STYLE_CLASS_H3_LABEL);

        var header6 = new Gtk.Label ("About Apple News & Privacy...");
        header6.halign = Gtk.Align.CENTER;
        header6.get_style_context ().add_class (Granite.STYLE_CLASS_H4_LABEL);



        this.expand = true;
        this.margin = 0;
        this.orientation = Gtk.Orientation.VERTICAL;
        this.valign = Gtk.Align.CENTER;
        this.halign = Gtk.Align.CENTER;


        var content = new Gtk.Box (Gtk.Orientation.VERTICAL, 0);
        this.add(content);
        //content.add (header1);
       // content.add (header2);
        //content.add (header3);

        //this.add (content);
        content.add(header1);
        content.add(header2);
        content.add(header3);
        content.add(header4);
        content.add(header5);
        content.add(header6);
    }
}
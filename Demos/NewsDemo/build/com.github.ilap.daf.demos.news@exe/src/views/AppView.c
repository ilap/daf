/* AppView.c generated by valac 0.40.10, the Vala compiler
 * generated from AppView.vala, do not modify */

/* Copyright 2017 Robert San <robertsanseries@gmail.com>
*
* This program is free software: you can redistribute it
* and/or modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation, either version 3 of the
* License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be
* useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
* Public License for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see http://www.gnu.org/licenses/.
*/


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <granite.h>
#include <stdlib.h>
#include <string.h>


#define APP_VIEWS_TYPE_APP_VIEW (app_views_app_view_get_type ())
#define APP_VIEWS_APP_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_VIEWS_TYPE_APP_VIEW, AppViewsAppView))
#define APP_VIEWS_APP_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_VIEWS_TYPE_APP_VIEW, AppViewsAppViewClass))
#define APP_VIEWS_IS_APP_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_VIEWS_TYPE_APP_VIEW))
#define APP_VIEWS_IS_APP_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_VIEWS_TYPE_APP_VIEW))
#define APP_VIEWS_APP_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_VIEWS_TYPE_APP_VIEW, AppViewsAppViewClass))

typedef struct _AppViewsAppView AppViewsAppView;
typedef struct _AppViewsAppViewClass AppViewsAppViewClass;
typedef struct _AppViewsAppViewPrivate AppViewsAppViewPrivate;

#define APP_WIDGETS_TYPE_HEADER_BAR (app_widgets_header_bar_get_type ())
#define APP_WIDGETS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_WIDGETS_TYPE_HEADER_BAR, AppWidgetsHeaderBar))
#define APP_WIDGETS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_WIDGETS_TYPE_HEADER_BAR, AppWidgetsHeaderBarClass))
#define APP_WIDGETS_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_WIDGETS_TYPE_HEADER_BAR))
#define APP_WIDGETS_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_WIDGETS_TYPE_HEADER_BAR))
#define APP_WIDGETS_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_WIDGETS_TYPE_HEADER_BAR, AppWidgetsHeaderBarClass))

typedef struct _AppWidgetsHeaderBar AppWidgetsHeaderBar;
typedef struct _AppWidgetsHeaderBarClass AppWidgetsHeaderBarClass;
enum  {
	APP_VIEWS_APP_VIEW_0_PROPERTY,
	APP_VIEWS_APP_VIEW_NUM_PROPERTIES
};
static GParamSpec* app_views_app_view_properties[APP_VIEWS_APP_VIEW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _AppViewsAppView {
	GtkGrid parent_instance;
	AppViewsAppViewPrivate * priv;
	AppWidgetsHeaderBar* headerbar;
};

struct _AppViewsAppViewClass {
	GtkGridClass parent_class;
};

struct _AppViewsAppViewPrivate {
	GtkApplicationWindow* app;
};


static gpointer app_views_app_view_parent_class = NULL;

GType app_views_app_view_get_type (void) G_GNUC_CONST;
GType app_widgets_header_bar_get_type (void) G_GNUC_CONST;
#define APP_VIEWS_APP_VIEW_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), APP_VIEWS_TYPE_APP_VIEW, AppViewsAppViewPrivate))
AppViewsAppView* app_views_app_view_new (GtkApplicationWindow* app);
AppViewsAppView* app_views_app_view_construct (GType object_type,
                                               GtkApplicationWindow* app);
AppWidgetsHeaderBar* app_widgets_header_bar_new (void);
AppWidgetsHeaderBar* app_widgets_header_bar_construct (GType object_type);
#define APP_CONFIGS_PROPERTIES_WELCOME "Welcome"
#define APP_CONFIGS_PROPERTIES_THIS_APP_JUST_TEMPLATE "This app is just a template"
static void app_views_app_view_finalize (GObject * obj);


/**
         * Constructs a new {@code AppView} object.
         */
static gpointer
_g_object_ref0 (gpointer self)
{
#line 36 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	return self ? g_object_ref (self) : NULL;
#line 95 "AppView.c"
}


AppViewsAppView*
app_views_app_view_construct (GType object_type,
                              GtkApplicationWindow* app)
{
	AppViewsAppView * self = NULL;
	GtkApplicationWindow* _tmp0_;
	GtkApplicationWindow* _tmp1_;
	GtkApplicationWindow* _tmp2_;
	GtkApplicationWindow* _tmp3_;
	GtkApplicationWindow* _tmp4_;
	AppWidgetsHeaderBar* _tmp5_;
	GtkApplicationWindow* _tmp6_;
	AppWidgetsHeaderBar* _tmp7_;
	GraniteWidgetsWelcome* welcome = NULL;
	GraniteWidgetsWelcome* _tmp8_;
#line 35 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	g_return_val_if_fail (app != NULL, NULL);
#line 35 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	self = (AppViewsAppView*) g_object_new (object_type, NULL);
#line 36 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp0_ = _g_object_ref0 (app);
#line 36 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_g_object_unref0 (self->priv->app);
#line 36 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	self->priv->app = _tmp0_;
#line 37 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp1_ = self->priv->app;
#line 37 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	gtk_window_set_default_size ((GtkWindow*) _tmp1_, 700, 600);
#line 38 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp2_ = self->priv->app;
#line 38 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	gtk_widget_set_size_request ((GtkWidget*) _tmp2_, 700, 600);
#line 39 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp3_ = self->priv->app;
#line 39 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	gtk_window_set_deletable ((GtkWindow*) _tmp3_, TRUE);
#line 40 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp4_ = self->priv->app;
#line 40 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	gtk_window_set_resizable ((GtkWindow*) _tmp4_, TRUE);
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp5_ = app_widgets_header_bar_new ();
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	g_object_ref_sink (_tmp5_);
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_g_object_unref0 (self->headerbar);
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	self->headerbar = _tmp5_;
#line 43 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp6_ = self->priv->app;
#line 43 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp7_ = self->headerbar;
#line 43 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	gtk_window_set_titlebar ((GtkWindow*) _tmp6_, (GtkWidget*) _tmp7_);
#line 45 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_tmp8_ = granite_widgets_welcome_new (APP_CONFIGS_PROPERTIES_WELCOME, APP_CONFIGS_PROPERTIES_THIS_APP_JUST_TEMPLATE);
#line 45 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	g_object_ref_sink (_tmp8_);
#line 45 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	welcome = _tmp8_;
#line 50 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) welcome);
#line 35 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_g_object_unref0 (welcome);
#line 35 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	return self;
#line 166 "AppView.c"
}


AppViewsAppView*
app_views_app_view_new (GtkApplicationWindow* app)
{
#line 35 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	return app_views_app_view_construct (APP_VIEWS_TYPE_APP_VIEW, app);
#line 175 "AppView.c"
}


static void
app_views_app_view_class_init (AppViewsAppViewClass * klass)
{
#line 27 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	app_views_app_view_parent_class = g_type_class_peek_parent (klass);
#line 27 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	g_type_class_add_private (klass, sizeof (AppViewsAppViewPrivate));
#line 27 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	G_OBJECT_CLASS (klass)->finalize = app_views_app_view_finalize;
#line 188 "AppView.c"
}


static void
app_views_app_view_instance_init (AppViewsAppView * self)
{
#line 27 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	self->priv = APP_VIEWS_APP_VIEW_GET_PRIVATE (self);
#line 197 "AppView.c"
}


static void
app_views_app_view_finalize (GObject * obj)
{
	AppViewsAppView * self;
#line 27 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, APP_VIEWS_TYPE_APP_VIEW, AppViewsAppView);
#line 29 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_g_object_unref0 (self->priv->app);
#line 30 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	_g_object_unref0 (self->headerbar);
#line 27 "/data/Projects/DaF/Demos/NewsDemo/src/views/AppView.vala"
	G_OBJECT_CLASS (app_views_app_view_parent_class)->finalize (obj);
#line 213 "AppView.c"
}


/**
     * The {@code AppView} class.
     *
     * @since 0.1.0
     */
GType
app_views_app_view_get_type (void)
{
	static volatile gsize app_views_app_view_type_id__volatile = 0;
	if (g_once_init_enter (&app_views_app_view_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AppViewsAppViewClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) app_views_app_view_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AppViewsAppView), 0, (GInstanceInitFunc) app_views_app_view_instance_init, NULL };
		GType app_views_app_view_type_id;
		app_views_app_view_type_id = g_type_register_static (gtk_grid_get_type (), "AppViewsAppView", &g_define_type_info, 0);
		g_once_init_leave (&app_views_app_view_type_id__volatile, app_views_app_view_type_id);
	}
	return app_views_app_view_type_id__volatile;
}




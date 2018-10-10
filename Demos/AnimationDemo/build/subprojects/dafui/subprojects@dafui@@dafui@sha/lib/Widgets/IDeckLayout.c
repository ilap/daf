/* IDeckLayout.c generated by valac 0.40.10, the Vala compiler
 * generated from IDeckLayout.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define DAF_UI_WIDGETS_TYPE_IDECK_LAYOUT (daf_ui_widgets_ideck_layout_get_type ())
#define DAF_UI_WIDGETS_IDECK_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_WIDGETS_TYPE_IDECK_LAYOUT, DafUIWidgetsIDeckLayout))
#define DAF_UI_WIDGETS_IS_IDECK_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_WIDGETS_TYPE_IDECK_LAYOUT))
#define DAF_UI_WIDGETS_IDECK_LAYOUT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_UI_WIDGETS_TYPE_IDECK_LAYOUT, DafUIWidgetsIDeckLayoutIface))

typedef struct _DafUIWidgetsIDeckLayout DafUIWidgetsIDeckLayout;
typedef struct _DafUIWidgetsIDeckLayoutIface DafUIWidgetsIDeckLayoutIface;

#define DAF_UI_WIDGETS_TYPE_ICARD (daf_ui_widgets_icard_get_type ())
#define DAF_UI_WIDGETS_ICARD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_WIDGETS_TYPE_ICARD, DafUIWidgetsICard))
#define DAF_UI_WIDGETS_IS_ICARD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_WIDGETS_TYPE_ICARD))
#define DAF_UI_WIDGETS_ICARD_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_UI_WIDGETS_TYPE_ICARD, DafUIWidgetsICardIface))

typedef struct _DafUIWidgetsICard DafUIWidgetsICard;
typedef struct _DafUIWidgetsICardIface DafUIWidgetsICardIface;

struct _DafUIWidgetsICardIface {
	GTypeInterface parent_iface;
	GtkWidget* (*get_widget) (DafUIWidgetsICard* self);
	void (*set_widget) (DafUIWidgetsICard* self, GtkWidget* value);
	gboolean (*get_visible) (DafUIWidgetsICard* self);
	void (*set_visible) (DafUIWidgetsICard* self, gboolean value);
	GtkAlign (*get_halign) (DafUIWidgetsICard* self);
	void (*set_halign) (DafUIWidgetsICard* self, GtkAlign value);
	GtkAlign (*get_valign) (DafUIWidgetsICard* self);
	void (*set_valign) (DafUIWidgetsICard* self, GtkAlign value);
	gboolean (*get_hexpand) (DafUIWidgetsICard* self);
	void (*set_hexpand) (DafUIWidgetsICard* self, gboolean value);
	gboolean (*get_vexpand) (DafUIWidgetsICard* self);
	void (*set_vexpand) (DafUIWidgetsICard* self, gboolean value);
};

struct _DafUIWidgetsIDeckLayoutIface {
	GTypeInterface parent_iface;
	void (*add) (DafUIWidgetsIDeckLayout* self, GtkWidget* widget);
	void (*remove) (DafUIWidgetsIDeckLayout* self, GtkWidget* widget);
	gboolean (*switch_widget) (DafUIWidgetsIDeckLayout* self, GtkWidget* widget, gboolean quiet);
	gboolean (*do_switch) (DafUIWidgetsIDeckLayout* self, DafUIWidgetsICard* card, gboolean quiet);
	DafUIWidgetsICard* (*create_card) (DafUIWidgetsIDeckLayout* self, GtkWidget* widget);
};



GType daf_ui_widgets_icard_get_type (void) G_GNUC_CONST;
GType daf_ui_widgets_ideck_layout_get_type (void) G_GNUC_CONST;
void daf_ui_widgets_ideck_layout_add (DafUIWidgetsIDeckLayout* self,
                                      GtkWidget* widget);
void daf_ui_widgets_ideck_layout_remove (DafUIWidgetsIDeckLayout* self,
                                         GtkWidget* widget);
gboolean daf_ui_widgets_ideck_layout_switch_widget (DafUIWidgetsIDeckLayout* self,
                                                    GtkWidget* widget,
                                                    gboolean quiet);
gboolean daf_ui_widgets_ideck_layout_do_switch (DafUIWidgetsIDeckLayout* self,
                                                DafUIWidgetsICard* card,
                                                gboolean quiet);
DafUIWidgetsICard* daf_ui_widgets_ideck_layout_create_card (DafUIWidgetsIDeckLayout* self,
                                                            GtkWidget* widget);


void
daf_ui_widgets_ideck_layout_add (DafUIWidgetsIDeckLayout* self,
                                 GtkWidget* widget)
{
#line 26 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	g_return_if_fail (self != NULL);
#line 26 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	DAF_UI_WIDGETS_IDECK_LAYOUT_GET_INTERFACE (self)->add (self, widget);
#line 79 "IDeckLayout.c"
}


void
daf_ui_widgets_ideck_layout_remove (DafUIWidgetsIDeckLayout* self,
                                    GtkWidget* widget)
{
#line 27 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	g_return_if_fail (self != NULL);
#line 27 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	DAF_UI_WIDGETS_IDECK_LAYOUT_GET_INTERFACE (self)->remove (self, widget);
#line 91 "IDeckLayout.c"
}


gboolean
daf_ui_widgets_ideck_layout_switch_widget (DafUIWidgetsIDeckLayout* self,
                                           GtkWidget* widget,
                                           gboolean quiet)
{
#line 29 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 29 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	return DAF_UI_WIDGETS_IDECK_LAYOUT_GET_INTERFACE (self)->switch_widget (self, widget, quiet);
#line 104 "IDeckLayout.c"
}


gboolean
daf_ui_widgets_ideck_layout_do_switch (DafUIWidgetsIDeckLayout* self,
                                       DafUIWidgetsICard* card,
                                       gboolean quiet)
{
#line 35 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 35 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	return DAF_UI_WIDGETS_IDECK_LAYOUT_GET_INTERFACE (self)->do_switch (self, card, quiet);
#line 117 "IDeckLayout.c"
}


DafUIWidgetsICard*
daf_ui_widgets_ideck_layout_create_card (DafUIWidgetsIDeckLayout* self,
                                         GtkWidget* widget)
{
#line 36 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 36 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/IDeckLayout.vala"
	return DAF_UI_WIDGETS_IDECK_LAYOUT_GET_INTERFACE (self)->create_card (self, widget);
#line 129 "IDeckLayout.c"
}


static void
daf_ui_widgets_ideck_layout_default_init (DafUIWidgetsIDeckLayoutIface * iface)
{
}


GType
daf_ui_widgets_ideck_layout_get_type (void)
{
	static volatile gsize daf_ui_widgets_ideck_layout_type_id__volatile = 0;
	if (g_once_init_enter (&daf_ui_widgets_ideck_layout_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafUIWidgetsIDeckLayoutIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_ui_widgets_ideck_layout_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_ui_widgets_ideck_layout_type_id;
		daf_ui_widgets_ideck_layout_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafUIWidgetsIDeckLayout", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_ui_widgets_ideck_layout_type_id, gtk_container_get_type ());
		g_once_init_leave (&daf_ui_widgets_ideck_layout_type_id__volatile, daf_ui_widgets_ideck_layout_type_id);
	}
	return daf_ui_widgets_ideck_layout_type_id__volatile;
}




/* ICard.c generated by valac 0.40.10, the Vala compiler
 * generated from ICard.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


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



GType daf_ui_widgets_icard_get_type (void) G_GNUC_CONST;
GtkWidget* daf_ui_widgets_icard_get_widget (DafUIWidgetsICard* self);
void daf_ui_widgets_icard_set_widget (DafUIWidgetsICard* self,
                                      GtkWidget* value);
gboolean daf_ui_widgets_icard_get_visible (DafUIWidgetsICard* self);
void daf_ui_widgets_icard_set_visible (DafUIWidgetsICard* self,
                                       gboolean value);
GtkAlign daf_ui_widgets_icard_get_halign (DafUIWidgetsICard* self);
void daf_ui_widgets_icard_set_halign (DafUIWidgetsICard* self,
                                      GtkAlign value);
GtkAlign daf_ui_widgets_icard_get_valign (DafUIWidgetsICard* self);
void daf_ui_widgets_icard_set_valign (DafUIWidgetsICard* self,
                                      GtkAlign value);
gboolean daf_ui_widgets_icard_get_hexpand (DafUIWidgetsICard* self);
void daf_ui_widgets_icard_set_hexpand (DafUIWidgetsICard* self,
                                       gboolean value);
gboolean daf_ui_widgets_icard_get_vexpand (DafUIWidgetsICard* self);
void daf_ui_widgets_icard_set_vexpand (DafUIWidgetsICard* self,
                                       gboolean value);


GtkWidget*
daf_ui_widgets_icard_get_widget (DafUIWidgetsICard* self)
{
#line 26 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 26 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	return DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->get_widget (self);
#line 66 "ICard.c"
}


void
daf_ui_widgets_icard_set_widget (DafUIWidgetsICard* self,
                                 GtkWidget* value)
{
#line 26 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_if_fail (self != NULL);
#line 26 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->set_widget (self, value);
#line 78 "ICard.c"
}


gboolean
daf_ui_widgets_icard_get_visible (DafUIWidgetsICard* self)
{
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	return DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->get_visible (self);
#line 89 "ICard.c"
}


void
daf_ui_widgets_icard_set_visible (DafUIWidgetsICard* self,
                                  gboolean value)
{
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_if_fail (self != NULL);
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->set_visible (self, value);
#line 101 "ICard.c"
}


GtkAlign
daf_ui_widgets_icard_get_halign (DafUIWidgetsICard* self)
{
#line 30 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 30 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	return DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->get_halign (self);
#line 112 "ICard.c"
}


void
daf_ui_widgets_icard_set_halign (DafUIWidgetsICard* self,
                                 GtkAlign value)
{
#line 30 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_if_fail (self != NULL);
#line 30 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->set_halign (self, value);
#line 124 "ICard.c"
}


GtkAlign
daf_ui_widgets_icard_get_valign (DafUIWidgetsICard* self)
{
#line 31 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 31 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	return DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->get_valign (self);
#line 135 "ICard.c"
}


void
daf_ui_widgets_icard_set_valign (DafUIWidgetsICard* self,
                                 GtkAlign value)
{
#line 31 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_if_fail (self != NULL);
#line 31 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->set_valign (self, value);
#line 147 "ICard.c"
}


gboolean
daf_ui_widgets_icard_get_hexpand (DafUIWidgetsICard* self)
{
#line 33 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 33 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	return DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->get_hexpand (self);
#line 158 "ICard.c"
}


void
daf_ui_widgets_icard_set_hexpand (DafUIWidgetsICard* self,
                                  gboolean value)
{
#line 33 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_if_fail (self != NULL);
#line 33 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->set_hexpand (self, value);
#line 170 "ICard.c"
}


gboolean
daf_ui_widgets_icard_get_vexpand (DafUIWidgetsICard* self)
{
#line 34 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 34 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	return DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->get_vexpand (self);
#line 181 "ICard.c"
}


void
daf_ui_widgets_icard_set_vexpand (DafUIWidgetsICard* self,
                                  gboolean value)
{
#line 34 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_return_if_fail (self != NULL);
#line 34 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	DAF_UI_WIDGETS_ICARD_GET_INTERFACE (self)->set_vexpand (self, value);
#line 193 "ICard.c"
}


static void
daf_ui_widgets_icard_default_init (DafUIWidgetsICardIface * iface)
{
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_object_interface_install_property (iface, g_param_spec_object ("widget", "widget", "widget", gtk_widget_get_type (), G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_object_interface_install_property (iface, g_param_spec_boolean ("visible", "visible", "visible", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_object_interface_install_property (iface, g_param_spec_enum ("halign", "halign", "halign", gtk_align_get_type (), GTK_ALIGN_START, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_object_interface_install_property (iface, g_param_spec_enum ("valign", "valign", "valign", gtk_align_get_type (), GTK_ALIGN_START, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_object_interface_install_property (iface, g_param_spec_boolean ("hexpand", "hexpand", "hexpand", TRUE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Widgets/ICard.vala"
	g_object_interface_install_property (iface, g_param_spec_boolean ("vexpand", "vexpand", "vexpand", TRUE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 212 "ICard.c"
}


GType
daf_ui_widgets_icard_get_type (void)
{
	static volatile gsize daf_ui_widgets_icard_type_id__volatile = 0;
	if (g_once_init_enter (&daf_ui_widgets_icard_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafUIWidgetsICardIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_ui_widgets_icard_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_ui_widgets_icard_type_id;
		daf_ui_widgets_icard_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafUIWidgetsICard", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_ui_widgets_icard_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_ui_widgets_icard_type_id__volatile, daf_ui_widgets_icard_type_id);
	}
	return daf_ui_widgets_icard_type_id__volatile;
}




/* DeckLayout.c generated by valac 0.40.10, the Vala compiler
 * generated from DeckLayout.vala, do not modify */



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

#define DAF_UI_WIDGETS_TYPE_ABSTRACT_DECK_LAYOUT (daf_ui_widgets_abstract_deck_layout_get_type ())
#define DAF_UI_WIDGETS_ABSTRACT_DECK_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_WIDGETS_TYPE_ABSTRACT_DECK_LAYOUT, DafUIWidgetsAbstractDeckLayout))
#define DAF_UI_WIDGETS_ABSTRACT_DECK_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_UI_WIDGETS_TYPE_ABSTRACT_DECK_LAYOUT, DafUIWidgetsAbstractDeckLayoutClass))
#define DAF_UI_WIDGETS_IS_ABSTRACT_DECK_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_WIDGETS_TYPE_ABSTRACT_DECK_LAYOUT))
#define DAF_UI_WIDGETS_IS_ABSTRACT_DECK_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_UI_WIDGETS_TYPE_ABSTRACT_DECK_LAYOUT))
#define DAF_UI_WIDGETS_ABSTRACT_DECK_LAYOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_UI_WIDGETS_TYPE_ABSTRACT_DECK_LAYOUT, DafUIWidgetsAbstractDeckLayoutClass))

typedef struct _DafUIWidgetsAbstractDeckLayout DafUIWidgetsAbstractDeckLayout;
typedef struct _DafUIWidgetsAbstractDeckLayoutClass DafUIWidgetsAbstractDeckLayoutClass;
typedef struct _DafUIWidgetsAbstractDeckLayoutPrivate DafUIWidgetsAbstractDeckLayoutPrivate;

#define DAF_UI_WIDGETS_TYPE_DECK_LAYOUT (daf_ui_widgets_deck_layout_get_type ())
#define DAF_UI_WIDGETS_DECK_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_WIDGETS_TYPE_DECK_LAYOUT, DafUIWidgetsDeckLayout))
#define DAF_UI_WIDGETS_DECK_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_UI_WIDGETS_TYPE_DECK_LAYOUT, DafUIWidgetsDeckLayoutClass))
#define DAF_UI_WIDGETS_IS_DECK_LAYOUT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_WIDGETS_TYPE_DECK_LAYOUT))
#define DAF_UI_WIDGETS_IS_DECK_LAYOUT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_UI_WIDGETS_TYPE_DECK_LAYOUT))
#define DAF_UI_WIDGETS_DECK_LAYOUT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_UI_WIDGETS_TYPE_DECK_LAYOUT, DafUIWidgetsDeckLayoutClass))

typedef struct _DafUIWidgetsDeckLayout DafUIWidgetsDeckLayout;
typedef struct _DafUIWidgetsDeckLayoutClass DafUIWidgetsDeckLayoutClass;
typedef struct _DafUIWidgetsDeckLayoutPrivate DafUIWidgetsDeckLayoutPrivate;
enum  {
	DAF_UI_WIDGETS_DECK_LAYOUT_0_PROPERTY,
	DAF_UI_WIDGETS_DECK_LAYOUT_NUM_PROPERTIES
};
static GParamSpec* daf_ui_widgets_deck_layout_properties[DAF_UI_WIDGETS_DECK_LAYOUT_NUM_PROPERTIES];

#define DAF_UI_WIDGETS_TYPE_CARD (daf_ui_widgets_card_get_type ())
#define DAF_UI_WIDGETS_CARD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_WIDGETS_TYPE_CARD, DafUIWidgetsCard))
#define DAF_UI_WIDGETS_CARD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_UI_WIDGETS_TYPE_CARD, DafUIWidgetsCardClass))
#define DAF_UI_WIDGETS_IS_CARD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_WIDGETS_TYPE_CARD))
#define DAF_UI_WIDGETS_IS_CARD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_UI_WIDGETS_TYPE_CARD))
#define DAF_UI_WIDGETS_CARD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_UI_WIDGETS_TYPE_CARD, DafUIWidgetsCardClass))

typedef struct _DafUIWidgetsCard DafUIWidgetsCard;
typedef struct _DafUIWidgetsCardClass DafUIWidgetsCardClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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

struct _DafUIWidgetsAbstractDeckLayout {
	GtkContainer parent_instance;
	DafUIWidgetsAbstractDeckLayoutPrivate * priv;
};

struct _DafUIWidgetsAbstractDeckLayoutClass {
	GtkContainerClass parent_class;
	gboolean (*do_switch) (DafUIWidgetsAbstractDeckLayout* self, DafUIWidgetsICard* to_card, gboolean quiet);
	DafUIWidgetsICard* (*create_card) (DafUIWidgetsAbstractDeckLayout* self, GtkWidget* widget);
	void (*compute_width) (DafUIWidgetsAbstractDeckLayout* self, DafUIWidgetsICard* card, gint* minimum, gint* natural);
	void (*compute_height) (DafUIWidgetsAbstractDeckLayout* self, DafUIWidgetsICard* card, gint* minimum, gint* natural);
};

struct _DafUIWidgetsDeckLayout {
	DafUIWidgetsAbstractDeckLayout parent_instance;
	DafUIWidgetsDeckLayoutPrivate * priv;
};

struct _DafUIWidgetsDeckLayoutClass {
	DafUIWidgetsAbstractDeckLayoutClass parent_class;
};


static gpointer daf_ui_widgets_deck_layout_parent_class = NULL;

GType daf_ui_widgets_icard_get_type (void) G_GNUC_CONST;
GType daf_ui_widgets_ideck_layout_get_type (void) G_GNUC_CONST;
GType daf_ui_widgets_abstract_deck_layout_get_type (void) G_GNUC_CONST;
GType daf_ui_widgets_deck_layout_get_type (void) G_GNUC_CONST;
static gboolean daf_ui_widgets_deck_layout_real_do_switch (DafUIWidgetsAbstractDeckLayout* base,
                                                    DafUIWidgetsICard* to_card,
                                                    gboolean quiet);
DafUIWidgetsICard* daf_ui_widgets_abstract_deck_layout_get_active_card (DafUIWidgetsAbstractDeckLayout* self);
GtkWidget* daf_ui_widgets_icard_get_widget (DafUIWidgetsICard* self);
void daf_ui_widgets_icard_set_visible (DafUIWidgetsICard* self,
                                       gboolean value);
void daf_ui_widgets_abstract_deck_layout_set_active_card (DafUIWidgetsAbstractDeckLayout* self,
                                                          DafUIWidgetsICard* value);
static DafUIWidgetsICard* daf_ui_widgets_deck_layout_real_create_card (DafUIWidgetsAbstractDeckLayout* base,
                                                                GtkWidget* widget);
GType daf_ui_widgets_card_get_type (void) G_GNUC_CONST;
DafUIWidgetsCard* daf_ui_widgets_card_new (GtkWidget* widget);
DafUIWidgetsCard* daf_ui_widgets_card_construct (GType object_type,
                                                 GtkWidget* widget);
static void daf_ui_widgets_deck_layout_real_compute_width (DafUIWidgetsAbstractDeckLayout* base,
                                                    DafUIWidgetsICard* card,
                                                    gint* minimum,
                                                    gint* natural);
static void daf_ui_widgets_deck_layout_real_compute_height (DafUIWidgetsAbstractDeckLayout* base,
                                                     DafUIWidgetsICard* card,
                                                     gint* minimum,
                                                     gint* natural);
DafUIWidgetsDeckLayout* daf_ui_widgets_deck_layout_new (void);
DafUIWidgetsDeckLayout* daf_ui_widgets_deck_layout_construct (GType object_type);
DafUIWidgetsAbstractDeckLayout* daf_ui_widgets_abstract_deck_layout_construct (GType object_type);


static gboolean
daf_ui_widgets_deck_layout_real_do_switch (DafUIWidgetsAbstractDeckLayout* base,
                                           DafUIWidgetsICard* to_card,
                                           gboolean quiet)
{
	DafUIWidgetsDeckLayout * self;
	gboolean result = FALSE;
	DafUIWidgetsICard* _tmp0_;
	DafUIWidgetsICard* _tmp1_;
	GtkWidget* _tmp2_;
	GtkWidget* _tmp3_;
	DafUIWidgetsICard* _tmp4_;
	DafUIWidgetsICard* _tmp5_;
	DafUIWidgetsICard* _tmp6_;
	DafUIWidgetsICard* _tmp7_;
	GtkWidget* _tmp8_;
	GtkWidget* _tmp9_;
	DafUIWidgetsICard* _tmp10_;
	DafUIWidgetsICard* _tmp11_;
#line 29 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	self = (DafUIWidgetsDeckLayout*) base;
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp0_ = daf_ui_widgets_abstract_deck_layout_get_active_card ((DafUIWidgetsAbstractDeckLayout*) self);
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp1_ = _tmp0_;
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp2_ = daf_ui_widgets_icard_get_widget (_tmp1_);
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp3_ = _tmp2_;
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	gtk_widget_set_child_visible (_tmp3_, FALSE);
#line 32 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp4_ = daf_ui_widgets_abstract_deck_layout_get_active_card ((DafUIWidgetsAbstractDeckLayout*) self);
#line 32 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp5_ = _tmp4_;
#line 32 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	daf_ui_widgets_icard_set_visible (_tmp5_, FALSE);
#line 34 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	daf_ui_widgets_abstract_deck_layout_set_active_card ((DafUIWidgetsAbstractDeckLayout*) self, to_card);
#line 35 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp6_ = daf_ui_widgets_abstract_deck_layout_get_active_card ((DafUIWidgetsAbstractDeckLayout*) self);
#line 35 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp7_ = _tmp6_;
#line 35 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp8_ = daf_ui_widgets_icard_get_widget (_tmp7_);
#line 35 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp9_ = _tmp8_;
#line 35 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	gtk_widget_set_child_visible (_tmp9_, TRUE);
#line 36 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp10_ = daf_ui_widgets_abstract_deck_layout_get_active_card ((DafUIWidgetsAbstractDeckLayout*) self);
#line 36 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp11_ = _tmp10_;
#line 36 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	daf_ui_widgets_icard_set_visible (_tmp11_, TRUE);
#line 38 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	result = TRUE;
#line 38 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	return result;
#line 207 "DeckLayout.c"
}


static DafUIWidgetsICard*
daf_ui_widgets_deck_layout_real_create_card (DafUIWidgetsAbstractDeckLayout* base,
                                             GtkWidget* widget)
{
	DafUIWidgetsDeckLayout * self;
	DafUIWidgetsICard* result = NULL;
	DafUIWidgetsCard* card = NULL;
	DafUIWidgetsCard* _tmp0_;
#line 41 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	self = (DafUIWidgetsDeckLayout*) base;
#line 41 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	g_return_val_if_fail (widget != NULL, NULL);
#line 43 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	gtk_widget_set_parent (widget, (GtkWidget*) ((GtkContainer*) self));
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp0_ = daf_ui_widgets_card_new (widget);
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	card = _tmp0_;
#line 46 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	result = (DafUIWidgetsICard*) card;
#line 46 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	return result;
#line 233 "DeckLayout.c"
}


static void
daf_ui_widgets_deck_layout_real_compute_width (DafUIWidgetsAbstractDeckLayout* base,
                                               DafUIWidgetsICard* card,
                                               gint* minimum,
                                               gint* natural)
{
	DafUIWidgetsDeckLayout * self;
	gint _vala_minimum = 0;
	gint _vala_natural = 0;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	self = (DafUIWidgetsDeckLayout*) base;
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	g_return_if_fail (card != NULL);
#line 50 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp0_ = daf_ui_widgets_icard_get_widget (card);
#line 50 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp1_ = _tmp0_;
#line 50 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	gtk_widget_get_preferred_width (_tmp1_, &_tmp2_, &_tmp3_);
#line 50 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_vala_minimum = _tmp2_;
#line 50 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_vala_natural = _tmp3_;
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	if (minimum) {
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
		*minimum = _vala_minimum;
#line 268 "DeckLayout.c"
	}
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	if (natural) {
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
		*natural = _vala_natural;
#line 274 "DeckLayout.c"
	}
}


static void
daf_ui_widgets_deck_layout_real_compute_height (DafUIWidgetsAbstractDeckLayout* base,
                                                DafUIWidgetsICard* card,
                                                gint* minimum,
                                                gint* natural)
{
	DafUIWidgetsDeckLayout * self;
	gint _vala_minimum = 0;
	gint _vala_natural = 0;
	GtkWidget* _tmp0_;
	GtkWidget* _tmp1_;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
#line 53 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	self = (DafUIWidgetsDeckLayout*) base;
#line 53 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	g_return_if_fail (card != NULL);
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp0_ = daf_ui_widgets_icard_get_widget (card);
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_tmp1_ = _tmp0_;
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	gtk_widget_get_preferred_width (_tmp1_, &_tmp2_, &_tmp3_);
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_vala_minimum = _tmp2_;
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	_vala_natural = _tmp3_;
#line 53 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	if (minimum) {
#line 53 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
		*minimum = _vala_minimum;
#line 310 "DeckLayout.c"
	}
#line 53 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	if (natural) {
#line 53 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
		*natural = _vala_natural;
#line 316 "DeckLayout.c"
	}
}


DafUIWidgetsDeckLayout*
daf_ui_widgets_deck_layout_construct (GType object_type)
{
	DafUIWidgetsDeckLayout * self = NULL;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	self = (DafUIWidgetsDeckLayout*) daf_ui_widgets_abstract_deck_layout_construct (object_type);
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	return self;
#line 329 "DeckLayout.c"
}


DafUIWidgetsDeckLayout*
daf_ui_widgets_deck_layout_new (void)
{
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	return daf_ui_widgets_deck_layout_construct (DAF_UI_WIDGETS_TYPE_DECK_LAYOUT);
#line 338 "DeckLayout.c"
}


static void
daf_ui_widgets_deck_layout_class_init (DafUIWidgetsDeckLayoutClass * klass)
{
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	daf_ui_widgets_deck_layout_parent_class = g_type_class_peek_parent (klass);
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	((DafUIWidgetsAbstractDeckLayoutClass *) klass)->do_switch = (gboolean (*) (DafUIWidgetsAbstractDeckLayout *, DafUIWidgetsICard*, gboolean)) daf_ui_widgets_deck_layout_real_do_switch;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	((DafUIWidgetsAbstractDeckLayoutClass *) klass)->create_card = (DafUIWidgetsICard* (*) (DafUIWidgetsAbstractDeckLayout *, GtkWidget*)) daf_ui_widgets_deck_layout_real_create_card;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	((DafUIWidgetsAbstractDeckLayoutClass *) klass)->compute_width = (void (*) (DafUIWidgetsAbstractDeckLayout *, DafUIWidgetsICard*, gint*, gint*)) daf_ui_widgets_deck_layout_real_compute_width;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafui/lib/Widgets/DeckLayout.vala"
	((DafUIWidgetsAbstractDeckLayoutClass *) klass)->compute_height = (void (*) (DafUIWidgetsAbstractDeckLayout *, DafUIWidgetsICard*, gint*, gint*)) daf_ui_widgets_deck_layout_real_compute_height;
#line 355 "DeckLayout.c"
}


static void
daf_ui_widgets_deck_layout_instance_init (DafUIWidgetsDeckLayout * self)
{
}


GType
daf_ui_widgets_deck_layout_get_type (void)
{
	static volatile gsize daf_ui_widgets_deck_layout_type_id__volatile = 0;
	if (g_once_init_enter (&daf_ui_widgets_deck_layout_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafUIWidgetsDeckLayoutClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_ui_widgets_deck_layout_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafUIWidgetsDeckLayout), 0, (GInstanceInitFunc) daf_ui_widgets_deck_layout_instance_init, NULL };
		GType daf_ui_widgets_deck_layout_type_id;
		daf_ui_widgets_deck_layout_type_id = g_type_register_static (DAF_UI_WIDGETS_TYPE_ABSTRACT_DECK_LAYOUT, "DafUIWidgetsDeckLayout", &g_define_type_info, 0);
		g_once_init_leave (&daf_ui_widgets_deck_layout_type_id__volatile, daf_ui_widgets_deck_layout_type_id);
	}
	return daf_ui_widgets_deck_layout_type_id__volatile;
}




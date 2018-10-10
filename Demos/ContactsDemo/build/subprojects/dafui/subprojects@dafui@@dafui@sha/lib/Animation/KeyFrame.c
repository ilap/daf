/* KeyFrame.c generated by valac 0.40.10, the Vala compiler
 * generated from KeyFrame.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <gobject/gvaluecollector.h>


#define DAF_UI_ANIMATION_TYPE_KEY_FRAME (daf_ui_animation_key_frame_get_type ())
#define DAF_UI_ANIMATION_KEY_FRAME(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_ANIMATION_TYPE_KEY_FRAME, DafUIAnimationKeyFrame))
#define DAF_UI_ANIMATION_KEY_FRAME_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_UI_ANIMATION_TYPE_KEY_FRAME, DafUIAnimationKeyFrameClass))
#define DAF_UI_ANIMATION_IS_KEY_FRAME(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_ANIMATION_TYPE_KEY_FRAME))
#define DAF_UI_ANIMATION_IS_KEY_FRAME_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_UI_ANIMATION_TYPE_KEY_FRAME))
#define DAF_UI_ANIMATION_KEY_FRAME_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_UI_ANIMATION_TYPE_KEY_FRAME, DafUIAnimationKeyFrameClass))

typedef struct _DafUIAnimationKeyFrame DafUIAnimationKeyFrame;
typedef struct _DafUIAnimationKeyFrameClass DafUIAnimationKeyFrameClass;
typedef struct _DafUIAnimationKeyFramePrivate DafUIAnimationKeyFramePrivate;
typedef struct _DafUIAnimationParamSpecKeyFrame DafUIAnimationParamSpecKeyFrame;

struct _DafUIAnimationKeyFrame {
	GTypeInstance parent_instance;
	volatile int ref_count;
	DafUIAnimationKeyFramePrivate * priv;
	gdouble prev_key;
	gdouble key;
	GType type;
	GValue final;
	GValue initial;
};

struct _DafUIAnimationKeyFrameClass {
	GTypeClass parent_class;
	void (*finalize) (DafUIAnimationKeyFrame *self);
};

struct _DafUIAnimationParamSpecKeyFrame {
	GParamSpec parent_instance;
};


static gpointer daf_ui_animation_key_frame_parent_class = NULL;

gpointer daf_ui_animation_key_frame_ref (gpointer instance);
void daf_ui_animation_key_frame_unref (gpointer instance);
GParamSpec* daf_ui_animation_param_spec_key_frame (const gchar* name,
                                                   const gchar* nick,
                                                   const gchar* blurb,
                                                   GType object_type,
                                                   GParamFlags flags);
void daf_ui_animation_value_set_key_frame (GValue* value,
                                           gpointer v_object);
void daf_ui_animation_value_take_key_frame (GValue* value,
                                            gpointer v_object);
gpointer daf_ui_animation_value_get_key_frame (const GValue* value);
GType daf_ui_animation_key_frame_get_type (void) G_GNUC_CONST;
DafUIAnimationKeyFrame* daf_ui_animation_key_frame_new (gdouble key,
                                                        gdouble prev_key,
                                                        GType type,
                                                        GValue* initial,
                                                        GValue* final);
DafUIAnimationKeyFrame* daf_ui_animation_key_frame_construct (GType object_type,
                                                              gdouble key,
                                                              gdouble prev_key,
                                                              GType type,
                                                              GValue* initial,
                                                              GValue* final);
static void daf_ui_animation_key_frame_finalize (DafUIAnimationKeyFrame * obj);


DafUIAnimationKeyFrame*
daf_ui_animation_key_frame_construct (GType object_type,
                                      gdouble key,
                                      gdouble prev_key,
                                      GType type,
                                      GValue* initial,
                                      GValue* final)
{
	DafUIAnimationKeyFrame* self = NULL;
	GValue _tmp0_ = {0};
	GValue _tmp1_;
	GValue _tmp2_;
	GValue _tmp3_ = {0};
	GValue _tmp4_ = {0};
	GValue _tmp5_;
	GValue _tmp6_;
	GValue _tmp7_ = {0};
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_return_val_if_fail (initial != NULL, NULL);
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_return_val_if_fail (final != NULL, NULL);
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self = (DafUIAnimationKeyFrame*) g_type_create_instance (object_type);
#line 41 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->key = key;
#line 42 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->prev_key = prev_key;
#line 44 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->type = type;
#line 46 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_value_init (&_tmp0_, type);
#line 46 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	G_IS_VALUE (&self->initial) ? (g_value_unset (&self->initial), NULL) : NULL;
#line 46 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->initial = _tmp0_;
#line 46 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	_tmp1_ = self->initial;
#line 47 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	_tmp2_ = *initial;
#line 47 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (G_IS_VALUE (&_tmp2_)) {
#line 47 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_value_init (&_tmp3_, G_VALUE_TYPE (&_tmp2_));
#line 47 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_value_copy (&_tmp2_, &_tmp3_);
#line 121 "KeyFrame.c"
	} else {
#line 47 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		_tmp3_ = _tmp2_;
#line 125 "KeyFrame.c"
	}
#line 47 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	G_IS_VALUE (&self->initial) ? (g_value_unset (&self->initial), NULL) : NULL;
#line 47 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->initial = _tmp3_;
#line 49 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_value_init (&_tmp4_, type);
#line 49 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	G_IS_VALUE (&self->final) ? (g_value_unset (&self->final), NULL) : NULL;
#line 49 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->final = _tmp4_;
#line 49 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	_tmp5_ = self->final;
#line 50 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	_tmp6_ = *final;
#line 50 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (G_IS_VALUE (&_tmp6_)) {
#line 50 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_value_init (&_tmp7_, G_VALUE_TYPE (&_tmp6_));
#line 50 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_value_copy (&_tmp6_, &_tmp7_);
#line 147 "KeyFrame.c"
	} else {
#line 50 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		_tmp7_ = _tmp6_;
#line 151 "KeyFrame.c"
	}
#line 50 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	G_IS_VALUE (&self->final) ? (g_value_unset (&self->final), NULL) : NULL;
#line 50 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->final = _tmp7_;
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return self;
#line 159 "KeyFrame.c"
}


DafUIAnimationKeyFrame*
daf_ui_animation_key_frame_new (gdouble key,
                                gdouble prev_key,
                                GType type,
                                GValue* initial,
                                GValue* final)
{
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return daf_ui_animation_key_frame_construct (DAF_UI_ANIMATION_TYPE_KEY_FRAME, key, prev_key, type, initial, final);
#line 172 "KeyFrame.c"
}


static void
daf_ui_animation_value_key_frame_init (GValue* value)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	value->data[0].v_pointer = NULL;
#line 181 "KeyFrame.c"
}


static void
daf_ui_animation_value_key_frame_free_value (GValue* value)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (value->data[0].v_pointer) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		daf_ui_animation_key_frame_unref (value->data[0].v_pointer);
#line 192 "KeyFrame.c"
	}
}


static void
daf_ui_animation_value_key_frame_copy_value (const GValue* src_value,
                                             GValue* dest_value)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (src_value->data[0].v_pointer) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		dest_value->data[0].v_pointer = daf_ui_animation_key_frame_ref (src_value->data[0].v_pointer);
#line 205 "KeyFrame.c"
	} else {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		dest_value->data[0].v_pointer = NULL;
#line 209 "KeyFrame.c"
	}
}


static gpointer
daf_ui_animation_value_key_frame_peek_pointer (const GValue* value)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return value->data[0].v_pointer;
#line 219 "KeyFrame.c"
}


static gchar*
daf_ui_animation_value_key_frame_collect_value (GValue* value,
                                                guint n_collect_values,
                                                GTypeCValue* collect_values,
                                                guint collect_flags)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (collect_values[0].v_pointer) {
#line 231 "KeyFrame.c"
		DafUIAnimationKeyFrame * object;
		object = collect_values[0].v_pointer;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		if (object->parent_instance.g_class == NULL) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 238 "KeyFrame.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 242 "KeyFrame.c"
		}
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		value->data[0].v_pointer = daf_ui_animation_key_frame_ref (object);
#line 246 "KeyFrame.c"
	} else {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		value->data[0].v_pointer = NULL;
#line 250 "KeyFrame.c"
	}
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return NULL;
#line 254 "KeyFrame.c"
}


static gchar*
daf_ui_animation_value_key_frame_lcopy_value (const GValue* value,
                                              guint n_collect_values,
                                              GTypeCValue* collect_values,
                                              guint collect_flags)
{
	DafUIAnimationKeyFrame ** object_p;
	object_p = collect_values[0].v_pointer;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (!object_p) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 270 "KeyFrame.c"
	}
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (!value->data[0].v_pointer) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		*object_p = NULL;
#line 276 "KeyFrame.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		*object_p = value->data[0].v_pointer;
#line 280 "KeyFrame.c"
	} else {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		*object_p = daf_ui_animation_key_frame_ref (value->data[0].v_pointer);
#line 284 "KeyFrame.c"
	}
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return NULL;
#line 288 "KeyFrame.c"
}


GParamSpec*
daf_ui_animation_param_spec_key_frame (const gchar* name,
                                       const gchar* nick,
                                       const gchar* blurb,
                                       GType object_type,
                                       GParamFlags flags)
{
	DafUIAnimationParamSpecKeyFrame* spec;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_return_val_if_fail (g_type_is_a (object_type, DAF_UI_ANIMATION_TYPE_KEY_FRAME), NULL);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return G_PARAM_SPEC (spec);
#line 308 "KeyFrame.c"
}


gpointer
daf_ui_animation_value_get_key_frame (const GValue* value)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, DAF_UI_ANIMATION_TYPE_KEY_FRAME), NULL);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return value->data[0].v_pointer;
#line 319 "KeyFrame.c"
}


void
daf_ui_animation_value_set_key_frame (GValue* value,
                                      gpointer v_object)
{
	DafUIAnimationKeyFrame * old;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, DAF_UI_ANIMATION_TYPE_KEY_FRAME));
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	old = value->data[0].v_pointer;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (v_object) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, DAF_UI_ANIMATION_TYPE_KEY_FRAME));
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		value->data[0].v_pointer = v_object;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		daf_ui_animation_key_frame_ref (value->data[0].v_pointer);
#line 342 "KeyFrame.c"
	} else {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		value->data[0].v_pointer = NULL;
#line 346 "KeyFrame.c"
	}
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (old) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		daf_ui_animation_key_frame_unref (old);
#line 352 "KeyFrame.c"
	}
}


void
daf_ui_animation_value_take_key_frame (GValue* value,
                                       gpointer v_object)
{
	DafUIAnimationKeyFrame * old;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, DAF_UI_ANIMATION_TYPE_KEY_FRAME));
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	old = value->data[0].v_pointer;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (v_object) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, DAF_UI_ANIMATION_TYPE_KEY_FRAME));
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		value->data[0].v_pointer = v_object;
#line 374 "KeyFrame.c"
	} else {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		value->data[0].v_pointer = NULL;
#line 378 "KeyFrame.c"
	}
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (old) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		daf_ui_animation_key_frame_unref (old);
#line 384 "KeyFrame.c"
	}
}


static void
daf_ui_animation_key_frame_class_init (DafUIAnimationKeyFrameClass * klass)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	daf_ui_animation_key_frame_parent_class = g_type_class_peek_parent (klass);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	((DafUIAnimationKeyFrameClass *) klass)->finalize = daf_ui_animation_key_frame_finalize;
#line 396 "KeyFrame.c"
}


static void
daf_ui_animation_key_frame_instance_init (DafUIAnimationKeyFrame * self)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self->ref_count = 1;
#line 405 "KeyFrame.c"
}


static void
daf_ui_animation_key_frame_finalize (DafUIAnimationKeyFrame * obj)
{
	DafUIAnimationKeyFrame * self;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAF_UI_ANIMATION_TYPE_KEY_FRAME, DafUIAnimationKeyFrame);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_signal_handlers_destroy (self);
#line 36 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	G_IS_VALUE (&self->final) ? (g_value_unset (&self->final), NULL) : NULL;
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	G_IS_VALUE (&self->initial) ? (g_value_unset (&self->initial), NULL) : NULL;
#line 421 "KeyFrame.c"
}


/**
     * Keyframe class to hold the initial, computed and final values of a property.
     * The initial value will be computed on the start of the animation.
     *
     * I had to implement the keyframe as I got some issues /w animations
     * (widget is flickering) when a Widget is centered and the parent is resizing.
     */
GType
daf_ui_animation_key_frame_get_type (void)
{
	static volatile gsize daf_ui_animation_key_frame_type_id__volatile = 0;
	if (g_once_init_enter (&daf_ui_animation_key_frame_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { daf_ui_animation_value_key_frame_init, daf_ui_animation_value_key_frame_free_value, daf_ui_animation_value_key_frame_copy_value, daf_ui_animation_value_key_frame_peek_pointer, "p", daf_ui_animation_value_key_frame_collect_value, "p", daf_ui_animation_value_key_frame_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (DafUIAnimationKeyFrameClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_ui_animation_key_frame_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafUIAnimationKeyFrame), 0, (GInstanceInitFunc) daf_ui_animation_key_frame_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType daf_ui_animation_key_frame_type_id;
		daf_ui_animation_key_frame_type_id = g_type_register_fundamental (g_type_fundamental_next (), "DafUIAnimationKeyFrame", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&daf_ui_animation_key_frame_type_id__volatile, daf_ui_animation_key_frame_type_id);
	}
	return daf_ui_animation_key_frame_type_id__volatile;
}


gpointer
daf_ui_animation_key_frame_ref (gpointer instance)
{
	DafUIAnimationKeyFrame * self;
	self = instance;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	g_atomic_int_inc (&self->ref_count);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	return instance;
#line 457 "KeyFrame.c"
}


void
daf_ui_animation_key_frame_unref (gpointer instance)
{
	DafUIAnimationKeyFrame * self;
	self = instance;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		DAF_UI_ANIMATION_KEY_FRAME_GET_CLASS (self)->finalize (self);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/lib/Animation/KeyFrame.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 472 "KeyFrame.c"
	}
}




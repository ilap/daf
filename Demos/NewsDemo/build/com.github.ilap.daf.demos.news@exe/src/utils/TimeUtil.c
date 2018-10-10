/* TimeUtil.c generated by valac 0.40.10, the Vala compiler
 * generated from TimeUtil.vala, do not modify */

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
* 
*/


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define APP_UTILS_TYPE_TIME_UTIL (app_utils_time_util_get_type ())
#define APP_UTILS_TIME_UTIL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_UTILS_TYPE_TIME_UTIL, AppUtilsTimeUtil))
#define APP_UTILS_TIME_UTIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_UTILS_TYPE_TIME_UTIL, AppUtilsTimeUtilClass))
#define APP_UTILS_IS_TIME_UTIL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_UTILS_TYPE_TIME_UTIL))
#define APP_UTILS_IS_TIME_UTIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_UTILS_TYPE_TIME_UTIL))
#define APP_UTILS_TIME_UTIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_UTILS_TYPE_TIME_UTIL, AppUtilsTimeUtilClass))

typedef struct _AppUtilsTimeUtil AppUtilsTimeUtil;
typedef struct _AppUtilsTimeUtilClass AppUtilsTimeUtilClass;
typedef struct _AppUtilsTimeUtilPrivate AppUtilsTimeUtilPrivate;
typedef struct _AppUtilsParamSpecTimeUtil AppUtilsParamSpecTimeUtil;

struct _AppUtilsTimeUtil {
	GTypeInstance parent_instance;
	volatile int ref_count;
	AppUtilsTimeUtilPrivate * priv;
};

struct _AppUtilsTimeUtilClass {
	GTypeClass parent_class;
	void (*finalize) (AppUtilsTimeUtil *self);
};

struct _AppUtilsParamSpecTimeUtil {
	GParamSpec parent_instance;
};


static gpointer app_utils_time_util_parent_class = NULL;

gpointer app_utils_time_util_ref (gpointer instance);
void app_utils_time_util_unref (gpointer instance);
GParamSpec* app_utils_param_spec_time_util (const gchar* name,
                                            const gchar* nick,
                                            const gchar* blurb,
                                            GType object_type,
                                            GParamFlags flags);
void app_utils_value_set_time_util (GValue* value,
                                    gpointer v_object);
void app_utils_value_take_time_util (GValue* value,
                                     gpointer v_object);
gpointer app_utils_value_get_time_util (const GValue* value);
GType app_utils_time_util_get_type (void) G_GNUC_CONST;
gint app_utils_time_util_duration_in_seconds (const gchar* duration);
AppUtilsTimeUtil* app_utils_time_util_new (void);
AppUtilsTimeUtil* app_utils_time_util_construct (GType object_type);
static void app_utils_time_util_finalize (AppUtilsTimeUtil * obj);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


/**
         * Responsible for getting the value of in string duration in 
         * the format "00:00:00:00.00" and returning the duration in seconds.
         *
         * Exemple:
         * > TimeUtil.duration_in_seconds("00:01:14:36.00")  = 74
         * 
         * @param  {@code string} duration
         * @return {@code int}
         */
gint
app_utils_time_util_duration_in_seconds (const gchar* duration)
{
	gint result = 0;
	gchar** str = NULL;
	gchar** _tmp0_;
	gchar** _tmp1_;
	gint str_length1;
	gint _str_size_;
	gchar** time = NULL;
	const gchar* _tmp2_;
	gchar** _tmp3_;
	gchar** _tmp4_;
	gint time_length1;
	gint _time_size_;
	gint hours = 0;
	const gchar* _tmp5_;
	gint mins = 0;
	const gchar* _tmp6_;
	gint secs = 0;
	const gchar* _tmp7_;
#line 40 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	g_return_val_if_fail (duration != NULL, 0);
#line 41 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_tmp1_ = _tmp0_ = g_strsplit (duration, ".", 0);
#line 41 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	str = _tmp1_;
#line 41 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	str_length1 = _vala_array_length (_tmp0_);
#line 41 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_str_size_ = str_length1;
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_tmp2_ = str[0];
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_tmp4_ = _tmp3_ = g_strsplit (_tmp2_, ":", 0);
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	time = _tmp4_;
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	time_length1 = _vala_array_length (_tmp3_);
#line 42 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_time_size_ = time_length1;
#line 44 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_tmp5_ = time[0];
#line 44 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	hours = atoi (_tmp5_);
#line 45 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_tmp6_ = time[1];
#line 45 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	mins = atoi (_tmp6_);
#line 46 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	_tmp7_ = time[2];
#line 46 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	secs = atoi (_tmp7_);
#line 48 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	result = (secs + (hours * 3600)) + (mins * 60);
#line 48 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	time = (_vala_array_free (time, time_length1, (GDestroyNotify) g_free), NULL);
#line 48 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	str = (_vala_array_free (str, str_length1, (GDestroyNotify) g_free), NULL);
#line 48 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return result;
#line 160 "TimeUtil.c"
}


AppUtilsTimeUtil*
app_utils_time_util_construct (GType object_type)
{
	AppUtilsTimeUtil* self = NULL;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	self = (AppUtilsTimeUtil*) g_type_create_instance (object_type);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return self;
#line 172 "TimeUtil.c"
}


AppUtilsTimeUtil*
app_utils_time_util_new (void)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return app_utils_time_util_construct (APP_UTILS_TYPE_TIME_UTIL);
#line 181 "TimeUtil.c"
}


static void
app_utils_value_time_util_init (GValue* value)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	value->data[0].v_pointer = NULL;
#line 190 "TimeUtil.c"
}


static void
app_utils_value_time_util_free_value (GValue* value)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (value->data[0].v_pointer) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		app_utils_time_util_unref (value->data[0].v_pointer);
#line 201 "TimeUtil.c"
	}
}


static void
app_utils_value_time_util_copy_value (const GValue* src_value,
                                      GValue* dest_value)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (src_value->data[0].v_pointer) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		dest_value->data[0].v_pointer = app_utils_time_util_ref (src_value->data[0].v_pointer);
#line 214 "TimeUtil.c"
	} else {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		dest_value->data[0].v_pointer = NULL;
#line 218 "TimeUtil.c"
	}
}


static gpointer
app_utils_value_time_util_peek_pointer (const GValue* value)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return value->data[0].v_pointer;
#line 228 "TimeUtil.c"
}


static gchar*
app_utils_value_time_util_collect_value (GValue* value,
                                         guint n_collect_values,
                                         GTypeCValue* collect_values,
                                         guint collect_flags)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (collect_values[0].v_pointer) {
#line 240 "TimeUtil.c"
		AppUtilsTimeUtil * object;
		object = collect_values[0].v_pointer;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		if (object->parent_instance.g_class == NULL) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 247 "TimeUtil.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 251 "TimeUtil.c"
		}
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		value->data[0].v_pointer = app_utils_time_util_ref (object);
#line 255 "TimeUtil.c"
	} else {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		value->data[0].v_pointer = NULL;
#line 259 "TimeUtil.c"
	}
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return NULL;
#line 263 "TimeUtil.c"
}


static gchar*
app_utils_value_time_util_lcopy_value (const GValue* value,
                                       guint n_collect_values,
                                       GTypeCValue* collect_values,
                                       guint collect_flags)
{
	AppUtilsTimeUtil ** object_p;
	object_p = collect_values[0].v_pointer;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (!object_p) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 279 "TimeUtil.c"
	}
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (!value->data[0].v_pointer) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		*object_p = NULL;
#line 285 "TimeUtil.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		*object_p = value->data[0].v_pointer;
#line 289 "TimeUtil.c"
	} else {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		*object_p = app_utils_time_util_ref (value->data[0].v_pointer);
#line 293 "TimeUtil.c"
	}
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return NULL;
#line 297 "TimeUtil.c"
}


GParamSpec*
app_utils_param_spec_time_util (const gchar* name,
                                const gchar* nick,
                                const gchar* blurb,
                                GType object_type,
                                GParamFlags flags)
{
	AppUtilsParamSpecTimeUtil* spec;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	g_return_val_if_fail (g_type_is_a (object_type, APP_UTILS_TYPE_TIME_UTIL), NULL);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return G_PARAM_SPEC (spec);
#line 317 "TimeUtil.c"
}


gpointer
app_utils_value_get_time_util (const GValue* value)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, APP_UTILS_TYPE_TIME_UTIL), NULL);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return value->data[0].v_pointer;
#line 328 "TimeUtil.c"
}


void
app_utils_value_set_time_util (GValue* value,
                               gpointer v_object)
{
	AppUtilsTimeUtil * old;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, APP_UTILS_TYPE_TIME_UTIL));
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	old = value->data[0].v_pointer;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (v_object) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, APP_UTILS_TYPE_TIME_UTIL));
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		value->data[0].v_pointer = v_object;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		app_utils_time_util_ref (value->data[0].v_pointer);
#line 351 "TimeUtil.c"
	} else {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		value->data[0].v_pointer = NULL;
#line 355 "TimeUtil.c"
	}
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (old) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		app_utils_time_util_unref (old);
#line 361 "TimeUtil.c"
	}
}


void
app_utils_value_take_time_util (GValue* value,
                                gpointer v_object)
{
	AppUtilsTimeUtil * old;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, APP_UTILS_TYPE_TIME_UTIL));
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	old = value->data[0].v_pointer;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (v_object) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, APP_UTILS_TYPE_TIME_UTIL));
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		value->data[0].v_pointer = v_object;
#line 383 "TimeUtil.c"
	} else {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		value->data[0].v_pointer = NULL;
#line 387 "TimeUtil.c"
	}
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (old) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		app_utils_time_util_unref (old);
#line 393 "TimeUtil.c"
	}
}


static void
app_utils_time_util_class_init (AppUtilsTimeUtilClass * klass)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	app_utils_time_util_parent_class = g_type_class_peek_parent (klass);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	((AppUtilsTimeUtilClass *) klass)->finalize = app_utils_time_util_finalize;
#line 405 "TimeUtil.c"
}


static void
app_utils_time_util_instance_init (AppUtilsTimeUtil * self)
{
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	self->ref_count = 1;
#line 414 "TimeUtil.c"
}


static void
app_utils_time_util_finalize (AppUtilsTimeUtil * obj)
{
	AppUtilsTimeUtil * self;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, APP_UTILS_TYPE_TIME_UTIL, AppUtilsTimeUtil);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	g_signal_handlers_destroy (self);
#line 426 "TimeUtil.c"
}


/**
     * The class {@code TimeUtil} handles time-related data.
     *
     * @since 0.1.0
     */
GType
app_utils_time_util_get_type (void)
{
	static volatile gsize app_utils_time_util_type_id__volatile = 0;
	if (g_once_init_enter (&app_utils_time_util_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { app_utils_value_time_util_init, app_utils_value_time_util_free_value, app_utils_value_time_util_copy_value, app_utils_value_time_util_peek_pointer, "p", app_utils_value_time_util_collect_value, "p", app_utils_value_time_util_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (AppUtilsTimeUtilClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) app_utils_time_util_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AppUtilsTimeUtil), 0, (GInstanceInitFunc) app_utils_time_util_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType app_utils_time_util_type_id;
		app_utils_time_util_type_id = g_type_register_fundamental (g_type_fundamental_next (), "AppUtilsTimeUtil", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&app_utils_time_util_type_id__volatile, app_utils_time_util_type_id);
	}
	return app_utils_time_util_type_id__volatile;
}


gpointer
app_utils_time_util_ref (gpointer instance)
{
	AppUtilsTimeUtil * self;
	self = instance;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	g_atomic_int_inc (&self->ref_count);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	return instance;
#line 460 "TimeUtil.c"
}


void
app_utils_time_util_unref (gpointer instance)
{
	AppUtilsTimeUtil * self;
	self = instance;
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		APP_UTILS_TIME_UTIL_GET_CLASS (self)->finalize (self);
#line 28 "/data/Projects/DaF/Demos/NewsDemo/src/utils/TimeUtil.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 475 "TimeUtil.c"
	}
}


static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint
_vala_array_length (gpointer array)
{
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}




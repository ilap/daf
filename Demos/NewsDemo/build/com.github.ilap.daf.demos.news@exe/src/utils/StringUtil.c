/* StringUtil.c generated by valac 0.40.10, the Vala compiler
 * generated from StringUtil.vala, do not modify */

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
* Boston, MA 02110-1301 USACiano
*/


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define APP_UTILS_TYPE_STRING_UTIL (app_utils_string_util_get_type ())
#define APP_UTILS_STRING_UTIL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_UTILS_TYPE_STRING_UTIL, AppUtilsStringUtil))
#define APP_UTILS_STRING_UTIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_UTILS_TYPE_STRING_UTIL, AppUtilsStringUtilClass))
#define APP_UTILS_IS_STRING_UTIL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_UTILS_TYPE_STRING_UTIL))
#define APP_UTILS_IS_STRING_UTIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_UTILS_TYPE_STRING_UTIL))
#define APP_UTILS_STRING_UTIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_UTILS_TYPE_STRING_UTIL, AppUtilsStringUtilClass))

typedef struct _AppUtilsStringUtil AppUtilsStringUtil;
typedef struct _AppUtilsStringUtilClass AppUtilsStringUtilClass;
typedef struct _AppUtilsStringUtilPrivate AppUtilsStringUtilPrivate;
typedef struct _AppUtilsParamSpecStringUtil AppUtilsParamSpecStringUtil;

struct _AppUtilsStringUtil {
	GTypeInstance parent_instance;
	volatile int ref_count;
	AppUtilsStringUtilPrivate * priv;
};

struct _AppUtilsStringUtilClass {
	GTypeClass parent_class;
	void (*finalize) (AppUtilsStringUtil *self);
};

struct _AppUtilsParamSpecStringUtil {
	GParamSpec parent_instance;
};


static gpointer app_utils_string_util_parent_class = NULL;

gpointer app_utils_string_util_ref (gpointer instance);
void app_utils_string_util_unref (gpointer instance);
GParamSpec* app_utils_param_spec_string_util (const gchar* name,
                                              const gchar* nick,
                                              const gchar* blurb,
                                              GType object_type,
                                              GParamFlags flags);
void app_utils_value_set_string_util (GValue* value,
                                      gpointer v_object);
void app_utils_value_take_string_util (GValue* value,
                                       gpointer v_object);
gpointer app_utils_value_get_string_util (const GValue* value);
GType app_utils_string_util_get_type (void) G_GNUC_CONST;
#define APP_UTILS_STRING_UTIL_SPACE " "
#define APP_UTILS_STRING_UTIL_EMPTY ""
#define APP_UTILS_STRING_UTIL_BREAK_LINE "\n"
gboolean app_utils_string_util_is_empty (const gchar* value);
gboolean app_utils_string_util_is_not_empty (const gchar* value);
gboolean app_utils_string_util_is_blank (const gchar* value);
gboolean app_utils_string_util_is_not_blank (const gchar* value);
AppUtilsStringUtil* app_utils_string_util_new (void);
AppUtilsStringUtil* app_utils_string_util_construct (GType object_type);
static void app_utils_string_util_finalize (AppUtilsStringUtil * obj);


/**
         * Checks if a string is empty ("") or null.
         *
         * Exemple:
         * > StringUtil.is_empty(null)       = true
         * > StringUtil.is_empty("")         = true
         * > StringUtil.is_empty(" ")        = false
         * > StringUtil.is_empty("test")     = false
         * > StringUtil.is_empty("  test  ") = false
         * 
         * @param  {@code string} value - the string to check, not may be null
         * @return {@code bool} true - if the string is empty or null
         */
gboolean
app_utils_string_util_is_empty (const gchar* value)
{
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
#line 73 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (value == NULL) {
#line 73 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp0_ = TRUE;
#line 109 "StringUtil.c"
	} else {
		gint _tmp1_;
		gint _tmp2_;
#line 73 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp1_ = strlen (value);
#line 73 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp2_ = _tmp1_;
#line 73 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp0_ = _tmp2_ == 0;
#line 119 "StringUtil.c"
	}
#line 73 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	result = _tmp0_;
#line 73 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return result;
#line 125 "StringUtil.c"
}


/**
         * Checks if a string is not empty ("") and not null.
         *
         * Exemple:
         * > StringUtil.is_not_empty(null)       = false
         * > StringUtil.is_not_empty("")         = false
         * > StringUtil.is_not_empty(" ")        = true
         * > StringUtil.is_not_empty("test")     = true
         * > StringUtil.is_not_empty("  test  ") = true
         *
         * @param  {@code string} value - the string to check, may be null
         * @return {@code bool} true -if the string is not empty and not null
         */
gboolean
app_utils_string_util_is_not_empty (const gchar* value)
{
	gboolean result = FALSE;
#line 90 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	result = !app_utils_string_util_is_empty (value);
#line 90 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return result;
#line 150 "StringUtil.c"
}


/**
         * Checks if a string is empty (""), null or with whitespace.
         * 
         * Exemple:
         * > StringUtil.is_blank(null)       = true
         * > StringUtil.is_blank("")         = true
         * > StringUtil.is_blank(" ")        = true
         * > StringUtil.is_blank("test")     = false
         * > StringUtil.is_blank("  test  ") = false
         *
         * @param  {@code string} value - the string to check, may be null
         * @return {@code bool} - true if the string is null, empty or whitespace only
         */
static gchar
string_get (const gchar* self,
            glong index)
{
	gchar result = '\0';
	gchar _tmp0_;
#line 1180 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	g_return_val_if_fail (self != NULL, '\0');
#line 1181 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	_tmp0_ = ((gchar*) self)[index];
#line 1181 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	result = _tmp0_;
#line 1181 "/usr/share/vala-0.40/vapi/glib-2.0.vapi"
	return result;
#line 181 "StringUtil.c"
}


gboolean
app_utils_string_util_is_blank (const gchar* value)
{
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
#line 107 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (value == NULL) {
#line 107 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp0_ = TRUE;
#line 194 "StringUtil.c"
	} else {
		gint _tmp1_;
		gint _tmp2_;
#line 107 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp1_ = strlen (value);
#line 107 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp2_ = _tmp1_;
#line 107 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		_tmp0_ = _tmp2_ == 0;
#line 204 "StringUtil.c"
	}
#line 107 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (_tmp0_) {
#line 108 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		result = TRUE;
#line 108 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		return result;
#line 212 "StringUtil.c"
	}
	{
		gint i = 0;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		i = 0;
#line 218 "StringUtil.c"
		{
			gboolean _tmp3_ = FALSE;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
			_tmp3_ = TRUE;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
			while (TRUE) {
#line 225 "StringUtil.c"
				gint _tmp5_;
				gint _tmp6_;
				gint _tmp7_;
				gint _tmp8_;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				if (!_tmp3_) {
#line 232 "StringUtil.c"
					gint _tmp4_;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
					_tmp4_ = i;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
					i = _tmp4_ + 1;
#line 238 "StringUtil.c"
				}
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				_tmp3_ = FALSE;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				_tmp5_ = i;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				_tmp6_ = strlen (value);
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				_tmp7_ = _tmp6_;
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				if (!(_tmp5_ < _tmp7_)) {
#line 111 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
					break;
#line 252 "StringUtil.c"
				}
#line 112 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				_tmp8_ = i;
#line 112 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
				if (string_get (value, (glong) _tmp8_) != ' ') {
#line 113 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
					result = FALSE;
#line 113 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
					return result;
#line 262 "StringUtil.c"
				}
			}
		}
	}
#line 117 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	result = TRUE;
#line 117 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return result;
#line 271 "StringUtil.c"
}


/**
         * Checks if a string is not empty (""), not null or has no whitespace.
         * 
         * Exemple:
         * > StringUtil.is_not_blank(null)       = false
         * > StringUtil.is_not_blank("")         = false
         * > StringUtil.is_not_blank(" ")        = false
         * > StringUtil.is_not_blank("test")     = true
         * > StringUtil.is_not_blank("  test  ") = true
         *
         * @param  {@code string} value - the string to check, may be null
         * @return {@code bool} - true if the string is not empty and not null and not whitespace only
         */
gboolean
app_utils_string_util_is_not_blank (const gchar* value)
{
	gboolean result = FALSE;
#line 134 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	result = !app_utils_string_util_is_blank (value);
#line 134 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return result;
#line 296 "StringUtil.c"
}


AppUtilsStringUtil*
app_utils_string_util_construct (GType object_type)
{
	AppUtilsStringUtil* self = NULL;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	self = (AppUtilsStringUtil*) g_type_create_instance (object_type);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return self;
#line 308 "StringUtil.c"
}


AppUtilsStringUtil*
app_utils_string_util_new (void)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return app_utils_string_util_construct (APP_UTILS_TYPE_STRING_UTIL);
#line 317 "StringUtil.c"
}


static void
app_utils_value_string_util_init (GValue* value)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	value->data[0].v_pointer = NULL;
#line 326 "StringUtil.c"
}


static void
app_utils_value_string_util_free_value (GValue* value)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (value->data[0].v_pointer) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		app_utils_string_util_unref (value->data[0].v_pointer);
#line 337 "StringUtil.c"
	}
}


static void
app_utils_value_string_util_copy_value (const GValue* src_value,
                                        GValue* dest_value)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (src_value->data[0].v_pointer) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		dest_value->data[0].v_pointer = app_utils_string_util_ref (src_value->data[0].v_pointer);
#line 350 "StringUtil.c"
	} else {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		dest_value->data[0].v_pointer = NULL;
#line 354 "StringUtil.c"
	}
}


static gpointer
app_utils_value_string_util_peek_pointer (const GValue* value)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return value->data[0].v_pointer;
#line 364 "StringUtil.c"
}


static gchar*
app_utils_value_string_util_collect_value (GValue* value,
                                           guint n_collect_values,
                                           GTypeCValue* collect_values,
                                           guint collect_flags)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (collect_values[0].v_pointer) {
#line 376 "StringUtil.c"
		AppUtilsStringUtil * object;
		object = collect_values[0].v_pointer;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		if (object->parent_instance.g_class == NULL) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 383 "StringUtil.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 387 "StringUtil.c"
		}
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		value->data[0].v_pointer = app_utils_string_util_ref (object);
#line 391 "StringUtil.c"
	} else {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		value->data[0].v_pointer = NULL;
#line 395 "StringUtil.c"
	}
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return NULL;
#line 399 "StringUtil.c"
}


static gchar*
app_utils_value_string_util_lcopy_value (const GValue* value,
                                         guint n_collect_values,
                                         GTypeCValue* collect_values,
                                         guint collect_flags)
{
	AppUtilsStringUtil ** object_p;
	object_p = collect_values[0].v_pointer;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (!object_p) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 415 "StringUtil.c"
	}
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (!value->data[0].v_pointer) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		*object_p = NULL;
#line 421 "StringUtil.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		*object_p = value->data[0].v_pointer;
#line 425 "StringUtil.c"
	} else {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		*object_p = app_utils_string_util_ref (value->data[0].v_pointer);
#line 429 "StringUtil.c"
	}
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return NULL;
#line 433 "StringUtil.c"
}


GParamSpec*
app_utils_param_spec_string_util (const gchar* name,
                                  const gchar* nick,
                                  const gchar* blurb,
                                  GType object_type,
                                  GParamFlags flags)
{
	AppUtilsParamSpecStringUtil* spec;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	g_return_val_if_fail (g_type_is_a (object_type, APP_UTILS_TYPE_STRING_UTIL), NULL);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return G_PARAM_SPEC (spec);
#line 453 "StringUtil.c"
}


gpointer
app_utils_value_get_string_util (const GValue* value)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, APP_UTILS_TYPE_STRING_UTIL), NULL);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return value->data[0].v_pointer;
#line 464 "StringUtil.c"
}


void
app_utils_value_set_string_util (GValue* value,
                                 gpointer v_object)
{
	AppUtilsStringUtil * old;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, APP_UTILS_TYPE_STRING_UTIL));
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	old = value->data[0].v_pointer;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (v_object) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, APP_UTILS_TYPE_STRING_UTIL));
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		value->data[0].v_pointer = v_object;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		app_utils_string_util_ref (value->data[0].v_pointer);
#line 487 "StringUtil.c"
	} else {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		value->data[0].v_pointer = NULL;
#line 491 "StringUtil.c"
	}
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (old) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		app_utils_string_util_unref (old);
#line 497 "StringUtil.c"
	}
}


void
app_utils_value_take_string_util (GValue* value,
                                  gpointer v_object)
{
	AppUtilsStringUtil * old;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, APP_UTILS_TYPE_STRING_UTIL));
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	old = value->data[0].v_pointer;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (v_object) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, APP_UTILS_TYPE_STRING_UTIL));
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		value->data[0].v_pointer = v_object;
#line 519 "StringUtil.c"
	} else {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		value->data[0].v_pointer = NULL;
#line 523 "StringUtil.c"
	}
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (old) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		app_utils_string_util_unref (old);
#line 529 "StringUtil.c"
	}
}


static void
app_utils_string_util_class_init (AppUtilsStringUtilClass * klass)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	app_utils_string_util_parent_class = g_type_class_peek_parent (klass);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	((AppUtilsStringUtilClass *) klass)->finalize = app_utils_string_util_finalize;
#line 541 "StringUtil.c"
}


static void
app_utils_string_util_instance_init (AppUtilsStringUtil * self)
{
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	self->ref_count = 1;
#line 550 "StringUtil.c"
}


static void
app_utils_string_util_finalize (AppUtilsStringUtil * obj)
{
	AppUtilsStringUtil * self;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, APP_UTILS_TYPE_STRING_UTIL, AppUtilsStringUtil);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	g_signal_handlers_destroy (self);
#line 562 "StringUtil.c"
}


/**
     * The {@code StringUtil} class defines certain words related to
     * string handling.
     *
     * {@code StringUtil} handles {@code null} input strings quietly.
     * That is to say that a {@code null} input will return {@code null}.
     * Where a {@code boolean} or {@code int} is being returned
     * details vary by method.
     *
     * @since 0.1.0
     */
GType
app_utils_string_util_get_type (void)
{
	static volatile gsize app_utils_string_util_type_id__volatile = 0;
	if (g_once_init_enter (&app_utils_string_util_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { app_utils_value_string_util_init, app_utils_value_string_util_free_value, app_utils_value_string_util_copy_value, app_utils_value_string_util_peek_pointer, "p", app_utils_value_string_util_collect_value, "p", app_utils_value_string_util_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (AppUtilsStringUtilClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) app_utils_string_util_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AppUtilsStringUtil), 0, (GInstanceInitFunc) app_utils_string_util_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType app_utils_string_util_type_id;
		app_utils_string_util_type_id = g_type_register_fundamental (g_type_fundamental_next (), "AppUtilsStringUtil", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&app_utils_string_util_type_id__volatile, app_utils_string_util_type_id);
	}
	return app_utils_string_util_type_id__volatile;
}


gpointer
app_utils_string_util_ref (gpointer instance)
{
	AppUtilsStringUtil * self;
	self = instance;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	g_atomic_int_inc (&self->ref_count);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	return instance;
#line 602 "StringUtil.c"
}


void
app_utils_string_util_unref (gpointer instance)
{
	AppUtilsStringUtil * self;
	self = instance;
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		APP_UTILS_STRING_UTIL_GET_CLASS (self)->finalize (self);
#line 33 "/data/Projects/DaF/Demos/NewsDemo/src/utils/StringUtil.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 617 "StringUtil.c"
	}
}




/* Person.c generated by valac 0.40.10, the Vala compiler
 * generated from Person.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2012 Pal Dorogi <pal.dorogi@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FIt_mESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define DAF_UI_TEST_MODEL_TYPE_PERSON (daf_ui_test_model_person_get_type ())
#define DAF_UI_TEST_MODEL_PERSON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_TEST_MODEL_TYPE_PERSON, DafUITestModelPerson))
#define DAF_UI_TEST_MODEL_PERSON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_UI_TEST_MODEL_TYPE_PERSON, DafUITestModelPersonClass))
#define DAF_UI_TEST_MODEL_IS_PERSON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_TEST_MODEL_TYPE_PERSON))
#define DAF_UI_TEST_MODEL_IS_PERSON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_UI_TEST_MODEL_TYPE_PERSON))
#define DAF_UI_TEST_MODEL_PERSON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_UI_TEST_MODEL_TYPE_PERSON, DafUITestModelPersonClass))

typedef struct _DafUITestModelPerson DafUITestModelPerson;
typedef struct _DafUITestModelPersonClass DafUITestModelPersonClass;
typedef struct _DafUITestModelPersonPrivate DafUITestModelPersonPrivate;

#define DAF_UI_TEST_MODEL_TYPE_GENDER (daf_ui_test_model_gender_get_type ())

#define DAF_UI_TEST_MODEL_TYPE_ADDRESS (daf_ui_test_model_address_get_type ())
#define DAF_UI_TEST_MODEL_ADDRESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_TEST_MODEL_TYPE_ADDRESS, DafUITestModelAddress))
#define DAF_UI_TEST_MODEL_ADDRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_UI_TEST_MODEL_TYPE_ADDRESS, DafUITestModelAddressClass))
#define DAF_UI_TEST_MODEL_IS_ADDRESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_TEST_MODEL_TYPE_ADDRESS))
#define DAF_UI_TEST_MODEL_IS_ADDRESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_UI_TEST_MODEL_TYPE_ADDRESS))
#define DAF_UI_TEST_MODEL_ADDRESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_UI_TEST_MODEL_TYPE_ADDRESS, DafUITestModelAddressClass))

typedef struct _DafUITestModelAddress DafUITestModelAddress;
typedef struct _DafUITestModelAddressClass DafUITestModelAddressClass;
enum  {
	DAF_UI_TEST_MODEL_PERSON_0_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_FIRST_NAME_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_LAST_NAME_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_EMAIL_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_AGE_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_SEX_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_SPOUSE_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_FRIENDS_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_ADDRESS_PROPERTY,
	DAF_UI_TEST_MODEL_PERSON_NUM_PROPERTIES
};
static GParamSpec* daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _DafUITestModelPerson {
	GObject parent_instance;
	DafUITestModelPersonPrivate * priv;
};

struct _DafUITestModelPersonClass {
	GObjectClass parent_class;
};

typedef enum  {
	DAF_UI_TEST_MODEL_GENDER_MALE,
	DAF_UI_TEST_MODEL_GENDER_FEMALE
} DafUITestModelGender;

struct _DafUITestModelPersonPrivate {
	gchar* _first_name;
	gchar* _last_name;
	gchar* _email;
	gint _age;
	DafUITestModelGender _sex;
	DafUITestModelPerson* _spouse;
	GeeArrayList* _friends;
	DafUITestModelAddress* _address;
};


static gpointer daf_ui_test_model_person_parent_class = NULL;

GType daf_ui_test_model_person_get_type (void) G_GNUC_CONST;
GType daf_ui_test_model_gender_get_type (void) G_GNUC_CONST;
GType daf_ui_test_model_address_get_type (void) G_GNUC_CONST;
#define DAF_UI_TEST_MODEL_PERSON_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DAF_UI_TEST_MODEL_TYPE_PERSON, DafUITestModelPersonPrivate))
DafUITestModelPerson* daf_ui_test_model_person_new (const gchar* first_name,
                                                    const gchar* last_name);
DafUITestModelPerson* daf_ui_test_model_person_construct (GType object_type,
                                                          const gchar* first_name,
                                                          const gchar* last_name);
void daf_ui_test_model_person_set_first_name (DafUITestModelPerson* self,
                                              const gchar* value);
void daf_ui_test_model_person_set_last_name (DafUITestModelPerson* self,
                                             const gchar* value);
void daf_ui_test_model_person_set_sex (DafUITestModelPerson* self,
                                       DafUITestModelGender value);
const gchar* daf_ui_test_model_person_get_first_name (DafUITestModelPerson* self);
const gchar* daf_ui_test_model_person_get_last_name (DafUITestModelPerson* self);
const gchar* daf_ui_test_model_person_get_email (DafUITestModelPerson* self);
void daf_ui_test_model_person_set_email (DafUITestModelPerson* self,
                                         const gchar* value);
gint daf_ui_test_model_person_get_age (DafUITestModelPerson* self);
void daf_ui_test_model_person_set_age (DafUITestModelPerson* self,
                                       gint value);
DafUITestModelGender daf_ui_test_model_person_get_sex (DafUITestModelPerson* self);
DafUITestModelPerson* daf_ui_test_model_person_get_spouse (DafUITestModelPerson* self);
void daf_ui_test_model_person_set_spouse (DafUITestModelPerson* self,
                                          DafUITestModelPerson* value);
GeeArrayList* daf_ui_test_model_person_get_friends (DafUITestModelPerson* self);
void daf_ui_test_model_person_set_friends (DafUITestModelPerson* self,
                                           GeeArrayList* value);
DafUITestModelAddress* daf_ui_test_model_person_get_address (DafUITestModelPerson* self);
void daf_ui_test_model_person_set_address (DafUITestModelPerson* self,
                                           DafUITestModelAddress* value);
static void daf_ui_test_model_person_finalize (GObject * obj);
static void _vala_daf_ui_test_model_person_get_property (GObject * object,
                                                  guint property_id,
                                                  GValue * value,
                                                  GParamSpec * pspec);
static void _vala_daf_ui_test_model_person_set_property (GObject * object,
                                                  guint property_id,
                                                  const GValue * value,
                                                  GParamSpec * pspec);


DafUITestModelPerson*
daf_ui_test_model_person_construct (GType object_type,
                                    const gchar* first_name,
                                    const gchar* last_name)
{
	DafUITestModelPerson * self = NULL;
#line 41 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (first_name != NULL, NULL);
#line 41 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (last_name != NULL, NULL);
#line 41 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	self = (DafUITestModelPerson*) g_object_new (object_type, NULL);
#line 42 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	daf_ui_test_model_person_set_first_name (self, first_name);
#line 43 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	daf_ui_test_model_person_set_last_name (self, last_name);
#line 44 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	daf_ui_test_model_person_set_sex (self, DAF_UI_TEST_MODEL_GENDER_FEMALE);
#line 41 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return self;
#line 164 "Person.c"
}


DafUITestModelPerson*
daf_ui_test_model_person_new (const gchar* first_name,
                              const gchar* last_name)
{
#line 41 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return daf_ui_test_model_person_construct (DAF_UI_TEST_MODEL_TYPE_PERSON, first_name, last_name);
#line 174 "Person.c"
}


const gchar*
daf_ui_test_model_person_get_first_name (DafUITestModelPerson* self)
{
	const gchar* result;
	const gchar* _tmp0_;
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_first_name;
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 191 "Person.c"
}


void
daf_ui_test_model_person_set_first_name (DafUITestModelPerson* self,
                                         const gchar* value)
{
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (g_strcmp0 (value, daf_ui_test_model_person_get_first_name (self)) != 0) {
#line 203 "Person.c"
		gchar* _tmp0_;
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_tmp0_ = g_strdup (value);
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_g_free0 (self->priv->_first_name);
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_first_name = _tmp0_;
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_FIRST_NAME_PROPERTY]);
#line 213 "Person.c"
	}
}


const gchar*
daf_ui_test_model_person_get_last_name (DafUITestModelPerson* self)
{
	const gchar* result;
	const gchar* _tmp0_;
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_last_name;
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 231 "Person.c"
}


void
daf_ui_test_model_person_set_last_name (DafUITestModelPerson* self,
                                        const gchar* value)
{
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (g_strcmp0 (value, daf_ui_test_model_person_get_last_name (self)) != 0) {
#line 243 "Person.c"
		gchar* _tmp0_;
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_tmp0_ = g_strdup (value);
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_g_free0 (self->priv->_last_name);
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_last_name = _tmp0_;
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_LAST_NAME_PROPERTY]);
#line 253 "Person.c"
	}
}


const gchar*
daf_ui_test_model_person_get_email (DafUITestModelPerson* self)
{
	const gchar* result;
	const gchar* _tmp0_;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_email;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 271 "Person.c"
}


void
daf_ui_test_model_person_set_email (DafUITestModelPerson* self,
                                    const gchar* value)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (g_strcmp0 (value, daf_ui_test_model_person_get_email (self)) != 0) {
#line 283 "Person.c"
		gchar* _tmp0_;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_tmp0_ = g_strdup (value);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_g_free0 (self->priv->_email);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_email = _tmp0_;
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_EMAIL_PROPERTY]);
#line 293 "Person.c"
	}
}


gint
daf_ui_test_model_person_get_age (DafUITestModelPerson* self)
{
	gint result;
	gint _tmp0_;
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_age;
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 311 "Person.c"
}


void
daf_ui_test_model_person_set_age (DafUITestModelPerson* self,
                                  gint value)
{
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (daf_ui_test_model_person_get_age (self) != value) {
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_age = value;
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_AGE_PROPERTY]);
#line 327 "Person.c"
	}
}


DafUITestModelGender
daf_ui_test_model_person_get_sex (DafUITestModelPerson* self)
{
	DafUITestModelGender result;
	DafUITestModelGender _tmp0_;
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_sex;
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 345 "Person.c"
}


void
daf_ui_test_model_person_set_sex (DafUITestModelPerson* self,
                                  DafUITestModelGender value)
{
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (daf_ui_test_model_person_get_sex (self) != value) {
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_sex = value;
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_SEX_PROPERTY]);
#line 361 "Person.c"
	}
}


DafUITestModelPerson*
daf_ui_test_model_person_get_spouse (DafUITestModelPerson* self)
{
	DafUITestModelPerson* result;
	DafUITestModelPerson* _tmp0_;
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_spouse;
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 379 "Person.c"
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return self ? g_object_ref (self) : NULL;
#line 388 "Person.c"
}


void
daf_ui_test_model_person_set_spouse (DafUITestModelPerson* self,
                                     DafUITestModelPerson* value)
{
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (daf_ui_test_model_person_get_spouse (self) != value) {
#line 400 "Person.c"
		DafUITestModelPerson* _tmp0_;
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_g_object_unref0 (self->priv->_spouse);
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_spouse = _tmp0_;
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_SPOUSE_PROPERTY]);
#line 410 "Person.c"
	}
}


GeeArrayList*
daf_ui_test_model_person_get_friends (DafUITestModelPerson* self)
{
	GeeArrayList* result;
	GeeArrayList* _tmp0_;
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_friends;
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 428 "Person.c"
}


void
daf_ui_test_model_person_set_friends (DafUITestModelPerson* self,
                                      GeeArrayList* value)
{
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (daf_ui_test_model_person_get_friends (self) != value) {
#line 440 "Person.c"
		GeeArrayList* _tmp0_;
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_g_object_unref0 (self->priv->_friends);
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_friends = _tmp0_;
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_FRIENDS_PROPERTY]);
#line 450 "Person.c"
	}
}


DafUITestModelAddress*
daf_ui_test_model_person_get_address (DafUITestModelPerson* self)
{
	DafUITestModelAddress* result;
	DafUITestModelAddress* _tmp0_;
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_tmp0_ = self->priv->_address;
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	result = _tmp0_;
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	return result;
#line 468 "Person.c"
}


void
daf_ui_test_model_person_set_address (DafUITestModelPerson* self,
                                      DafUITestModelAddress* value)
{
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_return_if_fail (self != NULL);
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	if (daf_ui_test_model_person_get_address (self) != value) {
#line 480 "Person.c"
		DafUITestModelAddress* _tmp0_;
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		_g_object_unref0 (self->priv->_address);
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		self->priv->_address = _tmp0_;
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_ADDRESS_PROPERTY]);
#line 490 "Person.c"
	}
}


static void
daf_ui_test_model_person_class_init (DafUITestModelPersonClass * klass)
{
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	daf_ui_test_model_person_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_type_class_add_private (klass, sizeof (DafUITestModelPersonPrivate));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_daf_ui_test_model_person_get_property;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_daf_ui_test_model_person_set_property;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	G_OBJECT_CLASS (klass)->finalize = daf_ui_test_model_person_finalize;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_FIRST_NAME_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_FIRST_NAME_PROPERTY] = g_param_spec_string ("first-name", "first-name", "first-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_LAST_NAME_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_LAST_NAME_PROPERTY] = g_param_spec_string ("last-name", "last-name", "last-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_EMAIL_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_EMAIL_PROPERTY] = g_param_spec_string ("email", "email", "email", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_AGE_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_AGE_PROPERTY] = g_param_spec_int ("age", "age", "age", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_SEX_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_SEX_PROPERTY] = g_param_spec_enum ("sex", "sex", "sex", DAF_UI_TEST_MODEL_TYPE_GENDER, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_SPOUSE_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_SPOUSE_PROPERTY] = g_param_spec_object ("spouse", "spouse", "spouse", DAF_UI_TEST_MODEL_TYPE_PERSON, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_FRIENDS_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_FRIENDS_PROPERTY] = g_param_spec_object ("friends", "friends", "friends", GEE_TYPE_ARRAY_LIST, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_UI_TEST_MODEL_PERSON_ADDRESS_PROPERTY, daf_ui_test_model_person_properties[DAF_UI_TEST_MODEL_PERSON_ADDRESS_PROPERTY] = g_param_spec_object ("address", "address", "address", DAF_UI_TEST_MODEL_TYPE_ADDRESS, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 524 "Person.c"
}


static void
daf_ui_test_model_person_instance_init (DafUITestModelPerson * self)
{
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	self->priv = DAF_UI_TEST_MODEL_PERSON_GET_PRIVATE (self);
#line 533 "Person.c"
}


static void
daf_ui_test_model_person_finalize (GObject * obj)
{
	DafUITestModelPerson * self;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAF_UI_TEST_MODEL_TYPE_PERSON, DafUITestModelPerson);
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_g_free0 (self->priv->_first_name);
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_g_free0 (self->priv->_last_name);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_g_free0 (self->priv->_email);
#line 35 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_g_object_unref0 (self->priv->_spouse);
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_g_object_unref0 (self->priv->_friends);
#line 39 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	_g_object_unref0 (self->priv->_address);
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	G_OBJECT_CLASS (daf_ui_test_model_person_parent_class)->finalize (obj);
#line 557 "Person.c"
}


GType
daf_ui_test_model_person_get_type (void)
{
	static volatile gsize daf_ui_test_model_person_type_id__volatile = 0;
	if (g_once_init_enter (&daf_ui_test_model_person_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafUITestModelPersonClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_ui_test_model_person_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafUITestModelPerson), 0, (GInstanceInitFunc) daf_ui_test_model_person_instance_init, NULL };
		GType daf_ui_test_model_person_type_id;
		daf_ui_test_model_person_type_id = g_type_register_static (G_TYPE_OBJECT, "DafUITestModelPerson", &g_define_type_info, 0);
		g_once_init_leave (&daf_ui_test_model_person_type_id__volatile, daf_ui_test_model_person_type_id);
	}
	return daf_ui_test_model_person_type_id__volatile;
}


static void
_vala_daf_ui_test_model_person_get_property (GObject * object,
                                             guint property_id,
                                             GValue * value,
                                             GParamSpec * pspec)
{
	DafUITestModelPerson * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DAF_UI_TEST_MODEL_TYPE_PERSON, DafUITestModelPerson);
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	switch (property_id) {
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_FIRST_NAME_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_string (value, daf_ui_test_model_person_get_first_name (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_LAST_NAME_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_string (value, daf_ui_test_model_person_get_last_name (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_EMAIL_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_string (value, daf_ui_test_model_person_get_email (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_AGE_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_int (value, daf_ui_test_model_person_get_age (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_SEX_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_enum (value, daf_ui_test_model_person_get_sex (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_SPOUSE_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_object (value, daf_ui_test_model_person_get_spouse (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_FRIENDS_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_object (value, daf_ui_test_model_person_get_friends (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_ADDRESS_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		g_value_set_object (value, daf_ui_test_model_person_get_address (self));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 633 "Person.c"
		default:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 639 "Person.c"
	}
}


static void
_vala_daf_ui_test_model_person_set_property (GObject * object,
                                             guint property_id,
                                             const GValue * value,
                                             GParamSpec * pspec)
{
	DafUITestModelPerson * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DAF_UI_TEST_MODEL_TYPE_PERSON, DafUITestModelPerson);
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
	switch (property_id) {
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_FIRST_NAME_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_first_name (self, g_value_get_string (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_LAST_NAME_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_last_name (self, g_value_get_string (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_EMAIL_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_email (self, g_value_get_string (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_AGE_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_age (self, g_value_get_int (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_SEX_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_sex (self, g_value_get_enum (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_SPOUSE_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_spouse (self, g_value_get_object (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_FRIENDS_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_friends (self, g_value_get_object (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		case DAF_UI_TEST_MODEL_PERSON_ADDRESS_PROPERTY:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		daf_ui_test_model_person_set_address (self, g_value_get_object (value));
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 702 "Person.c"
		default:
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 26 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafui/test/Model/Person.vala"
		break;
#line 708 "Person.c"
	}
}




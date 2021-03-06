/* PersonValidator.c generated by valac 0.40.10, the Vala compiler
 * generated from PersonValidator.vala, do not modify */

/*-*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 *  PersonValidator.vala
 *
 * Author:
 *    Pal Dorogi "ilap" <pal.dorogi@gmail.com>
 *
 * Copyright (c) 2012 Pal Dorogi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 *  This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <glib.h>
#include <glib-object.h>


#define CONTACTS_DEMO_MODEL_TYPE_PERSON_VALIDATOR (contacts_demo_model_person_validator_get_type ())
#define CONTACTS_DEMO_MODEL_PERSON_VALIDATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_DEMO_MODEL_TYPE_PERSON_VALIDATOR, ContactsDemoModelPersonValidator))
#define CONTACTS_DEMO_MODEL_PERSON_VALIDATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_DEMO_MODEL_TYPE_PERSON_VALIDATOR, ContactsDemoModelPersonValidatorClass))
#define CONTACTS_DEMO_MODEL_IS_PERSON_VALIDATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_DEMO_MODEL_TYPE_PERSON_VALIDATOR))
#define CONTACTS_DEMO_MODEL_IS_PERSON_VALIDATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_DEMO_MODEL_TYPE_PERSON_VALIDATOR))
#define CONTACTS_DEMO_MODEL_PERSON_VALIDATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_DEMO_MODEL_TYPE_PERSON_VALIDATOR, ContactsDemoModelPersonValidatorClass))

typedef struct _ContactsDemoModelPersonValidator ContactsDemoModelPersonValidator;
typedef struct _ContactsDemoModelPersonValidatorClass ContactsDemoModelPersonValidatorClass;
typedef struct _ContactsDemoModelPersonValidatorPrivate ContactsDemoModelPersonValidatorPrivate;
enum  {
	CONTACTS_DEMO_MODEL_PERSON_VALIDATOR_0_PROPERTY,
	CONTACTS_DEMO_MODEL_PERSON_VALIDATOR_NUM_PROPERTIES
};
static GParamSpec* contacts_demo_model_person_validator_properties[CONTACTS_DEMO_MODEL_PERSON_VALIDATOR_NUM_PROPERTIES];

struct _ContactsDemoModelPersonValidator {
	GObject parent_instance;
	ContactsDemoModelPersonValidatorPrivate * priv;
};

struct _ContactsDemoModelPersonValidatorClass {
	GObjectClass parent_class;
};


static gpointer contacts_demo_model_person_validator_parent_class = NULL;

GType contacts_demo_model_person_validator_get_type (void) G_GNUC_CONST;
ContactsDemoModelPersonValidator* contacts_demo_model_person_validator_new (void);
ContactsDemoModelPersonValidator* contacts_demo_model_person_validator_construct (GType object_type);


ContactsDemoModelPersonValidator*
contacts_demo_model_person_validator_construct (GType object_type)
{
	ContactsDemoModelPersonValidator * self = NULL;
#line 25 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/Model/PersonValidator.vala"
	self = (ContactsDemoModelPersonValidator*) g_object_new (object_type, NULL);
#line 25 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/Model/PersonValidator.vala"
	return self;
#line 74 "PersonValidator.c"
}


ContactsDemoModelPersonValidator*
contacts_demo_model_person_validator_new (void)
{
#line 25 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/Model/PersonValidator.vala"
	return contacts_demo_model_person_validator_construct (CONTACTS_DEMO_MODEL_TYPE_PERSON_VALIDATOR);
#line 83 "PersonValidator.c"
}


static void
contacts_demo_model_person_validator_class_init (ContactsDemoModelPersonValidatorClass * klass)
{
#line 25 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/Model/PersonValidator.vala"
	contacts_demo_model_person_validator_parent_class = g_type_class_peek_parent (klass);
#line 92 "PersonValidator.c"
}


static void
contacts_demo_model_person_validator_instance_init (ContactsDemoModelPersonValidator * self)
{
}


GType
contacts_demo_model_person_validator_get_type (void)
{
	static volatile gsize contacts_demo_model_person_validator_type_id__volatile = 0;
	if (g_once_init_enter (&contacts_demo_model_person_validator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ContactsDemoModelPersonValidatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) contacts_demo_model_person_validator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ContactsDemoModelPersonValidator), 0, (GInstanceInitFunc) contacts_demo_model_person_validator_instance_init, NULL };
		GType contacts_demo_model_person_validator_type_id;
		contacts_demo_model_person_validator_type_id = g_type_register_static (G_TYPE_OBJECT, "ContactsDemoModelPersonValidator", &g_define_type_info, 0);
		g_once_init_leave (&contacts_demo_model_person_validator_type_id__volatile, contacts_demo_model_person_validator_type_id);
	}
	return contacts_demo_model_person_validator_type_id__volatile;
}




/* ApplicationController.c generated by valac 0.40.10, the Vala compiler
 * generated from ApplicationController.vala, do not modify */

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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
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
#include <granite.h>
#include <gio/gio.h>
#include <gtk/gtk.h>


#define CONTACTS_DEMO_TYPE_APPLICATION_CONTROLLER (contacts_demo_application_controller_get_type ())
#define CONTACTS_DEMO_APPLICATION_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_DEMO_TYPE_APPLICATION_CONTROLLER, ContactsDemoApplicationController))
#define CONTACTS_DEMO_APPLICATION_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_DEMO_TYPE_APPLICATION_CONTROLLER, ContactsDemoApplicationControllerClass))
#define CONTACTS_DEMO_IS_APPLICATION_CONTROLLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_DEMO_TYPE_APPLICATION_CONTROLLER))
#define CONTACTS_DEMO_IS_APPLICATION_CONTROLLER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_DEMO_TYPE_APPLICATION_CONTROLLER))
#define CONTACTS_DEMO_APPLICATION_CONTROLLER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_DEMO_TYPE_APPLICATION_CONTROLLER, ContactsDemoApplicationControllerClass))

typedef struct _ContactsDemoApplicationController ContactsDemoApplicationController;
typedef struct _ContactsDemoApplicationControllerClass ContactsDemoApplicationControllerClass;
typedef struct _ContactsDemoApplicationControllerPrivate ContactsDemoApplicationControllerPrivate;
enum  {
	CONTACTS_DEMO_APPLICATION_CONTROLLER_0_PROPERTY,
	CONTACTS_DEMO_APPLICATION_CONTROLLER_NUM_PROPERTIES
};
static GParamSpec* contacts_demo_application_controller_properties[CONTACTS_DEMO_APPLICATION_CONTROLLER_NUM_PROPERTIES];

#define CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW (contacts_demo_view_contact_manager_view_get_type ())
#define CONTACTS_DEMO_VIEW_CONTACT_MANAGER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW, ContactsDemoViewContactManagerView))
#define CONTACTS_DEMO_VIEW_CONTACT_MANAGER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW, ContactsDemoViewContactManagerViewClass))
#define CONTACTS_DEMO_VIEW_IS_CONTACT_MANAGER_VIEW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW))
#define CONTACTS_DEMO_VIEW_IS_CONTACT_MANAGER_VIEW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW))
#define CONTACTS_DEMO_VIEW_CONTACT_MANAGER_VIEW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW, ContactsDemoViewContactManagerViewClass))

typedef struct _ContactsDemoViewContactManagerView ContactsDemoViewContactManagerView;
typedef struct _ContactsDemoViewContactManagerViewClass ContactsDemoViewContactManagerViewClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ContactsDemoApplicationController {
	GraniteApplication parent_instance;
	ContactsDemoApplicationControllerPrivate * priv;
};

struct _ContactsDemoApplicationControllerClass {
	GraniteApplicationClass parent_class;
};


static gpointer contacts_demo_application_controller_parent_class = NULL;

GType contacts_demo_application_controller_get_type (void) G_GNUC_CONST;
static void contacts_demo_application_controller_real_activate (GApplication* base);
GType contacts_demo_view_contact_manager_view_get_type (void) G_GNUC_CONST;
GObject* contacts_demo_bootstrapper_get_instance (GType type);
void contacts_demo_view_contact_manager_view_show (ContactsDemoViewContactManagerView* self);
GtkWindow* contacts_demo_view_contact_manager_view_get_main_window (ContactsDemoViewContactManagerView* self);
ContactsDemoApplicationController* contacts_demo_application_controller_new (void);
ContactsDemoApplicationController* contacts_demo_application_controller_construct (GType object_type);


static void
contacts_demo_application_controller_real_activate (GApplication* base)
{
	ContactsDemoApplicationController * self;
	ContactsDemoViewContactManagerView* view = NULL;
	GObject* _tmp0_;
	GtkWindow* _tmp1_;
	GtkWindow* _tmp2_;
#line 58 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	self = (ContactsDemoApplicationController*) base;
#line 61 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	_tmp0_ = contacts_demo_bootstrapper_get_instance (CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW);
#line 61 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	view = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, CONTACTS_DEMO_VIEW_TYPE_CONTACT_MANAGER_VIEW, ContactsDemoViewContactManagerView);
#line 63 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	contacts_demo_view_contact_manager_view_show (view);
#line 64 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	_tmp1_ = contacts_demo_view_contact_manager_view_get_main_window (view);
#line 64 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	_tmp2_ = _tmp1_;
#line 64 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	gtk_application_add_window ((GtkApplication*) self, _tmp2_);
#line 58 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	_g_object_unref0 (view);
#line 107 "ApplicationController.c"
}


ContactsDemoApplicationController*
contacts_demo_application_controller_construct (GType object_type)
{
	ContactsDemoApplicationController * self = NULL;
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	self = (ContactsDemoApplicationController*) granite_application_construct (object_type);
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	return self;
#line 119 "ApplicationController.c"
}


ContactsDemoApplicationController*
contacts_demo_application_controller_new (void)
{
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	return contacts_demo_application_controller_construct (CONTACTS_DEMO_TYPE_APPLICATION_CONTROLLER);
#line 128 "ApplicationController.c"
}


static void
contacts_demo_application_controller_class_init (ContactsDemoApplicationControllerClass * klass)
{
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	contacts_demo_application_controller_parent_class = g_type_class_peek_parent (klass);
#line 32 "/home/ilap/Projects/DaF/Demos/ContactsDemo/src/ApplicationController.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication *)) contacts_demo_application_controller_real_activate;
#line 139 "ApplicationController.c"
}


static void
contacts_demo_application_controller_instance_init (ContactsDemoApplicationController * self)
{
}


GType
contacts_demo_application_controller_get_type (void)
{
	static volatile gsize contacts_demo_application_controller_type_id__volatile = 0;
	if (g_once_init_enter (&contacts_demo_application_controller_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ContactsDemoApplicationControllerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) contacts_demo_application_controller_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ContactsDemoApplicationController), 0, (GInstanceInitFunc) contacts_demo_application_controller_instance_init, NULL };
		GType contacts_demo_application_controller_type_id;
		contacts_demo_application_controller_type_id = g_type_register_static (GRANITE_TYPE_APPLICATION, "ContactsDemoApplicationController", &g_define_type_info, 0);
		g_once_init_leave (&contacts_demo_application_controller_type_id__volatile, contacts_demo_application_controller_type_id);
	}
	return contacts_demo_application_controller_type_id__volatile;
}




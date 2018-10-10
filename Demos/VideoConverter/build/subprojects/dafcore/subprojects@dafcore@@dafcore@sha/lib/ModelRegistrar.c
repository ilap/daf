/* ModelRegistrar.c generated by valac 0.40.10, the Vala compiler
 * generated from ModelRegistrar.vala, do not modify */

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


#define DAF_CORE_TYPE_IMODEL_PRESENTER (daf_core_imodel_presenter_get_type ())
#define DAF_CORE_IMODEL_PRESENTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_IMODEL_PRESENTER, DafCoreIModelPresenter))
#define DAF_CORE_IS_IMODEL_PRESENTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_IMODEL_PRESENTER))
#define DAF_CORE_IMODEL_PRESENTER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_IMODEL_PRESENTER, DafCoreIModelPresenterIface))

typedef struct _DafCoreIModelPresenter DafCoreIModelPresenter;
typedef struct _DafCoreIModelPresenterIface DafCoreIModelPresenterIface;

#define DAF_CORE_TYPE_IVALUE_MODEL (daf_core_ivalue_model_get_type ())
#define DAF_CORE_IVALUE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_IVALUE_MODEL, DafCoreIValueModel))
#define DAF_CORE_IS_IVALUE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_IVALUE_MODEL))
#define DAF_CORE_IVALUE_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_IVALUE_MODEL, DafCoreIValueModelIface))

typedef struct _DafCoreIValueModel DafCoreIValueModel;
typedef struct _DafCoreIValueModelIface DafCoreIValueModelIface;

#define DAF_CORE_TYPE_MODEL_REGISTRAR (daf_core_model_registrar_get_type ())
#define DAF_CORE_MODEL_REGISTRAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_MODEL_REGISTRAR, DafCoreModelRegistrar))
#define DAF_CORE_MODEL_REGISTRAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TYPE_MODEL_REGISTRAR, DafCoreModelRegistrarClass))
#define DAF_CORE_IS_MODEL_REGISTRAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_MODEL_REGISTRAR))
#define DAF_CORE_IS_MODEL_REGISTRAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TYPE_MODEL_REGISTRAR))
#define DAF_CORE_MODEL_REGISTRAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TYPE_MODEL_REGISTRAR, DafCoreModelRegistrarClass))

typedef struct _DafCoreModelRegistrar DafCoreModelRegistrar;
typedef struct _DafCoreModelRegistrarClass DafCoreModelRegistrarClass;
typedef struct _DafCoreModelRegistrarPrivate DafCoreModelRegistrarPrivate;
enum  {
	DAF_CORE_MODEL_REGISTRAR_0_PROPERTY,
	DAF_CORE_MODEL_REGISTRAR_NUM_PROPERTIES
};
static GParamSpec* daf_core_model_registrar_properties[DAF_CORE_MODEL_REGISTRAR_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _DafCoreIValueModelIface {
	GTypeInterface parent_iface;
	GValue* (*get_val) (DafCoreIValueModel* self);
	void (*set_val) (DafCoreIValueModel* self, GValue* new_value);
	void (*do_set_val) (DafCoreIValueModel* self, GValue** model_state, GValue* new_value);
	gboolean (*get_locked) (DafCoreIValueModel* self);
	void (*set_locked) (DafCoreIValueModel* self, gboolean value);
	void (*get_model_value) (DafCoreIValueModel* self, GValue * value);
	void (*set_model_value) (DafCoreIValueModel* self, GValue * value);
};

struct _DafCoreIModelPresenterIface {
	GTypeInterface parent_iface;
	DafCoreIValueModel* (*get_value_model) (DafCoreIModelPresenter* self, const gchar* path);
};

struct _DafCoreModelRegistrar {
	GObject parent_instance;
	DafCoreModelRegistrarPrivate * priv;
};

struct _DafCoreModelRegistrarClass {
	GObjectClass parent_class;
};

struct _DafCoreModelRegistrarPrivate {
	GeeHashMap* all_models;
	GeeHashMap* value_models;
};


static gpointer daf_core_model_registrar_parent_class = NULL;
static DafCoreIModelPresenterIface * daf_core_model_registrar_daf_core_imodel_presenter_parent_iface = NULL;

GType daf_core_ivalue_model_get_type (void) G_GNUC_CONST;
GType daf_core_imodel_presenter_get_type (void) G_GNUC_CONST;
GType daf_core_model_registrar_get_type (void) G_GNUC_CONST;
#define DAF_CORE_MODEL_REGISTRAR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DAF_CORE_TYPE_MODEL_REGISTRAR, DafCoreModelRegistrarPrivate))
DafCoreModelRegistrar* daf_core_model_registrar_new (void);
DafCoreModelRegistrar* daf_core_model_registrar_construct (GType object_type);
void daf_core_model_registrar_add_value_model (DafCoreModelRegistrar* self,
                                               const gchar* key,
                                               DafCoreIValueModel* value);
static DafCoreIValueModel* daf_core_model_registrar_real_get_value_model (DafCoreIModelPresenter* base,
                                                                   const gchar* key);
GeeHashMap* daf_core_model_registrar_get_all_models (DafCoreModelRegistrar* self);
static void daf_core_model_registrar_finalize (GObject * obj);


DafCoreModelRegistrar*
daf_core_model_registrar_construct (GType object_type)
{
	DafCoreModelRegistrar * self = NULL;
	GeeHashMap* _tmp0_;
	GeeHashMap* _tmp1_;
#line 34 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	self = (DafCoreModelRegistrar*) g_object_new (object_type, NULL);
#line 35 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, DAF_CORE_TYPE_IVALUE_MODEL, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 35 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_g_object_unref0 (self->priv->all_models);
#line 35 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	self->priv->all_models = _tmp0_;
#line 36 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp1_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, DAF_CORE_TYPE_IVALUE_MODEL, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
#line 36 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_g_object_unref0 (self->priv->value_models);
#line 36 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	self->priv->value_models = _tmp1_;
#line 34 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	return self;
#line 138 "ModelRegistrar.c"
}


DafCoreModelRegistrar*
daf_core_model_registrar_new (void)
{
#line 34 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	return daf_core_model_registrar_construct (DAF_CORE_TYPE_MODEL_REGISTRAR);
#line 147 "ModelRegistrar.c"
}


void
daf_core_model_registrar_add_value_model (DafCoreModelRegistrar* self,
                                          const gchar* key,
                                          DafCoreIValueModel* value)
{
	GeeHashMap* _tmp0_;
	GeeHashMap* _tmp1_;
#line 39 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	g_return_if_fail (self != NULL);
#line 39 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	g_return_if_fail (key != NULL);
#line 39 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	g_return_if_fail (value != NULL);
#line 40 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp0_ = self->priv->all_models;
#line 40 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	gee_abstract_map_set ((GeeAbstractMap*) _tmp0_, key, value);
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp1_ = self->priv->value_models;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	gee_abstract_map_set ((GeeAbstractMap*) _tmp1_, key, value);
#line 172 "ModelRegistrar.c"
}


static DafCoreIValueModel*
daf_core_model_registrar_real_get_value_model (DafCoreIModelPresenter* base,
                                               const gchar* key)
{
	DafCoreModelRegistrar * self;
	DafCoreIValueModel* result = NULL;
	GeeHashMap* _tmp0_;
	gpointer _tmp1_;
#line 44 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	self = (DafCoreModelRegistrar*) base;
#line 44 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	g_return_val_if_fail (key != NULL, NULL);
#line 45 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp0_ = self->priv->value_models;
#line 45 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp1_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp0_, key);
#line 45 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	result = (DafCoreIValueModel*) _tmp1_;
#line 45 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	return result;
#line 196 "ModelRegistrar.c"
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 49 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	return self ? g_object_ref (self) : NULL;
#line 205 "ModelRegistrar.c"
}


GeeHashMap*
daf_core_model_registrar_get_all_models (DafCoreModelRegistrar* self)
{
	GeeHashMap* result = NULL;
	GeeHashMap* _tmp0_;
	GeeHashMap* _tmp1_;
#line 48 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 49 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp0_ = self->priv->all_models;
#line 49 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 49 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	result = _tmp1_;
#line 49 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	return result;
#line 225 "ModelRegistrar.c"
}


static void
daf_core_model_registrar_class_init (DafCoreModelRegistrarClass * klass)
{
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	daf_core_model_registrar_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	g_type_class_add_private (klass, sizeof (DafCoreModelRegistrarPrivate));
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	G_OBJECT_CLASS (klass)->finalize = daf_core_model_registrar_finalize;
#line 238 "ModelRegistrar.c"
}


static void
daf_core_model_registrar_daf_core_imodel_presenter_interface_init (DafCoreIModelPresenterIface * iface)
{
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	daf_core_model_registrar_daf_core_imodel_presenter_parent_iface = g_type_interface_peek_parent (iface);
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	iface->get_value_model = (DafCoreIValueModel* (*) (DafCoreIModelPresenter *, const gchar*)) daf_core_model_registrar_real_get_value_model;
#line 249 "ModelRegistrar.c"
}


static void
daf_core_model_registrar_instance_init (DafCoreModelRegistrar * self)
{
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	self->priv = DAF_CORE_MODEL_REGISTRAR_GET_PRIVATE (self);
#line 258 "ModelRegistrar.c"
}


static void
daf_core_model_registrar_finalize (GObject * obj)
{
	DafCoreModelRegistrar * self;
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAF_CORE_TYPE_MODEL_REGISTRAR, DafCoreModelRegistrar);
#line 28 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_g_object_unref0 (self->priv->all_models);
#line 29 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	_g_object_unref0 (self->priv->value_models);
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/ModelRegistrar.vala"
	G_OBJECT_CLASS (daf_core_model_registrar_parent_class)->finalize (obj);
#line 274 "ModelRegistrar.c"
}


GType
daf_core_model_registrar_get_type (void)
{
	static volatile gsize daf_core_model_registrar_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_model_registrar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreModelRegistrarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_model_registrar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafCoreModelRegistrar), 0, (GInstanceInitFunc) daf_core_model_registrar_instance_init, NULL };
		static const GInterfaceInfo daf_core_imodel_presenter_info = { (GInterfaceInitFunc) daf_core_model_registrar_daf_core_imodel_presenter_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType daf_core_model_registrar_type_id;
		daf_core_model_registrar_type_id = g_type_register_static (G_TYPE_OBJECT, "DafCoreModelRegistrar", &g_define_type_info, 0);
		g_type_add_interface_static (daf_core_model_registrar_type_id, DAF_CORE_TYPE_IMODEL_PRESENTER, &daf_core_imodel_presenter_info);
		g_once_init_leave (&daf_core_model_registrar_type_id__volatile, daf_core_model_registrar_type_id);
	}
	return daf_core_model_registrar_type_id__volatile;
}




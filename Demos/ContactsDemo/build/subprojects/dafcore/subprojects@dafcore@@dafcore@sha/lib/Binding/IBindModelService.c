/* IBindModelService.c generated by valac 0.40.10, the Vala compiler
 * generated from IBindModelService.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define DAF_CORE_BINDING_TYPE_IBIND_MODEL_SERVICE (daf_core_binding_ibind_model_service_get_type ())
#define DAF_CORE_BINDING_IBIND_MODEL_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL_SERVICE, DafCoreBindingIBindModelService))
#define DAF_CORE_BINDING_IS_IBIND_MODEL_SERVICE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL_SERVICE))
#define DAF_CORE_BINDING_IBIND_MODEL_SERVICE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL_SERVICE, DafCoreBindingIBindModelServiceIface))

typedef struct _DafCoreBindingIBindModelService DafCoreBindingIBindModelService;
typedef struct _DafCoreBindingIBindModelServiceIface DafCoreBindingIBindModelServiceIface;

#define DAF_CORE_BINDING_TYPE_IBIND_MODEL (daf_core_binding_ibind_model_get_type ())
#define DAF_CORE_BINDING_IBIND_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL, DafCoreBindingIBindModel))
#define DAF_CORE_BINDING_IS_IBIND_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL))
#define DAF_CORE_BINDING_IBIND_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL, DafCoreBindingIBindModelIface))

typedef struct _DafCoreBindingIBindModel DafCoreBindingIBindModel;
typedef struct _DafCoreBindingIBindModelIface DafCoreBindingIBindModelIface;

#define DAF_CORE_TYPE_IVALUE_MODEL (daf_core_ivalue_model_get_type ())
#define DAF_CORE_IVALUE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_IVALUE_MODEL, DafCoreIValueModel))
#define DAF_CORE_IS_IVALUE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_IVALUE_MODEL))
#define DAF_CORE_IVALUE_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_IVALUE_MODEL, DafCoreIValueModelIface))

typedef struct _DafCoreIValueModel DafCoreIValueModel;
typedef struct _DafCoreIValueModelIface DafCoreIValueModelIface;

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

struct _DafCoreBindingIBindModelIface {
	GTypeInterface parent_iface;
	void (*on_model_notify) (DafCoreBindingIBindModel* self, GObject* sender, GParamSpec* param_spec);
	void (*bind) (DafCoreBindingIBindModel* self, DafCoreBindingIBindModel* bind_target, gboolean locked);
	void (*unbind) (DafCoreBindingIBindModel* self, DafCoreBindingIBindModel* bind_target, gboolean locked);
	DafCoreIValueModel* (*get_model) (DafCoreBindingIBindModel* self);
	void (*set_model) (DafCoreBindingIBindModel* self, DafCoreIValueModel* value);
};

struct _DafCoreBindingIBindModelServiceIface {
	GTypeInterface parent_iface;
	DafCoreBindingIBindModel* (*get_bind_model) (DafCoreBindingIBindModelService* self, GObject* subject, const gchar* property_name);
	DafCoreBindingIBindModel* (*create_bind_model) (DafCoreBindingIBindModelService* self, GObject* subject, const gchar* property_name);
	void (*remove_bind_model) (DafCoreBindingIBindModelService* self, GObject* subject, const gchar* property_name);
	DafCoreBindingIBindModel* (*get_or_create_bind_model) (DafCoreBindingIBindModelService* self, GObject* subject, const gchar* property_name);
};



GType daf_core_ivalue_model_get_type (void) G_GNUC_CONST;
GType daf_core_binding_ibind_model_get_type (void) G_GNUC_CONST;
GType daf_core_binding_ibind_model_service_get_type (void) G_GNUC_CONST;
DafCoreBindingIBindModel* daf_core_binding_ibind_model_service_get_bind_model (DafCoreBindingIBindModelService* self,
                                                                               GObject* subject,
                                                                               const gchar* property_name);
DafCoreBindingIBindModel* daf_core_binding_ibind_model_service_create_bind_model (DafCoreBindingIBindModelService* self,
                                                                                  GObject* subject,
                                                                                  const gchar* property_name);
void daf_core_binding_ibind_model_service_remove_bind_model (DafCoreBindingIBindModelService* self,
                                                             GObject* subject,
                                                             const gchar* property_name);
DafCoreBindingIBindModel* daf_core_binding_ibind_model_service_get_or_create_bind_model (DafCoreBindingIBindModelService* self,
                                                                                         GObject* subject,
                                                                                         const gchar* property_name);


DafCoreBindingIBindModel*
daf_core_binding_ibind_model_service_get_bind_model (DafCoreBindingIBindModelService* self,
                                                     GObject* subject,
                                                     const gchar* property_name)
{
#line 27 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 27 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	return DAF_CORE_BINDING_IBIND_MODEL_SERVICE_GET_INTERFACE (self)->get_bind_model (self, subject, property_name);
#line 93 "IBindModelService.c"
}


DafCoreBindingIBindModel*
daf_core_binding_ibind_model_service_create_bind_model (DafCoreBindingIBindModelService* self,
                                                        GObject* subject,
                                                        const gchar* property_name)
{
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 28 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	return DAF_CORE_BINDING_IBIND_MODEL_SERVICE_GET_INTERFACE (self)->create_bind_model (self, subject, property_name);
#line 106 "IBindModelService.c"
}


void
daf_core_binding_ibind_model_service_remove_bind_model (DafCoreBindingIBindModelService* self,
                                                        GObject* subject,
                                                        const gchar* property_name)
{
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	g_return_if_fail (self != NULL);
#line 29 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	DAF_CORE_BINDING_IBIND_MODEL_SERVICE_GET_INTERFACE (self)->remove_bind_model (self, subject, property_name);
#line 119 "IBindModelService.c"
}


DafCoreBindingIBindModel*
daf_core_binding_ibind_model_service_get_or_create_bind_model (DafCoreBindingIBindModelService* self,
                                                               GObject* subject,
                                                               const gchar* property_name)
{
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 30 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/Binding/IBindModelService.vala"
	return DAF_CORE_BINDING_IBIND_MODEL_SERVICE_GET_INTERFACE (self)->get_or_create_bind_model (self, subject, property_name);
#line 132 "IBindModelService.c"
}


static void
daf_core_binding_ibind_model_service_default_init (DafCoreBindingIBindModelServiceIface * iface)
{
}


GType
daf_core_binding_ibind_model_service_get_type (void)
{
	static volatile gsize daf_core_binding_ibind_model_service_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_binding_ibind_model_service_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreBindingIBindModelServiceIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_binding_ibind_model_service_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_binding_ibind_model_service_type_id;
		daf_core_binding_ibind_model_service_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreBindingIBindModelService", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_binding_ibind_model_service_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_binding_ibind_model_service_type_id__volatile, daf_core_binding_ibind_model_service_type_id);
	}
	return daf_core_binding_ibind_model_service_type_id__volatile;
}




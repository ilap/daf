/* IBindModelFactory.c generated by valac 0.40.10, the Vala compiler
 * generated from IBindModelFactory.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define DAF_CORE_BINDING_TYPE_IBIND_MODEL_FACTORY (daf_core_binding_ibind_model_factory_get_type ())
#define DAF_CORE_BINDING_IBIND_MODEL_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL_FACTORY, DafCoreBindingIBindModelFactory))
#define DAF_CORE_BINDING_IS_IBIND_MODEL_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL_FACTORY))
#define DAF_CORE_BINDING_IBIND_MODEL_FACTORY_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_BINDING_TYPE_IBIND_MODEL_FACTORY, DafCoreBindingIBindModelFactoryIface))

typedef struct _DafCoreBindingIBindModelFactory DafCoreBindingIBindModelFactory;
typedef struct _DafCoreBindingIBindModelFactoryIface DafCoreBindingIBindModelFactoryIface;

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

#define DAF_CORE_BINDING_TYPE_ABSTRACT_ACYCLIC_GRAPH (daf_core_binding_abstract_acyclic_graph_get_type ())
#define DAF_CORE_BINDING_ABSTRACT_ACYCLIC_GRAPH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_ABSTRACT_ACYCLIC_GRAPH, DafCoreBindingAbstractAcyclicGraph))
#define DAF_CORE_BINDING_ABSTRACT_ACYCLIC_GRAPH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_BINDING_TYPE_ABSTRACT_ACYCLIC_GRAPH, DafCoreBindingAbstractAcyclicGraphClass))
#define DAF_CORE_BINDING_IS_ABSTRACT_ACYCLIC_GRAPH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_ABSTRACT_ACYCLIC_GRAPH))
#define DAF_CORE_BINDING_IS_ABSTRACT_ACYCLIC_GRAPH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_BINDING_TYPE_ABSTRACT_ACYCLIC_GRAPH))
#define DAF_CORE_BINDING_ABSTRACT_ACYCLIC_GRAPH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_BINDING_TYPE_ABSTRACT_ACYCLIC_GRAPH, DafCoreBindingAbstractAcyclicGraphClass))

typedef struct _DafCoreBindingAbstractAcyclicGraph DafCoreBindingAbstractAcyclicGraph;
typedef struct _DafCoreBindingAbstractAcyclicGraphClass DafCoreBindingAbstractAcyclicGraphClass;

#define DAF_CORE_BINDING_TYPE_BIND_MODEL (daf_core_binding_bind_model_get_type ())
#define DAF_CORE_BINDING_BIND_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_BIND_MODEL, DafCoreBindingBindModel))
#define DAF_CORE_BINDING_BIND_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_BINDING_TYPE_BIND_MODEL, DafCoreBindingBindModelClass))
#define DAF_CORE_BINDING_IS_BIND_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_BIND_MODEL))
#define DAF_CORE_BINDING_IS_BIND_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_BINDING_TYPE_BIND_MODEL))
#define DAF_CORE_BINDING_BIND_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_BINDING_TYPE_BIND_MODEL, DafCoreBindingBindModelClass))

typedef struct _DafCoreBindingBindModel DafCoreBindingBindModel;
typedef struct _DafCoreBindingBindModelClass DafCoreBindingBindModelClass;

struct _DafCoreBindingIBindModelFactoryIface {
	GTypeInterface parent_iface;
};

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



GType daf_core_binding_ibind_model_factory_get_type (void) G_GNUC_CONST;
GType daf_core_ivalue_model_get_type (void) G_GNUC_CONST;
GType daf_core_binding_ibind_model_get_type (void) G_GNUC_CONST;
GType daf_core_binding_ibind_model_service_get_type (void) G_GNUC_CONST;
DafCoreBindingIBindModel* daf_core_binding_ibind_model_factory_get_instance (DafCoreBindingIBindModelFactory* self,
                                                                             const gchar* name,
                                                                             DafCoreBindingIBindModelService* service,
                                                                             DafCoreIValueModel* model);
DafCoreBindingBindModel* daf_core_binding_bind_model_new (const gchar* name,
                                                          DafCoreBindingIBindModelService* service,
                                                          DafCoreIValueModel* model);
DafCoreBindingBindModel* daf_core_binding_bind_model_construct (GType object_type,
                                                                const gchar* name,
                                                                DafCoreBindingIBindModelService* service,
                                                                DafCoreIValueModel* model);
GType daf_core_binding_abstract_acyclic_graph_get_type (void) G_GNUC_CONST;
GType daf_core_binding_bind_model_get_type (void) G_GNUC_CONST;


DafCoreBindingIBindModel*
daf_core_binding_ibind_model_factory_get_instance (DafCoreBindingIBindModelFactory* self,
                                                   const gchar* name,
                                                   DafCoreBindingIBindModelService* service,
                                                   DafCoreIValueModel* model)
{
	DafCoreBindingIBindModel* result = NULL;
	DafCoreBindingBindModel* _tmp0_;
#line 27 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/Binding/IBindModelFactory.vala"
	g_return_val_if_fail (service != NULL, NULL);
#line 27 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/Binding/IBindModelFactory.vala"
	g_return_val_if_fail (model != NULL, NULL);
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/Binding/IBindModelFactory.vala"
	_tmp0_ = daf_core_binding_bind_model_new (name, service, model);
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/Binding/IBindModelFactory.vala"
	result = (DafCoreBindingIBindModel*) _tmp0_;
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/Binding/IBindModelFactory.vala"
	return result;
#line 136 "IBindModelFactory.c"
}


static void
daf_core_binding_ibind_model_factory_default_init (DafCoreBindingIBindModelFactoryIface * iface)
{
}


GType
daf_core_binding_ibind_model_factory_get_type (void)
{
	static volatile gsize daf_core_binding_ibind_model_factory_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_binding_ibind_model_factory_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreBindingIBindModelFactoryIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_binding_ibind_model_factory_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_binding_ibind_model_factory_type_id;
		daf_core_binding_ibind_model_factory_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreBindingIBindModelFactory", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_binding_ibind_model_factory_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_binding_ibind_model_factory_type_id__volatile, daf_core_binding_ibind_model_factory_type_id);
	}
	return daf_core_binding_ibind_model_factory_type_id__volatile;
}




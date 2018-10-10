/* IModelAdapter.c generated by valac 0.40.10, the Vala compiler
 * generated from IModelAdapter.vala, do not modify */



#include <glib.h>
#include <glib-object.h>


#define DAF_CORE_TYPE_IMODEL_ADAPTER (daf_core_imodel_adapter_get_type ())
#define DAF_CORE_IMODEL_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_IMODEL_ADAPTER, DafCoreIModelAdapter))
#define DAF_CORE_IS_IMODEL_ADAPTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_IMODEL_ADAPTER))
#define DAF_CORE_IMODEL_ADAPTER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_IMODEL_ADAPTER, DafCoreIModelAdapterIface))

typedef struct _DafCoreIModelAdapter DafCoreIModelAdapter;
typedef struct _DafCoreIModelAdapterIface DafCoreIModelAdapterIface;
enum  {
	DAF_CORE_IMODEL_ADAPTER_MODEL_CHANGED_SIGNAL,
	DAF_CORE_IMODEL_ADAPTER_NUM_SIGNALS
};
static guint daf_core_imodel_adapter_signals[DAF_CORE_IMODEL_ADAPTER_NUM_SIGNALS] = {0};

struct _DafCoreIModelAdapterIface {
	GTypeInterface parent_iface;
	GObject* (*get_model) (DafCoreIModelAdapter* self);
	void (*set_model) (DafCoreIModelAdapter* self, GObject* new_model);
};



GType daf_core_imodel_adapter_get_type (void) G_GNUC_CONST;
GObject* daf_core_imodel_adapter_get_model (DafCoreIModelAdapter* self);
void daf_core_imodel_adapter_set_model (DafCoreIModelAdapter* self,
                                        GObject* new_model);


GObject*
daf_core_imodel_adapter_get_model (DafCoreIModelAdapter* self)
{
#line 31 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafcore/lib/IModelAdapter.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 31 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafcore/lib/IModelAdapter.vala"
	return DAF_CORE_IMODEL_ADAPTER_GET_INTERFACE (self)->get_model (self);
#line 45 "IModelAdapter.c"
}


void
daf_core_imodel_adapter_set_model (DafCoreIModelAdapter* self,
                                   GObject* new_model)
{
#line 32 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafcore/lib/IModelAdapter.vala"
	g_return_if_fail (self != NULL);
#line 32 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafcore/lib/IModelAdapter.vala"
	DAF_CORE_IMODEL_ADAPTER_GET_INTERFACE (self)->set_model (self, new_model);
#line 57 "IModelAdapter.c"
}


static void
daf_core_imodel_adapter_default_init (DafCoreIModelAdapterIface * iface)
{
#line 26 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafcore/lib/IModelAdapter.vala"
	daf_core_imodel_adapter_signals[DAF_CORE_IMODEL_ADAPTER_MODEL_CHANGED_SIGNAL] = g_signal_new ("model-changed", DAF_CORE_TYPE_IMODEL_ADAPTER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 66 "IModelAdapter.c"
}


/**
     * This implements swapping a wrapped model in a wrapper class.
     */
GType
daf_core_imodel_adapter_get_type (void)
{
	static volatile gsize daf_core_imodel_adapter_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_imodel_adapter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreIModelAdapterIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_imodel_adapter_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_imodel_adapter_type_id;
		daf_core_imodel_adapter_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreIModelAdapter", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_imodel_adapter_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_imodel_adapter_type_id__volatile, daf_core_imodel_adapter_type_id);
	}
	return daf_core_imodel_adapter_type_id__volatile;
}




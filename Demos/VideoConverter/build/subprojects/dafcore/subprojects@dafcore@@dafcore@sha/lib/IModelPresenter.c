/* IModelPresenter.c generated by valac 0.40.10, the Vala compiler
 * generated from IModelPresenter.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


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



GType daf_core_ivalue_model_get_type (void) G_GNUC_CONST;
GType daf_core_imodel_presenter_get_type (void) G_GNUC_CONST;
DafCoreIValueModel* daf_core_imodel_presenter_get_value_model (DafCoreIModelPresenter* self,
                                                               const gchar* path);


DafCoreIValueModel*
daf_core_imodel_presenter_get_value_model (DafCoreIModelPresenter* self,
                                           const gchar* path)
{
#line 24 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/IModelPresenter.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 24 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/IModelPresenter.vala"
	return DAF_CORE_IMODEL_PRESENTER_GET_INTERFACE (self)->get_value_model (self, path);
#line 61 "IModelPresenter.c"
}


static void
daf_core_imodel_presenter_default_init (DafCoreIModelPresenterIface * iface)
{
}


GType
daf_core_imodel_presenter_get_type (void)
{
	static volatile gsize daf_core_imodel_presenter_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_imodel_presenter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreIModelPresenterIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_imodel_presenter_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_imodel_presenter_type_id;
		daf_core_imodel_presenter_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreIModelPresenter", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_imodel_presenter_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_imodel_presenter_type_id__volatile, daf_core_imodel_presenter_type_id);
	}
	return daf_core_imodel_presenter_type_id__volatile;
}




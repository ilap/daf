/* IBinder.c generated by valac 0.40.10, the Vala compiler
 * generated from IBinder.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define DAF_CORE_BINDING_TYPE_IBINDER (daf_core_binding_ibinder_get_type ())
#define DAF_CORE_BINDING_IBINDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_IBINDER, DafCoreBindingIBinder))
#define DAF_CORE_BINDING_IS_IBINDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_IBINDER))
#define DAF_CORE_BINDING_IBINDER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_BINDING_TYPE_IBINDER, DafCoreBindingIBinderIface))

typedef struct _DafCoreBindingIBinder DafCoreBindingIBinder;
typedef struct _DafCoreBindingIBinderIface DafCoreBindingIBinderIface;

#define DAF_CORE_BINDING_TYPE_IBIND_TO (daf_core_binding_ibind_to_get_type ())
#define DAF_CORE_BINDING_IBIND_TO(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_IBIND_TO, DafCoreBindingIBindTo))
#define DAF_CORE_BINDING_IS_IBIND_TO(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_IBIND_TO))
#define DAF_CORE_BINDING_IBIND_TO_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_BINDING_TYPE_IBIND_TO, DafCoreBindingIBindToIface))

typedef struct _DafCoreBindingIBindTo DafCoreBindingIBindTo;
typedef struct _DafCoreBindingIBindToIface DafCoreBindingIBindToIface;

#define DAF_CORE_BINDING_TYPE_IBIND_FROM (daf_core_binding_ibind_from_get_type ())
#define DAF_CORE_BINDING_IBIND_FROM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_IBIND_FROM, DafCoreBindingIBindFrom))
#define DAF_CORE_BINDING_IS_IBIND_FROM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_IBIND_FROM))
#define DAF_CORE_BINDING_IBIND_FROM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_BINDING_TYPE_IBIND_FROM, DafCoreBindingIBindFromIface))

typedef struct _DafCoreBindingIBindFrom DafCoreBindingIBindFrom;
typedef struct _DafCoreBindingIBindFromIface DafCoreBindingIBindFromIface;

struct _DafCoreBindingIBindToIface {
	GTypeInterface parent_iface;
	void (*to) (DafCoreBindingIBindTo* self, GObject* subject, const gchar* property_name);
};

struct _DafCoreBindingIBindFromIface {
	GTypeInterface parent_iface;
	void (*from) (DafCoreBindingIBindFrom* self, GObject* subject, const gchar* property_name);
};

struct _DafCoreBindingIBinderIface {
	GTypeInterface parent_iface;
	DafCoreBindingIBindTo* (*bind) (DafCoreBindingIBinder* self, GObject* source, const gchar* property_name);
	DafCoreBindingIBindFrom* (*unbind) (DafCoreBindingIBinder* self, GObject* subject, const gchar* property_name);
};



GType daf_core_binding_ibind_to_get_type (void) G_GNUC_CONST;
GType daf_core_binding_ibind_from_get_type (void) G_GNUC_CONST;
GType daf_core_binding_ibinder_get_type (void) G_GNUC_CONST;
DafCoreBindingIBindTo* daf_core_binding_ibinder_bind (DafCoreBindingIBinder* self,
                                                      GObject* source,
                                                      const gchar* property_name);
DafCoreBindingIBindFrom* daf_core_binding_ibinder_unbind (DafCoreBindingIBinder* self,
                                                          GObject* subject,
                                                          const gchar* property_name);


DafCoreBindingIBindTo*
daf_core_binding_ibinder_bind (DafCoreBindingIBinder* self,
                               GObject* source,
                               const gchar* property_name)
{
#line 24 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IBinder.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 24 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IBinder.vala"
	return DAF_CORE_BINDING_IBINDER_GET_INTERFACE (self)->bind (self, source, property_name);
#line 75 "IBinder.c"
}


DafCoreBindingIBindFrom*
daf_core_binding_ibinder_unbind (DafCoreBindingIBinder* self,
                                 GObject* subject,
                                 const gchar* property_name)
{
#line 25 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IBinder.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 25 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IBinder.vala"
	return DAF_CORE_BINDING_IBINDER_GET_INTERFACE (self)->unbind (self, subject, property_name);
#line 88 "IBinder.c"
}


static void
daf_core_binding_ibinder_default_init (DafCoreBindingIBinderIface * iface)
{
}


GType
daf_core_binding_ibinder_get_type (void)
{
	static volatile gsize daf_core_binding_ibinder_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_binding_ibinder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreBindingIBinderIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_binding_ibinder_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_binding_ibinder_type_id;
		daf_core_binding_ibinder_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreBindingIBinder", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_binding_ibinder_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_binding_ibinder_type_id__volatile, daf_core_binding_ibinder_type_id);
	}
	return daf_core_binding_ibinder_type_id__volatile;
}



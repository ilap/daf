/* IAspectTrigger.c generated by valac 0.40.10, the Vala compiler
 * generated from IAspectTrigger.vala, do not modify */



#include <glib.h>
#include <glib-object.h>


#define DAF_CORE_TYPE_IASPECT_TRIGGER (daf_core_iaspect_trigger_get_type ())
#define DAF_CORE_IASPECT_TRIGGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_IASPECT_TRIGGER, DafCoreIAspectTrigger))
#define DAF_CORE_IS_IASPECT_TRIGGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_IASPECT_TRIGGER))
#define DAF_CORE_IASPECT_TRIGGER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_IASPECT_TRIGGER, DafCoreIAspectTriggerIface))

typedef struct _DafCoreIAspectTrigger DafCoreIAspectTrigger;
typedef struct _DafCoreIAspectTriggerIface DafCoreIAspectTriggerIface;

struct _DafCoreIAspectTriggerIface {
	GTypeInterface parent_iface;
	void (*commit) (DafCoreIAspectTrigger* self);
	void (*discard) (DafCoreIAspectTrigger* self);
};



GType daf_core_iaspect_trigger_get_type (void) G_GNUC_CONST;
void daf_core_iaspect_trigger_commit (DafCoreIAspectTrigger* self);
void daf_core_iaspect_trigger_discard (DafCoreIAspectTrigger* self);


void
daf_core_iaspect_trigger_commit (DafCoreIAspectTrigger* self)
{
#line 24 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/IAspectTrigger.vala"
	g_return_if_fail (self != NULL);
#line 24 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/IAspectTrigger.vala"
	DAF_CORE_IASPECT_TRIGGER_GET_INTERFACE (self)->commit (self);
#line 39 "IAspectTrigger.c"
}


void
daf_core_iaspect_trigger_discard (DafCoreIAspectTrigger* self)
{
#line 25 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/IAspectTrigger.vala"
	g_return_if_fail (self != NULL);
#line 25 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/IAspectTrigger.vala"
	DAF_CORE_IASPECT_TRIGGER_GET_INTERFACE (self)->discard (self);
#line 50 "IAspectTrigger.c"
}


static void
daf_core_iaspect_trigger_default_init (DafCoreIAspectTriggerIface * iface)
{
}


GType
daf_core_iaspect_trigger_get_type (void)
{
	static volatile gsize daf_core_iaspect_trigger_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_iaspect_trigger_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreIAspectTriggerIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_iaspect_trigger_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_iaspect_trigger_type_id;
		daf_core_iaspect_trigger_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreIAspectTrigger", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_iaspect_trigger_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_iaspect_trigger_type_id__volatile, daf_core_iaspect_trigger_type_id);
	}
	return daf_core_iaspect_trigger_type_id__volatile;
}




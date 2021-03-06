/* AspectTrigger.c generated by valac 0.40.10, the Vala compiler
 * generated from AspectTrigger.vala, do not modify */



#include <glib.h>
#include <glib-object.h>


#define DAF_CORE_TYPE_IVALUE_MODEL (daf_core_ivalue_model_get_type ())
#define DAF_CORE_IVALUE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_IVALUE_MODEL, DafCoreIValueModel))
#define DAF_CORE_IS_IVALUE_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_IVALUE_MODEL))
#define DAF_CORE_IVALUE_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_IVALUE_MODEL, DafCoreIValueModelIface))

typedef struct _DafCoreIValueModel DafCoreIValueModel;
typedef struct _DafCoreIValueModelIface DafCoreIValueModelIface;

#define DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER (daf_core_abstract_value_holder_get_type ())
#define DAF_CORE_ABSTRACT_VALUE_HOLDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER, DafCoreAbstractValueHolder))
#define DAF_CORE_ABSTRACT_VALUE_HOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER, DafCoreAbstractValueHolderClass))
#define DAF_CORE_IS_ABSTRACT_VALUE_HOLDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER))
#define DAF_CORE_IS_ABSTRACT_VALUE_HOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER))
#define DAF_CORE_ABSTRACT_VALUE_HOLDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER, DafCoreAbstractValueHolderClass))

typedef struct _DafCoreAbstractValueHolder DafCoreAbstractValueHolder;
typedef struct _DafCoreAbstractValueHolderClass DafCoreAbstractValueHolderClass;
typedef struct _DafCoreAbstractValueHolderPrivate DafCoreAbstractValueHolderPrivate;

#define DAF_CORE_TYPE_IASPECT_TRIGGER (daf_core_iaspect_trigger_get_type ())
#define DAF_CORE_IASPECT_TRIGGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_IASPECT_TRIGGER, DafCoreIAspectTrigger))
#define DAF_CORE_IS_IASPECT_TRIGGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_IASPECT_TRIGGER))
#define DAF_CORE_IASPECT_TRIGGER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_IASPECT_TRIGGER, DafCoreIAspectTriggerIface))

typedef struct _DafCoreIAspectTrigger DafCoreIAspectTrigger;
typedef struct _DafCoreIAspectTriggerIface DafCoreIAspectTriggerIface;

#define DAF_CORE_TYPE_ASPECT_TRIGGER (daf_core_aspect_trigger_get_type ())
#define DAF_CORE_ASPECT_TRIGGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_ASPECT_TRIGGER, DafCoreAspectTrigger))
#define DAF_CORE_ASPECT_TRIGGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TYPE_ASPECT_TRIGGER, DafCoreAspectTriggerClass))
#define DAF_CORE_IS_ASPECT_TRIGGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_ASPECT_TRIGGER))
#define DAF_CORE_IS_ASPECT_TRIGGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TYPE_ASPECT_TRIGGER))
#define DAF_CORE_ASPECT_TRIGGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TYPE_ASPECT_TRIGGER, DafCoreAspectTriggerClass))

typedef struct _DafCoreAspectTrigger DafCoreAspectTrigger;
typedef struct _DafCoreAspectTriggerClass DafCoreAspectTriggerClass;
typedef struct _DafCoreAspectTriggerPrivate DafCoreAspectTriggerPrivate;
enum  {
	DAF_CORE_ASPECT_TRIGGER_0_PROPERTY,
	DAF_CORE_ASPECT_TRIGGER_NUM_PROPERTIES
};
static GParamSpec* daf_core_aspect_trigger_properties[DAF_CORE_ASPECT_TRIGGER_NUM_PROPERTIES];
#define __vala_GValue_free0(var) ((var == NULL) ? NULL : (var = (_vala_GValue_free (var), NULL)))

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

struct _DafCoreAbstractValueHolder {
	GObject parent_instance;
	DafCoreAbstractValueHolderPrivate * priv;
	gboolean observe_domain_changes;
};

struct _DafCoreAbstractValueHolderClass {
	GObjectClass parent_class;
	GValue* (*get_val) (DafCoreAbstractValueHolder* self);
	void (*set_val) (DafCoreAbstractValueHolder* self, GValue* new_value);
};

struct _DafCoreIAspectTriggerIface {
	GTypeInterface parent_iface;
	void (*commit) (DafCoreIAspectTrigger* self);
	void (*discard) (DafCoreIAspectTrigger* self);
};

struct _DafCoreAspectTrigger {
	DafCoreAbstractValueHolder parent_instance;
	DafCoreAspectTriggerPrivate * priv;
};

struct _DafCoreAspectTriggerClass {
	DafCoreAbstractValueHolderClass parent_class;
};


static gpointer daf_core_aspect_trigger_parent_class = NULL;
static DafCoreIAspectTriggerIface * daf_core_aspect_trigger_daf_core_iaspect_trigger_parent_iface = NULL;

GType daf_core_ivalue_model_get_type (void) G_GNUC_CONST;
GType daf_core_abstract_value_holder_get_type (void) G_GNUC_CONST;
GType daf_core_iaspect_trigger_get_type (void) G_GNUC_CONST;
GType daf_core_aspect_trigger_get_type (void) G_GNUC_CONST;
#define DAF_CORE_ASPECT_TRIGGER_COMMIT TRUE
#define DAF_CORE_ASPECT_TRIGGER_DISCARD FALSE
static void daf_core_aspect_trigger_real_commit (DafCoreIAspectTrigger* base);
void daf_core_abstract_value_holder_set_val (DafCoreAbstractValueHolder* self,
                                             GValue* new_value);
static void _vala_GValue_free (GValue* self);
static void daf_core_aspect_trigger_real_discard (DafCoreIAspectTrigger* base);
DafCoreAspectTrigger* daf_core_aspect_trigger_new (void);
DafCoreAspectTrigger* daf_core_aspect_trigger_construct (GType object_type);
DafCoreAbstractValueHolder* daf_core_abstract_value_holder_construct (GType object_type);


static void
_vala_GValue_free (GValue* self)
{
#line 34 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	g_value_unset (self);
#line 34 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	g_free (self);
#line 120 "AspectTrigger.c"
}


static void
daf_core_aspect_trigger_real_commit (DafCoreIAspectTrigger* base)
{
	DafCoreAspectTrigger * self;
	GValue* _tmp0_ = NULL;
#line 33 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	self = (DafCoreAspectTrigger*) base;
#line 34 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	_tmp0_ = g_new0 (GValue, 1);
#line 34 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	g_value_init (_tmp0_, G_TYPE_BOOLEAN);
#line 34 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	g_value_set_boolean (_tmp0_, DAF_CORE_ASPECT_TRIGGER_COMMIT);
#line 34 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	daf_core_abstract_value_holder_set_val ((DafCoreAbstractValueHolder*) self, _tmp0_);
#line 34 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	__vala_GValue_free0 (_tmp0_);
#line 141 "AspectTrigger.c"
}


static void
daf_core_aspect_trigger_real_discard (DafCoreIAspectTrigger* base)
{
	DafCoreAspectTrigger * self;
	GValue* _tmp0_ = NULL;
#line 37 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	self = (DafCoreAspectTrigger*) base;
#line 38 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	_tmp0_ = g_new0 (GValue, 1);
#line 38 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	g_value_init (_tmp0_, G_TYPE_BOOLEAN);
#line 38 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	g_value_set_boolean (_tmp0_, DAF_CORE_ASPECT_TRIGGER_DISCARD);
#line 38 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	daf_core_abstract_value_holder_set_val ((DafCoreAbstractValueHolder*) self, _tmp0_);
#line 38 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	__vala_GValue_free0 (_tmp0_);
#line 162 "AspectTrigger.c"
}


DafCoreAspectTrigger*
daf_core_aspect_trigger_construct (GType object_type)
{
	DafCoreAspectTrigger * self = NULL;
#line 23 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	self = (DafCoreAspectTrigger*) daf_core_abstract_value_holder_construct (object_type);
#line 23 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	return self;
#line 174 "AspectTrigger.c"
}


DafCoreAspectTrigger*
daf_core_aspect_trigger_new (void)
{
#line 23 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	return daf_core_aspect_trigger_construct (DAF_CORE_TYPE_ASPECT_TRIGGER);
#line 183 "AspectTrigger.c"
}


static void
daf_core_aspect_trigger_class_init (DafCoreAspectTriggerClass * klass)
{
#line 23 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	daf_core_aspect_trigger_parent_class = g_type_class_peek_parent (klass);
#line 192 "AspectTrigger.c"
}


static void
daf_core_aspect_trigger_daf_core_iaspect_trigger_interface_init (DafCoreIAspectTriggerIface * iface)
{
#line 23 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	daf_core_aspect_trigger_daf_core_iaspect_trigger_parent_iface = g_type_interface_peek_parent (iface);
#line 23 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	iface->commit = (void (*) (DafCoreIAspectTrigger *)) daf_core_aspect_trigger_real_commit;
#line 23 "/home/ilap/Projects/DaF/Demos/ContactsDemo/subprojects/dafcore/lib/AspectTrigger.vala"
	iface->discard = (void (*) (DafCoreIAspectTrigger *)) daf_core_aspect_trigger_real_discard;
#line 205 "AspectTrigger.c"
}


static void
daf_core_aspect_trigger_instance_init (DafCoreAspectTrigger * self)
{
}


GType
daf_core_aspect_trigger_get_type (void)
{
	static volatile gsize daf_core_aspect_trigger_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_aspect_trigger_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreAspectTriggerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_aspect_trigger_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafCoreAspectTrigger), 0, (GInstanceInitFunc) daf_core_aspect_trigger_instance_init, NULL };
		static const GInterfaceInfo daf_core_iaspect_trigger_info = { (GInterfaceInitFunc) daf_core_aspect_trigger_daf_core_iaspect_trigger_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType daf_core_aspect_trigger_type_id;
		daf_core_aspect_trigger_type_id = g_type_register_static (DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER, "DafCoreAspectTrigger", &g_define_type_info, 0);
		g_type_add_interface_static (daf_core_aspect_trigger_type_id, DAF_CORE_TYPE_IASPECT_TRIGGER, &daf_core_iaspect_trigger_info);
		g_once_init_leave (&daf_core_aspect_trigger_type_id__volatile, daf_core_aspect_trigger_type_id);
	}
	return daf_core_aspect_trigger_type_id__volatile;
}




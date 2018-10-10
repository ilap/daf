/* AbstractTypeConverter.c generated by valac 0.40.10, the Vala compiler
 * generated from AbstractTypeConverter.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


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

#define DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER (daf_core_abstract_type_converter_get_type ())
#define DAF_CORE_ABSTRACT_TYPE_CONVERTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER, DafCoreAbstractTypeConverter))
#define DAF_CORE_ABSTRACT_TYPE_CONVERTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER, DafCoreAbstractTypeConverterClass))
#define DAF_CORE_IS_ABSTRACT_TYPE_CONVERTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER))
#define DAF_CORE_IS_ABSTRACT_TYPE_CONVERTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER))
#define DAF_CORE_ABSTRACT_TYPE_CONVERTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER, DafCoreAbstractTypeConverterClass))

typedef struct _DafCoreAbstractTypeConverter DafCoreAbstractTypeConverter;
typedef struct _DafCoreAbstractTypeConverterClass DafCoreAbstractTypeConverterClass;
typedef struct _DafCoreAbstractTypeConverterPrivate DafCoreAbstractTypeConverterPrivate;
enum  {
	DAF_CORE_ABSTRACT_TYPE_CONVERTER_0_PROPERTY,
	DAF_CORE_ABSTRACT_TYPE_CONVERTER_NUM_PROPERTIES
};
static GParamSpec* daf_core_abstract_type_converter_properties[DAF_CORE_ABSTRACT_TYPE_CONVERTER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
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

struct _DafCoreAbstractTypeConverter {
	DafCoreAbstractValueHolder parent_instance;
	DafCoreAbstractTypeConverterPrivate * priv;
	DafCoreIValueModel* model;
};

struct _DafCoreAbstractTypeConverterClass {
	DafCoreAbstractValueHolderClass parent_class;
	void (*convert_from_model) (DafCoreAbstractTypeConverter* self, GValue* model_value, GValue* result);
};


static gpointer daf_core_abstract_type_converter_parent_class = NULL;

GType daf_core_ivalue_model_get_type (void) G_GNUC_CONST;
GType daf_core_abstract_value_holder_get_type (void) G_GNUC_CONST;
GType daf_core_abstract_type_converter_get_type (void) G_GNUC_CONST;
DafCoreAbstractTypeConverter* daf_core_abstract_type_converter_construct (GType object_type,
                                                                          DafCoreIValueModel* model);
DafCoreAbstractValueHolder* daf_core_abstract_value_holder_construct (GType object_type);
#define DAF_CORE_IVALUE_MODEL_PROP_NAME "model-value"
static void __lambda10_ (DafCoreAbstractTypeConverter* self,
                  GObject* s,
                  GParamSpec* p);
static void ___lambda10__g_object_notify (GObject* _sender,
                                   GParamSpec* pspec,
                                   gpointer self);
void daf_core_abstract_type_converter_convert_from_model (DafCoreAbstractTypeConverter* self,
                                                          GValue* model_value,
                                                          GValue* result);
static void daf_core_abstract_type_converter_real_convert_from_model (DafCoreAbstractTypeConverter* self,
                                                               GValue* model_value,
                                                               GValue* result);
static GValue* daf_core_abstract_type_converter_real_get_val (DafCoreAbstractValueHolder* base);
GValue* daf_core_ivalue_model_get_val (DafCoreIValueModel* self);
static GValue* _g_value_dup (GValue* self);
static void _vala_GValue_free (GValue* self);
static void daf_core_abstract_type_converter_finalize (GObject * obj);


static gpointer
_g_object_ref0 (gpointer self)
{
#line 30 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	return self ? g_object_ref (self) : NULL;
#line 119 "AbstractTypeConverter.c"
}


static void
__lambda10_ (DafCoreAbstractTypeConverter* self,
             GObject* s,
             GParamSpec* p)
{
#line 32 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_return_if_fail (s != NULL);
#line 32 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_return_if_fail (p != NULL);
#line 33 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_object_notify ((GObject*) self, DAF_CORE_IVALUE_MODEL_PROP_NAME);
#line 134 "AbstractTypeConverter.c"
}


static void
___lambda10__g_object_notify (GObject* _sender,
                              GParamSpec* pspec,
                              gpointer self)
{
#line 32 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	__lambda10_ ((DafCoreAbstractTypeConverter*) self, _sender, pspec);
#line 145 "AbstractTypeConverter.c"
}


DafCoreAbstractTypeConverter*
daf_core_abstract_type_converter_construct (GType object_type,
                                            DafCoreIValueModel* model)
{
	DafCoreAbstractTypeConverter * self = NULL;
	DafCoreIValueModel* _tmp0_;
	gchar* _tmp1_;
#line 29 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_return_val_if_fail (model != NULL, NULL);
#line 29 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	self = (DafCoreAbstractTypeConverter*) daf_core_abstract_value_holder_construct (object_type);
#line 30 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp0_ = _g_object_ref0 (model);
#line 30 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_g_object_unref0 (self->model);
#line 30 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	self->model = _tmp0_;
#line 32 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp1_ = g_strconcat ("notify::", DAF_CORE_IVALUE_MODEL_PROP_NAME, NULL);
#line 32 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_signal_connect_object ((GObject*) model, _tmp1_, (GCallback) ___lambda10__g_object_notify, self, 0);
#line 32 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_g_free0 (_tmp1_);
#line 29 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	return self;
#line 174 "AbstractTypeConverter.c"
}


static void
daf_core_abstract_type_converter_real_convert_from_model (DafCoreAbstractTypeConverter* self,
                                                          GValue* model_value,
                                                          GValue* result)
{
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_critical ("Type `%s' does not implement abstract method `daf_core_abstract_type_converter_convert_from_model'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	return;
#line 187 "AbstractTypeConverter.c"
}


void
daf_core_abstract_type_converter_convert_from_model (DafCoreAbstractTypeConverter* self,
                                                     GValue* model_value,
                                                     GValue* result)
{
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_return_if_fail (self != NULL);
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	DAF_CORE_ABSTRACT_TYPE_CONVERTER_GET_CLASS (self)->convert_from_model (self, model_value, result);
#line 200 "AbstractTypeConverter.c"
}


static GValue*
_g_value_dup (GValue* self)
{
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	return g_boxed_copy (G_TYPE_VALUE, self);
#line 209 "AbstractTypeConverter.c"
}


static gpointer
__g_value_dup0 (gpointer self)
{
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	return self ? _g_value_dup (self) : NULL;
#line 218 "AbstractTypeConverter.c"
}


static void
_vala_GValue_free (GValue* self)
{
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_value_unset (self);
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	g_free (self);
#line 229 "AbstractTypeConverter.c"
}


static GValue*
daf_core_abstract_type_converter_real_get_val (DafCoreAbstractValueHolder* base)
{
	DafCoreAbstractTypeConverter * self;
	GValue* result = NULL;
	DafCoreIValueModel* _tmp0_;
	GValue* _tmp1_;
	GValue* _tmp2_;
	GValue _tmp3_ = {0};
	GValue _tmp4_;
	GValue* _tmp5_;
	GValue* _tmp6_;
#line 39 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	self = (DafCoreAbstractTypeConverter*) base;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp0_ = self->model;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp1_ = daf_core_ivalue_model_get_val (_tmp0_);
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp2_ = _tmp1_;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	daf_core_abstract_type_converter_convert_from_model (self, _tmp2_, &_tmp3_);
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp4_ = _tmp3_;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp5_ = __g_value_dup0 (&_tmp4_);
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_tmp6_ = _tmp5_;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	G_IS_VALUE (&_tmp4_) ? (g_value_unset (&_tmp4_), NULL) : NULL;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	__vala_GValue_free0 (_tmp2_);
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	result = _tmp6_;
#line 41 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	return result;
#line 269 "AbstractTypeConverter.c"
}


static void
daf_core_abstract_type_converter_class_init (DafCoreAbstractTypeConverterClass * klass)
{
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	daf_core_abstract_type_converter_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	((DafCoreAbstractTypeConverterClass *) klass)->convert_from_model = (void (*) (DafCoreAbstractTypeConverter *, GValue*, GValue*)) daf_core_abstract_type_converter_real_convert_from_model;
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	((DafCoreAbstractValueHolderClass *) klass)->get_val = (GValue* (*) (DafCoreAbstractValueHolder *)) daf_core_abstract_type_converter_real_get_val;
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	G_OBJECT_CLASS (klass)->finalize = daf_core_abstract_type_converter_finalize;
#line 284 "AbstractTypeConverter.c"
}


static void
daf_core_abstract_type_converter_instance_init (DafCoreAbstractTypeConverter * self)
{
}


static void
daf_core_abstract_type_converter_finalize (GObject * obj)
{
	DafCoreAbstractTypeConverter * self;
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER, DafCoreAbstractTypeConverter);
#line 27 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	_g_object_unref0 (self->model);
#line 26 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/AbstractTypeConverter.vala"
	G_OBJECT_CLASS (daf_core_abstract_type_converter_parent_class)->finalize (obj);
#line 304 "AbstractTypeConverter.c"
}


/**
     * Using Decorator Pattern for convert Values
     */
GType
daf_core_abstract_type_converter_get_type (void)
{
	static volatile gsize daf_core_abstract_type_converter_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_abstract_type_converter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreAbstractTypeConverterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_abstract_type_converter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafCoreAbstractTypeConverter), 0, (GInstanceInitFunc) daf_core_abstract_type_converter_instance_init, NULL };
		GType daf_core_abstract_type_converter_type_id;
		daf_core_abstract_type_converter_type_id = g_type_register_static (DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER, "DafCoreAbstractTypeConverter", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&daf_core_abstract_type_converter_type_id__volatile, daf_core_abstract_type_converter_type_id);
	}
	return daf_core_abstract_type_converter_type_id__volatile;
}



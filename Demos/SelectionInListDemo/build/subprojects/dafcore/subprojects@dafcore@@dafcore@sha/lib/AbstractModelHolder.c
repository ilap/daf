/* AbstractModelHolder.c generated by valac 0.40.10, the Vala compiler
 * generated from AbstractModelHolder.vala, do not modify */



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

#define DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER (daf_core_abstract_model_holder_get_type ())
#define DAF_CORE_ABSTRACT_MODEL_HOLDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER, DafCoreAbstractModelHolder))
#define DAF_CORE_ABSTRACT_MODEL_HOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER, DafCoreAbstractModelHolderClass))
#define DAF_CORE_IS_ABSTRACT_MODEL_HOLDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER))
#define DAF_CORE_IS_ABSTRACT_MODEL_HOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER))
#define DAF_CORE_ABSTRACT_MODEL_HOLDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER, DafCoreAbstractModelHolderClass))

typedef struct _DafCoreAbstractModelHolder DafCoreAbstractModelHolder;
typedef struct _DafCoreAbstractModelHolderClass DafCoreAbstractModelHolderClass;
typedef struct _DafCoreAbstractModelHolderPrivate DafCoreAbstractModelHolderPrivate;
enum  {
	DAF_CORE_ABSTRACT_MODEL_HOLDER_0_PROPERTY,
	DAF_CORE_ABSTRACT_MODEL_HOLDER_VALUE_MODEL_PROPERTY,
	DAF_CORE_ABSTRACT_MODEL_HOLDER_PROPERTY_NAME_PROPERTY,
	DAF_CORE_ABSTRACT_MODEL_HOLDER_NUM_PROPERTIES
};
static GParamSpec* daf_core_abstract_model_holder_properties[DAF_CORE_ABSTRACT_MODEL_HOLDER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define __vala_GValue_free0(var) ((var == NULL) ? NULL : (var = (_vala_GValue_free (var), NULL)))

#define DAF_CORE_TYPE_VALUE_HOLDER (daf_core_value_holder_get_type ())
#define DAF_CORE_VALUE_HOLDER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_VALUE_HOLDER, DafCoreValueHolder))
#define DAF_CORE_VALUE_HOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TYPE_VALUE_HOLDER, DafCoreValueHolderClass))
#define DAF_CORE_IS_VALUE_HOLDER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_VALUE_HOLDER))
#define DAF_CORE_IS_VALUE_HOLDER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TYPE_VALUE_HOLDER))
#define DAF_CORE_VALUE_HOLDER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TYPE_VALUE_HOLDER, DafCoreValueHolderClass))

typedef struct _DafCoreValueHolder DafCoreValueHolder;
typedef struct _DafCoreValueHolderClass DafCoreValueHolderClass;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

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

struct _DafCoreAbstractModelHolder {
	DafCoreAbstractValueHolder parent_instance;
	DafCoreAbstractModelHolderPrivate * priv;
	gchar* canonical_property_name;
};

struct _DafCoreAbstractModelHolderClass {
	DafCoreAbstractValueHolderClass parent_class;
	void (*setup_notify) (DafCoreAbstractModelHolder* self);
	void (*on_model_change) (DafCoreAbstractModelHolder* self, GObject* source, GParamSpec* param_spec);
};

struct _DafCoreAbstractModelHolderPrivate {
	DafCoreIValueModel* _value_model;
	gchar* _property_name;
};


static gpointer daf_core_abstract_model_holder_parent_class = NULL;

GType daf_core_ivalue_model_get_type (void) G_GNUC_CONST;
GType daf_core_abstract_value_holder_get_type (void) G_GNUC_CONST;
GType daf_core_abstract_model_holder_get_type (void) G_GNUC_CONST;
#define DAF_CORE_ABSTRACT_MODEL_HOLDER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER, DafCoreAbstractModelHolderPrivate))
DafCoreAbstractModelHolder* daf_core_abstract_model_holder_construct (GType object_type,
                                                                      GObject* model,
                                                                      const gchar* property_name);
DafCoreAbstractValueHolder* daf_core_abstract_value_holder_construct (GType object_type);
#define DAF_CORE_IVALUE_MODEL_PROP_NAME "model-value"
void daf_core_abstract_model_holder_set_property_name (DafCoreAbstractModelHolder* self,
                                                       const gchar* value);
const gchar* daf_core_abstract_model_holder_get_property_name (DafCoreAbstractModelHolder* self);
GValue* daf_core_ivalue_model_get_val (DafCoreIValueModel* self);
void daf_core_abstract_model_holder_set_value_model (DafCoreAbstractModelHolder* self,
                                                     DafCoreIValueModel* value);
static void _vala_GValue_free (GValue* self);
DafCoreValueHolder* daf_core_value_holder_new (GValue* new_value);
DafCoreValueHolder* daf_core_value_holder_construct (GType object_type,
                                                     GValue* new_value);
GType daf_core_value_holder_get_type (void) G_GNUC_CONST;
void daf_core_abstract_model_holder_setup_notify (DafCoreAbstractModelHolder* self);
static void daf_core_abstract_model_holder_real_setup_notify (DafCoreAbstractModelHolder* self);
void daf_core_abstract_model_holder_on_model_change (DafCoreAbstractModelHolder* self,
                                                     GObject* source,
                                                     GParamSpec* param_spec);
static void daf_core_abstract_model_holder_real_on_model_change (DafCoreAbstractModelHolder* self,
                                                          GObject* source,
                                                          GParamSpec* param_spec);
DafCoreIValueModel* daf_core_abstract_model_holder_get_value_model (DafCoreAbstractModelHolder* self);
static void daf_core_abstract_model_holder_finalize (GObject * obj);
static void _vala_daf_core_abstract_model_holder_get_property (GObject * object,
                                                        guint property_id,
                                                        GValue * value,
                                                        GParamSpec * pspec);
static void _vala_daf_core_abstract_model_holder_set_property (GObject * object,
                                                        guint property_id,
                                                        const GValue * value,
                                                        GParamSpec * pspec);

static GRegex* _tmp_regex_0 = NULL;

/**
         * The property name cannot be null.
         **/
static inline GRegex*
_thread_safe_regex_init (GRegex** re,
                         const gchar * pattern,
                         GRegexMatchFlags match_options)
{
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	if (g_once_init_enter ((volatile gsize*) re)) {
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		GRegex* val = g_regex_new (pattern, match_options, 0, NULL);
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_once_init_leave ((volatile gsize*) re, (gsize) val);
#line 165 "AbstractModelHolder.c"
	}
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	return *re;
#line 169 "AbstractModelHolder.c"
}


static void
_vala_GValue_free (GValue* self)
{
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_value_unset (self);
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_free (self);
#line 180 "AbstractModelHolder.c"
}


DafCoreAbstractModelHolder*
daf_core_abstract_model_holder_construct (GType object_type,
                                          GObject* model,
                                          const gchar* property_name)
{
	DafCoreAbstractModelHolder * self = NULL;
	gchar* _tmp0_ = NULL;
	const gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	GError * _inner_error_ = NULL;
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	self = (DafCoreAbstractModelHolder*) daf_core_abstract_value_holder_construct (object_type);
#line 36 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	if (property_name == NULL) {
#line 37 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		daf_core_abstract_model_holder_set_property_name (self, DAF_CORE_IVALUE_MODEL_PROP_NAME);
#line 201 "AbstractModelHolder.c"
	} else {
#line 39 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		daf_core_abstract_model_holder_set_property_name (self, property_name);
#line 205 "AbstractModelHolder.c"
	}
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_tmp1_ = self->priv->_property_name;
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_tmp2_ = g_regex_replace (_thread_safe_regex_init (&_tmp_regex_0, "_", 0), _tmp1_, (gssize) -1, 0, "-", 0, &_inner_error_);
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_tmp0_ = _tmp2_;
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_clear_error (&_inner_error_);
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		return NULL;
#line 221 "AbstractModelHolder.c"
	}
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_tmp3_ = _tmp0_;
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_tmp0_ = NULL;
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_g_free0 (self->canonical_property_name);
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	self->canonical_property_name = _tmp3_;
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	if (G_TYPE_CHECK_INSTANCE_TYPE (model, DAF_CORE_TYPE_IVALUE_MODEL)) {
#line 233 "AbstractModelHolder.c"
		GValue* model_value = NULL;
		GValue* _tmp4_;
		GValue* _tmp5_;
#line 45 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_debug ("AbstractModelHolder.vala:45: It is ValueModel");
#line 47 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_tmp4_ = daf_core_ivalue_model_get_val (G_TYPE_CHECK_INSTANCE_TYPE (model, DAF_CORE_TYPE_IVALUE_MODEL) ? ((DafCoreIValueModel*) model) : NULL);
#line 47 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		model_value = _tmp4_;
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_tmp5_ = model_value;
#line 49 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		if (_tmp5_ != NULL) {
#line 247 "AbstractModelHolder.c"
			GValue* _tmp6_;
#line 52 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
			_tmp6_ = model_value;
#line 52 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
			_vala_assert (G_VALUE_HOLDS (_tmp6_, G_TYPE_OBJECT), "model_value.holds (typeof (Object))");
#line 253 "AbstractModelHolder.c"
		} else {
		}
#line 56 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		daf_core_abstract_model_holder_set_value_model (self, G_TYPE_CHECK_INSTANCE_TYPE (model, DAF_CORE_TYPE_IVALUE_MODEL) ? ((DafCoreIValueModel*) model) : NULL);
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		__vala_GValue_free0 (model_value);
#line 260 "AbstractModelHolder.c"
	} else {
		GValue* _tmp7_ = NULL;
		DafCoreValueHolder* _tmp8_;
		DafCoreValueHolder* _tmp9_;
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_tmp7_ = g_new0 (GValue, 1);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_value_init (_tmp7_, G_TYPE_OBJECT);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_value_set_object (_tmp7_, model);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_tmp8_ = daf_core_value_holder_new (_tmp7_);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_tmp9_ = _tmp8_;
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		daf_core_abstract_model_holder_set_value_model (self, (DafCoreIValueModel*) _tmp9_);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_g_object_unref0 (_tmp9_);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		__vala_GValue_free0 (_tmp7_);
#line 281 "AbstractModelHolder.c"
	}
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	daf_core_abstract_model_holder_setup_notify (self);
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_g_free0 (_tmp0_);
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	return self;
#line 289 "AbstractModelHolder.c"
}


static void
daf_core_abstract_model_holder_real_setup_notify (DafCoreAbstractModelHolder* self)
{
#line 66 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_critical ("Type `%s' does not implement abstract method `daf_core_abstract_model_holder_setup_notify'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 66 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	return;
#line 300 "AbstractModelHolder.c"
}


void
daf_core_abstract_model_holder_setup_notify (DafCoreAbstractModelHolder* self)
{
#line 66 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_return_if_fail (self != NULL);
#line 66 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	DAF_CORE_ABSTRACT_MODEL_HOLDER_GET_CLASS (self)->setup_notify (self);
#line 311 "AbstractModelHolder.c"
}


static void
daf_core_abstract_model_holder_real_on_model_change (DafCoreAbstractModelHolder* self,
                                                     GObject* source,
                                                     GParamSpec* param_spec)
{
#line 67 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_critical ("Type `%s' does not implement abstract method `daf_core_abstract_model_holder_on_model_change'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 67 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	return;
#line 324 "AbstractModelHolder.c"
}


void
daf_core_abstract_model_holder_on_model_change (DafCoreAbstractModelHolder* self,
                                                GObject* source,
                                                GParamSpec* param_spec)
{
#line 67 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_return_if_fail (self != NULL);
#line 67 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	DAF_CORE_ABSTRACT_MODEL_HOLDER_GET_CLASS (self)->on_model_change (self, source, param_spec);
#line 337 "AbstractModelHolder.c"
}


DafCoreIValueModel*
daf_core_abstract_model_holder_get_value_model (DafCoreAbstractModelHolder* self)
{
	DafCoreIValueModel* result;
	DafCoreIValueModel* _tmp0_;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_tmp0_ = self->priv->_value_model;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	result = _tmp0_;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	return result;
#line 354 "AbstractModelHolder.c"
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	return self ? g_object_ref (self) : NULL;
#line 363 "AbstractModelHolder.c"
}


void
daf_core_abstract_model_holder_set_value_model (DafCoreAbstractModelHolder* self,
                                                DafCoreIValueModel* value)
{
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_return_if_fail (self != NULL);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	if (daf_core_abstract_model_holder_get_value_model (self) != value) {
#line 375 "AbstractModelHolder.c"
		DafCoreIValueModel* _tmp0_;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_tmp0_ = _g_object_ref0 (value);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_g_object_unref0 (self->priv->_value_model);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		self->priv->_value_model = _tmp0_;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_core_abstract_model_holder_properties[DAF_CORE_ABSTRACT_MODEL_HOLDER_VALUE_MODEL_PROPERTY]);
#line 385 "AbstractModelHolder.c"
	}
}


const gchar*
daf_core_abstract_model_holder_get_property_name (DafCoreAbstractModelHolder* self)
{
	const gchar* result;
	const gchar* _tmp0_;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_tmp0_ = self->priv->_property_name;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	result = _tmp0_;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	return result;
#line 403 "AbstractModelHolder.c"
}


void
daf_core_abstract_model_holder_set_property_name (DafCoreAbstractModelHolder* self,
                                                  const gchar* value)
{
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_return_if_fail (self != NULL);
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	if (g_strcmp0 (value, daf_core_abstract_model_holder_get_property_name (self)) != 0) {
#line 415 "AbstractModelHolder.c"
		gchar* _tmp0_;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_tmp0_ = g_strdup (value);
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		_g_free0 (self->priv->_property_name);
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		self->priv->_property_name = _tmp0_;
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_object_notify_by_pspec ((GObject *) self, daf_core_abstract_model_holder_properties[DAF_CORE_ABSTRACT_MODEL_HOLDER_PROPERTY_NAME_PROPERTY]);
#line 425 "AbstractModelHolder.c"
	}
}


static void
daf_core_abstract_model_holder_class_init (DafCoreAbstractModelHolderClass * klass)
{
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	daf_core_abstract_model_holder_parent_class = g_type_class_peek_parent (klass);
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_type_class_add_private (klass, sizeof (DafCoreAbstractModelHolderPrivate));
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	((DafCoreAbstractModelHolderClass *) klass)->setup_notify = (void (*) (DafCoreAbstractModelHolder *)) daf_core_abstract_model_holder_real_setup_notify;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	((DafCoreAbstractModelHolderClass *) klass)->on_model_change = (void (*) (DafCoreAbstractModelHolder *, GObject*, GParamSpec*)) daf_core_abstract_model_holder_real_on_model_change;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_daf_core_abstract_model_holder_get_property;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_daf_core_abstract_model_holder_set_property;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	G_OBJECT_CLASS (klass)->finalize = daf_core_abstract_model_holder_finalize;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_CORE_ABSTRACT_MODEL_HOLDER_VALUE_MODEL_PROPERTY, daf_core_abstract_model_holder_properties[DAF_CORE_ABSTRACT_MODEL_HOLDER_VALUE_MODEL_PROPERTY] = g_param_spec_object ("value-model", "value-model", "value-model", DAF_CORE_TYPE_IVALUE_MODEL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_CORE_ABSTRACT_MODEL_HOLDER_PROPERTY_NAME_PROPERTY, daf_core_abstract_model_holder_properties[DAF_CORE_ABSTRACT_MODEL_HOLDER_PROPERTY_NAME_PROPERTY] = g_param_spec_string ("property-name", "property-name", "property-name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 451 "AbstractModelHolder.c"
}


static void
daf_core_abstract_model_holder_instance_init (DafCoreAbstractModelHolder * self)
{
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	self->priv = DAF_CORE_ABSTRACT_MODEL_HOLDER_GET_PRIVATE (self);
#line 460 "AbstractModelHolder.c"
}


static void
daf_core_abstract_model_holder_finalize (GObject * obj)
{
	DafCoreAbstractModelHolder * self;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER, DafCoreAbstractModelHolder);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_g_object_unref0 (self->priv->_value_model);
#line 27 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_g_free0 (self->priv->_property_name);
#line 28 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	_g_free0 (self->canonical_property_name);
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	G_OBJECT_CLASS (daf_core_abstract_model_holder_parent_class)->finalize (obj);
#line 478 "AbstractModelHolder.c"
}


GType
daf_core_abstract_model_holder_get_type (void)
{
	static volatile gsize daf_core_abstract_model_holder_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_abstract_model_holder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreAbstractModelHolderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_abstract_model_holder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafCoreAbstractModelHolder), 0, (GInstanceInitFunc) daf_core_abstract_model_holder_instance_init, NULL };
		GType daf_core_abstract_model_holder_type_id;
		daf_core_abstract_model_holder_type_id = g_type_register_static (DAF_CORE_TYPE_ABSTRACT_VALUE_HOLDER, "DafCoreAbstractModelHolder", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&daf_core_abstract_model_holder_type_id__volatile, daf_core_abstract_model_holder_type_id);
	}
	return daf_core_abstract_model_holder_type_id__volatile;
}


static void
_vala_daf_core_abstract_model_holder_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec)
{
	DafCoreAbstractModelHolder * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER, DafCoreAbstractModelHolder);
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	switch (property_id) {
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		case DAF_CORE_ABSTRACT_MODEL_HOLDER_VALUE_MODEL_PROPERTY:
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_value_set_object (value, daf_core_abstract_model_holder_get_value_model (self));
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		break;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		case DAF_CORE_ABSTRACT_MODEL_HOLDER_PROPERTY_NAME_PROPERTY:
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		g_value_set_string (value, daf_core_abstract_model_holder_get_property_name (self));
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		break;
#line 518 "AbstractModelHolder.c"
		default:
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		break;
#line 524 "AbstractModelHolder.c"
	}
}


static void
_vala_daf_core_abstract_model_holder_set_property (GObject * object,
                                                   guint property_id,
                                                   const GValue * value,
                                                   GParamSpec * pspec)
{
	DafCoreAbstractModelHolder * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DAF_CORE_TYPE_ABSTRACT_MODEL_HOLDER, DafCoreAbstractModelHolder);
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
	switch (property_id) {
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		case DAF_CORE_ABSTRACT_MODEL_HOLDER_VALUE_MODEL_PROPERTY:
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		daf_core_abstract_model_holder_set_value_model (self, g_value_get_object (value));
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		break;
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		case DAF_CORE_ABSTRACT_MODEL_HOLDER_PROPERTY_NAME_PROPERTY:
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		daf_core_abstract_model_holder_set_property_name (self, g_value_get_string (value));
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		break;
#line 551 "AbstractModelHolder.c"
		default:
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 23 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/AbstractModelHolder.vala"
		break;
#line 557 "AbstractModelHolder.c"
	}
}




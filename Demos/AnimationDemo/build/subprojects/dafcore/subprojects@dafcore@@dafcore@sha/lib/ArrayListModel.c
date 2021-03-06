/* ArrayListModel.c generated by valac 0.40.10, the Vala compiler
 * generated from ArrayListModel.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gee.h>


#define DAF_CORE_TYPE_ILIST_MODEL (daf_core_ilist_model_get_type ())
#define DAF_CORE_ILIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_ILIST_MODEL, DafCoreIListModel))
#define DAF_CORE_IS_ILIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_ILIST_MODEL))
#define DAF_CORE_ILIST_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_ILIST_MODEL, DafCoreIListModelIface))

typedef struct _DafCoreIListModel DafCoreIListModel;
typedef struct _DafCoreIListModelIface DafCoreIListModelIface;

#define DAF_CORE_TYPE_ARRAY_LIST_MODEL (daf_core_array_list_model_get_type ())
#define DAF_CORE_ARRAY_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_ARRAY_LIST_MODEL, DafCoreArrayListModel))
#define DAF_CORE_ARRAY_LIST_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TYPE_ARRAY_LIST_MODEL, DafCoreArrayListModelClass))
#define DAF_CORE_IS_ARRAY_LIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_ARRAY_LIST_MODEL))
#define DAF_CORE_IS_ARRAY_LIST_MODEL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TYPE_ARRAY_LIST_MODEL))
#define DAF_CORE_ARRAY_LIST_MODEL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TYPE_ARRAY_LIST_MODEL, DafCoreArrayListModelClass))

typedef struct _DafCoreArrayListModel DafCoreArrayListModel;
typedef struct _DafCoreArrayListModelClass DafCoreArrayListModelClass;
typedef struct _DafCoreArrayListModelPrivate DafCoreArrayListModelPrivate;
enum  {
	DAF_CORE_ARRAY_LIST_MODEL_0_PROPERTY,
	DAF_CORE_ARRAY_LIST_MODEL_G_TYPE,
	DAF_CORE_ARRAY_LIST_MODEL_G_DUP_FUNC,
	DAF_CORE_ARRAY_LIST_MODEL_G_DESTROY_FUNC,
	DAF_CORE_ARRAY_LIST_MODEL_NUM_PROPERTIES
};
static GParamSpec* daf_core_array_list_model_properties[DAF_CORE_ARRAY_LIST_MODEL_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _DafCoreIListModelIface {
	GTypeInterface parent_iface;
	gint (*get_length) (DafCoreIListModel* self);
	gpointer (*get_at) (DafCoreIListModel* self, gint index);
	void (*set_at) (DafCoreIListModel* self, gint index, gconstpointer value);
	gboolean (*add) (DafCoreIListModel* self, gconstpointer item);
	gboolean (*add_all) (DafCoreIListModel* self, GeeCollection* items);
	void (*insert) (DafCoreIListModel* self, gint index, gconstpointer item);
	gboolean (*remove) (DafCoreIListModel* self, gconstpointer item);
	gpointer (*remove_at) (DafCoreIListModel* self, gint index);
	gint (*index_of) (DafCoreIListModel* self, gconstpointer item);
	void (*clear) (DafCoreIListModel* self);
};

struct _DafCoreArrayListModel {
	GeeArrayList parent_instance;
	DafCoreArrayListModelPrivate * priv;
};

struct _DafCoreArrayListModelClass {
	GeeArrayListClass parent_class;
};

struct _DafCoreArrayListModelPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
};


static gpointer daf_core_array_list_model_parent_class = NULL;
static DafCoreIListModelIface * daf_core_array_list_model_daf_core_ilist_model_parent_iface = NULL;

GType daf_core_ilist_model_get_type (void) G_GNUC_CONST;
GType daf_core_array_list_model_get_type (void) G_GNUC_CONST;
#define DAF_CORE_ARRAY_LIST_MODEL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DAF_CORE_TYPE_ARRAY_LIST_MODEL, DafCoreArrayListModelPrivate))
static gpointer daf_core_array_list_model_real_get_at (DafCoreIListModel* base,
                                                gint index);
static void daf_core_array_list_model_real_set_at (DafCoreIListModel* base,
                                            gint index,
                                            gconstpointer value);
static gboolean daf_core_array_list_model_real_add (DafCoreIListModel* base,
                                             gconstpointer item);
gint daf_core_ilist_model_index_of (DafCoreIListModel* self,
                                    gconstpointer item);
static gboolean daf_core_array_list_model_real_add_all (DafCoreIListModel* base,
                                                 GeeCollection* items);
static void daf_core_array_list_model_real_insert (DafCoreIListModel* base,
                                            gint index,
                                            gconstpointer item);
static gboolean daf_core_array_list_model_real_remove (DafCoreIListModel* base,
                                                gconstpointer item);
static gpointer daf_core_array_list_model_real_remove_at (DafCoreIListModel* base,
                                                   gint index);
static void daf_core_array_list_model_real_clear (DafCoreIListModel* base);
gint daf_core_ilist_model_get_length (DafCoreIListModel* self);
static gint daf_core_array_list_model_real_get_length (DafCoreIListModel* base);
DafCoreArrayListModel* daf_core_array_list_model_new (GType g_type,
                                                      GBoxedCopyFunc g_dup_func,
                                                      GDestroyNotify g_destroy_func);
DafCoreArrayListModel* daf_core_array_list_model_construct (GType object_type,
                                                            GType g_type,
                                                            GBoxedCopyFunc g_dup_func,
                                                            GDestroyNotify g_destroy_func);
static void _vala_daf_core_array_list_model_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec);
static void _vala_daf_core_array_list_model_set_property (GObject * object,
                                                   guint property_id,
                                                   const GValue * value,
                                                   GParamSpec * pspec);


static gpointer
daf_core_array_list_model_real_get_at (DafCoreIListModel* base,
                                       gint index)
{
	DafCoreArrayListModel * self;
	gpointer result = NULL;
	gint _tmp0_;
	gint _tmp1_;
	gpointer _tmp2_;
#line 27 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp0_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) self);
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp1_ = _tmp0_;
#line 28 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_debug ("ArrayListModel.vala:28: ArrayListModel:get_at: index %d size %d", index, _tmp1_);
#line 29 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp2_ = GEE_ABSTRACT_LIST_CLASS (daf_core_array_list_model_parent_class)->get ((GeeAbstractList*) G_TYPE_CHECK_INSTANCE_CAST (self, GEE_TYPE_ARRAY_LIST, GeeArrayList), index);
#line 29 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	result = _tmp2_;
#line 29 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return result;
#line 141 "ArrayListModel.c"
}


static void
daf_core_array_list_model_real_set_at (DafCoreIListModel* base,
                                       gint index,
                                       gconstpointer value)
{
	DafCoreArrayListModel * self;
	gint _tmp0_;
	gint _tmp1_;
#line 32 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 32 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp0_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) self);
#line 32 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp1_ = _tmp0_;
#line 32 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_vala_return_if_fail ((index >= 0) && (index < _tmp1_), "index >= 0 && index < size");
#line 35 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	GEE_ABSTRACT_LIST_CLASS (daf_core_array_list_model_parent_class)->set ((GeeAbstractList*) G_TYPE_CHECK_INSTANCE_CAST (self, GEE_TYPE_ARRAY_LIST, GeeArrayList), index, value);
#line 36 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_signal_emit_by_name ((DafCoreIListModel*) self, "item-changed", index, value);
#line 165 "ArrayListModel.c"
}


static gboolean
daf_core_array_list_model_real_add (DafCoreIListModel* base,
                                    gconstpointer item)
{
	DafCoreArrayListModel * self;
	gboolean result = FALSE;
	gboolean _result_ = FALSE;
	gboolean _tmp0_;
#line 39 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 40 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_debug ("ArrayListModel.vala:40: ArrayList: add");
#line 41 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_result_ = GEE_ABSTRACT_COLLECTION_CLASS (daf_core_array_list_model_parent_class)->add ((GeeAbstractCollection*) G_TYPE_CHECK_INSTANCE_CAST (self, GEE_TYPE_ARRAY_LIST, GeeArrayList), item);
#line 43 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp0_ = _result_;
#line 43 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	if (_tmp0_ == TRUE) {
#line 187 "ArrayListModel.c"
		gint _tmp1_;
		gint _tmp2_;
#line 44 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		_tmp1_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) self);
#line 44 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		_tmp2_ = _tmp1_;
#line 44 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		g_signal_emit_by_name ((DafCoreIListModel*) self, "list-changed", _tmp2_);
#line 45 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		g_signal_emit_by_name ((DafCoreIListModel*) self, "item-added", daf_core_ilist_model_index_of ((DafCoreIListModel*) self, item));
#line 198 "ArrayListModel.c"
	}
#line 47 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	result = _result_;
#line 47 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return result;
#line 204 "ArrayListModel.c"
}


static gboolean
daf_core_array_list_model_real_add_all (DafCoreIListModel* base,
                                        GeeCollection* items)
{
	DafCoreArrayListModel * self;
	gboolean result = FALSE;
	gboolean _result_ = FALSE;
#line 51 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 51 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_return_val_if_fail (items != NULL, FALSE);
#line 52 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_debug ("ArrayListModel.vala:52: ArrayList: add all");
#line 54 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_result_ = FALSE;
#line 223 "ArrayListModel.c"
	{
		GeeIterator* _item_it = NULL;
		GeeIterator* _tmp0_;
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		_tmp0_ = gee_iterable_iterator ((GeeIterable*) items);
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		_item_it = _tmp0_;
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		while (TRUE) {
#line 233 "ArrayListModel.c"
			GeeIterator* _tmp1_;
			gpointer item = NULL;
			GeeIterator* _tmp2_;
			gpointer _tmp3_;
			gboolean _tmp4_;
			gconstpointer _tmp5_;
			gconstpointer _tmp6_;
			gint _tmp7_;
			gint _tmp8_;
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp1_ = _item_it;
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			if (!gee_iterator_next (_tmp1_)) {
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				break;
#line 249 "ArrayListModel.c"
			}
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp2_ = _item_it;
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp3_ = gee_iterator_get (_tmp2_);
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			item = _tmp3_;
#line 57 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp4_ = _result_;
#line 57 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp5_ = item;
#line 57 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_result_ = _tmp4_ & gee_abstract_collection_add ((GeeAbstractCollection*) self, _tmp5_);
#line 58 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp6_ = item;
#line 58 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			g_signal_emit_by_name ((DafCoreIListModel*) self, "item-added", daf_core_ilist_model_index_of ((DafCoreIListModel*) self, _tmp6_));
#line 59 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp7_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) self);
#line 59 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp8_ = _tmp7_;
#line 59 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			g_signal_emit_by_name ((DafCoreIListModel*) self, "list-changed", _tmp8_);
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			((item == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (item = (self->priv->g_destroy_func (item), NULL));
#line 275 "ArrayListModel.c"
		}
#line 56 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		_g_object_unref0 (_item_it);
#line 279 "ArrayListModel.c"
	}
#line 61 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	result = _result_;
#line 61 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return result;
#line 285 "ArrayListModel.c"
}


static void
daf_core_array_list_model_real_insert (DafCoreIListModel* base,
                                       gint index,
                                       gconstpointer item)
{
	DafCoreArrayListModel * self;
	gint _tmp0_;
	gint _tmp1_;
#line 64 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 65 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_debug ("ArrayListModel.vala:65: ArrayList: insert item %d", index);
#line 66 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	GEE_ABSTRACT_LIST_CLASS (daf_core_array_list_model_parent_class)->insert ((GeeAbstractList*) G_TYPE_CHECK_INSTANCE_CAST (self, GEE_TYPE_ARRAY_LIST, GeeArrayList), index, item);
#line 67 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_signal_emit_by_name ((DafCoreIListModel*) self, "item-added", index);
#line 68 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp0_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) self);
#line 68 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp1_ = _tmp0_;
#line 68 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_signal_emit_by_name ((DafCoreIListModel*) self, "list-changed", _tmp1_);
#line 311 "ArrayListModel.c"
}


static gboolean
daf_core_array_list_model_real_remove (DafCoreIListModel* base,
                                       gconstpointer item)
{
	DafCoreArrayListModel * self;
	gboolean result = FALSE;
#line 71 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 72 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_debug ("ArrayListModel.vala:72: ArrayList: remove");
#line 73 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	result = GEE_ABSTRACT_COLLECTION_CLASS (daf_core_array_list_model_parent_class)->remove ((GeeAbstractCollection*) G_TYPE_CHECK_INSTANCE_CAST (self, GEE_TYPE_ARRAY_LIST, GeeArrayList), item);
#line 73 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return result;
#line 329 "ArrayListModel.c"
}


static gpointer
daf_core_array_list_model_real_remove_at (DafCoreIListModel* base,
                                          gint index)
{
	DafCoreArrayListModel * self;
	gpointer result = NULL;
	gpointer _result_ = NULL;
	gpointer _tmp0_;
	gconstpointer _tmp1_;
#line 77 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 78 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_debug ("ArrayListModel.vala:78: ArrayList: removed_at: %d", index);
#line 79 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp0_ = GEE_ABSTRACT_LIST_CLASS (daf_core_array_list_model_parent_class)->remove_at ((GeeAbstractList*) G_TYPE_CHECK_INSTANCE_CAST (self, GEE_TYPE_ARRAY_LIST, GeeArrayList), index);
#line 79 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_result_ = _tmp0_;
#line 81 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp1_ = _result_;
#line 81 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	if (_tmp1_ != NULL) {
#line 354 "ArrayListModel.c"
		gint _tmp2_;
		gint _tmp3_;
#line 82 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		g_signal_emit_by_name ((DafCoreIListModel*) self, "item-removed", index);
#line 83 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		_tmp2_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) self);
#line 83 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		_tmp3_ = _tmp2_;
#line 83 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		g_signal_emit_by_name ((DafCoreIListModel*) self, "list-changed", _tmp3_);
#line 365 "ArrayListModel.c"
	}
#line 85 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	result = _result_;
#line 85 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return result;
#line 371 "ArrayListModel.c"
}


static void
daf_core_array_list_model_real_clear (DafCoreIListModel* base)
{
	DafCoreArrayListModel * self;
	gint length = 0;
#line 88 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 89 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	length = daf_core_ilist_model_get_length ((DafCoreIListModel*) self);
#line 384 "ArrayListModel.c"
	{
		gint i = 0;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		i = 0;
#line 389 "ArrayListModel.c"
		{
			gboolean _tmp0_ = FALSE;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			_tmp0_ = TRUE;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
			while (TRUE) {
#line 396 "ArrayListModel.c"
				gint _tmp2_;
				gint _tmp3_;
				gpointer _tmp4_;
				gpointer _tmp5_;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				if (!_tmp0_) {
#line 403 "ArrayListModel.c"
					gint _tmp1_;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
					_tmp1_ = i;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
					i = _tmp1_ + 1;
#line 409 "ArrayListModel.c"
				}
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				_tmp0_ = FALSE;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				_tmp2_ = i;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				_tmp3_ = length;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				if (!(_tmp2_ < _tmp3_)) {
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
					break;
#line 421 "ArrayListModel.c"
				}
#line 92 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				_tmp4_ = gee_abstract_list_remove_at ((GeeAbstractList*) self, 0);
#line 92 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				_tmp5_ = _tmp4_;
#line 92 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
				((_tmp5_ == NULL) || (self->priv->g_destroy_func == NULL)) ? NULL : (_tmp5_ = (self->priv->g_destroy_func (_tmp5_), NULL));
#line 429 "ArrayListModel.c"
			}
		}
	}
}


static gint
daf_core_array_list_model_real_get_length (DafCoreIListModel* base)
{
	DafCoreArrayListModel * self;
	gint result = 0;
	gint _tmp0_;
	gint _tmp1_;
#line 96 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) base;
#line 97 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp0_ = gee_abstract_collection_get_size ((GeeAbstractCollection*) self);
#line 97 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	_tmp1_ = _tmp0_;
#line 97 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	result = _tmp1_;
#line 97 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return result;
#line 453 "ArrayListModel.c"
}


DafCoreArrayListModel*
daf_core_array_list_model_construct (GType object_type,
                                     GType g_type,
                                     GBoxedCopyFunc g_dup_func,
                                     GDestroyNotify g_destroy_func)
{
	DafCoreArrayListModel * self = NULL;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self = (DafCoreArrayListModel*) gee_array_list_construct (object_type, g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func, NULL, NULL, NULL);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self->priv->g_type = g_type;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self->priv->g_dup_func = g_dup_func;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self->priv->g_destroy_func = g_destroy_func;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return self;
#line 474 "ArrayListModel.c"
}


DafCoreArrayListModel*
daf_core_array_list_model_new (GType g_type,
                               GBoxedCopyFunc g_dup_func,
                               GDestroyNotify g_destroy_func)
{
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	return daf_core_array_list_model_construct (DAF_CORE_TYPE_ARRAY_LIST_MODEL, g_type, g_dup_func, g_destroy_func);
#line 485 "ArrayListModel.c"
}


static void
daf_core_array_list_model_class_init (DafCoreArrayListModelClass * klass)
{
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	daf_core_array_list_model_parent_class = g_type_class_peek_parent (klass);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_type_class_add_private (klass, sizeof (DafCoreArrayListModelPrivate));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	((GeeAbstractCollectionClass *) klass)->add = (gboolean (*) (GeeAbstractCollection *, gconstpointer)) daf_core_array_list_model_real_add;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	((GeeAbstractListClass *) klass)->insert = (void (*) (GeeAbstractList *, gint, gconstpointer)) daf_core_array_list_model_real_insert;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	((GeeAbstractCollectionClass *) klass)->remove = (gboolean (*) (GeeAbstractCollection *, gconstpointer)) daf_core_array_list_model_real_remove;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	((GeeAbstractListClass *) klass)->remove_at = (gpointer (*) (GeeAbstractList *, gint)) daf_core_array_list_model_real_remove_at;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	((GeeAbstractCollectionClass *) klass)->clear = (void (*) (GeeAbstractCollection *)) daf_core_array_list_model_real_clear;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_daf_core_array_list_model_get_property;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_daf_core_array_list_model_set_property;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_CORE_ARRAY_LIST_MODEL_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_CORE_ARRAY_LIST_MODEL_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), DAF_CORE_ARRAY_LIST_MODEL_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 516 "ArrayListModel.c"
}


static void
daf_core_array_list_model_daf_core_ilist_model_interface_init (DafCoreIListModelIface * iface)
{
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	daf_core_array_list_model_daf_core_ilist_model_parent_iface = g_type_interface_peek_parent (iface);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->get_at = (gpointer (*) (DafCoreIListModel *, gint)) daf_core_array_list_model_real_get_at;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->set_at = (void (*) (DafCoreIListModel *, gint, gconstpointer)) daf_core_array_list_model_real_set_at;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->add = (gboolean (*) (DafCoreIListModel *, gconstpointer)) daf_core_array_list_model_real_add;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->add_all = (gboolean (*) (DafCoreIListModel *, GeeCollection*)) daf_core_array_list_model_real_add_all;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->insert = (void (*) (DafCoreIListModel *, gint, gconstpointer)) daf_core_array_list_model_real_insert;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->remove = (gboolean (*) (DafCoreIListModel *, gconstpointer)) daf_core_array_list_model_real_remove;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->remove_at = (gpointer (*) (DafCoreIListModel *, gint)) daf_core_array_list_model_real_remove_at;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->clear = (void (*) (DafCoreIListModel *)) daf_core_array_list_model_real_clear;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->get_length = (gint (*) (DafCoreIListModel *)) daf_core_array_list_model_real_get_length;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	iface->index_of = (gint (*) (DafCoreIListModel *, gconstpointer)) gee_abstract_list_index_of;
#line 545 "ArrayListModel.c"
}


static void
daf_core_array_list_model_instance_init (DafCoreArrayListModel * self)
{
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	self->priv = DAF_CORE_ARRAY_LIST_MODEL_GET_PRIVATE (self);
#line 554 "ArrayListModel.c"
}


GType
daf_core_array_list_model_get_type (void)
{
	static volatile gsize daf_core_array_list_model_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_array_list_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreArrayListModelClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_array_list_model_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafCoreArrayListModel), 0, (GInstanceInitFunc) daf_core_array_list_model_instance_init, NULL };
		static const GInterfaceInfo daf_core_ilist_model_info = { (GInterfaceInitFunc) daf_core_array_list_model_daf_core_ilist_model_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType daf_core_array_list_model_type_id;
		daf_core_array_list_model_type_id = g_type_register_static (GEE_TYPE_ARRAY_LIST, "DafCoreArrayListModel", &g_define_type_info, 0);
		g_type_add_interface_static (daf_core_array_list_model_type_id, DAF_CORE_TYPE_ILIST_MODEL, &daf_core_ilist_model_info);
		g_once_init_leave (&daf_core_array_list_model_type_id__volatile, daf_core_array_list_model_type_id);
	}
	return daf_core_array_list_model_type_id__volatile;
}


static void
_vala_daf_core_array_list_model_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec)
{
	DafCoreArrayListModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DAF_CORE_TYPE_ARRAY_LIST_MODEL, DafCoreArrayListModel);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	switch (property_id) {
#line 584 "ArrayListModel.c"
		default:
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		break;
#line 590 "ArrayListModel.c"
	}
}


static void
_vala_daf_core_array_list_model_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec)
{
	DafCoreArrayListModel * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, DAF_CORE_TYPE_ARRAY_LIST_MODEL, DafCoreArrayListModel);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
	switch (property_id) {
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		case DAF_CORE_ARRAY_LIST_MODEL_G_TYPE:
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		self->priv->g_type = g_value_get_gtype (value);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		break;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		case DAF_CORE_ARRAY_LIST_MODEL_G_DUP_FUNC:
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		self->priv->g_dup_func = g_value_get_pointer (value);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		break;
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		case DAF_CORE_ARRAY_LIST_MODEL_G_DESTROY_FUNC:
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		self->priv->g_destroy_func = g_value_get_pointer (value);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		break;
#line 623 "ArrayListModel.c"
		default:
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 25 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafcore/lib/ArrayListModel.vala"
		break;
#line 629 "ArrayListModel.c"
	}
}




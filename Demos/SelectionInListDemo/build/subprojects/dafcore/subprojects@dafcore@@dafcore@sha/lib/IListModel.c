/* IListModel.c generated by valac 0.40.10, the Vala compiler
 * generated from IListModel.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gee.h>


#define DAF_CORE_TYPE_ILIST_MODEL (daf_core_ilist_model_get_type ())
#define DAF_CORE_ILIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TYPE_ILIST_MODEL, DafCoreIListModel))
#define DAF_CORE_IS_ILIST_MODEL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TYPE_ILIST_MODEL))
#define DAF_CORE_ILIST_MODEL_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_TYPE_ILIST_MODEL, DafCoreIListModelIface))

typedef struct _DafCoreIListModel DafCoreIListModel;
typedef struct _DafCoreIListModelIface DafCoreIListModelIface;
enum  {
	DAF_CORE_ILIST_MODEL_ITEM_REMOVED_SIGNAL,
	DAF_CORE_ILIST_MODEL_ITEM_ADDED_SIGNAL,
	DAF_CORE_ILIST_MODEL_LIST_CHANGED_SIGNAL,
	DAF_CORE_ILIST_MODEL_ITEM_CHANGED_SIGNAL,
	DAF_CORE_ILIST_MODEL_NUM_SIGNALS
};
static guint daf_core_ilist_model_signals[DAF_CORE_ILIST_MODEL_NUM_SIGNALS] = {0};

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



GType daf_core_ilist_model_get_type (void) G_GNUC_CONST;
gint daf_core_ilist_model_get_length (DafCoreIListModel* self);
gpointer daf_core_ilist_model_get_at (DafCoreIListModel* self,
                                      gint index);
void daf_core_ilist_model_set_at (DafCoreIListModel* self,
                                  gint index,
                                  gconstpointer value);
gboolean daf_core_ilist_model_add (DafCoreIListModel* self,
                                   gconstpointer item);
gboolean daf_core_ilist_model_add_all (DafCoreIListModel* self,
                                       GeeCollection* items);
void daf_core_ilist_model_insert (DafCoreIListModel* self,
                                  gint index,
                                  gconstpointer item);
gboolean daf_core_ilist_model_remove (DafCoreIListModel* self,
                                      gconstpointer item);
gpointer daf_core_ilist_model_remove_at (DafCoreIListModel* self,
                                         gint index);
gint daf_core_ilist_model_index_of (DafCoreIListModel* self,
                                    gconstpointer item);
void daf_core_ilist_model_clear (DafCoreIListModel* self);
static void g_cclosure_user_marshal_VOID__INT_POINTER (GClosure * closure,
                                                GValue * return_value,
                                                guint n_param_values,
                                                const GValue * param_values,
                                                gpointer invocation_hint,
                                                gpointer marshal_data);


gint
daf_core_ilist_model_get_length (DafCoreIListModel* self)
{
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	return DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->get_length (self);
#line 80 "IListModel.c"
}


gpointer
daf_core_ilist_model_get_at (DafCoreIListModel* self,
                             gint index)
{
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	return DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->get_at (self, index);
#line 92 "IListModel.c"
}


void
daf_core_ilist_model_set_at (DafCoreIListModel* self,
                             gint index,
                             gconstpointer value)
{
#line 34 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_if_fail (self != NULL);
#line 34 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->set_at (self, index, value);
#line 105 "IListModel.c"
}


gboolean
daf_core_ilist_model_add (DafCoreIListModel* self,
                          gconstpointer item)
{
#line 36 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 36 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	return DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->add (self, item);
#line 117 "IListModel.c"
}


gboolean
daf_core_ilist_model_add_all (DafCoreIListModel* self,
                              GeeCollection* items)
{
#line 37 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 37 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	return DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->add_all (self, items);
#line 129 "IListModel.c"
}


void
daf_core_ilist_model_insert (DafCoreIListModel* self,
                             gint index,
                             gconstpointer item)
{
#line 38 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_if_fail (self != NULL);
#line 38 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->insert (self, index, item);
#line 142 "IListModel.c"
}


gboolean
daf_core_ilist_model_remove (DafCoreIListModel* self,
                             gconstpointer item)
{
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	return DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->remove (self, item);
#line 154 "IListModel.c"
}


gpointer
daf_core_ilist_model_remove_at (DafCoreIListModel* self,
                                gint index)
{
#line 41 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 41 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	return DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->remove_at (self, index);
#line 166 "IListModel.c"
}


gint
daf_core_ilist_model_index_of (DafCoreIListModel* self,
                               gconstpointer item)
{
#line 43 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 43 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	return DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->index_of (self, item);
#line 178 "IListModel.c"
}


void
daf_core_ilist_model_clear (DafCoreIListModel* self)
{
#line 45 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_if_fail (self != NULL);
#line 45 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	DAF_CORE_ILIST_MODEL_GET_INTERFACE (self)->clear (self);
#line 189 "IListModel.c"
}


static void
g_cclosure_user_marshal_VOID__INT_POINTER (GClosure * closure,
                                           GValue * return_value,
                                           guint n_param_values,
                                           const GValue * param_values,
                                           gpointer invocation_hint,
                                           gpointer marshal_data)
{
	typedef void (*GMarshalFunc_VOID__INT_POINTER) (gpointer data1, gint arg_1, gpointer arg_2, gpointer data2);
	register GMarshalFunc_VOID__INT_POINTER callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	g_return_if_fail (n_param_values == 3);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	if (G_CCLOSURE_SWAP_DATA (closure)) {
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
		data1 = closure->data;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
		data2 = param_values->data[0].v_pointer;
#line 215 "IListModel.c"
	} else {
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
		data1 = param_values->data[0].v_pointer;
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
		data2 = closure->data;
#line 221 "IListModel.c"
	}
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	callback = (GMarshalFunc_VOID__INT_POINTER) (marshal_data ? marshal_data : cc->callback);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	callback (data1, g_value_get_int (param_values + 1), g_value_get_pointer (param_values + 2), data2);
#line 227 "IListModel.c"
}


static void
daf_core_ilist_model_default_init (DafCoreIListModelIface * iface)
{
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	daf_core_ilist_model_signals[DAF_CORE_ILIST_MODEL_ITEM_REMOVED_SIGNAL] = g_signal_new ("item-removed", DAF_CORE_TYPE_ILIST_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__INT, G_TYPE_NONE, 1, G_TYPE_INT);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	daf_core_ilist_model_signals[DAF_CORE_ILIST_MODEL_ITEM_ADDED_SIGNAL] = g_signal_new ("item-added", DAF_CORE_TYPE_ILIST_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__INT, G_TYPE_NONE, 1, G_TYPE_INT);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	daf_core_ilist_model_signals[DAF_CORE_ILIST_MODEL_LIST_CHANGED_SIGNAL] = g_signal_new ("list-changed", DAF_CORE_TYPE_ILIST_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__INT, G_TYPE_NONE, 1, G_TYPE_INT);
#line 25 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/lib/IListModel.vala"
	daf_core_ilist_model_signals[DAF_CORE_ILIST_MODEL_ITEM_CHANGED_SIGNAL] = g_signal_new ("item-changed", DAF_CORE_TYPE_ILIST_MODEL, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__INT_POINTER, G_TYPE_NONE, 2, G_TYPE_INT, G_TYPE_POINTER);
#line 242 "IListModel.c"
}


GType
daf_core_ilist_model_get_type (void)
{
	static volatile gsize daf_core_ilist_model_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_ilist_model_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreIListModelIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_ilist_model_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_ilist_model_type_id;
		daf_core_ilist_model_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreIListModel", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_ilist_model_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_ilist_model_type_id__volatile, daf_core_ilist_model_type_id);
	}
	return daf_core_ilist_model_type_id__volatile;
}




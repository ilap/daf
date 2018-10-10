/* IDirectedAcyclicGraph.c generated by valac 0.40.10, the Vala compiler
 * generated from IDirectedAcyclicGraph.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define DAF_CORE_BINDING_TYPE_IDIRECTED_ACYCLIC_GRAPH (daf_core_binding_idirected_acyclic_graph_get_type ())
#define DAF_CORE_BINDING_IDIRECTED_ACYCLIC_GRAPH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_BINDING_TYPE_IDIRECTED_ACYCLIC_GRAPH, DafCoreBindingIDirectedAcyclicGraph))
#define DAF_CORE_BINDING_IS_IDIRECTED_ACYCLIC_GRAPH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_BINDING_TYPE_IDIRECTED_ACYCLIC_GRAPH))
#define DAF_CORE_BINDING_IDIRECTED_ACYCLIC_GRAPH_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_CORE_BINDING_TYPE_IDIRECTED_ACYCLIC_GRAPH, DafCoreBindingIDirectedAcyclicGraphIface))

typedef struct _DafCoreBindingIDirectedAcyclicGraph DafCoreBindingIDirectedAcyclicGraph;
typedef struct _DafCoreBindingIDirectedAcyclicGraphIface DafCoreBindingIDirectedAcyclicGraphIface;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

typedef enum  {
	DAF_CORE_BINDING_DEPENDENCY_GRAPH_ERROR_CYCLIC_DEPENDENCY
} DafCoreBindingDependencyGraphError;
#define DAF_CORE_BINDING_DEPENDENCY_GRAPH_ERROR daf_core_binding_dependency_graph_error_quark ()
struct _DafCoreBindingIDirectedAcyclicGraphIface {
	GTypeInterface parent_iface;
	void (*resolve) (DafCoreBindingIDirectedAcyclicGraph* self, DafCoreBindingIDirectedAcyclicGraph* node, GError** error);
	GList* (*get_edges) (DafCoreBindingIDirectedAcyclicGraph* self);
	void (*set_edges) (DafCoreBindingIDirectedAcyclicGraph* self, GList* value);
	const gchar* (*get_name) (DafCoreBindingIDirectedAcyclicGraph* self);
	void (*set_name) (DafCoreBindingIDirectedAcyclicGraph* self, const gchar* value);
};



GQuark daf_core_binding_dependency_graph_error_quark (void);
GType daf_core_binding_idirected_acyclic_graph_get_type (void) G_GNUC_CONST;
void daf_core_binding_idirected_acyclic_graph_add_edge (DafCoreBindingIDirectedAcyclicGraph* self,
                                                        DafCoreBindingIDirectedAcyclicGraph* node);
GList* daf_core_binding_idirected_acyclic_graph_get_edges (DafCoreBindingIDirectedAcyclicGraph* self);
void daf_core_binding_idirected_acyclic_graph_set_edges (DafCoreBindingIDirectedAcyclicGraph* self,
                                                         GList* value);
void daf_core_binding_idirected_acyclic_graph_remove_edge (DafCoreBindingIDirectedAcyclicGraph* self,
                                                           DafCoreBindingIDirectedAcyclicGraph* node);
void daf_core_binding_idirected_acyclic_graph_resolve_dependency (DafCoreBindingIDirectedAcyclicGraph* self,
                                                                  DafCoreBindingIDirectedAcyclicGraph* node,
                                                                  GList* resolved,
                                                                  GList* unresolved,
                                                                  GError** error);
void daf_core_binding_idirected_acyclic_graph_resolve (DafCoreBindingIDirectedAcyclicGraph* self,
                                                       DafCoreBindingIDirectedAcyclicGraph* node,
                                                       GError** error);
const gchar* daf_core_binding_idirected_acyclic_graph_get_name (DafCoreBindingIDirectedAcyclicGraph* self);
void daf_core_binding_idirected_acyclic_graph_set_name (DafCoreBindingIDirectedAcyclicGraph* self,
                                                        const gchar* value);


GQuark
daf_core_binding_dependency_graph_error_quark (void)
{
	return g_quark_from_static_string ("daf_core_binding_dependency_graph_error-quark");
}


static gpointer
_g_object_ref0 (gpointer self)
{
#line 40 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	return self ? g_object_ref (self) : NULL;
#line 71 "IDirectedAcyclicGraph.c"
}


void
daf_core_binding_idirected_acyclic_graph_add_edge (DafCoreBindingIDirectedAcyclicGraph* self,
                                                   DafCoreBindingIDirectedAcyclicGraph* node)
{
	GList* _tmp0_;
	GList* _tmp1_;
	DafCoreBindingIDirectedAcyclicGraph* _tmp2_;
#line 39 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_if_fail (node != NULL);
#line 40 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp0_ = daf_core_binding_idirected_acyclic_graph_get_edges (self);
#line 40 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp1_ = _tmp0_;
#line 40 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp2_ = _g_object_ref0 (node);
#line 40 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	daf_core_binding_idirected_acyclic_graph_set_edges (self, g_list_append (_tmp1_, _tmp2_));
#line 92 "IDirectedAcyclicGraph.c"
}


void
daf_core_binding_idirected_acyclic_graph_remove_edge (DafCoreBindingIDirectedAcyclicGraph* self,
                                                      DafCoreBindingIDirectedAcyclicGraph* node)
{
	GList* _tmp0_;
	GList* _tmp1_;
#line 43 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_if_fail (node != NULL);
#line 44 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp0_ = daf_core_binding_idirected_acyclic_graph_get_edges (self);
#line 44 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp1_ = _tmp0_;
#line 44 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	daf_core_binding_idirected_acyclic_graph_set_edges (self, g_list_remove (_tmp1_, node));
#line 110 "IDirectedAcyclicGraph.c"
}


void
daf_core_binding_idirected_acyclic_graph_resolve_dependency (DafCoreBindingIDirectedAcyclicGraph* self,
                                                             DafCoreBindingIDirectedAcyclicGraph* node,
                                                             GList* resolved,
                                                             GList* unresolved,
                                                             GError** error)
{
	DafCoreBindingIDirectedAcyclicGraph* _tmp0_;
	GList* _tmp1_;
	GList* _tmp2_;
	DafCoreBindingIDirectedAcyclicGraph* _tmp8_;
	GError * _inner_error_ = NULL;
#line 47 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_if_fail (node != NULL);
#line 51 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp0_ = _g_object_ref0 (node);
#line 51 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	unresolved = g_list_append (unresolved, _tmp0_);
#line 53 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp1_ = daf_core_binding_idirected_acyclic_graph_get_edges (node);
#line 53 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp2_ = _tmp1_;
#line 136 "IDirectedAcyclicGraph.c"
	{
		GList* edge_collection = NULL;
		GList* edge_it = NULL;
#line 53 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
		edge_collection = _tmp2_;
#line 53 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
		for (edge_it = edge_collection; edge_it != NULL; edge_it = edge_it->next) {
#line 144 "IDirectedAcyclicGraph.c"
			DafCoreBindingIDirectedAcyclicGraph* _tmp3_;
			DafCoreBindingIDirectedAcyclicGraph* edge = NULL;
#line 53 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
			_tmp3_ = _g_object_ref0 ((DafCoreBindingIDirectedAcyclicGraph*) edge_it->data);
#line 53 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
			edge = _tmp3_;
#line 151 "IDirectedAcyclicGraph.c"
			{
				DafCoreBindingIDirectedAcyclicGraph* _tmp4_;
#line 55 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
				_tmp4_ = edge;
#line 55 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
				if (g_list_index (resolved, _tmp4_) < 0) {
#line 158 "IDirectedAcyclicGraph.c"
					DafCoreBindingIDirectedAcyclicGraph* _tmp5_;
					DafCoreBindingIDirectedAcyclicGraph* _tmp7_;
#line 56 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
					_tmp5_ = edge;
#line 56 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
					if (g_list_index (unresolved, _tmp5_) >= 0) {
#line 165 "IDirectedAcyclicGraph.c"
						GError* _tmp6_;
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
						_tmp6_ = g_error_new_literal (DAF_CORE_BINDING_DEPENDENCY_GRAPH_ERROR, DAF_CORE_BINDING_DEPENDENCY_GRAPH_ERROR_CYCLIC_DEPENDENCY, "A cyclic dependency detected.");
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
						_inner_error_ = _tmp6_;
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
						if (_inner_error_->domain == DAF_CORE_BINDING_DEPENDENCY_GRAPH_ERROR) {
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							g_propagate_error (error, _inner_error_);
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							_g_object_unref0 (edge);
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							return;
#line 179 "IDirectedAcyclicGraph.c"
						} else {
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							_g_object_unref0 (edge);
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							g_clear_error (&_inner_error_);
#line 58 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							return;
#line 189 "IDirectedAcyclicGraph.c"
						}
					}
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
					_tmp7_ = edge;
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
					daf_core_binding_idirected_acyclic_graph_resolve_dependency (self, _tmp7_, resolved, unresolved, &_inner_error_);
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
					if (G_UNLIKELY (_inner_error_ != NULL)) {
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
						if (_inner_error_->domain == DAF_CORE_BINDING_DEPENDENCY_GRAPH_ERROR) {
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							g_propagate_error (error, _inner_error_);
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							_g_object_unref0 (edge);
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							return;
#line 206 "IDirectedAcyclicGraph.c"
						} else {
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							_g_object_unref0 (edge);
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							g_clear_error (&_inner_error_);
#line 60 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
							return;
#line 216 "IDirectedAcyclicGraph.c"
						}
					}
				}
#line 53 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
				_g_object_unref0 (edge);
#line 222 "IDirectedAcyclicGraph.c"
			}
		}
	}
#line 64 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	_tmp8_ = _g_object_ref0 (node);
#line 64 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	resolved = g_list_append (resolved, _tmp8_);
#line 65 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	unresolved = g_list_remove (unresolved, node);
#line 232 "IDirectedAcyclicGraph.c"
}


void
daf_core_binding_idirected_acyclic_graph_resolve (DafCoreBindingIDirectedAcyclicGraph* self,
                                                  DafCoreBindingIDirectedAcyclicGraph* node,
                                                  GError** error)
{
#line 68 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_if_fail (self != NULL);
#line 68 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	DAF_CORE_BINDING_IDIRECTED_ACYCLIC_GRAPH_GET_INTERFACE (self)->resolve (self, node, error);
#line 245 "IDirectedAcyclicGraph.c"
}


GList*
daf_core_binding_idirected_acyclic_graph_get_edges (DafCoreBindingIDirectedAcyclicGraph* self)
{
#line 36 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 36 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	return DAF_CORE_BINDING_IDIRECTED_ACYCLIC_GRAPH_GET_INTERFACE (self)->get_edges (self);
#line 256 "IDirectedAcyclicGraph.c"
}


void
daf_core_binding_idirected_acyclic_graph_set_edges (DafCoreBindingIDirectedAcyclicGraph* self,
                                                    GList* value)
{
#line 36 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_if_fail (self != NULL);
#line 36 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	DAF_CORE_BINDING_IDIRECTED_ACYCLIC_GRAPH_GET_INTERFACE (self)->set_edges (self, value);
#line 268 "IDirectedAcyclicGraph.c"
}


const gchar*
daf_core_binding_idirected_acyclic_graph_get_name (DafCoreBindingIDirectedAcyclicGraph* self)
{
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	return DAF_CORE_BINDING_IDIRECTED_ACYCLIC_GRAPH_GET_INTERFACE (self)->get_name (self);
#line 279 "IDirectedAcyclicGraph.c"
}


void
daf_core_binding_idirected_acyclic_graph_set_name (DafCoreBindingIDirectedAcyclicGraph* self,
                                                   const gchar* value)
{
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_return_if_fail (self != NULL);
#line 37 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	DAF_CORE_BINDING_IDIRECTED_ACYCLIC_GRAPH_GET_INTERFACE (self)->set_name (self, value);
#line 291 "IDirectedAcyclicGraph.c"
}


static void
daf_core_binding_idirected_acyclic_graph_default_init (DafCoreBindingIDirectedAcyclicGraphIface * iface)
{
#line 34 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_object_interface_install_property (iface, g_param_spec_pointer ("edges", "edges", "edges", G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 34 "/home/ilap/Projects/daf/Demos/VideoConverter/subprojects/dafcore/lib/Binding/IDirectedAcyclicGraph.vala"
	g_object_interface_install_property (iface, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 302 "IDirectedAcyclicGraph.c"
}


/**
     * This implements a Dependency graph resolution algorythm based on
     * Ferry's Boender python algorythm see details:
     * http://www.electricmonk.nl/docs/dependency_resolving_algorithm/dependency_resolving_algorithm.html
     **/
GType
daf_core_binding_idirected_acyclic_graph_get_type (void)
{
	static volatile gsize daf_core_binding_idirected_acyclic_graph_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_binding_idirected_acyclic_graph_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreBindingIDirectedAcyclicGraphIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_binding_idirected_acyclic_graph_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_core_binding_idirected_acyclic_graph_type_id;
		daf_core_binding_idirected_acyclic_graph_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafCoreBindingIDirectedAcyclicGraph", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (daf_core_binding_idirected_acyclic_graph_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&daf_core_binding_idirected_acyclic_graph_type_id__volatile, daf_core_binding_idirected_acyclic_graph_type_id);
	}
	return daf_core_binding_idirected_acyclic_graph_type_id__volatile;
}




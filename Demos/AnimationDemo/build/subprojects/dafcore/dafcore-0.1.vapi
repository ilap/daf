/* dafcore-0.1.vapi generated by valac 0.40.10, do not modify. */

namespace Daf {
	namespace Core {
		namespace Binding {
			[CCode (cheader_filename = "dafcore.h")]
			public abstract class AbstractAcyclicGraph : GLib.Object, Daf.Core.Binding.IDirectedAcyclicGraph {
				public GLib.List<Daf.Core.Binding.IDirectedAcyclicGraph> resolved;
				public GLib.List<Daf.Core.Binding.IDirectedAcyclicGraph> unresolved;
				public AbstractAcyclicGraph ();
			}
			[CCode (cheader_filename = "dafcore.h")]
			public class BindKey : GLib.Object {
				public string property_name;
				public BindKey (GLib.Object subject, string property_name);
			}
			[CCode (cheader_filename = "dafcore.h")]
			public class BindModel : Daf.Core.Binding.AbstractAcyclicGraph, Daf.Core.Binding.IBindModel, Daf.Core.Binding.IBindTo, Daf.Core.Binding.IBindFrom {
				public bool model_locked;
				public BindModel (string name, Daf.Core.Binding.IBindModelService service, Daf.Core.IValueModel model);
				public Daf.Core.Binding.IBindModelService service { get; set construct; }
			}
			[CCode (cheader_filename = "dafcore.h")]
			public class BindModelFactory : GLib.Object, Daf.Core.Binding.IBindModelFactory {
				public BindModelFactory ();
			}
			[CCode (cheader_filename = "dafcore.h")]
			public class BindModelService<K,V> : GLib.Object, Daf.Core.Binding.IBindModelRepository<K,V>, Daf.Core.Binding.IBindModelService {
				public BindModelService (Daf.Core.Binding.IBindModelRepository repository, Daf.Core.Binding.IBindModelFactory model_factory);
				public Daf.Core.Binding.IBindModelFactory model_factory { get; construct; }
				public Daf.Core.Binding.IBindModelRepository repository { get; construct; }
			}
			[CCode (cheader_filename = "dafcore.h")]
			public class Binder : GLib.Object, Daf.Core.Binding.IBinder {
				public Binder ();
				public Daf.Core.Binding.IBindModelRepository repository { private get; set; }
				public Daf.Core.Binding.IBindModelService service { private get; set; }
			}
			[CCode (cheader_filename = "dafcore.h")]
			public class DefaultBindModelRepository : GLib.Object, Daf.Core.Binding.IBindModelRepository<Daf.Core.Binding.BindKey,Daf.Core.Binding.IBindModel> {
				public DefaultBindModelRepository ();
				public void DefaultBindModelRepository ();
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IBindFrom : GLib.Object {
				public abstract void from (GLib.Object subject, string? property_name = null);
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IBindModel : GLib.Object {
				public abstract void bind (Daf.Core.Binding.IBindModel bind_target, bool locked = false);
				public abstract void on_model_notify (GLib.Object sender, GLib.ParamSpec param_spec);
				public abstract void unbind (Daf.Core.Binding.IBindModel bind_target, bool locked = false);
				public abstract Daf.Core.IValueModel model { get; set construct; }
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IBindModelFactory : GLib.Object {
				public Daf.Core.Binding.IBindModel get_instance (string? name, Daf.Core.Binding.IBindModelService service, Daf.Core.IValueModel model);
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IBindModelRepository<K,V> : GLib.Object {
				public abstract Gee.HashMap<K,V> bind_models { get; set construct; }
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IBindModelService : GLib.Object {
				public abstract Daf.Core.Binding.IBindModel? create_bind_model (GLib.Object subject, string? property_name = null);
				public abstract Daf.Core.Binding.IBindModel? get_bind_model (GLib.Object subject, string? property_name = null);
				public abstract Daf.Core.Binding.IBindModel get_or_create_bind_model (GLib.Object subject, string? property_name = null);
				public abstract void remove_bind_model (GLib.Object subject, string? property_name = null);
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IBindTo : GLib.Object {
				public abstract void to (GLib.Object subject, string? property_name = null);
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IBinder : GLib.Object {
				public abstract Daf.Core.Binding.IBindTo bind (GLib.Object source, string? property_name = null);
				public abstract Daf.Core.Binding.IBindFrom unbind (GLib.Object subject, string? property_name = null);
			}
			[CCode (cheader_filename = "dafcore.h")]
			public interface IDirectedAcyclicGraph : GLib.Object {
				public void add_edge (Daf.Core.Binding.IDirectedAcyclicGraph node);
				public void remove_edge (Daf.Core.Binding.IDirectedAcyclicGraph node);
				public abstract void resolve (Daf.Core.Binding.IDirectedAcyclicGraph node) throws Daf.Core.Binding.DependencyGraphError;
				protected void resolve_dependency (Daf.Core.Binding.IDirectedAcyclicGraph node, GLib.List<Daf.Core.Binding.IDirectedAcyclicGraph> resolved, GLib.List<Daf.Core.Binding.IDirectedAcyclicGraph> unresolved) throws Daf.Core.Binding.DependencyGraphError;
				public abstract GLib.List<Daf.Core.Binding.IDirectedAcyclicGraph> edges { get; set construct; }
				public abstract string name { get; set; }
			}
			[CCode (cheader_filename = "dafcore.h")]
			public errordomain DependencyGraphError {
				CYCLIC_DEPENDENCY
			}
		}
		[CCode (cheader_filename = "dafcore.h")]
		public abstract class AbstractModelHolder : Daf.Core.AbstractValueHolder {
			protected string canonical_property_name;
			public AbstractModelHolder (GLib.Object? model, string? property_name = null);
			protected abstract void on_model_change (GLib.Object source, GLib.ParamSpec param_spec);
			protected abstract void setup_notify ();
			public string property_name { get; set construct; }
			public Daf.Core.IValueModel? value_model { get; set construct; }
		}
		[CCode (cheader_filename = "dafcore.h")]
		public abstract class AbstractTypeConverter : Daf.Core.AbstractValueHolder {
			protected Daf.Core.IValueModel model;
			public AbstractTypeConverter (Daf.Core.IValueModel model);
			public abstract GLib.Value convert_from_model (GLib.Value? model_value);
			public override GLib.Value? get_val ();
		}
		[CCode (cheader_filename = "dafcore.h")]
		public abstract class AbstractValueHolder : GLib.Object, Daf.Core.IValueModel {
			protected bool observe_domain_changes;
			public AbstractValueHolder ();
			public virtual GLib.Value? get_val ();
			public virtual void set_val (GLib.Value? new_value);
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class ArrayListModel<G> : Gee.ArrayList<G>, Daf.Core.IListModel<G> {
			public ArrayListModel ();
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class AspectAdapter : Daf.Core.AbstractValueHolder, Daf.Core.IModelHolder {
			public AspectAdapter (GLib.Object? value_model, string property_name, bool observe_domain_changes = false);
			public void before_model_changed (GLib.Value? old_model);
			public void domain_property_changed (GLib.Object sender, GLib.ParamSpec param_spec);
			public override GLib.Value? get_val ();
			public void model_changed (GLib.Object sender, GLib.ParamSpec param_spec);
			public override void set_val (GLib.Value? new_value);
			public void value_changed (GLib.Object sender, GLib.ParamSpec param_spec);
			public string property_name { get; private set; }
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class AspectTrigger : Daf.Core.AbstractValueHolder, Daf.Core.IAspectTrigger {
			public const bool COMMIT;
			public const bool DISCARD;
			public AspectTrigger ();
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class BufferedValueHolder : Daf.Core.AbstractValueHolder, Daf.Core.IAspectTrigger {
			public BufferedValueHolder (Daf.Core.IValueModel subject, bool observe_model_changes = false);
			public void model_changed ();
			public override void set_val (GLib.Value? new_value);
			public void trigger_emitted_handler (GLib.Object sender, GLib.ParamSpec spec);
			public void value_changed (GLib.Object sender, GLib.ParamSpec spec);
			public BufferedValueHolder.with_trigger (Daf.Core.IValueModel subject, Daf.Core.IAspectTrigger trigger);
			public bool auto_commit { get; set; }
			public bool dirty { get; protected set; }
			public Daf.Core.IValueModel? subject { get; protected set; }
			public Daf.Core.IAspectTrigger trigger { get; set; }
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class ModelPresenter : Daf.Core.AbstractModelHolder, Daf.Core.IModelPresenter, Daf.Core.IAspectTrigger {
			public ModelPresenter (GLib.Object model, bool auto_commit = false);
			protected override void on_model_change (GLib.Object sender, GLib.ParamSpec param_spec);
			protected override void setup_notify ();
			public Daf.Core.IValueModel auto_commit { get; set construct; }
			public Daf.Core.IValueModel dirty { get; set construct; }
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class ModelRegistrar : GLib.Object, Daf.Core.IModelPresenter {
			public ModelRegistrar ();
			public void add_value_model (string key, Daf.Core.IValueModel value);
			public Gee.HashMap<string,Daf.Core.IValueModel> get_all_models ();
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class SelectionInList<G> : Daf.Core.AbstractValueHolder, Daf.Core.IListModel<G> {
			public SelectionInList ();
			public void clear_selection ();
			public override GLib.Value? get_val ();
			public GLib.Value? getit (int index);
			public override void set_val (GLib.Value? new_value);
			public SelectionInList.with_list_model (Daf.Core.IListModel<G> list_model);
			public bool has_selection { get; private set; }
			public Daf.Core.IValueModel list_holder { get; set; }
			public GLib.Value? selection { owned get; set; }
			public Daf.Core.IValueModel selection_holder { get; set; }
			public int selection_index { get; set; }
			public Daf.Core.IValueModel selection_index_holder { get; set; }
			public new int size { get; }
		}
		[CCode (cheader_filename = "dafcore.h")]
		public class ValueHolder : Daf.Core.AbstractValueHolder {
			public ValueHolder (GLib.Value? new_value = null);
		}
		[CCode (cheader_filename = "dafcore.h")]
		public interface IAspectTrigger : GLib.Object {
			public abstract void commit ();
			public abstract void discard ();
		}
		[CCode (cheader_filename = "dafcore.h")]
		public interface IListModel<G> : GLib.Object {
			public abstract bool add (G item);
			public abstract bool add_all (Gee.Collection<G> items);
			public abstract void clear ();
			public abstract G get_at (int index);
			public abstract int get_length ();
			public abstract int index_of (G item);
			public abstract void insert (int index, G item);
			public abstract bool remove (G item);
			public abstract G remove_at (int index);
			public abstract void set_at (int index, G value);
			public signal void item_added (int index);
			public signal void item_changed (int index, G item);
			public signal void item_removed (int index);
			public signal void list_changed (int size);
		}
		[CCode (cheader_filename = "dafcore.h")]
		public interface IModelAdapter : GLib.Object {
			public abstract GLib.Object? get_model ();
			public abstract void set_model (GLib.Object? new_model);
			public signal void model_changed ();
		}
		[CCode (cheader_filename = "dafcore.h")]
		public interface IModelHolder : GLib.Object {
			public const string PROP_NAME;
			public virtual Daf.Core.IValueModel? get_channel ();
			public abstract GLib.Object? get_model ();
			public virtual void set_channel (Daf.Core.IValueModel? value_model);
			public abstract void set_model (GLib.Object? new_model);
			public abstract Daf.Core.IValueModel? value_model { protected get; protected set; }
		}
		[CCode (cheader_filename = "dafcore.h")]
		public interface IModelPresenter : GLib.Object {
			public abstract Daf.Core.IValueModel? get_value_model (string path);
		}
		[CCode (cheader_filename = "dafcore.h")]
		public interface IValueModel : GLib.Object {
			public const string PROP_NAME;
			public virtual void do_set_val (ref GLib.Value? model_state, GLib.Value? new_value);
			public abstract GLib.Value? get_val ();
			public abstract void set_val (GLib.Value? new_value);
			public abstract bool locked { get; set; }
			protected abstract GLib.Value model_value { protected get; protected set; }
			public signal void before_value_changed (GLib.Value? old_value);
		}
	}
}

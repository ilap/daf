/* dafioc-0.1.vapi generated by valac 0.40.10, do not modify. */

namespace Daf {
	namespace IoC {
		namespace Adapters {
			[CCode (cheader_filename = "dafioc.h")]
			public abstract class AbstractComponentAdapter : GLib.Object, Daf.IoC.IComponentAdapter {
				protected AbstractComponentAdapter (GLib.Value component_key, GLib.Type component_type);
				protected void check_concrete () throws Daf.IoC.ComponentAdapterError;
				public abstract GLib.Object? resolve_instance (Daf.IoC.IContainer? container = null);
				public string to_string ();
			}
			[CCode (cheader_filename = "dafioc.h")]
			public class CachingComponentAdapter : Daf.IoC.Adapters.DecoratingComponentAdapter {
				public CachingComponentAdapter (Daf.IoC.IComponentAdapter subject, GLib.Object? cached_instance = null);
				public override GLib.Object? resolve_instance (Daf.IoC.IContainer? container = null);
				public GLib.Object? cached_instance { private get; set construct; }
			}
			[CCode (cheader_filename = "dafioc.h")]
			public class ConstructorInjectionComponentAdapter : Daf.IoC.Adapters.InstantiatingComponentAdapter {
				protected bool instantiating;
				public ConstructorInjectionComponentAdapter (GLib.Value component_key, GLib.Type component_type, GLib.Parameter[]? parameters = null);
				public GLib.ParamSpec[]? get_construct_properties ();
				public override GLib.Object? instantiate (ref Gee.ArrayList<Daf.IoC.IComponentAdapter> ordered_list) throws Daf.IoC.DependencyError;
			}
			[CCode (cheader_filename = "dafioc.h")]
			public class ConstructorInjectionComponentAdapterFactory : GLib.Object, Daf.IoC.Adapters.IComponentAdapterFactory {
				public ConstructorInjectionComponentAdapterFactory ();
			}
			[CCode (cheader_filename = "dafioc.h")]
			public abstract class DecoratingComponentAdapter : GLib.Object, Daf.IoC.IComponentAdapter {
				public DecoratingComponentAdapter (Daf.IoC.IComponentAdapter subject);
				public virtual GLib.Object? resolve_instance (Daf.IoC.IContainer? container = null);
				public virtual GLib.Value component_key { get; set; }
				public virtual GLib.Type component_type { get; set; }
				public virtual Daf.IoC.IContainer container { get; set; }
				public Daf.IoC.IComponentAdapter subject { private get; set construct; }
			}
			[CCode (cheader_filename = "dafioc.h")]
			public class DefaultComponentAdapterFactory : GLib.Object, Daf.IoC.Adapters.IComponentAdapterFactory {
				public DefaultComponentAdapterFactory ();
			}
			[CCode (cheader_filename = "dafioc.h")]
			public class InstanceComponentAdapter : Daf.IoC.Adapters.AbstractComponentAdapter {
				public InstanceComponentAdapter (GLib.Value key, GLib.Object instance);
				public override GLib.Object? resolve_instance (Daf.IoC.IContainer? container = null);
			}
			[CCode (cheader_filename = "dafioc.h")]
			public abstract class InstantiatingComponentAdapter : Daf.IoC.Adapters.AbstractComponentAdapter {
				public InstantiatingComponentAdapter (GLib.Value key, GLib.Type type, GLib.Parameter[]? parameters = null);
				public abstract GLib.Object? instantiate (ref Gee.ArrayList<Daf.IoC.IComponentAdapter> ordered_list) throws Daf.IoC.DependencyError;
				public override GLib.Object? resolve_instance (Daf.IoC.IContainer? container = null);
				public GLib.Parameter[]? parameters { get; set; }
			}
			[CCode (cheader_filename = "dafioc.h")]
			public interface IComponentAdapterFactory : GLib.Object {
				public abstract Daf.IoC.IComponentAdapter create_adapter (GLib.Value key, GLib.Type? type = null, GLib.Parameter[]? parameters = null);
			}
		}
		namespace Containers {
			[CCode (cheader_filename = "dafioc.h")]
			public class CachedContainer : GLib.Object, Daf.IoC.IContainer, Daf.IoC.IContainerRegistrar {
				public CachedContainer (Daf.IoC.Adapters.IComponentAdapterFactory? adapter_factory = null);
				public virtual bool add_child_container (Daf.IoC.IContainer child);
				public static Gee.ArrayList order_adapters_with_container_adapters_last (Gee.ArrayList adapters);
				public virtual bool remove_child_container (Daf.IoC.IContainer child);
				public CachedContainer.with_parent (Daf.IoC.IContainer? parent = null, Daf.IoC.Adapters.IComponentAdapterFactory? adapter_factory = null);
			}
		}
		[CCode (cheader_filename = "dafioc.h")]
		public interface IComponentAdapter : GLib.Object {
			public abstract GLib.Object? resolve_instance (Daf.IoC.IContainer? container = null);
			public abstract GLib.Value component_key { get; set; }
			public abstract GLib.Type component_type { get; set; }
			public abstract Daf.IoC.IContainer container { get; set; }
		}
		[CCode (cheader_filename = "dafioc.h")]
		public interface IContainer : GLib.Object {
			public abstract void add_ordered_adapter (Daf.IoC.IComponentAdapter adapter);
			public abstract Daf.IoC.IComponentAdapter? get_adapter (GLib.Value key);
			public abstract Daf.IoC.IComponentAdapter? get_adapter_of_type (GLib.Type type) throws Daf.IoC.ResolutionError;
			public abstract Gee.ArrayList? get_adapters_of_type (GLib.Type type);
			public abstract GLib.Object? resolve (GLib.Value key);
			public abstract GLib.Object? resolve_of_type (GLib.Type type);
			public abstract Gee.ArrayList resolves_of_type (GLib.Type? type);
			public abstract Gee.ArrayList<Daf.IoC.IComponentAdapter> adapters { get; set; }
			public abstract Gee.ArrayList instances { owned get; set; }
			public abstract Daf.IoC.IContainer parent { get; set; }
		}
		[CCode (cheader_filename = "dafioc.h")]
		public interface IContainerRegistrar : GLib.Object, Daf.IoC.IContainer {
			public abstract bool add_child_container (Daf.IoC.IContainer child);
			public abstract Daf.IoC.IContainerRegistrar make_child_container ();
			public abstract Daf.IoC.IComponentAdapter register_adapter (Daf.IoC.IComponentAdapter adapter) throws Daf.IoC.RegistrationError;
			public abstract Daf.IoC.IComponentAdapter register_instance (GLib.Object instance) throws Daf.IoC.RegistrationError;
			public abstract Daf.IoC.IComponentAdapter register_key (GLib.Value key, GLib.Type? type = null, GLib.Parameter[]? parameters = null);
			public abstract bool remove_child_container (Daf.IoC.IContainer child);
			public abstract Daf.IoC.IComponentAdapter? unregister_instance (GLib.Object instance);
			public abstract Daf.IoC.IComponentAdapter? unregister_key (GLib.Value key);
		}
		[CCode (cheader_filename = "dafioc.h")]
		protected errordomain ComponentAdapterError {
			NOT_CONCRETE_REGISTRATION,
			ASSIGNABILITY_REGISTRATION
		}
		[CCode (cheader_filename = "dafioc.h")]
		protected errordomain DependencyError {
			CYCLIC_DEPENDENCY,
			UNSATISFIED_DEPENDENCY
		}
		[CCode (cheader_filename = "dafioc.h")]
		protected errordomain RegistrationError {
			DUPLICATE_KEY,
			ASSIGNABILITY,
			UNREGISTERED_TYPE
		}
		[CCode (cheader_filename = "dafioc.h")]
		protected errordomain ResolutionError {
			AMBIGOUS_COMPONENT,
			NOT_VALID_KEY_TYPE
		}
	}
}

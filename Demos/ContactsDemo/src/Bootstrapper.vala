/*-
 *  Bootstrapper.vala
 *
 * Author:
 *    Pal Dorogi "ilap" <pal.dorogi@gmail.com>
 *
 * Copyright (c) 2012 Pal Dorogi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 *  This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

using ContactsDemo.DataAccess;
using ContactsDemo.Model;
using ContactsDemo.View;
using ContactsDemo.ViewModel;

using Daf.Core.Binding;
using Daf.IoC;
using Daf.IoC.Containers;

namespace ContactsDemo {

	public class Bootstrapper : Object {
		
		private static bool configured = false;
		private static IContainerRegistrar container;
		
		public static void configure () {
			container = new CachedContainer ();

			/**
			 * Registering the neede classes
			 */
			//container.register_key (typeof (ContactManagerModel));		
			
			container.register_key (typeof (PersonEditorView));
			container.register_key (typeof (PersonEditorPresentation));	
			container.register_key (typeof (FilePersonRepository));			
			//container.register_key (typeof (DefaultPersonRepository));
			
			container.register_key (typeof (ContactManagerModel));			
			
			container.register_key (typeof (Person));	

			container.register_key (typeof (ContactManagerView));			
			container.register_key (typeof (ContactManagerPresentation));
							
			container.register_key (typeof (Binder));
			container.register_key (typeof (Person));
		}
	
		public static Object? get_instance (Type type) {
			if (!configured) {
				configure ();
				configured = true;
			}
			return container.resolve (type);
		}
	}
}
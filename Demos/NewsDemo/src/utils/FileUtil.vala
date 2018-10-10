/*
* Copyright (c) 2017 Robert San <robertsanseries@gmail.com>
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*/

namespace App.Utils {

    /**
     * The {@code FileUtil} class related to files handling.
     *
     * @since 0.1.0
     */
    public class FileUtil {

        /**
         * Open folder in app files.
         *
         * Exemple:
         * > FileUtil.open_folder_files(uris)
         * 
         * @param {@code string} - uris
         */
        public static void open_folder_file_app (string[] uris) {
            string cmd = "pantheon-files -t";

            foreach (string s in uris) {
                cmd += (StringUtil.SPACE + s);
            }

            try {
                Process.spawn_command_line_async (cmd);
            } catch (Error e) {
                critical ("Unable to open item or folder with command %s. %s".printf (cmd, e.message));
            }
        }

        /**
         * Create file and write.
         *
         * Exemple:
         * > FileUtil.create_file("/etc", "ola.text", array.data);
         * 
         * @param {@code string} - dir
         * @param {@code string} - name_file
         * @param {@code GenericArray<string> > data} - words
         */
        public static void create_file (string dir, string name_file, string[] words) {
            try {
                var directory = File.new_for_path (dir);
                
                if (!directory.query_exists ()) {
                    // Create directory and parent directories if none exist
                    directory.make_directory_with_parents();
                } 

                var file = File.new_for_path (dir + "/" + name_file);
                var text = StringUtil.EMPTY;

                foreach (string word in words) {
                    text += (StringUtil.SPACE + word);
                }

                if (!file.query_exists ()) {    
                    var file_stream = file.create (FileCreateFlags.NONE);
                    var data_stream = new DataOutputStream (file_stream);
                    data_stream.put_string (text);
                }

            } catch (Error e) {
                critical (e.message);
            }
        }

        /**
         * Delete file.
         *
         * Exemple:
         * > FileUtil.delete_file("/etc", "ola.text");
         * 
         * @param {@code string} - dir
         * @param {@code string} - name_file
         */
        public static void delete_file (string dir, string name_file) {
            try {
                var file = File.new_for_path (dir + "/" + name_file);

                if (file.query_exists ()) { 
                    file.delete ();
                }

            } catch (Error e) {
                critical (e.message);
            }
        }
    }
}
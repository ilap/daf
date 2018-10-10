/* Gender.c generated by valac 0.40.10, the Vala compiler
 * generated from Gender.vala, do not modify */

/* -*- Mode: vala; indent-tabs-mode: nil; tab-width: 4 -*-*/
/*-
 * Copyright (c) 2012 Pal Dorogi <pal.dorogi@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FIt_mESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define DAF_CORE_TEST_MODEL_TYPE_GENDER (daf_core_test_model_gender_get_type ())

typedef enum  {
	DAF_CORE_TEST_MODEL_GENDER_MALE,
	DAF_CORE_TEST_MODEL_GENDER_FEMALE
} DafCoreTestModelGender;



GType daf_core_test_model_gender_get_type (void) G_GNUC_CONST;
gchar* daf_core_test_model_gender_to_string (DafCoreTestModelGender self);
DafCoreTestModelGender* daf_core_test_model_gender_all (int* result_length1);


gchar*
daf_core_test_model_gender_to_string (DafCoreTestModelGender self)
{
	gchar* result = NULL;
#line 29 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	switch (self) {
#line 29 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
		case DAF_CORE_TEST_MODEL_GENDER_MALE:
#line 55 "Gender.c"
		{
			gchar* _tmp0_;
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
			_tmp0_ = g_strdup ("Male");
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
			result = _tmp0_;
#line 31 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
			return result;
#line 64 "Gender.c"
		}
#line 29 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
		case DAF_CORE_TEST_MODEL_GENDER_FEMALE:
#line 68 "Gender.c"
		{
			gchar* _tmp1_;
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
			_tmp1_ = g_strdup ("Female");
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
			result = _tmp1_;
#line 33 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
			return result;
#line 77 "Gender.c"
		}
		default:
		{
#line 35 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
			g_assert_not_reached ();
#line 83 "Gender.c"
		}
	}
}


DafCoreTestModelGender*
daf_core_test_model_gender_all (int* result_length1)
{
	DafCoreTestModelGender* result = NULL;
	DafCoreTestModelGender* _tmp0_;
	DafCoreTestModelGender* _tmp1_;
	gint _tmp1__length1;
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	_tmp0_ = g_new0 (DafCoreTestModelGender, 2);
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	_tmp0_[0] = DAF_CORE_TEST_MODEL_GENDER_MALE;
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	_tmp0_[1] = DAF_CORE_TEST_MODEL_GENDER_FEMALE;
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	_tmp1_ = _tmp0_;
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	_tmp1__length1 = 2;
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	if (result_length1) {
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
		*result_length1 = _tmp1__length1;
#line 110 "Gender.c"
	}
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	result = _tmp1_;
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/Model/Gender.vala"
	return result;
#line 116 "Gender.c"
}


GType
daf_core_test_model_gender_get_type (void)
{
	static volatile gsize daf_core_test_model_gender_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_test_model_gender_type_id__volatile)) {
		static const GEnumValue values[] = {{DAF_CORE_TEST_MODEL_GENDER_MALE, "DAF_CORE_TEST_MODEL_GENDER_MALE", "male"}, {DAF_CORE_TEST_MODEL_GENDER_FEMALE, "DAF_CORE_TEST_MODEL_GENDER_FEMALE", "female"}, {0, NULL, NULL}};
		GType daf_core_test_model_gender_type_id;
		daf_core_test_model_gender_type_id = g_enum_register_static ("DafCoreTestModelGender", values);
		g_once_init_leave (&daf_core_test_model_gender_type_id__volatile, daf_core_test_model_gender_type_id);
	}
	return daf_core_test_model_gender_type_id__volatile;
}



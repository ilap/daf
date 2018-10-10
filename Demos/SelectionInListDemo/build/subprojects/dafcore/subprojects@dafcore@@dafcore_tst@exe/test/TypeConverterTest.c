/* TypeConverterTest.c generated by valac 0.40.10, the Vala compiler
 * generated from TypeConverterTest.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include "dafunit.h"
#include <stdlib.h>
#include <string.h>
#include "dafcore.h"


#define DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST (daf_core_test_typeconverter_test_get_type ())
#define DAF_CORE_TEST_TYPECONVERTER_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST, DafCoreTestTypeConverterTest))
#define DAF_CORE_TEST_TYPECONVERTER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST, DafCoreTestTypeConverterTestClass))
#define DAF_CORE_TEST_IS_TYPECONVERTER_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST))
#define DAF_CORE_TEST_IS_TYPECONVERTER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST))
#define DAF_CORE_TEST_TYPECONVERTER_TEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST, DafCoreTestTypeConverterTestClass))

typedef struct _DafCoreTestTypeConverterTest DafCoreTestTypeConverterTest;
typedef struct _DafCoreTestTypeConverterTestClass DafCoreTestTypeConverterTestClass;
typedef struct _DafCoreTestTypeConverterTestPrivate DafCoreTestTypeConverterTestPrivate;

#define DAF_CORE_TEST_MODEL_TYPE_PERSON (daf_core_test_model_person_get_type ())
#define DAF_CORE_TEST_MODEL_PERSON(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TEST_MODEL_TYPE_PERSON, DafCoreTestModelPerson))
#define DAF_CORE_TEST_MODEL_PERSON_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TEST_MODEL_TYPE_PERSON, DafCoreTestModelPersonClass))
#define DAF_CORE_TEST_MODEL_IS_PERSON(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TEST_MODEL_TYPE_PERSON))
#define DAF_CORE_TEST_MODEL_IS_PERSON_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TEST_MODEL_TYPE_PERSON))
#define DAF_CORE_TEST_MODEL_PERSON_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TEST_MODEL_TYPE_PERSON, DafCoreTestModelPersonClass))

typedef struct _DafCoreTestModelPerson DafCoreTestModelPerson;
typedef struct _DafCoreTestModelPersonClass DafCoreTestModelPersonClass;
enum  {
	DAF_CORE_TEST_TYPECONVERTER_TEST_0_PROPERTY,
	DAF_CORE_TEST_TYPECONVERTER_TEST_NUM_PROPERTIES
};
static GParamSpec* daf_core_test_typeconverter_test_properties[DAF_CORE_TEST_TYPECONVERTER_TEST_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define DAF_CORE_TEST_MODEL_TYPE_GENDER (daf_core_test_model_gender_get_type ())

#define DAF_CORE_TEST_TYPECONVERTER_TEST_TYPE_INT_TO_STRING_CONVERTER (daf_core_test_typeconverter_test_int_to_string_converter_get_type ())
#define DAF_CORE_TEST_TYPECONVERTER_TEST_INT_TO_STRING_CONVERTER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_CORE_TEST_TYPECONVERTER_TEST_TYPE_INT_TO_STRING_CONVERTER, DafCoreTestTypeConverterTestIntToStringConverter))
#define DAF_CORE_TEST_TYPECONVERTER_TEST_INT_TO_STRING_CONVERTER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), DAF_CORE_TEST_TYPECONVERTER_TEST_TYPE_INT_TO_STRING_CONVERTER, DafCoreTestTypeConverterTestIntToStringConverterClass))
#define DAF_CORE_TEST_TYPECONVERTER_TEST_IS_INT_TO_STRING_CONVERTER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_CORE_TEST_TYPECONVERTER_TEST_TYPE_INT_TO_STRING_CONVERTER))
#define DAF_CORE_TEST_TYPECONVERTER_TEST_IS_INT_TO_STRING_CONVERTER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), DAF_CORE_TEST_TYPECONVERTER_TEST_TYPE_INT_TO_STRING_CONVERTER))
#define DAF_CORE_TEST_TYPECONVERTER_TEST_INT_TO_STRING_CONVERTER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), DAF_CORE_TEST_TYPECONVERTER_TEST_TYPE_INT_TO_STRING_CONVERTER, DafCoreTestTypeConverterTestIntToStringConverterClass))

typedef struct _DafCoreTestTypeConverterTestIntToStringConverter DafCoreTestTypeConverterTestIntToStringConverter;
typedef struct _DafCoreTestTypeConverterTestIntToStringConverterClass DafCoreTestTypeConverterTestIntToStringConverterClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define __vala_GValue_free0(var) ((var == NULL) ? NULL : (var = (_vala_GValue_free (var), NULL)))
typedef struct _DafCoreTestTypeConverterTestIntToStringConverterPrivate DafCoreTestTypeConverterTestIntToStringConverterPrivate;
enum  {
	DAF_CORE_TEST_TYPECONVERTER_TEST_INT_TO_STRING_CONVERTER_0_PROPERTY,
	DAF_CORE_TEST_TYPECONVERTER_TEST_INT_TO_STRING_CONVERTER_NUM_PROPERTIES
};
static GParamSpec* daf_core_test_typeconverter_test_int_to_string_converter_properties[DAF_CORE_TEST_TYPECONVERTER_TEST_INT_TO_STRING_CONVERTER_NUM_PROPERTIES];
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _DafCoreTestTypeConverterTest {
	DafUnitTestAbstractTestCase parent_instance;
	DafCoreTestTypeConverterTestPrivate * priv;
};

struct _DafCoreTestTypeConverterTestClass {
	DafUnitTestAbstractTestCaseClass parent_class;
};

struct _DafCoreTestTypeConverterTestPrivate {
	DafCoreTestModelPerson* person;
};

typedef enum  {
	DAF_CORE_TEST_MODEL_GENDER_MALE,
	DAF_CORE_TEST_MODEL_GENDER_FEMALE
} DafCoreTestModelGender;

struct _DafCoreTestTypeConverterTestIntToStringConverter {
	DafCoreAbstractTypeConverter parent_instance;
	DafCoreTestTypeConverterTestIntToStringConverterPrivate * priv;
};

struct _DafCoreTestTypeConverterTestIntToStringConverterClass {
	DafCoreAbstractTypeConverterClass parent_class;
};


static gpointer daf_core_test_typeconverter_test_parent_class = NULL;
static gpointer daf_core_test_typeconverter_test_int_to_string_converter_parent_class = NULL;

GType daf_core_test_typeconverter_test_get_type (void) G_GNUC_CONST;
GType daf_core_test_model_person_get_type (void) G_GNUC_CONST;
#define DAF_CORE_TEST_TYPECONVERTER_TEST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST, DafCoreTestTypeConverterTestPrivate))
DafCoreTestTypeConverterTest* daf_core_test_typeconverter_test_new (void);
DafCoreTestTypeConverterTest* daf_core_test_typeconverter_test_construct (GType object_type);
void daf_core_test_typeconverter_test_integer_to_string_converter_test (DafCoreTestTypeConverterTest* self);
static void _daf_core_test_typeconverter_test_integer_to_string_converter_test_daf_unit_test_abstract_test_case_test_method (gpointer self);
static void daf_core_test_typeconverter_test_real_set_up (DafUnitTestAbstractTestCase* base);
DafCoreTestModelPerson* daf_core_test_model_person_new (const gchar* first_name,
                                                        const gchar* last_name);
DafCoreTestModelPerson* daf_core_test_model_person_construct (GType object_type,
                                                              const gchar* first_name,
                                                              const gchar* last_name);
void daf_core_test_model_person_set_first_name (DafCoreTestModelPerson* self,
                                                const gchar* value);
void daf_core_test_model_person_set_last_name (DafCoreTestModelPerson* self,
                                               const gchar* value);
void daf_core_test_model_person_set_age (DafCoreTestModelPerson* self,
                                         gint value);
GType daf_core_test_model_gender_get_type (void) G_GNUC_CONST;
void daf_core_test_model_person_set_sex (DafCoreTestModelPerson* self,
                                         DafCoreTestModelGender value);
void daf_core_test_model_person_set_email (DafCoreTestModelPerson* self,
                                           const gchar* value);
static void daf_core_test_typeconverter_test_real_tear_down (DafUnitTestAbstractTestCase* base);
DafCoreTestTypeConverterTestIntToStringConverter* daf_core_test_typeconverter_test_int_to_string_converter_new (DafCoreIValueModel* value_model);
DafCoreTestTypeConverterTestIntToStringConverter* daf_core_test_typeconverter_test_int_to_string_converter_construct (GType object_type,
                                                                                                                      DafCoreIValueModel* value_model);
GType daf_core_test_typeconverter_test_int_to_string_converter_get_type (void) G_GNUC_CONST;
static void _vala_GValue_free (GValue* self);
gint daf_core_test_model_person_get_age (DafCoreTestModelPerson* self);
static void daf_core_test_typeconverter_test_int_to_string_converter_real_convert_from_model (DafCoreAbstractTypeConverter* base,
                                                                                       GValue* model_value,
                                                                                       GValue* result);
static void daf_core_test_typeconverter_test_int_to_string_converter_real_set_val (DafCoreAbstractValueHolder* base,
                                                                            GValue* new_value);
static void daf_core_test_typeconverter_test_finalize (GObject * obj);


static void
_daf_core_test_typeconverter_test_integer_to_string_converter_test_daf_unit_test_abstract_test_case_test_method (gpointer self)
{
#line 37 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_typeconverter_test_integer_to_string_converter_test ((DafCoreTestTypeConverterTest*) self);
#line 141 "TypeConverterTest.c"
}


DafCoreTestTypeConverterTest*
daf_core_test_typeconverter_test_construct (GType object_type)
{
	DafCoreTestTypeConverterTest * self = NULL;
#line 35 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self = (DafCoreTestTypeConverterTest*) daf_unit_test_abstract_test_case_construct (object_type, "TypeConverterTest");
#line 37 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_unit_test_abstract_test_case_add_test ((DafUnitTestAbstractTestCase*) self, "integer_to_string_converter_test", _daf_core_test_typeconverter_test_integer_to_string_converter_test_daf_unit_test_abstract_test_case_test_method, self);
#line 34 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	return self;
#line 155 "TypeConverterTest.c"
}


DafCoreTestTypeConverterTest*
daf_core_test_typeconverter_test_new (void)
{
#line 34 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	return daf_core_test_typeconverter_test_construct (DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST);
#line 164 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_real_set_up (DafUnitTestAbstractTestCase* base)
{
	DafCoreTestTypeConverterTest * self;
	DafCoreTestModelPerson* _tmp0_;
	DafCoreTestModelPerson* _tmp1_;
	DafCoreTestModelPerson* _tmp2_;
	DafCoreTestModelPerson* _tmp3_;
	DafCoreTestModelPerson* _tmp4_;
	DafCoreTestModelPerson* _tmp5_;
#line 40 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self = (DafCoreTestTypeConverterTest*) base;
#line 41 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp0_ = daf_core_test_model_person_new ("", "");
#line 41 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_g_object_unref0 (self->priv->person);
#line 41 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self->priv->person = _tmp0_;
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp1_ = self->priv->person;
#line 42 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_model_person_set_first_name (_tmp1_, "Felix");
#line 43 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp2_ = self->priv->person;
#line 43 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_model_person_set_last_name (_tmp2_, "Van der Gullen");
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp3_ = self->priv->person;
#line 44 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_model_person_set_age (_tmp3_, 42);
#line 45 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp4_ = self->priv->person;
#line 45 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_model_person_set_sex (_tmp4_, DAF_CORE_TEST_MODEL_GENDER_MALE);
#line 46 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp5_ = self->priv->person;
#line 46 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_model_person_set_email (_tmp5_, "felix.van.der.gullen@gmail.com");
#line 206 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_real_tear_down (DafUnitTestAbstractTestCase* base)
{
	DafCoreTestTypeConverterTest * self;
#line 50 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self = (DafCoreTestTypeConverterTest*) base;
#line 51 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_g_object_unref0 (self->priv->person);
#line 51 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self->priv->person = NULL;
#line 220 "TypeConverterTest.c"
}


static void
_vala_GValue_free (GValue* self)
{
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_value_unset (self);
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_free (self);
#line 231 "TypeConverterTest.c"
}


void
daf_core_test_typeconverter_test_integer_to_string_converter_test (DafCoreTestTypeConverterTest* self)
{
	DafCoreIValueModel* int_model = NULL;
	DafCoreTestModelPerson* _tmp0_;
	DafCoreAspectAdapter* _tmp1_;
	DafCoreIValueModel* str_model = NULL;
	DafCoreTestTypeConverterTestIntToStringConverter* _tmp2_;
	DafCoreTestModelPerson* _tmp3_;
	GValue* _tmp4_;
	GValue* _tmp5_;
	gchar* _tmp6_;
	GValue* _tmp7_ = NULL;
	DafCoreTestModelPerson* _tmp8_;
	gint _tmp9_;
	gint _tmp10_;
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_return_if_fail (self != NULL);
#line 56 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp0_ = self->priv->person;
#line 56 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp1_ = daf_core_aspect_adapter_new ((GObject*) _tmp0_, "age", FALSE);
#line 56 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	int_model = (DafCoreIValueModel*) _tmp1_;
#line 57 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp2_ = daf_core_test_typeconverter_test_int_to_string_converter_new (int_model);
#line 57 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	str_model = (DafCoreIValueModel*) _tmp2_;
#line 59 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp3_ = self->priv->person;
#line 59 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_model_person_set_age (_tmp3_, 1);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp4_ = daf_core_ivalue_model_get_val (int_model);
#line 60 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_vala_assert (1 == g_value_get_int (_tmp4_), "1 == (int) int_model.get_val ()");
#line 61 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp5_ = daf_core_ivalue_model_get_val (str_model);
#line 61 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp6_ = g_value_get_string (_tmp5_);
#line 61 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_vala_assert (g_strcmp0 ("1", _tmp6_) == 0, "\"1\" == (string) str_model.get_val()");
#line 61 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_g_free0 (_tmp6_);
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp7_ = g_new0 (GValue, 1);
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_value_init (_tmp7_, G_TYPE_STRING);
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_value_set_string (_tmp7_, "2");
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_ivalue_model_set_val (str_model, _tmp7_);
#line 63 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	__vala_GValue_free0 (_tmp7_);
#line 64 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp8_ = self->priv->person;
#line 64 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp9_ = daf_core_test_model_person_get_age (_tmp8_);
#line 64 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp10_ = _tmp9_;
#line 64 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_vala_assert (2 == _tmp10_, "2 == person.age");
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_g_object_unref0 (str_model);
#line 54 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_g_object_unref0 (int_model);
#line 301 "TypeConverterTest.c"
}


DafCoreTestTypeConverterTestIntToStringConverter*
daf_core_test_typeconverter_test_int_to_string_converter_construct (GType object_type,
                                                                    DafCoreIValueModel* value_model)
{
	DafCoreTestTypeConverterTestIntToStringConverter * self = NULL;
#line 72 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_return_val_if_fail (value_model != NULL, NULL);
#line 73 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self = (DafCoreTestTypeConverterTestIntToStringConverter*) daf_core_abstract_type_converter_construct (object_type, value_model);
#line 72 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	return self;
#line 316 "TypeConverterTest.c"
}


DafCoreTestTypeConverterTestIntToStringConverter*
daf_core_test_typeconverter_test_int_to_string_converter_new (DafCoreIValueModel* value_model)
{
#line 72 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	return daf_core_test_typeconverter_test_int_to_string_converter_construct (DAF_CORE_TEST_TYPECONVERTER_TEST_TYPE_INT_TO_STRING_CONVERTER, value_model);
#line 325 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_int_to_string_converter_real_convert_from_model (DafCoreAbstractTypeConverter* base,
                                                                                  GValue* model_value,
                                                                                  GValue* result)
{
	DafCoreTestTypeConverterTestIntToStringConverter * self;
	gchar* _tmp0_;
	GValue _tmp1_ = {0};
#line 76 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self = (DafCoreTestTypeConverterTestIntToStringConverter*) base;
#line 77 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp0_ = g_strdup_printf ("%i", g_value_get_int (model_value));
#line 77 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_value_init (&_tmp1_, G_TYPE_STRING);
#line 77 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_value_take_string (&_tmp1_, _tmp0_);
#line 77 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	*result = _tmp1_;
#line 77 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	return;
#line 349 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_int_to_string_converter_real_set_val (DafCoreAbstractValueHolder* base,
                                                                       GValue* new_value)
{
	DafCoreTestTypeConverterTestIntToStringConverter * self;
	DafCoreIValueModel* _tmp0_;
	GValue* _tmp1_ = NULL;
#line 80 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self = (DafCoreTestTypeConverterTestIntToStringConverter*) base;
#line 81 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp0_ = ((DafCoreAbstractTypeConverter*) self)->model;
#line 81 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_tmp1_ = g_new0 (GValue, 1);
#line 81 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_value_init (_tmp1_, G_TYPE_INT);
#line 81 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_value_set_int (_tmp1_, atoi (g_value_get_string (new_value)));
#line 81 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_ivalue_model_set_val (_tmp0_, _tmp1_);
#line 81 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	__vala_GValue_free0 (_tmp1_);
#line 374 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_int_to_string_converter_class_init (DafCoreTestTypeConverterTestIntToStringConverterClass * klass)
{
#line 70 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_typeconverter_test_int_to_string_converter_parent_class = g_type_class_peek_parent (klass);
#line 70 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	((DafCoreAbstractTypeConverterClass *) klass)->convert_from_model = (void (*) (DafCoreAbstractTypeConverter *, GValue*, GValue*)) daf_core_test_typeconverter_test_int_to_string_converter_real_convert_from_model;
#line 70 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	((DafCoreAbstractValueHolderClass *) klass)->set_val = (void (*) (DafCoreAbstractValueHolder *, GValue*)) daf_core_test_typeconverter_test_int_to_string_converter_real_set_val;
#line 387 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_int_to_string_converter_instance_init (DafCoreTestTypeConverterTestIntToStringConverter * self)
{
}


GType
daf_core_test_typeconverter_test_int_to_string_converter_get_type (void)
{
	static volatile gsize daf_core_test_typeconverter_test_int_to_string_converter_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_test_typeconverter_test_int_to_string_converter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreTestTypeConverterTestIntToStringConverterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_test_typeconverter_test_int_to_string_converter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafCoreTestTypeConverterTestIntToStringConverter), 0, (GInstanceInitFunc) daf_core_test_typeconverter_test_int_to_string_converter_instance_init, NULL };
		GType daf_core_test_typeconverter_test_int_to_string_converter_type_id;
		daf_core_test_typeconverter_test_int_to_string_converter_type_id = g_type_register_static (DAF_CORE_TYPE_ABSTRACT_TYPE_CONVERTER, "DafCoreTestTypeConverterTestIntToStringConverter", &g_define_type_info, 0);
		g_once_init_leave (&daf_core_test_typeconverter_test_int_to_string_converter_type_id__volatile, daf_core_test_typeconverter_test_int_to_string_converter_type_id);
	}
	return daf_core_test_typeconverter_test_int_to_string_converter_type_id__volatile;
}


static void
daf_core_test_typeconverter_test_class_init (DafCoreTestTypeConverterTestClass * klass)
{
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	daf_core_test_typeconverter_test_parent_class = g_type_class_peek_parent (klass);
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	g_type_class_add_private (klass, sizeof (DafCoreTestTypeConverterTestPrivate));
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	((DafUnitTestAbstractTestCaseClass *) klass)->set_up = (void (*) (DafUnitTestAbstractTestCase *)) daf_core_test_typeconverter_test_real_set_up;
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	((DafUnitTestAbstractTestCaseClass *) klass)->tear_down = (void (*) (DafUnitTestAbstractTestCase *)) daf_core_test_typeconverter_test_real_tear_down;
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	G_OBJECT_CLASS (klass)->finalize = daf_core_test_typeconverter_test_finalize;
#line 424 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_instance_init (DafCoreTestTypeConverterTest * self)
{
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self->priv = DAF_CORE_TEST_TYPECONVERTER_TEST_GET_PRIVATE (self);
#line 433 "TypeConverterTest.c"
}


static void
daf_core_test_typeconverter_test_finalize (GObject * obj)
{
	DafCoreTestTypeConverterTest * self;
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, DAF_CORE_TEST_TYPE_TYPECONVERTER_TEST, DafCoreTestTypeConverterTest);
#line 32 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	_g_object_unref0 (self->priv->person);
#line 30 "/home/ilap/Projects/DaF/Demos/SelectionInListDemo/subprojects/dafcore/test/TypeConverterTest.vala"
	G_OBJECT_CLASS (daf_core_test_typeconverter_test_parent_class)->finalize (obj);
#line 447 "TypeConverterTest.c"
}


/**
     * Using Decorator Pattern for convert Values
     */
GType
daf_core_test_typeconverter_test_get_type (void)
{
	static volatile gsize daf_core_test_typeconverter_test_type_id__volatile = 0;
	if (g_once_init_enter (&daf_core_test_typeconverter_test_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafCoreTestTypeConverterTestClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_core_test_typeconverter_test_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (DafCoreTestTypeConverterTest), 0, (GInstanceInitFunc) daf_core_test_typeconverter_test_instance_init, NULL };
		GType daf_core_test_typeconverter_test_type_id;
		daf_core_test_typeconverter_test_type_id = g_type_register_static (DAF_UNIT_TEST_TYPE_ABSTRACT_TEST_CASE, "DafCoreTestTypeConverterTest", &g_define_type_info, 0);
		g_once_init_leave (&daf_core_test_typeconverter_test_type_id__volatile, daf_core_test_typeconverter_test_type_id);
	}
	return daf_core_test_typeconverter_test_type_id__volatile;
}




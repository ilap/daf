/* AnimationMode.c generated by valac 0.40.10, the Vala compiler
 * generated from AnimationMode.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>


#define DAF_UI_ANIMATION_TYPE_ANIMATION_MODE (daf_ui_animation_animation_mode_get_type ())
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

typedef enum  {
	DAF_UI_ANIMATION_ANIMATION_MODE_LINEAR,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUAD,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUAD,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUAD,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_CUBIC,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_CUBIC,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_CUBIC,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUART,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUART,
	DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUART
} DafUIAnimationAnimationMode;



GType daf_ui_animation_animation_mode_get_type (void) G_GNUC_CONST;
gdouble daf_ui_animation_animation_mode_easing_func (DafUIAnimationAnimationMode self,
                                                     guint64 elapsed,
                                                     guint64 duration);


/**
         * The alpha values computed by the alpha/easing function.
         */
gdouble
daf_ui_animation_animation_mode_easing_func (DafUIAnimationAnimationMode self,
                                             guint64 elapsed,
                                             guint64 duration)
{
	gdouble result = 0.0;
	gdouble _tmp0_;
	gdouble _tmp1_;
	gdouble p = 0.0;
#line 55 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
	_tmp0_ = (gdouble) (elapsed / duration);
#line 55 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
	_tmp1_ = (gdouble) (elapsed / duration);
#line 55 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
	_vala_return_val_if_fail (((self == DAF_UI_ANIMATION_ANIMATION_MODE_LINEAR) && ((((gdouble) 0.f) <= _tmp0_) && (_tmp0_ <= ((gdouble) 1.f)))) || ((self != DAF_UI_ANIMATION_ANIMATION_MODE_LINEAR) && ((((gdouble) (-1.f)) <= _tmp1_) && (_tmp1_ <= ((gdouble) 2.f)))), "(this == LINEAR &&                             0f <= (double) (elapsed / duration) <= 1f) ||                             (this != LINEAR &&                             (-1f <= (double) (elapsed / duration) <= 2f))", 0.0);
#line 61 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
	p = (gdouble) (((gdouble) elapsed) / ((gdouble) duration));
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
	switch (self) {
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_LINEAR:
#line 64 "AnimationMode.c"
		{
#line 67 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 68 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUAD:
#line 72 "AnimationMode.c"
		{
			gdouble _tmp2_;
			gdouble _tmp3_;
#line 71 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp2_ = p;
#line 71 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp3_ = p;
#line 71 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = _tmp2_ * _tmp3_;
#line 72 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 84 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUAD:
#line 88 "AnimationMode.c"
		{
			gdouble _tmp4_;
			gdouble _tmp5_;
#line 75 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp4_ = p;
#line 75 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp5_ = p;
#line 75 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = ((-1.f) * _tmp4_) * (_tmp5_ - 2.f);
#line 76 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 100 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUAD:
#line 104 "AnimationMode.c"
		{
			gdouble _tmp6_;
			gdouble _tmp7_;
#line 79 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp6_ = p;
#line 79 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = _tmp6_ * 2;
#line 81 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp7_ = p;
#line 81 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			if (_tmp7_ < ((gdouble) 1.f)) {
#line 116 "AnimationMode.c"
				gdouble _tmp8_;
				gdouble _tmp9_;
#line 82 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp8_ = p;
#line 82 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp9_ = p;
#line 82 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = (0.5 * _tmp8_) * _tmp9_;
#line 125 "AnimationMode.c"
			} else {
				gdouble _tmp10_;
				gdouble _tmp11_;
				gdouble _tmp12_;
#line 84 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp10_ = p;
#line 84 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = _tmp10_ - 1.f;
#line 85 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp11_ = p;
#line 85 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp12_ = p;
#line 85 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = (-0.5) * ((_tmp11_ * (_tmp12_ - 2.f)) - 1.f);
#line 140 "AnimationMode.c"
			}
#line 87 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 144 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_CUBIC:
#line 148 "AnimationMode.c"
		{
			gdouble _tmp13_;
			gdouble _tmp14_;
			gdouble _tmp15_;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp13_ = p;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp14_ = p;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp15_ = p;
#line 91 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = (_tmp13_ * _tmp14_) * _tmp15_;
#line 92 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 163 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_CUBIC:
#line 167 "AnimationMode.c"
		{
			gdouble _tmp16_;
			gdouble _tmp17_;
			gdouble _tmp18_;
			gdouble _tmp19_;
#line 95 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp16_ = p;
#line 95 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = _tmp16_ - 1.f;
#line 96 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp17_ = p;
#line 96 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp18_ = p;
#line 96 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp19_ = p;
#line 96 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = ((_tmp17_ * _tmp18_) * _tmp19_) + 1.f;
#line 97 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 187 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_CUBIC:
#line 191 "AnimationMode.c"
		{
			gdouble _tmp20_;
			gdouble _tmp21_;
#line 100 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp20_ = p;
#line 100 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = _tmp20_ * 2.f;
#line 102 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp21_ = p;
#line 102 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			if (_tmp21_ < ((gdouble) 1.f)) {
#line 203 "AnimationMode.c"
				gdouble _tmp22_;
				gdouble _tmp23_;
#line 103 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp22_ = p;
#line 103 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp23_ = p;
#line 103 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = (0.5 * _tmp22_) * _tmp23_;
#line 212 "AnimationMode.c"
			} else {
				gdouble _tmp24_;
				gdouble _tmp25_;
				gdouble _tmp26_;
				gdouble _tmp27_;
#line 105 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp24_ = p;
#line 105 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = _tmp24_ - 2.f;
#line 106 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp25_ = p;
#line 106 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp26_ = p;
#line 106 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp27_ = p;
#line 106 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = 0.5 * (((_tmp25_ * _tmp26_) * _tmp27_) + 1.f);
#line 230 "AnimationMode.c"
			}
#line 108 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 234 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUART:
#line 238 "AnimationMode.c"
		{
			gdouble _tmp28_;
			gdouble _tmp29_;
			gdouble _tmp30_;
			gdouble _tmp31_;
#line 112 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp28_ = p;
#line 112 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp29_ = p;
#line 112 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp30_ = p;
#line 112 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp31_ = p;
#line 112 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = ((_tmp28_ * _tmp29_) * _tmp30_) * _tmp31_;
#line 113 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 256 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUART:
#line 260 "AnimationMode.c"
		{
			gdouble _tmp32_;
			gdouble _tmp33_;
			gdouble _tmp34_;
			gdouble _tmp35_;
			gdouble _tmp36_;
#line 116 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp32_ = p;
#line 116 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = _tmp32_ - 1.f;
#line 117 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp33_ = p;
#line 117 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp34_ = p;
#line 117 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp35_ = p;
#line 117 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp36_ = p;
#line 117 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = (-1.f) - ((((_tmp33_ * _tmp34_) * _tmp35_) * _tmp36_) - 1.f);
#line 118 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 283 "AnimationMode.c"
		}
#line 63 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
		case DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUART:
#line 287 "AnimationMode.c"
		{
			gdouble _tmp37_;
			gdouble _tmp38_;
#line 121 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp37_ = p;
#line 121 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			p = _tmp37_ * 2.f;
#line 123 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			_tmp38_ = p;
#line 123 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			if (_tmp38_ < ((gdouble) 1.f)) {
#line 299 "AnimationMode.c"
				gdouble _tmp39_;
				gdouble _tmp40_;
				gdouble _tmp41_;
				gdouble _tmp42_;
#line 124 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp39_ = p;
#line 124 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp40_ = p;
#line 124 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp41_ = p;
#line 124 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp42_ = p;
#line 124 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = (((0.5 * _tmp39_) * _tmp40_) * _tmp41_) * _tmp42_;
#line 314 "AnimationMode.c"
			} else {
				gdouble _tmp43_;
				gdouble _tmp44_;
				gdouble _tmp45_;
				gdouble _tmp46_;
				gdouble _tmp47_;
#line 126 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp43_ = p;
#line 126 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = _tmp43_ - 2.f;
#line 127 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp44_ = p;
#line 127 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp45_ = p;
#line 127 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp46_ = p;
#line 127 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				_tmp47_ = p;
#line 127 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
				p = (-0.5) * ((((_tmp44_ * _tmp45_) * _tmp46_) * _tmp47_) - 2);
#line 335 "AnimationMode.c"
			}
#line 129 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			break;
#line 339 "AnimationMode.c"
		}
		default:
		{
#line 133 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
			g_assert_not_reached ();
#line 345 "AnimationMode.c"
		}
	}
#line 135 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
	result = p;
#line 135 "/data/Projects/DaF/Demos/AnimationDemo/subprojects/dafui/lib/Animation/AnimationMode.vala"
	return result;
#line 352 "AnimationMode.c"
}


/**
     * The animation modes used by TimeLine and Animator.
     *
     * The following of animation types (easing equation, transition types)
     * have been adopted from Clutter.
     *
     * Check the following for further information:
     * @link http://www.robertpenner.com/easing/penner_chapter7_tweening.pdf
     */
GType
daf_ui_animation_animation_mode_get_type (void)
{
	static volatile gsize daf_ui_animation_animation_mode_type_id__volatile = 0;
	if (g_once_init_enter (&daf_ui_animation_animation_mode_type_id__volatile)) {
		static const GEnumValue values[] = {{DAF_UI_ANIMATION_ANIMATION_MODE_LINEAR, "DAF_UI_ANIMATION_ANIMATION_MODE_LINEAR", "linear"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUAD, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUAD", "ease-in-quad"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUAD, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUAD", "ease-out-quad"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUAD, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUAD", "ease-in-out-quad"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_CUBIC, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_CUBIC", "ease-in-cubic"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_CUBIC, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_CUBIC", "ease-out-cubic"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_CUBIC, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_CUBIC", "ease-in-out-cubic"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUART, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_QUART", "ease-in-quart"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUART, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_OUT_QUART", "ease-out-quart"}, {DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUART, "DAF_UI_ANIMATION_ANIMATION_MODE_EASE_IN_OUT_QUART", "ease-in-out-quart"}, {0, NULL, NULL}};
		GType daf_ui_animation_animation_mode_type_id;
		daf_ui_animation_animation_mode_type_id = g_enum_register_static ("DafUIAnimationAnimationMode", values);
		g_once_init_leave (&daf_ui_animation_animation_mode_type_id__volatile, daf_ui_animation_animation_mode_type_id);
	}
	return daf_ui_animation_animation_mode_type_id__volatile;
}




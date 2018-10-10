/* IAnimatable.c generated by valac 0.40.10, the Vala compiler
 * generated from IAnimatable.vala, do not modify */



#include <glib.h>
#include <glib-object.h>


#define DAF_UI_ANIMATION_TYPE_IANIMATABLE (daf_ui_animation_ianimatable_get_type ())
#define DAF_UI_ANIMATION_IANIMATABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), DAF_UI_ANIMATION_TYPE_IANIMATABLE, DafUIAnimationIAnimatable))
#define DAF_UI_ANIMATION_IS_IANIMATABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), DAF_UI_ANIMATION_TYPE_IANIMATABLE))
#define DAF_UI_ANIMATION_IANIMATABLE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), DAF_UI_ANIMATION_TYPE_IANIMATABLE, DafUIAnimationIAnimatableIface))

typedef struct _DafUIAnimationIAnimatable DafUIAnimationIAnimatable;
typedef struct _DafUIAnimationIAnimatableIface DafUIAnimationIAnimatableIface;

struct _DafUIAnimationIAnimatableIface {
	GTypeInterface parent_iface;
	void (*stop) (DafUIAnimationIAnimatable* self);
	void (*start) (DafUIAnimationIAnimatable* self);
};



GType daf_ui_animation_ianimatable_get_type (void) G_GNUC_CONST;
void daf_ui_animation_ianimatable_stop (DafUIAnimationIAnimatable* self);
void daf_ui_animation_ianimatable_start (DafUIAnimationIAnimatable* self);


void
daf_ui_animation_ianimatable_stop (DafUIAnimationIAnimatable* self)
{
#line 24 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Animation/IAnimatable.vala"
	g_return_if_fail (self != NULL);
#line 24 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Animation/IAnimatable.vala"
	DAF_UI_ANIMATION_IANIMATABLE_GET_INTERFACE (self)->stop (self);
#line 39 "IAnimatable.c"
}


void
daf_ui_animation_ianimatable_start (DafUIAnimationIAnimatable* self)
{
#line 25 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Animation/IAnimatable.vala"
	g_return_if_fail (self != NULL);
#line 25 "/home/ilap/Projects/daf/Demos/AnimationDemo/subprojects/dafui/lib/Animation/IAnimatable.vala"
	DAF_UI_ANIMATION_IANIMATABLE_GET_INTERFACE (self)->start (self);
#line 50 "IAnimatable.c"
}


static void
daf_ui_animation_ianimatable_default_init (DafUIAnimationIAnimatableIface * iface)
{
}


GType
daf_ui_animation_ianimatable_get_type (void)
{
	static volatile gsize daf_ui_animation_ianimatable_type_id__volatile = 0;
	if (g_once_init_enter (&daf_ui_animation_ianimatable_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (DafUIAnimationIAnimatableIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) daf_ui_animation_ianimatable_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType daf_ui_animation_ianimatable_type_id;
		daf_ui_animation_ianimatable_type_id = g_type_register_static (G_TYPE_INTERFACE, "DafUIAnimationIAnimatable", &g_define_type_info, 0);
		g_once_init_leave (&daf_ui_animation_ianimatable_type_id__volatile, daf_ui_animation_ianimatable_type_id);
	}
	return daf_ui_animation_ianimatable_type_id__volatile;
}



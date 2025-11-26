#ifndef _com_sun_java_swing_plaf_motif_MotifBorders$ToggleButtonBorder_h_
#define _com_sun_java_swing_plaf_motif_MotifBorders$ToggleButtonBorder_h_
//$ class com.sun.java.swing.plaf.motif.MotifBorders$ToggleButtonBorder
//$ extends com.sun.java.swing.plaf.motif.MotifBorders$ButtonBorder

#include <com/sun/java/swing/plaf/motif/MotifBorders$ButtonBorder.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifBorders$ToggleButtonBorder : public ::com::sun::java::swing::plaf::motif::MotifBorders$ButtonBorder {
	$class(MotifBorders$ToggleButtonBorder, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifBorders$ButtonBorder)
public:
	MotifBorders$ToggleButtonBorder();
	using ::com::sun::java::swing::plaf::motif::MotifBorders$ButtonBorder::getBorderInsets;
	void init$(::java::awt::Color* shadow, ::java::awt::Color* highlight, ::java::awt::Color* darkShadow, ::java::awt::Color* focus);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifBorders$ToggleButtonBorder_h_
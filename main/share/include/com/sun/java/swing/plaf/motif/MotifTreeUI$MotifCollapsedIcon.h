#ifndef _com_sun_java_swing_plaf_motif_MotifTreeUI$MotifCollapsedIcon_h_
#define _com_sun_java_swing_plaf_motif_MotifTreeUI$MotifCollapsedIcon_h_
//$ class com.sun.java.swing.plaf.motif.MotifTreeUI$MotifCollapsedIcon
//$ extends com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon

#include <com/sun/java/swing/plaf/motif/MotifTreeUI$MotifExpandedIcon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifTreeUI$MotifCollapsedIcon : public ::com::sun::java::swing::plaf::motif::MotifTreeUI$MotifExpandedIcon {
	$class(MotifTreeUI$MotifCollapsedIcon, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifTreeUI$MotifExpandedIcon)
public:
	MotifTreeUI$MotifCollapsedIcon();
	void init$();
	static ::javax::swing::Icon* createCollapsedIcon();
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifTreeUI$MotifCollapsedIcon_h_
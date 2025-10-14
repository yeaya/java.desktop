#ifndef _com_sun_java_swing_plaf_motif_MotifPopupMenuSeparatorUI_h_
#define _com_sun_java_swing_plaf_motif_MotifPopupMenuSeparatorUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifPopupMenuSeparatorUI
//$ extends com.sun.java.swing.plaf.motif.MotifSeparatorUI

#include <com/sun/java/swing/plaf/motif/MotifSeparatorUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $import MotifPopupMenuSeparatorUI : public ::com::sun::java::swing::plaf::motif::MotifSeparatorUI {
	$class(MotifPopupMenuSeparatorUI, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::motif::MotifSeparatorUI)
public:
	MotifPopupMenuSeparatorUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifPopupMenuSeparatorUI_h_
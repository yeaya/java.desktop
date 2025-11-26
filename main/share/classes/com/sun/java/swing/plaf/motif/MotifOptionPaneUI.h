#ifndef _com_sun_java_swing_plaf_motif_MotifOptionPaneUI_h_
#define _com_sun_java_swing_plaf_motif_MotifOptionPaneUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifOptionPaneUI
//$ extends javax.swing.plaf.basic.BasicOptionPaneUI

#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>

namespace java {
	namespace awt {
		class Container;
		class Dimension;
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

class $export MotifOptionPaneUI : public ::javax::swing::plaf::basic::BasicOptionPaneUI {
	$class(MotifOptionPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicOptionPaneUI)
public:
	MotifOptionPaneUI();
	void init$();
	virtual void addIcon(::java::awt::Container* top) override;
	virtual ::java::awt::Container* createButtonArea() override;
	virtual ::java::awt::Container* createSeparator() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual ::java::awt::Dimension* getMinimumOptionPaneSize() override;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifOptionPaneUI_h_
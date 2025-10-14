#ifndef _com_sun_java_swing_plaf_motif_MotifScrollPaneUI_h_
#define _com_sun_java_swing_plaf_motif_MotifScrollPaneUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifScrollPaneUI
//$ extends javax.swing.plaf.basic.BasicScrollPaneUI

#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>

namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JScrollPane;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
			class CompoundBorder;
		}
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

class $import MotifScrollPaneUI : public ::javax::swing::plaf::basic::BasicScrollPaneUI {
	$class(MotifScrollPaneUI, 0, ::javax::swing::plaf::basic::BasicScrollPaneUI)
public:
	MotifScrollPaneUI();
	void init$();
	::java::beans::PropertyChangeListener* createPropertyChangeHandler();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void installDefaults(::javax::swing::JScrollPane* scrollpane) override;
	virtual void installListeners(::javax::swing::JScrollPane* scrollPane) override;
	virtual void uninstallDefaults(::javax::swing::JScrollPane* c) override;
	virtual void uninstallListeners(::javax::swing::JComponent* scrollPane) override;
	static ::javax::swing::border::Border* vsbMarginBorderR;
	static ::javax::swing::border::Border* vsbMarginBorderL;
	static ::javax::swing::border::Border* hsbMarginBorder;
	::javax::swing::border::CompoundBorder* vsbBorder = nullptr;
	::javax::swing::border::CompoundBorder* hsbBorder = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeHandler = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifScrollPaneUI_h_
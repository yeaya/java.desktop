#ifndef _javax_swing_plaf_metal_MetalScrollPaneUI_h_
#define _javax_swing_plaf_metal_MetalScrollPaneUI_h_
//$ class javax.swing.plaf.metal.MetalScrollPaneUI
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
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalScrollPaneUI : public ::javax::swing::plaf::basic::BasicScrollPaneUI {
	$class(MetalScrollPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicScrollPaneUI)
public:
	MetalScrollPaneUI();
	void init$();
	virtual ::java::beans::PropertyChangeListener* createScrollBarSwapListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* x);
	virtual void installListeners(::javax::swing::JScrollPane* scrollPane) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void uninstallListeners(::javax::swing::JComponent* c) override;
	virtual void uninstallListeners(::javax::swing::JScrollPane* scrollPane);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateScrollbarsFreeStanding();
	::java::beans::PropertyChangeListener* scrollBarSwapListener = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalScrollPaneUI_h_
#ifndef _javax_swing_plaf_basic_BasicDesktopIconUI_h_
#define _javax_swing_plaf_basic_BasicDesktopIconUI_h_
//$ class javax.swing.plaf.basic.BasicDesktopIconUI
//$ extends javax.swing.plaf.DesktopIconUI

#include <javax/swing/plaf/DesktopIconUI.h>

namespace java {
	namespace awt {
		class Dimension;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JInternalFrame;
		class JInternalFrame$JDesktopIcon;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class MouseInputListener;
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicDesktopIconUI : public ::javax::swing::plaf::DesktopIconUI {
	$class(BasicDesktopIconUI, $NO_CLASS_INIT, ::javax::swing::plaf::DesktopIconUI)
public:
	BasicDesktopIconUI();
	void init$();
	virtual ::javax::swing::event::MouseInputListener* createMouseInputListener();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void deiconize();
	virtual ::java::awt::Insets* getInsets(::javax::swing::JComponent* c);
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installComponents();
	virtual void installDefaults();
	virtual void installListeners();
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void uninstallComponents();
	virtual void uninstallDefaults();
	virtual void uninstallListeners();
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::javax::swing::JInternalFrame$JDesktopIcon* desktopIcon = nullptr;
	::javax::swing::JInternalFrame* frame = nullptr;
	::javax::swing::JComponent* iconPane = nullptr;
	::javax::swing::event::MouseInputListener* mouseInputListener = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicDesktopIconUI_h_
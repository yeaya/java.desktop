#ifndef _javax_swing_plaf_basic_BasicViewportUI_h_
#define _javax_swing_plaf_basic_BasicViewportUI_h_
//$ class javax.swing.plaf.basic.BasicViewportUI
//$ extends javax.swing.plaf.ViewportUI

#include <javax/swing/plaf/ViewportUI.h>

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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicViewportUI : public ::javax::swing::plaf::ViewportUI {
	$class(BasicViewportUI, $NO_CLASS_INIT, ::javax::swing::plaf::ViewportUI)
public:
	BasicViewportUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installDefaults(::javax::swing::JComponent* c);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void uninstallDefaults(::javax::swing::JComponent* c);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::ViewportUI* viewportUI;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicViewportUI_h_
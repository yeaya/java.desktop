#ifndef _javax_swing_plaf_basic_BasicPanelUI_h_
#define _javax_swing_plaf_basic_BasicPanelUI_h_
//$ class javax.swing.plaf.basic.BasicPanelUI
//$ extends javax.swing.plaf.PanelUI

#include <javax/swing/plaf/PanelUI.h>

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JPanel;
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

class $import BasicPanelUI : public ::javax::swing::plaf::PanelUI {
	$class(BasicPanelUI, $NO_CLASS_INIT, ::javax::swing::plaf::PanelUI)
public:
	BasicPanelUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual int32_t getBaseline(::javax::swing::JComponent* c, int32_t width, int32_t height) override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior(::javax::swing::JComponent* c) override;
	virtual void installDefaults(::javax::swing::JPanel* p);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void uninstallDefaults(::javax::swing::JPanel* p);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	static ::javax::swing::plaf::PanelUI* panelUI;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicPanelUI_h_
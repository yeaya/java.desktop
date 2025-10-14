#ifndef _javax_swing_plaf_basic_BasicCheckBoxMenuItemUI_h_
#define _javax_swing_plaf_basic_BasicCheckBoxMenuItemUI_h_
//$ class javax.swing.plaf.basic.BasicCheckBoxMenuItemUI
//$ extends javax.swing.plaf.basic.BasicMenuItemUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JMenuItem;
		class MenuElement;
		class MenuSelectionManager;
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

class $export BasicCheckBoxMenuItemUI : public ::javax::swing::plaf::basic::BasicMenuItemUI {
	$class(BasicCheckBoxMenuItemUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicMenuItemUI)
public:
	BasicCheckBoxMenuItemUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	virtual void processMouseEvent(::javax::swing::JMenuItem* item, ::java::awt::event::MouseEvent* e, $Array<::javax::swing::MenuElement>* path, ::javax::swing::MenuSelectionManager* manager);
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicCheckBoxMenuItemUI_h_
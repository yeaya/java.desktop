#ifndef _javax_swing_plaf_basic_BasicTextPaneUI_h_
#define _javax_swing_plaf_basic_BasicTextPaneUI_h_
//$ class javax.swing.plaf.basic.BasicTextPaneUI
//$ extends javax.swing.plaf.basic.BasicEditorPaneUI

#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
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

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicTextPaneUI : public ::javax::swing::plaf::basic::BasicEditorPaneUI {
	$class(BasicTextPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicEditorPaneUI)
public:
	BasicTextPaneUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual $String* getPropertyPrefix() override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicTextPaneUI_h_
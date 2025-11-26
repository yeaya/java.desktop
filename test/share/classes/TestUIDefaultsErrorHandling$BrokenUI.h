#ifndef _TestUIDefaultsErrorHandling$BrokenUI_h_
#define _TestUIDefaultsErrorHandling$BrokenUI_h_
//$ class TestUIDefaultsErrorHandling$BrokenUI
//$ extends javax.swing.plaf.basic.BasicLabelUI

#include <javax/swing/plaf/basic/BasicLabelUI.h>

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

class $export TestUIDefaultsErrorHandling$BrokenUI : public ::javax::swing::plaf::basic::BasicLabelUI {
	$class(TestUIDefaultsErrorHandling$BrokenUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicLabelUI)
public:
	TestUIDefaultsErrorHandling$BrokenUI();
	void init$();
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* target);
};

#endif // _TestUIDefaultsErrorHandling$BrokenUI_h_
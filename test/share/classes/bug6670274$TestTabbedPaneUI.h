#ifndef _bug6670274$TestTabbedPaneUI_h_
#define _bug6670274$TestTabbedPaneUI_h_
//$ class bug6670274$TestTabbedPaneUI
//$ extends javax.swing.plaf.basic.BasicTabbedPaneUI

#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>

namespace javax {
	namespace swing {
		class JTabbedPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class View;
		}
	}
}

class $export bug6670274$TestTabbedPaneUI : public ::javax::swing::plaf::basic::BasicTabbedPaneUI {
	$class(bug6670274$TestTabbedPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTabbedPaneUI)
public:
	bug6670274$TestTabbedPaneUI();
	void init$();
	virtual ::javax::swing::JTabbedPane* getTabbedPane();
	virtual ::javax::swing::text::View* getTextViewForTab(int32_t tabIndex) override;
};

#endif // _bug6670274$TestTabbedPaneUI_h_
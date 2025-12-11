#ifndef _com_apple_laf_AquaEditorPaneUI_h_
#define _com_apple_laf_AquaEditorPaneUI_h_
//$ class com.apple.laf.AquaEditorPaneUI
//$ extends javax.swing.plaf.basic.BasicEditorPaneUI

#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>

namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
		}
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
		namespace text {
			class Caret;
			class Highlighter;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaEditorPaneUI : public ::javax::swing::plaf::basic::BasicEditorPaneUI {
	$class(AquaEditorPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicEditorPaneUI)
public:
	AquaEditorPaneUI();
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	virtual ::java::awt::event::FocusListener* createFocusListener();
	virtual ::javax::swing::text::Highlighter* createHighlighter() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installDefaults() override;
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	bool oldDragState = false;
	::java::awt::event::FocusListener* focusListener = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaEditorPaneUI_h_
#ifndef _com_apple_laf_AquaTextPaneUI_h_
#define _com_apple_laf_AquaTextPaneUI_h_
//$ class com.apple.laf.AquaTextPaneUI
//$ extends javax.swing.plaf.basic.BasicTextPaneUI

#include <javax/swing/plaf/basic/BasicTextPaneUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFocusHandler;
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

class AquaTextPaneUI : public ::javax::swing::plaf::basic::BasicTextPaneUI {
	$class(AquaTextPaneUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextPaneUI)
public:
	AquaTextPaneUI();
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	virtual ::javax::swing::text::Highlighter* createHighlighter() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void installDefaults() override;
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	::com::apple::laf::AquaFocusHandler* handler = nullptr;
	bool oldDragState = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextPaneUI_h_
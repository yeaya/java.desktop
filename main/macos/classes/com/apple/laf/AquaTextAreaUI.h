#ifndef _com_apple_laf_AquaTextAreaUI_h_
#define _com_apple_laf_AquaTextAreaUI_h_
//$ class com.apple.laf.AquaTextAreaUI
//$ extends javax.swing.plaf.basic.BasicTextAreaUI

#include <javax/swing/plaf/basic/BasicTextAreaUI.h>

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

class AquaTextAreaUI : public ::javax::swing::plaf::basic::BasicTextAreaUI {
	$class(AquaTextAreaUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextAreaUI)
public:
	AquaTextAreaUI();
	using ::javax::swing::plaf::basic::BasicTextAreaUI::create;
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

#endif // _com_apple_laf_AquaTextAreaUI_h_
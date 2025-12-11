#ifndef _com_apple_laf_AquaTextFieldUI_h_
#define _com_apple_laf_AquaTextFieldUI_h_
//$ class com.apple.laf.AquaTextFieldUI
//$ extends javax.swing.plaf.basic.BasicTextFieldUI

#include <javax/swing/plaf/basic/BasicTextFieldUI.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFocusHandler;
			class AquaUtils$JComponentPainter;
		}
	}
}
namespace java {
	namespace awt {
		class Graphics;
		class Rectangle;
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

class AquaTextFieldUI : public ::javax::swing::plaf::basic::BasicTextFieldUI {
	$class(AquaTextFieldUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTextFieldUI)
public:
	AquaTextFieldUI();
	using ::javax::swing::plaf::basic::BasicTextFieldUI::create;
	void init$();
	virtual ::javax::swing::text::Caret* createCaret() override;
	virtual ::javax::swing::text::Highlighter* createHighlighter() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual ::java::awt::Rectangle* getVisibleEditorRect() override;
	virtual void installDefaults() override;
	virtual void installKeyboardActions() override;
	virtual void installListeners() override;
	virtual void paintBackground(::java::awt::Graphics* g) override;
	virtual void paintBackgroundSafely(::java::awt::Graphics* g);
	virtual void paintSafely(::java::awt::Graphics* g) override;
	virtual void setPaintingDelegate(::com::apple::laf::AquaUtils$JComponentPainter* delegate);
	virtual void uninstallDefaults() override;
	virtual void uninstallListeners() override;
	::com::apple::laf::AquaUtils$JComponentPainter* delegate = nullptr;
	::com::apple::laf::AquaFocusHandler* handler = nullptr;
	bool oldDragState = false;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldUI_h_
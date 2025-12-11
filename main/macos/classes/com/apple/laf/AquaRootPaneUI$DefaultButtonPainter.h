#ifndef _com_apple_laf_AquaRootPaneUI$DefaultButtonPainter_h_
#define _com_apple_laf_AquaRootPaneUI$DefaultButtonPainter_h_
//$ class com.apple.laf.AquaRootPaneUI$DefaultButtonPainter
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaRootPaneUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaRootPaneUI$DefaultButtonPainter : public ::java::awt::event::ActionListener {
	$class(AquaRootPaneUI$DefaultButtonPainter, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	AquaRootPaneUI$DefaultButtonPainter();
	void init$(::com::apple::laf::AquaRootPaneUI* this$0, ::javax::swing::JRootPane* root);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::com::apple::laf::AquaRootPaneUI* this$0 = nullptr;
	::javax::swing::JRootPane* root = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaRootPaneUI$DefaultButtonPainter_h_
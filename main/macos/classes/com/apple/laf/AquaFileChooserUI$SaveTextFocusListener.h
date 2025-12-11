#ifndef _com_apple_laf_AquaFileChooserUI$SaveTextFocusListener_h_
#define _com_apple_laf_AquaFileChooserUI$SaveTextFocusListener_h_
//$ class com.apple.laf.AquaFileChooserUI$SaveTextFocusListener
//$ extends java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$SaveTextFocusListener : public ::java::awt::event::FocusListener {
	$class(AquaFileChooserUI$SaveTextFocusListener, $NO_CLASS_INIT, ::java::awt::event::FocusListener)
public:
	AquaFileChooserUI$SaveTextFocusListener();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$SaveTextFocusListener_h_
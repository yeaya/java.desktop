#ifndef _com_apple_laf_AquaTextFieldSearch$4_h_
#define _com_apple_laf_AquaTextFieldSearch$4_h_
//$ class com.apple.laf.AquaTextFieldSearch$4
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaIcon$DynamicallySizingJRSUIIcon;
		}
	}
}
namespace javax {
	namespace swing {
		class JButton;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch$4 : public ::javax::swing::event::ChangeListener {
	$class(AquaTextFieldSearch$4, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	AquaTextFieldSearch$4();
	void init$(::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon* val$icon, ::javax::swing::JButton* val$b);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::javax::swing::JButton* val$b = nullptr;
	::com::apple::laf::AquaIcon$DynamicallySizingJRSUIIcon* val$icon = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$4_h_
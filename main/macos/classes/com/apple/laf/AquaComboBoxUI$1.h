#ifndef _com_apple_laf_AquaComboBoxUI$1_h_
#define _com_apple_laf_AquaComboBoxUI$1_h_
//$ class com.apple.laf.AquaComboBoxUI$1
//$ extends java.awt.event.ItemListener

#include <java/awt/event/ItemListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$1 : public ::java::awt::event::ItemListener {
	$class(AquaComboBoxUI$1, $NO_CLASS_INIT, ::java::awt::event::ItemListener)
public:
	AquaComboBoxUI$1();
	void init$(::com::apple::laf::AquaComboBoxUI* this$0);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	::com::apple::laf::AquaComboBoxUI* this$0 = nullptr;
	int64_t lastBlink = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$1_h_
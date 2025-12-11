#ifndef _com_apple_laf_AquaTabbedPaneUI$MouseHandler$3_h_
#define _com_apple_laf_AquaTabbedPaneUI$MouseHandler$3_h_
//$ class com.apple.laf.AquaTabbedPaneUI$MouseHandler$3
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTabbedPaneUI$MouseHandler;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaTabbedPaneUI$MouseHandler$3 : public ::java::awt::event::ActionListener {
	$class(AquaTabbedPaneUI$MouseHandler$3, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	AquaTabbedPaneUI$MouseHandler$3();
	void init$(::com::apple::laf::AquaTabbedPaneUI$MouseHandler* this$1, int32_t val$fOffset);
	virtual void actionPerformed(::java::awt::event::ActionEvent* ae) override;
	::com::apple::laf::AquaTabbedPaneUI$MouseHandler* this$1 = nullptr;
	int32_t val$fOffset = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTabbedPaneUI$MouseHandler$3_h_
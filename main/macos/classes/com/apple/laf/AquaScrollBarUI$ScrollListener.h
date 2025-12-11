#ifndef _com_apple_laf_AquaScrollBarUI$ScrollListener_h_
#define _com_apple_laf_AquaScrollBarUI$ScrollListener_h_
//$ class com.apple.laf.AquaScrollBarUI$ScrollListener
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaScrollBarUI;
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

class AquaScrollBarUI$ScrollListener : public ::java::awt::event::ActionListener {
	$class(AquaScrollBarUI$ScrollListener, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	AquaScrollBarUI$ScrollListener();
	void init$(::com::apple::laf::AquaScrollBarUI* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void setDirection(int32_t direction);
	virtual void setScrollByBlock(bool block);
	::com::apple::laf::AquaScrollBarUI* this$0 = nullptr;
	bool fUseBlockIncrement = false;
	int32_t fDirection = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaScrollBarUI$ScrollListener_h_
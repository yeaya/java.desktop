#ifndef _com_apple_laf_AquaFileChooserUI$DoubleClickListener_h_
#define _com_apple_laf_AquaFileChooserUI$DoubleClickListener_h_
//$ class com.apple.laf.AquaFileChooserUI$DoubleClickListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI;
			class AquaFileChooserUI$JTableExtension;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$DoubleClickListener : public ::java::awt::event::MouseAdapter {
	$class(AquaFileChooserUI$DoubleClickListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	AquaFileChooserUI$DoubleClickListener();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0, ::com::apple::laf::AquaFileChooserUI$JTableExtension* list);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
	::com::apple::laf::AquaFileChooserUI$JTableExtension* list = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$DoubleClickListener_h_
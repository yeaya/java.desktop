#ifndef _com_apple_laf_AquaFileChooserUI$FileListMouseListener_h_
#define _com_apple_laf_AquaFileChooserUI$FileListMouseListener_h_
//$ class com.apple.laf.AquaFileChooserUI$FileListMouseListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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
			class MouseEvent;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI$FileListMouseListener : public ::java::awt::event::MouseAdapter {
	$class(AquaFileChooserUI$FileListMouseListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	AquaFileChooserUI$FileListMouseListener();
	void init$(::com::apple::laf::AquaFileChooserUI* this$0);
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	::com::apple::laf::AquaFileChooserUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFileChooserUI$FileListMouseListener_h_
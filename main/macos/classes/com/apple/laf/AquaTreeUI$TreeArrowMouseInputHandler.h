#ifndef _com_apple_laf_AquaTreeUI$TreeArrowMouseInputHandler_h_
#define _com_apple_laf_AquaTreeUI$TreeArrowMouseInputHandler_h_
//$ class com.apple.laf.AquaTreeUI$TreeArrowMouseInputHandler
//$ extends javax.swing.event.MouseInputAdapter

#include <javax/swing/event/MouseInputAdapter.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTreeUI;
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Insets;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace tree {
			class TreePath;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTreeUI$TreeArrowMouseInputHandler : public ::javax::swing::event::MouseInputAdapter {
	$class(AquaTreeUI$TreeArrowMouseInputHandler, $NO_CLASS_INIT, ::javax::swing::event::MouseInputAdapter)
public:
	AquaTreeUI$TreeArrowMouseInputHandler();
	void init$(::com::apple::laf::AquaTreeUI* this$0, ::javax::swing::tree::TreePath* path);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual void paintAnimation(bool expanding);
	virtual void paintAnimationFrame(int32_t frame);
	virtual void paintOneControl();
	virtual void removeFromSource();
	::com::apple::laf::AquaTreeUI* this$0 = nullptr;
	::java::awt::Rectangle* fPathBounds = nullptr;
	bool fIsLeaf = false;
	bool fIsExpanded = false;
	bool fHasBeenExpanded = false;
	::java::awt::Rectangle* fBounds = nullptr;
	::java::awt::Rectangle* fVisibleRect = nullptr;
	int32_t fTrackingRow = 0;
	::java::awt::Insets* fInsets = nullptr;
	::java::awt::Color* fBackground = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTreeUI$TreeArrowMouseInputHandler_h_
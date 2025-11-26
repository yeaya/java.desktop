#ifndef _javax_swing_plaf_basic_BasicSliderUI$TrackListener_h_
#define _javax_swing_plaf_basic_BasicSliderUI$TrackListener_h_
//$ class javax.swing.plaf.basic.BasicSliderUI$TrackListener
//$ extends javax.swing.event.MouseInputAdapter

#include <javax/swing/event/MouseInputAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicSliderUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicSliderUI$TrackListener : public ::javax::swing::event::MouseInputAdapter {
	$class(BasicSliderUI$TrackListener, $NO_CLASS_INIT, ::javax::swing::event::MouseInputAdapter)
public:
	BasicSliderUI$TrackListener();
	void init$(::javax::swing::plaf::basic::BasicSliderUI* this$0);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual bool shouldScroll(int32_t direction);
	::javax::swing::plaf::basic::BasicSliderUI* this$0 = nullptr;
	int32_t offset = 0;
	int32_t currentMouseX = 0;
	int32_t currentMouseY = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicSliderUI$TrackListener_h_
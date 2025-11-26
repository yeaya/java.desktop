#ifndef _javax_swing_plaf_basic_BasicScrollBarUI$TrackListener_h_
#define _javax_swing_plaf_basic_BasicScrollBarUI$TrackListener_h_
//$ class javax.swing.plaf.basic.BasicScrollBarUI$TrackListener
//$ extends java.awt.event.MouseAdapter

#include <java/awt/event/MouseAdapter.h>

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
				class BasicScrollBarUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicScrollBarUI$TrackListener : public ::java::awt::event::MouseAdapter {
	$class(BasicScrollBarUI$TrackListener, $NO_CLASS_INIT, ::java::awt::event::MouseAdapter)
public:
	BasicScrollBarUI$TrackListener();
	void init$(::javax::swing::plaf::basic::BasicScrollBarUI* this$0);
	int32_t adjustValueIfNecessary(int32_t value);
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	void setValueFrom(::java::awt::event::MouseEvent* e);
	void startScrollTimerIfNecessary();
	::javax::swing::plaf::basic::BasicScrollBarUI* this$0 = nullptr;
	int32_t offset = 0;
	int32_t currentMouseX = 0;
	int32_t currentMouseY = 0;
	int32_t direction = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicScrollBarUI$TrackListener_h_
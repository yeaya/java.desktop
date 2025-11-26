#ifndef _javax_swing_plaf_basic_BasicInternalFrameUI$BorderListener_h_
#define _javax_swing_plaf_basic_BasicInternalFrameUI$BorderListener_h_
//$ class javax.swing.plaf.basic.BasicInternalFrameUI$BorderListener
//$ extends javax.swing.event.MouseInputAdapter
//$ implements javax.swing.SwingConstants

#include <javax/swing/SwingConstants.h>
#include <javax/swing/event/MouseInputAdapter.h>

#pragma push_macro("RESIZE_NONE")
#undef RESIZE_NONE

namespace java {
	namespace awt {
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
		namespace plaf {
			namespace basic {
				class BasicInternalFrameUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicInternalFrameUI$BorderListener : public ::javax::swing::event::MouseInputAdapter, public ::javax::swing::SwingConstants {
	$class(BasicInternalFrameUI$BorderListener, $NO_CLASS_INIT, ::javax::swing::event::MouseInputAdapter, ::javax::swing::SwingConstants)
public:
	BasicInternalFrameUI$BorderListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicInternalFrameUI* this$0);
	virtual void finishMouseReleased();
	virtual void mouseClicked(::java::awt::event::MouseEvent* e) override;
	virtual void mouseDragged(::java::awt::event::MouseEvent* e) override;
	virtual void mouseEntered(::java::awt::event::MouseEvent* e) override;
	virtual void mouseExited(::java::awt::event::MouseEvent* e) override;
	virtual void mouseMoved(::java::awt::event::MouseEvent* e) override;
	virtual void mousePressed(::java::awt::event::MouseEvent* e) override;
	virtual void mouseReleased(::java::awt::event::MouseEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicInternalFrameUI* this$0 = nullptr;
	int32_t _x = 0;
	int32_t _y = 0;
	int32_t __x = 0;
	int32_t __y = 0;
	::java::awt::Rectangle* startingBounds = nullptr;
	int32_t resizeDir = 0;
	static const int32_t RESIZE_NONE = 0;
	bool discardRelease = false;
	int32_t resizeCornerSize = 0;
};

			} // basic
		} // plaf
	} // swing
} // javax

#pragma pop_macro("RESIZE_NONE")

#endif // _javax_swing_plaf_basic_BasicInternalFrameUI$BorderListener_h_
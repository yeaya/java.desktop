#ifndef _javax_swing_plaf_basic_DragRecognitionSupport_h_
#define _javax_swing_plaf_basic_DragRecognitionSupport_h_
//$ class javax.swing.plaf.basic.DragRecognitionSupport
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class DragRecognitionSupport$BeforeDrag;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class DragRecognitionSupport : public ::java::lang::Object {
	$class(DragRecognitionSupport, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DragRecognitionSupport();
	void init$();
	void clearState();
	static ::javax::swing::plaf::basic::DragRecognitionSupport* getDragRecognitionSupport();
	int32_t mapDragOperationFromModifiers(::java::awt::event::MouseEvent* me, ::javax::swing::TransferHandler* th);
	static bool mouseDragged(::java::awt::event::MouseEvent* me, ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag* bd);
	bool mouseDraggedImpl(::java::awt::event::MouseEvent* me, ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag* bd);
	static bool mousePressed(::java::awt::event::MouseEvent* me);
	bool mousePressedImpl(::java::awt::event::MouseEvent* me);
	static ::java::awt::event::MouseEvent* mouseReleased(::java::awt::event::MouseEvent* me);
	::java::awt::event::MouseEvent* mouseReleasedImpl(::java::awt::event::MouseEvent* me);
	int32_t motionThreshold = 0;
	::java::awt::event::MouseEvent* dndArmedEvent = nullptr;
	::javax::swing::JComponent* component = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_DragRecognitionSupport_h_
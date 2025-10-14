#ifndef _javax_swing_plaf_basic_DragRecognitionSupport$BeforeDrag_h_
#define _javax_swing_plaf_basic_DragRecognitionSupport$BeforeDrag_h_
//$ interface javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag
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
		namespace plaf {
			namespace basic {

class $import DragRecognitionSupport$BeforeDrag : public ::java::lang::Object {
	$interface(DragRecognitionSupport$BeforeDrag, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void dragStarting(::java::awt::event::MouseEvent* me) {}
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_DragRecognitionSupport$BeforeDrag_h_
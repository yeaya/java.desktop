#ifndef _java_awt_Frame$AccessibleAWTFrame_h_
#define _java_awt_Frame$AccessibleAWTFrame_h_
//$ class java.awt.Frame$AccessibleAWTFrame
//$ extends java.awt.Window$AccessibleAWTWindow

#include <java/awt/Window$AccessibleAWTWindow.h>

namespace java {
	namespace awt {
		class Frame;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
		class AccessibleStateSet;
	}
}

namespace java {
	namespace awt {

class $import Frame$AccessibleAWTFrame : public ::java::awt::Window$AccessibleAWTWindow {
	$class(Frame$AccessibleAWTFrame, $NO_CLASS_INIT, ::java::awt::Window$AccessibleAWTWindow)
public:
	Frame$AccessibleAWTFrame();
	void init$(::java::awt::Frame* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	::java::awt::Frame* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xAA553CE6A3A0C2D6;
};

	} // awt
} // java

#endif // _java_awt_Frame$AccessibleAWTFrame_h_
#ifndef _java_awt_Canvas$AccessibleAWTCanvas_h_
#define _java_awt_Canvas$AccessibleAWTCanvas_h_
//$ class java.awt.Canvas$AccessibleAWTCanvas
//$ extends java.awt.Component$AccessibleAWTComponent

#include <java/awt/Component$AccessibleAWTComponent.h>

namespace java {
	namespace awt {
		class Canvas;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $import Canvas$AccessibleAWTCanvas : public ::java::awt::Component$AccessibleAWTComponent {
	$class(Canvas$AccessibleAWTCanvas, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent)
public:
	Canvas$AccessibleAWTCanvas();
	void init$(::java::awt::Canvas* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::java::awt::Canvas* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xA836FB5A1F61DF35;
};

	} // awt
} // java

#endif // _java_awt_Canvas$AccessibleAWTCanvas_h_
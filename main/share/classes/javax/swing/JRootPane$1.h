#ifndef _javax_swing_JRootPane$1_h_
#define _javax_swing_JRootPane$1_h_
//$ class javax.swing.JRootPane$1
//$ extends java.awt.BorderLayout

#include <java/awt/BorderLayout.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JRootPane;
	}
}

namespace javax {
	namespace swing {

class JRootPane$1 : public ::java::awt::BorderLayout {
	$class(JRootPane$1, $NO_CLASS_INIT, ::java::awt::BorderLayout)
public:
	JRootPane$1();
	using ::java::awt::BorderLayout::addLayoutComponent;
	void init$(::javax::swing::JRootPane* this$0);
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	::javax::swing::JRootPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JRootPane$1_h_
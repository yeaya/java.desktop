#ifndef _javax_swing_Box$AccessibleBox_h_
#define _javax_swing_Box$AccessibleBox_h_
//$ class javax.swing.Box$AccessibleBox
//$ extends java.awt.Container$AccessibleAWTContainer

#include <java/awt/Container$AccessibleAWTContainer.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class Box;
	}
}

namespace javax {
	namespace swing {

class $export Box$AccessibleBox : public ::java::awt::Container$AccessibleAWTContainer {
	$class(Box$AccessibleBox, $NO_CLASS_INIT, ::java::awt::Container$AccessibleAWTContainer)
public:
	Box$AccessibleBox();
	void init$(::javax::swing::Box* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::Box* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Box$AccessibleBox_h_
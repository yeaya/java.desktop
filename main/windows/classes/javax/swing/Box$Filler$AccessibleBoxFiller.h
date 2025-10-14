#ifndef _javax_swing_Box$Filler$AccessibleBoxFiller_h_
#define _javax_swing_Box$Filler$AccessibleBoxFiller_h_
//$ class javax.swing.Box$Filler$AccessibleBoxFiller
//$ extends java.awt.Component$AccessibleAWTComponent

#include <java/awt/Component$AccessibleAWTComponent.h>

namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}
namespace javax {
	namespace swing {
		class Box$Filler;
	}
}

namespace javax {
	namespace swing {

class $export Box$Filler$AccessibleBoxFiller : public ::java::awt::Component$AccessibleAWTComponent {
	$class(Box$Filler$AccessibleBoxFiller, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent)
public:
	Box$Filler$AccessibleBoxFiller();
	void init$(::javax::swing::Box$Filler* this$0);
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::javax::swing::Box$Filler* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_Box$Filler$AccessibleBoxFiller_h_
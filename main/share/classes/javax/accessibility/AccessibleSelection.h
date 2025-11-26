#ifndef _javax_accessibility_AccessibleSelection_h_
#define _javax_accessibility_AccessibleSelection_h_
//$ interface javax.accessibility.AccessibleSelection
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace javax {
	namespace accessibility {

class $export AccessibleSelection : public ::java::lang::Object {
	$interface(AccessibleSelection, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addAccessibleSelection(int32_t i) {}
	virtual void clearAccessibleSelection() {}
	virtual ::javax::accessibility::Accessible* getAccessibleSelection(int32_t i) {return nullptr;}
	virtual int32_t getAccessibleSelectionCount() {return 0;}
	virtual bool isAccessibleChildSelected(int32_t i) {return false;}
	virtual void removeAccessibleSelection(int32_t i) {}
	virtual void selectAllAccessibleSelection() {}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleSelection_h_
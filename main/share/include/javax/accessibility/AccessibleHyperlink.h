#ifndef _javax_accessibility_AccessibleHyperlink_h_
#define _javax_accessibility_AccessibleHyperlink_h_
//$ class javax.accessibility.AccessibleHyperlink
//$ extends javax.accessibility.AccessibleAction

#include <javax/accessibility/AccessibleAction.h>

namespace javax {
	namespace accessibility {

class $import AccessibleHyperlink : public ::javax::accessibility::AccessibleAction {
	$class(AccessibleHyperlink, $NO_CLASS_INIT, ::javax::accessibility::AccessibleAction)
public:
	AccessibleHyperlink();
	virtual bool doAccessibleAction(int32_t i) override {return false;}
	virtual int32_t getAccessibleActionCount() override {return 0;}
	virtual $String* getAccessibleActionDescription(int32_t i) override {return nullptr;}
	void init$();
	virtual $Object* getAccessibleActionAnchor(int32_t i) {return nullptr;}
	virtual $Object* getAccessibleActionObject(int32_t i) {return nullptr;}
	virtual int32_t getEndIndex() {return 0;}
	virtual int32_t getStartIndex() {return 0;}
	virtual bool isValid() {return false;}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleHyperlink_h_
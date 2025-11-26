#ifndef _javax_swing_GroupLayout$Spring_h_
#define _javax_swing_GroupLayout$Spring_h_
//$ class javax.swing.GroupLayout$Spring
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout;
		class GroupLayout$Alignment;
	}
}

namespace javax {
	namespace swing {

class $import GroupLayout$Spring : public ::java::lang::Object {
	$class(GroupLayout$Spring, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GroupLayout$Spring();
	void init$(::javax::swing::GroupLayout* this$0);
	virtual int32_t calculateMaximumSize(int32_t axis) {return 0;}
	virtual int32_t calculateMinimumSize(int32_t axis) {return 0;}
	virtual int32_t calculatePreferredSize(int32_t axis) {return 0;}
	virtual int32_t constrain(int32_t value);
	virtual ::javax::swing::GroupLayout$Alignment* getAlignment();
	virtual int32_t getBaseline();
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior();
	int32_t getMaximumSize(int32_t axis);
	int32_t getMinimumSize(int32_t axis);
	virtual ::javax::swing::GroupLayout$Spring* getParent();
	int32_t getPreferredSize(int32_t axis);
	virtual int32_t getSize();
	bool isResizable(int32_t axis);
	virtual void setAlignment(::javax::swing::GroupLayout$Alignment* alignment);
	virtual void setParent(::javax::swing::GroupLayout$Spring* parent);
	virtual void setSize(int32_t axis, int32_t origin, int32_t size);
	virtual void unset();
	virtual bool willHaveZeroSize(bool treatAutopaddingAsZeroSized) {return false;}
	::javax::swing::GroupLayout* this$0 = nullptr;
	int32_t size = 0;
	int32_t min = 0;
	int32_t max = 0;
	int32_t pref = 0;
	::javax::swing::GroupLayout$Spring* parent = nullptr;
	::javax::swing::GroupLayout$Alignment* alignment = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$Spring_h_
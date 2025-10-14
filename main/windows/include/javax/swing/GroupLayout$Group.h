#ifndef _javax_swing_GroupLayout$Group_h_
#define _javax_swing_GroupLayout$Group_h_
//$ class javax.swing.GroupLayout$Group
//$ extends javax.swing.GroupLayout$Spring

#include <javax/swing/GroupLayout$Spring.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout;
	}
}

namespace javax {
	namespace swing {

class $import GroupLayout$Group : public ::javax::swing::GroupLayout$Spring {
	$class(GroupLayout$Group, 0, ::javax::swing::GroupLayout$Spring)
public:
	GroupLayout$Group();
	void init$(::javax::swing::GroupLayout* this$0);
	virtual ::javax::swing::GroupLayout$Group* addComponent(::java::awt::Component* component);
	virtual ::javax::swing::GroupLayout$Group* addComponent(::java::awt::Component* component, int32_t min, int32_t pref, int32_t max);
	virtual ::javax::swing::GroupLayout$Group* addGap(int32_t size);
	virtual ::javax::swing::GroupLayout$Group* addGap(int32_t min, int32_t pref, int32_t max);
	virtual ::javax::swing::GroupLayout$Group* addGroup(::javax::swing::GroupLayout$Group* group);
	virtual ::javax::swing::GroupLayout$Group* addSpring(::javax::swing::GroupLayout$Spring* spring);
	virtual void calculateAutopadding(int32_t axis);
	virtual int32_t calculateMaximumSize(int32_t axis) override;
	virtual int32_t calculateMinimumSize(int32_t axis) override;
	virtual int32_t calculatePreferredSize(int32_t axis) override;
	virtual int32_t calculateSize(int32_t axis, int32_t type);
	virtual ::javax::swing::GroupLayout$Spring* getSpring(int32_t index);
	virtual int32_t getSpringSize(::javax::swing::GroupLayout$Spring* spring, int32_t axis, int32_t type);
	virtual int32_t indexOf(::javax::swing::GroupLayout$Spring* spring);
	virtual void insertAutopadding(int32_t axis, ::java::util::List* leadingPadding, ::java::util::List* trailingPadding, ::java::util::List* leading, ::java::util::List* trailing, bool insert) {}
	virtual int32_t operator$(int32_t a, int32_t b) {return 0;}
	virtual void removeAutopadding();
	virtual void setSize(int32_t axis, int32_t origin, int32_t size) override;
	virtual void setValidSize(int32_t axis, int32_t origin, int32_t size) {}
	virtual void unsetAutopadding();
	virtual bool willHaveZeroSize(bool treatAutopaddingAsZeroSized) override;
	::javax::swing::GroupLayout* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::util::List* springs = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$Group_h_
#ifndef _javax_swing_GroupLayout$ComponentSpring_h_
#define _javax_swing_GroupLayout$ComponentSpring_h_
//$ class javax.swing.GroupLayout$ComponentSpring
//$ extends javax.swing.GroupLayout$Spring

#include <javax/swing/GroupLayout$Spring.h>

namespace java {
	namespace awt {
		class Component;
		class Component$BaselineResizeBehavior;
		class Dimension;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$ComponentSpring : public ::javax::swing::GroupLayout$Spring {
	$class(GroupLayout$ComponentSpring, 0, ::javax::swing::GroupLayout$Spring)
public:
	GroupLayout$ComponentSpring();
	void init$(::javax::swing::GroupLayout* this$0, ::java::awt::Component* component, int32_t min, int32_t pref, int32_t max);
	virtual int32_t calculateMaximumSize(int32_t axis) override;
	virtual int32_t calculateMinimumSize(int32_t axis) override;
	int32_t calculateNonlinkedMaximumSize(int32_t axis);
	int32_t calculateNonlinkedMinimumSize(int32_t axis);
	int32_t calculateNonlinkedPreferredSize(int32_t axis);
	virtual int32_t calculatePreferredSize(int32_t axis) override;
	virtual int32_t getBaseline() override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior() override;
	::java::awt::Component* getComponent();
	int32_t getLinkSize(int32_t axis, int32_t type);
	int32_t getOrigin();
	int32_t getSizeAlongAxis(int32_t axis, ::java::awt::Dimension* size);
	void installIfNecessary(int32_t axis);
	bool isLinked(int32_t axis);
	bool isVisible();
	void setComponent(::java::awt::Component* component);
	virtual void setSize(int32_t axis, int32_t origin, int32_t size) override;
	virtual bool willHaveZeroSize(bool treatAutopaddingAsZeroSized) override;
	::javax::swing::GroupLayout* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::awt::Component* component = nullptr;
	int32_t origin = 0;
	int32_t min = 0;
	int32_t pref = 0;
	int32_t max = 0;
	int32_t baseline = 0;
	bool installed = false;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$ComponentSpring_h_
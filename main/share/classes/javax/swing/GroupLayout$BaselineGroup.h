#ifndef _javax_swing_GroupLayout$BaselineGroup_h_
#define _javax_swing_GroupLayout$BaselineGroup_h_
//$ class javax.swing.GroupLayout$BaselineGroup
//$ extends javax.swing.GroupLayout$ParallelGroup

#include <javax/swing/GroupLayout$ParallelGroup.h>

namespace java {
	namespace awt {
		class Component$BaselineResizeBehavior;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$BaselineGroup : public ::javax::swing::GroupLayout$ParallelGroup {
	$class(GroupLayout$BaselineGroup, $NO_CLASS_INIT, ::javax::swing::GroupLayout$ParallelGroup)
public:
	GroupLayout$BaselineGroup();
	void init$(::javax::swing::GroupLayout* this$0, bool resizable);
	void init$(::javax::swing::GroupLayout* this$0, bool resizable, bool baselineAnchoredToTop);
	void baselineLayout(int32_t origin, int32_t size);
	void calculateBaselineAndResizeBehavior();
	int32_t calculateMaxSize();
	int32_t calculateMinSize();
	virtual int32_t calculateSize(int32_t axis, int32_t type) override;
	void checkAxis(int32_t axis);
	virtual int32_t getBaseline() override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior() override;
	using ::javax::swing::GroupLayout$ParallelGroup::isResizable;
	virtual void setValidSize(int32_t axis, int32_t origin, int32_t size) override;
	virtual void unset() override;
	::javax::swing::GroupLayout* this$0 = nullptr;
	bool allSpringsHaveBaseline = false;
	int32_t prefAscent = 0;
	int32_t prefDescent = 0;
	bool baselineAnchorSet = false;
	bool baselineAnchoredToTop = false;
	bool calcedBaseline = false;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$BaselineGroup_h_
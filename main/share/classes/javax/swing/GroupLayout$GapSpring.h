#ifndef _javax_swing_GroupLayout$GapSpring_h_
#define _javax_swing_GroupLayout$GapSpring_h_
//$ class javax.swing.GroupLayout$GapSpring
//$ extends javax.swing.GroupLayout$Spring

#include <javax/swing/GroupLayout$Spring.h>

namespace javax {
	namespace swing {
		class GroupLayout;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$GapSpring : public ::javax::swing::GroupLayout$Spring {
	$class(GroupLayout$GapSpring, $NO_CLASS_INIT, ::javax::swing::GroupLayout$Spring)
public:
	GroupLayout$GapSpring();
	void init$(::javax::swing::GroupLayout* this$0, int32_t min, int32_t pref, int32_t max);
	virtual int32_t calculateMaximumSize(int32_t axis) override;
	virtual int32_t calculateMinimumSize(int32_t axis) override;
	virtual int32_t calculatePreferredSize(int32_t axis) override;
	virtual bool willHaveZeroSize(bool treatAutopaddingAsZeroSized) override;
	::javax::swing::GroupLayout* this$0 = nullptr;
	int32_t min = 0;
	int32_t pref = 0;
	int32_t max = 0;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$GapSpring_h_
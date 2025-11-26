#ifndef _javax_swing_GroupLayout$PreferredGapSpring_h_
#define _javax_swing_GroupLayout$PreferredGapSpring_h_
//$ class javax.swing.GroupLayout$PreferredGapSpring
//$ extends javax.swing.GroupLayout$Spring

#include <javax/swing/GroupLayout$Spring.h>

namespace javax {
	namespace swing {
		class GroupLayout;
		class JComponent;
		class LayoutStyle$ComponentPlacement;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$PreferredGapSpring : public ::javax::swing::GroupLayout$Spring {
	$class(GroupLayout$PreferredGapSpring, $NO_CLASS_INIT, ::javax::swing::GroupLayout$Spring)
public:
	GroupLayout$PreferredGapSpring();
	void init$(::javax::swing::GroupLayout* this$0, ::javax::swing::JComponent* source, ::javax::swing::JComponent* target, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max);
	virtual int32_t calculateMaximumSize(int32_t axis) override;
	virtual int32_t calculateMinimumSize(int32_t axis) override;
	virtual int32_t calculatePreferredSize(int32_t axis) override;
	int32_t getPadding(int32_t axis);
	virtual bool willHaveZeroSize(bool treatAutopaddingAsZeroSized) override;
	::javax::swing::GroupLayout* this$0 = nullptr;
	::javax::swing::JComponent* source = nullptr;
	::javax::swing::JComponent* target = nullptr;
	::javax::swing::LayoutStyle$ComponentPlacement* type = nullptr;
	int32_t pref = 0;
	int32_t max = 0;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$PreferredGapSpring_h_
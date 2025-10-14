#ifndef _javax_swing_GroupLayout$ContainerAutoPreferredGapSpring_h_
#define _javax_swing_GroupLayout$ContainerAutoPreferredGapSpring_h_
//$ class javax.swing.GroupLayout$ContainerAutoPreferredGapSpring
//$ extends javax.swing.GroupLayout$AutoPreferredGapSpring

#include <javax/swing/GroupLayout$AutoPreferredGapSpring.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout;
		class GroupLayout$ComponentSpring;
		class LayoutStyle;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$ContainerAutoPreferredGapSpring : public ::javax::swing::GroupLayout$AutoPreferredGapSpring {
	$class(GroupLayout$ContainerAutoPreferredGapSpring, $NO_CLASS_INIT, ::javax::swing::GroupLayout$AutoPreferredGapSpring)
public:
	GroupLayout$ContainerAutoPreferredGapSpring();
	void init$(::javax::swing::GroupLayout* this$0);
	void init$(::javax::swing::GroupLayout* this$0, int32_t pref, int32_t max);
	virtual void addTarget(::javax::swing::GroupLayout$ComponentSpring* spring, int32_t axis) override;
	virtual void calculatePadding(int32_t axis) override;
	virtual $String* getMatchDescription() override;
	int32_t updateSize(::javax::swing::LayoutStyle* p, ::javax::swing::GroupLayout$ComponentSpring* sourceSpring, int32_t position);
	::javax::swing::GroupLayout* this$0 = nullptr;
	::java::util::List* targets = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$ContainerAutoPreferredGapSpring_h_
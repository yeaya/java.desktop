#ifndef _javax_swing_GroupLayout$AutoPreferredGapSpring_h_
#define _javax_swing_GroupLayout$AutoPreferredGapSpring_h_
//$ class javax.swing.GroupLayout$AutoPreferredGapSpring
//$ extends javax.swing.GroupLayout$Spring

#include <javax/swing/GroupLayout$Spring.h>

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
		class LayoutStyle$ComponentPlacement;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$AutoPreferredGapSpring : public ::javax::swing::GroupLayout$Spring {
	$class(GroupLayout$AutoPreferredGapSpring, $NO_CLASS_INIT, ::javax::swing::GroupLayout$Spring)
public:
	GroupLayout$AutoPreferredGapSpring();
	void init$(::javax::swing::GroupLayout* this$0);
	void init$(::javax::swing::GroupLayout* this$0, int32_t pref, int32_t max);
	void init$(::javax::swing::GroupLayout* this$0, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max);
	virtual void addTarget(::javax::swing::GroupLayout$ComponentSpring* spring, int32_t axis);
	void addValidTarget(::javax::swing::GroupLayout$ComponentSpring* source, ::javax::swing::GroupLayout$ComponentSpring* target);
	virtual int32_t calculateMaximumSize(int32_t axis) override;
	virtual int32_t calculateMinimumSize(int32_t axis) override;
	virtual void calculatePadding(int32_t axis);
	int32_t calculatePadding(::javax::swing::LayoutStyle* p, int32_t position, ::javax::swing::GroupLayout$ComponentSpring* source, ::javax::swing::GroupLayout$ComponentSpring* target);
	virtual int32_t calculatePreferredSize(int32_t axis) override;
	virtual $String* getMatchDescription();
	virtual bool getUserCreated();
	virtual void reset();
	virtual void setSource(::javax::swing::GroupLayout$ComponentSpring* source);
	virtual void setSources(::java::util::List* sources);
	virtual void setUserCreated(bool userCreated);
	virtual $String* toString() override;
	virtual void unset() override;
	virtual bool willHaveZeroSize(bool treatAutopaddingAsZeroSized) override;
	::javax::swing::GroupLayout* this$0 = nullptr;
	::java::util::List* sources = nullptr;
	::javax::swing::GroupLayout$ComponentSpring* source = nullptr;
	::java::util::List* matches = nullptr;
	int32_t size = 0;
	int32_t lastSize = 0;
	int32_t pref = 0;
	int32_t max = 0;
	::javax::swing::LayoutStyle$ComponentPlacement* type = nullptr;
	bool userCreated = false;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$AutoPreferredGapSpring_h_
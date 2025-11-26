#ifndef _javax_swing_GroupLayout$SequentialGroup_h_
#define _javax_swing_GroupLayout$SequentialGroup_h_
//$ class javax.swing.GroupLayout$SequentialGroup
//$ extends javax.swing.GroupLayout$Group

#include <javax/swing/GroupLayout$Group.h>

namespace java {
	namespace awt {
		class Component;
		class Component$BaselineResizeBehavior;
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
		class GroupLayout$Spring;
		class JComponent;
		class LayoutStyle$ComponentPlacement;
	}
}

namespace javax {
	namespace swing {

class $import GroupLayout$SequentialGroup : public ::javax::swing::GroupLayout$Group {
	$class(GroupLayout$SequentialGroup, 0, ::javax::swing::GroupLayout$Group)
public:
	GroupLayout$SequentialGroup();
	void init$(::javax::swing::GroupLayout* this$0);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addComponent(::java::awt::Component* component) override;
	virtual ::javax::swing::GroupLayout$SequentialGroup* addComponent(bool useAsBaseline, ::java::awt::Component* component);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addComponent(::java::awt::Component* component, int32_t min, int32_t pref, int32_t max) override;
	virtual ::javax::swing::GroupLayout$SequentialGroup* addComponent(bool useAsBaseline, ::java::awt::Component* component, int32_t min, int32_t pref, int32_t max);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addContainerGap();
	virtual ::javax::swing::GroupLayout$SequentialGroup* addContainerGap(int32_t pref, int32_t max);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addGap(int32_t size) override;
	virtual ::javax::swing::GroupLayout$SequentialGroup* addGap(int32_t min, int32_t pref, int32_t max) override;
	virtual ::javax::swing::GroupLayout$SequentialGroup* addGroup(::javax::swing::GroupLayout$Group* group) override;
	virtual ::javax::swing::GroupLayout$SequentialGroup* addGroup(bool useAsBaseline, ::javax::swing::GroupLayout$Group* group);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addPreferredGap(::javax::swing::JComponent* comp1, ::javax::swing::JComponent* comp2, ::javax::swing::LayoutStyle$ComponentPlacement* type);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addPreferredGap(::javax::swing::JComponent* comp1, ::javax::swing::JComponent* comp2, ::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addPreferredGap(::javax::swing::LayoutStyle$ComponentPlacement* type);
	virtual ::javax::swing::GroupLayout$SequentialGroup* addPreferredGap(::javax::swing::LayoutStyle$ComponentPlacement* type, int32_t pref, int32_t max);
	::java::util::List* buildResizableList(int32_t axis, bool useMin);
	void checkPreferredGapValues(int32_t pref, int32_t max);
	virtual int32_t getBaseline() override;
	virtual ::java::awt::Component$BaselineResizeBehavior* getBaselineResizeBehavior() override;
	int32_t indexOfNextNonZeroSpring(int32_t index, bool treatAutopaddingAsZeroSized);
	virtual void insertAutopadding(int32_t axis, ::java::util::List* leadingPadding, ::java::util::List* trailingPadding, ::java::util::List* leading, ::java::util::List* trailing, bool insert) override;
	virtual int32_t operator$(int32_t a, int32_t b) override;
	virtual void setValidSize(int32_t axis, int32_t origin, int32_t size) override;
	void setValidSizeNotPreferred(int32_t axis, int32_t origin, int32_t size);
	::javax::swing::GroupLayout* this$0 = nullptr;
	static bool $assertionsDisabled;
	::javax::swing::GroupLayout$Spring* baselineSpring = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$SequentialGroup_h_
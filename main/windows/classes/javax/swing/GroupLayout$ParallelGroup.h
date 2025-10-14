#ifndef _javax_swing_GroupLayout$ParallelGroup_h_
#define _javax_swing_GroupLayout$ParallelGroup_h_
//$ class javax.swing.GroupLayout$ParallelGroup
//$ extends javax.swing.GroupLayout$Group

#include <javax/swing/GroupLayout$Group.h>

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
		class GroupLayout$Alignment;
		class GroupLayout$Spring;
	}
}

namespace javax {
	namespace swing {

class $export GroupLayout$ParallelGroup : public ::javax::swing::GroupLayout$Group {
	$class(GroupLayout$ParallelGroup, $NO_CLASS_INIT, ::javax::swing::GroupLayout$Group)
public:
	GroupLayout$ParallelGroup();
	void init$(::javax::swing::GroupLayout* this$0, ::javax::swing::GroupLayout$Alignment* childAlignment, bool resizable);
	virtual ::javax::swing::GroupLayout$ParallelGroup* addComponent(::java::awt::Component* component) override;
	virtual ::javax::swing::GroupLayout$ParallelGroup* addComponent(::java::awt::Component* component, int32_t min, int32_t pref, int32_t max) override;
	virtual ::javax::swing::GroupLayout$ParallelGroup* addComponent(::java::awt::Component* component, ::javax::swing::GroupLayout$Alignment* alignment);
	virtual ::javax::swing::GroupLayout$ParallelGroup* addComponent(::java::awt::Component* component, ::javax::swing::GroupLayout$Alignment* alignment, int32_t min, int32_t pref, int32_t max);
	virtual ::javax::swing::GroupLayout$ParallelGroup* addGap(int32_t pref) override;
	virtual ::javax::swing::GroupLayout$ParallelGroup* addGap(int32_t min, int32_t pref, int32_t max) override;
	virtual ::javax::swing::GroupLayout$ParallelGroup* addGroup(::javax::swing::GroupLayout$Group* group) override;
	virtual ::javax::swing::GroupLayout$ParallelGroup* addGroup(::javax::swing::GroupLayout$Alignment* alignment, ::javax::swing::GroupLayout$Group* group);
	virtual int32_t calculateMaximumSize(int32_t axis) override;
	virtual int32_t calculateMinimumSize(int32_t axis) override;
	void checkChildAlignment(::javax::swing::GroupLayout$Alignment* alignment);
	void checkChildAlignment(::javax::swing::GroupLayout$Alignment* alignment, bool allowsBaseline);
	virtual void insertAutopadding(int32_t axis, ::java::util::List* leadingPadding, ::java::util::List* trailingPadding, ::java::util::List* leading, ::java::util::List* trailing, bool insert) override;
	using ::javax::swing::GroupLayout$Group::isResizable;
	virtual bool isResizable();
	virtual int32_t operator$(int32_t a, int32_t b) override;
	virtual void setChildSize(::javax::swing::GroupLayout$Spring* spring, int32_t axis, int32_t origin, int32_t size);
	virtual void setValidSize(int32_t axis, int32_t origin, int32_t size) override;
	::javax::swing::GroupLayout* this$0 = nullptr;
	::javax::swing::GroupLayout$Alignment* childAlignment = nullptr;
	bool resizable = false;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$ParallelGroup_h_
#ifndef _javax_swing_GroupLayout$ComponentInfo_h_
#define _javax_swing_GroupLayout$ComponentInfo_h_
//$ class javax.swing.GroupLayout$ComponentInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Insets;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class GroupLayout;
		class GroupLayout$ComponentSpring;
		class GroupLayout$LinkInfo;
		class GroupLayout$Spring;
	}
}

namespace javax {
	namespace swing {

class GroupLayout$ComponentInfo : public ::java::lang::Object {
	$class(GroupLayout$ComponentInfo, 0, ::java::lang::Object)
public:
	GroupLayout$ComponentInfo();
	void init$(::javax::swing::GroupLayout* this$0, ::java::awt::Component* component);
	virtual void clearCachedSize();
	virtual void dispose();
	virtual ::java::awt::Component* getComponent();
	virtual ::javax::swing::GroupLayout$LinkInfo* getLinkInfo(int32_t axis);
	::javax::swing::GroupLayout$LinkInfo* getLinkInfo(int32_t axis, bool create);
	virtual int32_t getLinkSize(int32_t axis, int32_t type);
	virtual bool isLinked(int32_t axis);
	virtual bool isVisible();
	void removeSpring(::javax::swing::GroupLayout$Spring* spring);
	virtual void setBounds(::java::awt::Insets* insets, int32_t parentWidth, bool ltr);
	virtual void setComponent(::java::awt::Component* component);
	virtual void setHonorsVisibility(::java::lang::Boolean* honorsVisibility);
	void setLinkInfo(int32_t axis, ::javax::swing::GroupLayout$LinkInfo* linkInfo);
	virtual bool updateVisibility();
	::javax::swing::GroupLayout* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::awt::Component* component = nullptr;
	::javax::swing::GroupLayout$ComponentSpring* horizontalSpring = nullptr;
	::javax::swing::GroupLayout$ComponentSpring* verticalSpring = nullptr;
	::javax::swing::GroupLayout$LinkInfo* horizontalMaster = nullptr;
	::javax::swing::GroupLayout$LinkInfo* verticalMaster = nullptr;
	bool visible = false;
	::java::lang::Boolean* honorsVisibility = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_GroupLayout$ComponentInfo_h_
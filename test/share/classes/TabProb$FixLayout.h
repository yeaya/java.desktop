#ifndef _TabProb$FixLayout_h_
#define _TabProb$FixLayout_h_
//$ class TabProb$FixLayout
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

#pragma push_macro("C")
#undef C

class TabProb;
namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

class $export TabProb$FixLayout : public ::java::awt::LayoutManager {
	$class(TabProb$FixLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	TabProb$FixLayout();
	void init$(::TabProb* this$0);
	virtual void addLayoutComponent($String* s, ::java::awt::Component* c) override;
	virtual void layoutContainer(::java::awt::Container* C) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* C) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* C) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	::TabProb* this$0 = nullptr;
};

#pragma pop_macro("C")

#endif // _TabProb$FixLayout_h_
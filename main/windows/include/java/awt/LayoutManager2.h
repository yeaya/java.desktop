#ifndef _java_awt_LayoutManager2_h_
#define _java_awt_LayoutManager2_h_
//$ interface java.awt.LayoutManager2
//$ extends java.awt.LayoutManager

#include <java/awt/LayoutManager.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace java {
	namespace awt {

class $import LayoutManager2 : public ::java::awt::LayoutManager {
	$interface(LayoutManager2, $NO_CLASS_INIT, ::java::awt::LayoutManager)
public:
	using ::java::awt::LayoutManager::addLayoutComponent;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) {}
	virtual float getLayoutAlignmentX(::java::awt::Container* target) {return 0.0;}
	virtual float getLayoutAlignmentY(::java::awt::Container* target) {return 0.0;}
	virtual void invalidateLayout(::java::awt::Container* target) {}
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) {return nullptr;}
};

	} // awt
} // java

#endif // _java_awt_LayoutManager2_h_
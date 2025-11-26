#ifndef _java_awt_LayoutManager_h_
#define _java_awt_LayoutManager_h_
//$ interface java.awt.LayoutManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace java {
	namespace awt {

class $export LayoutManager : public ::java::lang::Object {
	$interface(LayoutManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) {}
	virtual void layoutContainer(::java::awt::Container* parent) {}
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) {return nullptr;}
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) {return nullptr;}
	virtual void removeLayoutComponent(::java::awt::Component* comp) {}
};

	} // awt
} // java

#endif // _java_awt_LayoutManager_h_
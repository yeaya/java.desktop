#ifndef _java_awt_Container$MouseEventTargetFilter_h_
#define _java_awt_Container$MouseEventTargetFilter_h_
//$ class java.awt.Container$MouseEventTargetFilter
//$ extends java.awt.Container$EventTargetFilter

#include <java/awt/Container$EventTargetFilter.h>

#pragma push_macro("FILTER")
#undef FILTER

namespace java {
	namespace awt {
		class Component;
	}
}

namespace java {
	namespace awt {

class $import Container$MouseEventTargetFilter : public ::java::awt::Container$EventTargetFilter {
	$class(Container$MouseEventTargetFilter, 0, ::java::awt::Container$EventTargetFilter)
public:
	Container$MouseEventTargetFilter();
	void init$();
	virtual bool accept(::java::awt::Component* comp) override;
	static ::java::awt::Container$EventTargetFilter* FILTER;
};

	} // awt
} // java

#pragma pop_macro("FILTER")

#endif // _java_awt_Container$MouseEventTargetFilter_h_
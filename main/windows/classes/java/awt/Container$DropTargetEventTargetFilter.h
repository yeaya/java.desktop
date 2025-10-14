#ifndef _java_awt_Container$DropTargetEventTargetFilter_h_
#define _java_awt_Container$DropTargetEventTargetFilter_h_
//$ class java.awt.Container$DropTargetEventTargetFilter
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

class $export Container$DropTargetEventTargetFilter : public ::java::awt::Container$EventTargetFilter {
	$class(Container$DropTargetEventTargetFilter, 0, ::java::awt::Container$EventTargetFilter)
public:
	Container$DropTargetEventTargetFilter();
	void init$();
	virtual bool accept(::java::awt::Component* comp) override;
	static ::java::awt::Container$EventTargetFilter* FILTER;
};

	} // awt
} // java

#pragma pop_macro("FILTER")

#endif // _java_awt_Container$DropTargetEventTargetFilter_h_
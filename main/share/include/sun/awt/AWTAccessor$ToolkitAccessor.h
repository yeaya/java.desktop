#ifndef _sun_awt_AWTAccessor$ToolkitAccessor_h_
#define _sun_awt_AWTAccessor$ToolkitAccessor_h_
//$ interface sun.awt.AWTAccessor$ToolkitAccessor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace sun {
	namespace awt {

class $import AWTAccessor$ToolkitAccessor : public ::java::lang::Object {
	$interface(AWTAccessor$ToolkitAccessor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void setPlatformResources(::java::util::ResourceBundle* bundle) {}
};

	} // awt
} // sun

#endif // _sun_awt_AWTAccessor$ToolkitAccessor_h_
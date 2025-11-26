#ifndef _java_awt_Toolkit$3_h_
#define _java_awt_Toolkit$3_h_
//$ class java.awt.Toolkit$3
//$ extends sun.awt.AWTAccessor$ToolkitAccessor

#include <sun/awt/AWTAccessor$ToolkitAccessor.h>

namespace java {
	namespace util {
		class ResourceBundle;
	}
}

namespace java {
	namespace awt {

class Toolkit$3 : public ::sun::awt::AWTAccessor$ToolkitAccessor {
	$class(Toolkit$3, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$ToolkitAccessor)
public:
	Toolkit$3();
	void init$();
	virtual void setPlatformResources(::java::util::ResourceBundle* bundle) override;
};

	} // awt
} // java

#endif // _java_awt_Toolkit$3_h_
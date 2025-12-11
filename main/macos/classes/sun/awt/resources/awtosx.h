#ifndef _sun_awt_resources_awtosx_h_
#define _sun_awt_resources_awtosx_h_
//$ class sun.awt.resources.awtosx
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace resources {

class awtosx : public ::java::util::ListResourceBundle {
	$class(awtosx, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awtosx();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // awt
} // sun

#endif // _sun_awt_resources_awtosx_h_
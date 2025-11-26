#ifndef _sun_awt_resources_awt_ko_h_
#define _sun_awt_resources_awt_ko_h_
//$ class sun.awt.resources.awt_ko
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace resources {

class awt_ko : public ::java::util::ListResourceBundle {
	$class(awt_ko, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awt_ko();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // awt
} // sun

#endif // _sun_awt_resources_awt_ko_h_
#ifndef _sun_awt_resources_awt_zh_TW_h_
#define _sun_awt_resources_awt_zh_TW_h_
//$ class sun.awt.resources.awt_zh_TW
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace resources {

class awt_zh_TW : public ::java::util::ListResourceBundle {
	$class(awt_zh_TW, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awt_zh_TW();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // awt
} // sun

#endif // _sun_awt_resources_awt_zh_TW_h_
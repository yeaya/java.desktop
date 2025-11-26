#ifndef _sun_awt_resources_awt_zh_HK_h_
#define _sun_awt_resources_awt_zh_HK_h_
//$ class sun.awt.resources.awt_zh_HK
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace resources {

class awt_zh_HK : public ::java::util::ListResourceBundle {
	$class(awt_zh_HK, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awt_zh_HK();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // awt
} // sun

#endif // _sun_awt_resources_awt_zh_HK_h_
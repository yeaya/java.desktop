#ifndef _sun_awt_resources_awt_pt_BR_h_
#define _sun_awt_resources_awt_pt_BR_h_
//$ class sun.awt.resources.awt_pt_BR
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace resources {

class awt_pt_BR : public ::java::util::ListResourceBundle {
	$class(awt_pt_BR, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awt_pt_BR();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // resources
	} // awt
} // sun

#endif // _sun_awt_resources_awt_pt_BR_h_
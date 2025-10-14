#ifndef _sun_awt_windows_awtLocalization_it_h_
#define _sun_awt_windows_awtLocalization_it_h_
//$ class sun.awt.windows.awtLocalization_it
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace windows {

class awtLocalization_it : public ::java::util::ListResourceBundle {
	$class(awtLocalization_it, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awtLocalization_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_awtLocalization_it_h_
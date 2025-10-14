#ifndef _sun_awt_windows_awtLocalization_ko_h_
#define _sun_awt_windows_awtLocalization_ko_h_
//$ class sun.awt.windows.awtLocalization_ko
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace windows {

class awtLocalization_ko : public ::java::util::ListResourceBundle {
	$class(awtLocalization_ko, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awtLocalization_ko();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_awtLocalization_ko_h_
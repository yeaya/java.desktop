#ifndef _sun_awt_windows_awtLocalization_zh_TW_h_
#define _sun_awt_windows_awtLocalization_zh_TW_h_
//$ class sun.awt.windows.awtLocalization_zh_TW
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace sun {
	namespace awt {
		namespace windows {

class awtLocalization_zh_TW : public ::java::util::ListResourceBundle {
	$class(awtLocalization_zh_TW, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	awtLocalization_zh_TW();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_awtLocalization_zh_TW_h_
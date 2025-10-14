#ifndef _sun_awt_windows_EHTMLReadMode_h_
#define _sun_awt_windows_EHTMLReadMode_h_
//$ class sun.awt.windows.EHTMLReadMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("HTML_READ_ALL")
#undef HTML_READ_ALL
#pragma push_macro("HTML_READ_FRAGMENT")
#undef HTML_READ_FRAGMENT
#pragma push_macro("HTML_READ_SELECTION")
#undef HTML_READ_SELECTION

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class EHTMLReadMode : public ::java::lang::Enum {
	$class(EHTMLReadMode, 0, ::java::lang::Enum)
public:
	EHTMLReadMode();
	static $Array<::sun::awt::windows::EHTMLReadMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::awt::windows::EHTMLReadMode* getEHTMLReadMode(::java::awt::datatransfer::DataFlavor* df);
	static ::sun::awt::windows::EHTMLReadMode* valueOf($String* name);
	static $Array<::sun::awt::windows::EHTMLReadMode>* values();
	static ::sun::awt::windows::EHTMLReadMode* HTML_READ_ALL;
	static ::sun::awt::windows::EHTMLReadMode* HTML_READ_FRAGMENT;
	static ::sun::awt::windows::EHTMLReadMode* HTML_READ_SELECTION;
	static $Array<::sun::awt::windows::EHTMLReadMode>* $VALUES;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("HTML_READ_ALL")
#pragma pop_macro("HTML_READ_FRAGMENT")
#pragma pop_macro("HTML_READ_SELECTION")

#endif // _sun_awt_windows_EHTMLReadMode_h_
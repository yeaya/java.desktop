#ifndef _sun_awt_windows_WDesktopProperties_h_
#define _sun_awt_windows_WDesktopProperties_h_
//$ class sun.awt.windows.WDesktopProperties
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FILE_PREFIX")
#undef FILE_PREFIX
#pragma push_macro("PREFIX")
#undef PREFIX
#pragma push_macro("PROP_NAMES")
#undef PROP_NAMES

namespace java {
	namespace awt {
		class RenderingHints;
	}
}
namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace windows {
			class WToolkit;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WDesktopProperties : public ::java::lang::Object {
	$class(WDesktopProperties, 0, ::java::lang::Object)
public:
	WDesktopProperties();
	void init$(::sun::awt::windows::WToolkit* wToolkit);
	::java::awt::RenderingHints* getDesktopAAHints();
	$StringArray* getKeyNames();
	::java::util::Map* getProperties();
	void getWindowsParameters();
	void init();
	static void initIDs();
	static bool isWindowsProperty($String* name);
	void playWindowsSound($String* winEventName);
	void setBooleanProperty($String* key, bool value);
	void setColorProperty($String* key, int32_t r, int32_t g, int32_t b);
	void setFontProperty($String* key, $String* name, int32_t style, int32_t size);
	void setIntegerProperty($String* key, int32_t value);
	void setSoundProperty($String* key, $String* winEventName);
	void setStringProperty($String* key, $String* value);
	static bool $assertionsDisabled;
	static ::sun::util::logging::PlatformLogger* log;
	static $String* PREFIX;
	static $String* FILE_PREFIX;
	static $String* PROP_NAMES;
	int64_t pData = 0;
	::sun::awt::windows::WToolkit* wToolkit = nullptr;
	::java::util::HashMap* map = nullptr;
	static ::java::util::HashMap* fontNameMap;
};

		} // windows
	} // awt
} // sun

#pragma pop_macro("FILE_PREFIX")
#pragma pop_macro("PREFIX")
#pragma pop_macro("PROP_NAMES")

#endif // _sun_awt_windows_WDesktopProperties_h_
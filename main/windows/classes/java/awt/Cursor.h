#ifndef _java_awt_Cursor_h_
#define _java_awt_Cursor_h_
//$ class java.awt.Cursor
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CROSSHAIR_CURSOR")
#undef CROSSHAIR_CURSOR
#pragma push_macro("CURSOR_DOT_PREFIX")
#undef CURSOR_DOT_PREFIX
#pragma push_macro("CUSTOM_CURSOR")
#undef CUSTOM_CURSOR
#pragma push_macro("DEFAULT_CURSOR")
#undef DEFAULT_CURSOR
#pragma push_macro("DOT_FILE_SUFFIX")
#undef DOT_FILE_SUFFIX
#pragma push_macro("DOT_HOTSPOT_SUFFIX")
#undef DOT_HOTSPOT_SUFFIX
#pragma push_macro("DOT_NAME_SUFFIX")
#undef DOT_NAME_SUFFIX
#pragma push_macro("E_RESIZE_CURSOR")
#undef E_RESIZE_CURSOR
#pragma push_macro("HAND_CURSOR")
#undef HAND_CURSOR
#pragma push_macro("MOVE_CURSOR")
#undef MOVE_CURSOR
#pragma push_macro("NE_RESIZE_CURSOR")
#undef NE_RESIZE_CURSOR
#pragma push_macro("NW_RESIZE_CURSOR")
#undef NW_RESIZE_CURSOR
#pragma push_macro("N_RESIZE_CURSOR")
#undef N_RESIZE_CURSOR
#pragma push_macro("PROPERTIES_FILE")
#undef PROPERTIES_FILE
#pragma push_macro("RESOURCE_PREFIX")
#undef RESOURCE_PREFIX
#pragma push_macro("SE_RESIZE_CURSOR")
#undef SE_RESIZE_CURSOR
#pragma push_macro("SW_RESIZE_CURSOR")
#undef SW_RESIZE_CURSOR
#pragma push_macro("S_RESIZE_CURSOR")
#undef S_RESIZE_CURSOR
#pragma push_macro("TEXT_CURSOR")
#undef TEXT_CURSOR
#pragma push_macro("WAIT_CURSOR")
#undef WAIT_CURSOR
#pragma push_macro("W_RESIZE_CURSOR")
#undef W_RESIZE_CURSOR

namespace java {
	namespace awt {
		class Cursor$CursorDisposer;
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Properties;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class $export Cursor : public ::java::io::Serializable {
	$class(Cursor, 0, ::java::io::Serializable)
public:
	Cursor();
	void init$(int32_t type);
	void init$($String* name);
	static void finalizeImpl(int64_t pData);
	static ::java::awt::Cursor* getDefaultCursor();
	virtual $String* getName();
	static ::java::awt::Cursor* getPredefinedCursor(int32_t type);
	static ::java::awt::Cursor* getSystemCustomCursor($String* name);
	virtual int32_t getType();
	static void initIDs();
	static ::java::io::InputStream* lambda$getSystemCustomCursor$0($String* file);
	static $Object* lambda$loadSystemCustomCursorProperties$1();
	static void loadSystemCustomCursorProperties();
	void setPData(int64_t pData);
	virtual $String* toString() override;
	static const int32_t DEFAULT_CURSOR = 0;
	static const int32_t CROSSHAIR_CURSOR = 1;
	static const int32_t TEXT_CURSOR = 2;
	static const int32_t WAIT_CURSOR = 3;
	static const int32_t SW_RESIZE_CURSOR = 4;
	static const int32_t SE_RESIZE_CURSOR = 5;
	static const int32_t NW_RESIZE_CURSOR = 6;
	static const int32_t NE_RESIZE_CURSOR = 7;
	static const int32_t N_RESIZE_CURSOR = 8;
	static const int32_t S_RESIZE_CURSOR = 9;
	static const int32_t W_RESIZE_CURSOR = 10;
	static const int32_t E_RESIZE_CURSOR = 11;
	static const int32_t HAND_CURSOR = 12;
	static const int32_t MOVE_CURSOR = 13;
	static $Array<::java::awt::Cursor>* predefined;
	static $Array<::java::awt::Cursor>* predefinedPrivate;
	static $Array<::java::lang::String, 2>* cursorProperties;
	int32_t type = 0;
	static const int32_t CUSTOM_CURSOR = (-1);
	static ::java::util::Hashtable* systemCustomCursors;
	static $String* RESOURCE_PREFIX;
	static $String* PROPERTIES_FILE;
	static ::java::util::Properties* systemCustomCursorProperties;
	static $String* CURSOR_DOT_PREFIX;
	static $String* DOT_FILE_SUFFIX;
	static $String* DOT_HOTSPOT_SUFFIX;
	static $String* DOT_NAME_SUFFIX;
	static const int64_t serialVersionUID = (int64_t)0x6F6A0777F71201A0;
	static ::sun::util::logging::PlatformLogger* log;
	int64_t pData = 0;
	$Object* anchor = nullptr;
	::java::awt::Cursor$CursorDisposer* disposer = nullptr;
	$String* name = nullptr;
};

	} // awt
} // java

#pragma pop_macro("CROSSHAIR_CURSOR")
#pragma pop_macro("CURSOR_DOT_PREFIX")
#pragma pop_macro("CUSTOM_CURSOR")
#pragma pop_macro("DEFAULT_CURSOR")
#pragma pop_macro("DOT_FILE_SUFFIX")
#pragma pop_macro("DOT_HOTSPOT_SUFFIX")
#pragma pop_macro("DOT_NAME_SUFFIX")
#pragma pop_macro("E_RESIZE_CURSOR")
#pragma pop_macro("HAND_CURSOR")
#pragma pop_macro("MOVE_CURSOR")
#pragma pop_macro("NE_RESIZE_CURSOR")
#pragma pop_macro("NW_RESIZE_CURSOR")
#pragma pop_macro("N_RESIZE_CURSOR")
#pragma pop_macro("PROPERTIES_FILE")
#pragma pop_macro("RESOURCE_PREFIX")
#pragma pop_macro("SE_RESIZE_CURSOR")
#pragma pop_macro("SW_RESIZE_CURSOR")
#pragma pop_macro("S_RESIZE_CURSOR")
#pragma pop_macro("TEXT_CURSOR")
#pragma pop_macro("WAIT_CURSOR")
#pragma pop_macro("W_RESIZE_CURSOR")

#endif // _java_awt_Cursor_h_
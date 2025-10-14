#ifndef _sun_awt_windows_ThemeReader_h_
#define _sun_awt_windows_ThemeReader_h_
//$ class sun.awt.windows.ThemeReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Dimension;
		class Insets;
		class Point;
	}
}
namespace java {
	namespace lang {
		class Long;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class Lock;
				class ReadWriteLock;
			}
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class ThemeReader : public ::java::lang::Object {
	$class(ThemeReader, 0, ::java::lang::Object)
public:
	ThemeReader();
	void init$();
	static void closeTheme(int64_t theme);
	static void flush();
	static bool getBoolean(int64_t theme, int32_t part, int32_t state, int32_t property);
	static bool getBoolean($String* widget, int32_t part, int32_t state, int32_t property);
	static ::java::awt::Color* getColor(int64_t theme, int32_t part, int32_t state, int32_t property);
	static ::java::awt::Color* getColor($String* widget, int32_t part, int32_t state, int32_t property);
	static int32_t getEnum(int64_t theme, int32_t part, int32_t state, int32_t property);
	static int32_t getEnum($String* widget, int32_t part, int32_t state, int32_t property);
	static int32_t getInt(int64_t theme, int32_t part, int32_t state, int32_t property);
	static int32_t getInt($String* widget, int32_t part, int32_t state, int32_t property);
	static ::java::awt::Dimension* getPartSize(int64_t theme, int32_t part, int32_t state);
	static ::java::awt::Dimension* getPartSize($String* widget, int32_t part, int32_t state);
	static ::java::awt::Point* getPoint(int64_t theme, int32_t part, int32_t state, int32_t property);
	static ::java::awt::Point* getPoint($String* widget, int32_t part, int32_t state, int32_t property);
	static ::java::awt::Dimension* getPosition(int64_t theme, int32_t part, int32_t state, int32_t property);
	static ::java::awt::Dimension* getPosition($String* widget, int32_t part, int32_t state, int32_t property);
	static bool getSysBoolean(int64_t theme, int32_t property);
	static bool getSysBoolean($String* widget, int32_t property);
	static ::java::lang::Long* getTheme($String* widget);
	static ::java::awt::Insets* getThemeBackgroundContentMargins(int64_t theme, int32_t part, int32_t state, int32_t boundingWidth, int32_t boundingHeight);
	static ::java::awt::Insets* getThemeBackgroundContentMargins($String* widget, int32_t part, int32_t state, int32_t boundingWidth, int32_t boundingHeight);
	static ::java::lang::Long* getThemeImpl($String* widget);
	static ::java::awt::Insets* getThemeMargins(int64_t theme, int32_t part, int32_t state, int32_t marginType);
	static ::java::awt::Insets* getThemeMargins($String* widget, int32_t part, int32_t state, int32_t marginType);
	static int64_t getThemeTransitionDuration(int64_t theme, int32_t part, int32_t stateFrom, int32_t stateTo, int32_t propId);
	static int64_t getThemeTransitionDuration($String* widget, int32_t part, int32_t stateFrom, int32_t stateTo, int32_t propId);
	static bool initThemes();
	static bool isThemePartDefined(int64_t theme, int32_t part, int32_t state);
	static bool isThemePartDefined($String* widget, int32_t part, int32_t state);
	static bool isThemed();
	static bool isXPStyleEnabled();
	static int64_t openTheme($String* widget);
	static void paintBackground($ints* buffer, int64_t theme, int32_t part, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, int32_t stride);
	static void paintBackground($ints* buffer, $String* widget, int32_t part, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, int32_t stride);
	static void setWindowTheme($String* subAppName);
	static ::java::util::Map* widgetToTheme;
	static ::java::util::concurrent::locks::ReadWriteLock* readWriteLock;
	static ::java::util::concurrent::locks::Lock* readLock;
	static ::java::util::concurrent::locks::Lock* writeLock;
	static $volatile(bool) valid;
	static $volatile(bool) isThemed$;
	static $volatile(bool) xpStyleEnabled;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_ThemeReader_h_
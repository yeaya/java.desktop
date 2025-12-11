#ifndef _sun_lwawt_macosx_CCursorManager_h_
#define _sun_lwawt_macosx_CCursorManager_h_
//$ class sun.lwawt.macosx.CCursorManager
//$ extends sun.lwawt.LWCursorManager

#include <sun/lwawt/LWCursorManager.h>

#pragma push_macro("NAMED_CURSOR")
#undef NAMED_CURSOR

namespace java {
	namespace awt {
		class Cursor;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CCursorManager : public ::sun::lwawt::LWCursorManager {
	$class(CCursorManager, 0, ::sun::lwawt::LWCursorManager)
public:
	CCursorManager();
	void init$();
	virtual ::java::awt::Point* getCursorPosition() override;
	static ::sun::lwawt::macosx::CCursorManager* getInstance();
	static ::java::awt::geom::Point2D* nativeGetCursorPosition();
	static void nativeSetAllowsCursorSetInBackground(bool allows);
	static void nativeSetBuiltInCursor(int32_t type, $String* name);
	static void nativeSetCustomCursor(int64_t imgPtr, double x, double y);
	virtual void setCursor(::java::awt::Cursor* cursor) override;
	static const int32_t NAMED_CURSOR = (-1);
	static ::sun::lwawt::macosx::CCursorManager* theInstance;
	$volatile(::java::awt::Cursor*) currentCursor = nullptr;
};

		} // macosx
	} // lwawt
} // sun

#pragma pop_macro("NAMED_CURSOR")

#endif // _sun_lwawt_macosx_CCursorManager_h_
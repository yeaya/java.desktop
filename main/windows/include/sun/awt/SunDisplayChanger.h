#ifndef _sun_awt_SunDisplayChanger_h_
#define _sun_awt_SunDisplayChanger_h_
//$ class sun.awt.SunDisplayChanger
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		class DisplayChangedListener;
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

class $import SunDisplayChanger : public ::java::lang::Object {
	$class(SunDisplayChanger, 0, ::java::lang::Object)
public:
	SunDisplayChanger();
	void init$();
	virtual void add(::sun::awt::DisplayChangedListener* theListener);
	virtual void notifyListeners();
	virtual void notifyPaletteChanged();
	virtual void remove(::sun::awt::DisplayChangedListener* theListener);
	static ::sun::util::logging::PlatformLogger* log;
	::java::util::Map* listeners = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_SunDisplayChanger_h_
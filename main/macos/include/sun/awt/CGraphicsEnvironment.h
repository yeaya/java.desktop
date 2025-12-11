#ifndef _sun_awt_CGraphicsEnvironment_h_
#define _sun_awt_CGraphicsEnvironment_h_
//$ class sun.awt.CGraphicsEnvironment
//$ extends sun.java2d.SunGraphicsEnvironment

#include <java/lang/Array.h>
#include <sun/java2d/SunGraphicsEnvironment.h>

namespace java {
	namespace awt {
		class Font;
		class GraphicsDevice;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace sun {
	namespace awt {
		class CGraphicsDevice;
	}
}

namespace sun {
	namespace awt {

class $import CGraphicsEnvironment : public ::sun::java2d::SunGraphicsEnvironment {
	$class(CGraphicsEnvironment, $HAS_FINALIZE, ::sun::java2d::SunGraphicsEnvironment)
public:
	CGraphicsEnvironment();
	void init$();
	void _displayReconfiguration(int32_t displayId, bool removed);
	void deregisterDisplayReconfiguration(int64_t context);
	virtual void finalize() override;
	virtual $Array<::java::awt::Font>* getAllFonts() override;
	virtual ::java::awt::GraphicsDevice* getDefaultScreenDevice() override;
	static $ints* getDisplayIDs();
	static int32_t getMainDisplayID();
	virtual int32_t getNumScreens() override;
	::java::awt::GraphicsDevice* getScreenDevice(int32_t displayID);
	virtual $Array<::java::awt::GraphicsDevice>* getScreenDevices() override;
	::sun::awt::CGraphicsDevice* getSimilarDevice(::sun::awt::CGraphicsDevice* old);
	static void init();
	void initDevices();
	virtual bool isDisplayLocal() override;
	virtual ::java::awt::GraphicsDevice* makeScreenDevice(int32_t screennum) override;
	void rebuildDevices();
	int64_t registerDisplayReconfiguration();
	::java::util::Map* devices = nullptr;
	int32_t mainDisplayID = 0;
	int64_t displayReconfigContext = 0;
	::java::util::List* oldDevices = nullptr;
	static $StringArray* sLogicalFonts;
};

	} // awt
} // sun

#endif // _sun_awt_CGraphicsEnvironment_h_
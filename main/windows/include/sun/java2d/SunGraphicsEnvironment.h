#ifndef _sun_java2d_SunGraphicsEnvironment_h_
#define _sun_java2d_SunGraphicsEnvironment_h_
//$ class sun.java2d.SunGraphicsEnvironment
//$ extends java.awt.GraphicsEnvironment
//$ implements sun.awt.DisplayChangedListener

#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Array.h>
#include <sun/awt/DisplayChangedListener.h>

namespace java {
	namespace awt {
		class Dimension;
		class Font;
		class Graphics2D;
		class GraphicsConfiguration;
		class GraphicsDevice;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace sun {
	namespace awt {
		class SunDisplayChanger;
	}
}
namespace sun {
	namespace font {
		class FontManagerForSGE;
	}
}

namespace sun {
	namespace java2d {

class $import SunGraphicsEnvironment : public ::java::awt::GraphicsEnvironment, public ::sun::awt::DisplayChangedListener {
	$class(SunGraphicsEnvironment, 0, ::java::awt::GraphicsEnvironment, ::sun::awt::DisplayChangedListener)
public:
	SunGraphicsEnvironment();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addDisplayChangedListener(::sun::awt::DisplayChangedListener* client);
	virtual ::java::awt::Graphics2D* createGraphics(::java::awt::image::BufferedImage* img) override;
	virtual void displayChanged() override;
	virtual $Array<::java::awt::Font>* getAllFonts() override;
	virtual $StringArray* getAvailableFontFamilyNames(::java::util::Locale* requestedLocale) override;
	virtual $StringArray* getAvailableFontFamilyNames() override;
	static double getDebugScale();
	virtual ::java::awt::GraphicsDevice* getDefaultScreenDevice() override;
	static ::sun::font::FontManagerForSGE* getFontManagerForSGE();
	static ::java::awt::Rectangle* getGCDeviceBounds(::java::awt::GraphicsConfiguration* config);
	static ::java::awt::GraphicsConfiguration* getGraphicsConfigurationAtPoint(::java::awt::GraphicsConfiguration* current, double x, double y);
	virtual int32_t getNumScreens() {return 0;}
	static double getScaleFactor($String* propertyName);
	virtual $Array<::java::awt::GraphicsDevice>* getScreenDevices() override;
	static ::java::awt::Rectangle* getUsableBounds(::java::awt::GraphicsDevice* gd);
	virtual bool isDisplayLocal() {return false;}
	virtual bool isFlipStrategyPreferred(::java::awt::peer::ComponentPeer* peer);
	static bool isUIScaleEnabled();
	virtual ::java::awt::GraphicsDevice* makeScreenDevice(int32_t screennum) {return nullptr;}
	virtual void paletteChanged() override;
	virtual void removeDisplayChangedListener(::sun::awt::DisplayChangedListener* client);
	static ::java::awt::Point* toDeviceSpace(int32_t x, int32_t y);
	static ::java::awt::Rectangle* toDeviceSpace(::java::awt::GraphicsConfiguration* gc, int32_t x, int32_t y, int32_t w, int32_t h);
	static ::java::awt::Point* toDeviceSpaceAbs(int32_t x, int32_t y);
	static ::java::awt::Rectangle* toDeviceSpaceAbs(::java::awt::Rectangle* rect);
	static ::java::awt::Rectangle* toDeviceSpaceAbs(::java::awt::GraphicsConfiguration* gc, int32_t x, int32_t y, int32_t w, int32_t h);
	virtual $String* toString() override;
	static ::java::awt::Dimension* toUserSpace(::java::awt::GraphicsConfiguration* gc, int32_t w, int32_t h);
	static void useAlternateFontforJALocales();
	::java::awt::Font* defaultFont = nullptr;
	static bool uiScaleEnabled;
	static double debugScale;
	$Array<::java::awt::GraphicsDevice>* screens = nullptr;
	::sun::awt::SunDisplayChanger* displayChanger = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_SunGraphicsEnvironment_h_
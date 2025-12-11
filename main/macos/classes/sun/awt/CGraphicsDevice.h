#ifndef _sun_awt_CGraphicsDevice_h_
#define _sun_awt_CGraphicsDevice_h_
//$ class sun.awt.CGraphicsDevice
//$ extends java.awt.GraphicsDevice
//$ implements sun.awt.DisplayChangedListener

#include <java/awt/GraphicsDevice.h>
#include <java/lang/Array.h>
#include <sun/awt/DisplayChangedListener.h>

namespace java {
	namespace awt {
		class AWTPermission;
		class DisplayMode;
		class GraphicsConfiguration;
		class Insets;
		class Rectangle;
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}

namespace sun {
	namespace awt {

class $export CGraphicsDevice : public ::java::awt::GraphicsDevice, public ::sun::awt::DisplayChangedListener {
	$class(CGraphicsDevice, 0, ::java::awt::GraphicsDevice, ::sun::awt::DisplayChangedListener)
public:
	CGraphicsDevice();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t displayID);
	virtual void displayChanged() override;
	static void enterFullScreenExclusive(::java::awt::Window* w);
	static void exitFullScreenExclusive(::java::awt::Window* w);
	::java::awt::Rectangle* getBounds();
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() override;
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() override;
	virtual ::java::awt::DisplayMode* getDisplayMode() override;
	virtual $Array<::java::awt::DisplayMode>* getDisplayModes() override;
	virtual $String* getIDstring() override;
	int32_t getScaleFactor();
	::java::awt::Insets* getScreenInsets();
	virtual int32_t getType() override;
	double getXResolution();
	double getYResolution();
	void initScaleFactor();
	void invalidate(::sun::awt::CGraphicsDevice* device);
	virtual bool isDisplayChangeSupported() override;
	static bool isFSExclusiveModeAllowed();
	virtual bool isFullScreenSupported() override;
	bool isSameMode(::java::awt::DisplayMode* newMode, ::java::awt::DisplayMode* oldMode);
	static ::java::awt::geom::Rectangle2D* nativeGetBounds(int32_t displayID);
	static ::java::awt::DisplayMode* nativeGetDisplayMode(int32_t displayID);
	static $Array<::java::awt::DisplayMode>* nativeGetDisplayModes(int32_t displayID);
	static double nativeGetScaleFactor(int32_t displayID);
	static ::java::awt::Insets* nativeGetScreenInsets(int32_t displayID);
	static double nativeGetXResolution(int32_t displayID);
	static double nativeGetYResolution(int32_t displayID);
	static void nativeResetDisplayMode();
	static void nativeSetDisplayMode(int32_t displayID, int32_t w, int32_t h, int32_t bpp, int32_t refrate);
	virtual void paletteChanged() override;
	static void resizeFSWindow(::java::awt::Window* w, ::java::awt::Rectangle* b);
	virtual void setDisplayMode(::java::awt::DisplayMode* dm) override;
	virtual void setFullScreenWindow(::java::awt::Window* w) override;
	virtual $String* toString() override;
	static bool usingMetalPipeline();
	$volatile(int32_t) displayID = 0;
	$volatile(double) xResolution = 0.0;
	$volatile(double) yResolution = 0.0;
	$volatile(::java::awt::Rectangle*) bounds = nullptr;
	$volatile(int32_t) scale = 0;
	::java::awt::GraphicsConfiguration* config = nullptr;
	static bool metalPipelineEnabled;
	static bool oglPipelineEnabled;
	static ::java::awt::AWTPermission* fullScreenExclusivePermission;
	::java::awt::DisplayMode* originalMode = nullptr;
	::java::awt::DisplayMode* initialMode = nullptr;
};

	} // awt
} // sun

#endif // _sun_awt_CGraphicsDevice_h_
#ifndef _sun_awt_Win32GraphicsDevice_h_
#define _sun_awt_Win32GraphicsDevice_h_
//$ class sun.awt.Win32GraphicsDevice
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
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class WindowListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace image {
			class ColorModel;
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class WindowPeer;
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace sun {
	namespace awt {
		class SunDisplayChanger;
	}
}

namespace sun {
	namespace awt {

class $export Win32GraphicsDevice : public ::java::awt::GraphicsDevice, public ::sun::awt::DisplayChangedListener {
	$class(Win32GraphicsDevice, 0, ::java::awt::GraphicsDevice, ::sun::awt::DisplayChangedListener)
public:
	Win32GraphicsDevice();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t screennum);
	virtual void addDisplayChangedListener(::sun::awt::DisplayChangedListener* client);
	virtual void addFSWindowListener(::java::awt::Window* w);
	virtual void configDisplayMode(int32_t screen, ::java::awt::peer::WindowPeer* w, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate);
	virtual void displayChanged() override;
	virtual void enterFullScreenExclusive(int32_t screen, ::java::awt::peer::WindowPeer* w);
	virtual void enumDisplayModes(int32_t screen, ::java::util::ArrayList* modes);
	virtual void exitFullScreenExclusive(int32_t screen, ::java::awt::peer::WindowPeer* w);
	virtual ::java::awt::image::ColorModel* getColorModel();
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() override;
	virtual ::java::awt::DisplayMode* getCurrentDisplayMode(int32_t screen);
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() override;
	virtual int32_t getDefaultPixID(int32_t screen);
	int32_t getDefaultPixIDImpl(int32_t screen);
	virtual float getDefaultScaleX();
	virtual float getDefaultScaleY();
	virtual ::java::awt::DisplayMode* getDisplayMode() override;
	virtual $Array<::java::awt::DisplayMode>* getDisplayModes() override;
	virtual ::java::awt::image::ColorModel* getDynamicColorModel();
	virtual $String* getIDstring() override;
	virtual ::java::awt::DisplayMode* getMatchingDisplayMode(::java::awt::DisplayMode* dm);
	virtual int32_t getMaxConfigs(int32_t screen);
	int32_t getMaxConfigsImpl(int32_t screen);
	virtual float getNativeScaleX(int32_t screen);
	virtual float getNativeScaleY(int32_t screen);
	virtual int32_t getScreen();
	virtual int32_t getType() override;
	virtual void initDevice(int32_t screen);
	static void initIDs();
	virtual void initNativeScale(int32_t screen);
	void initScaleFactors();
	virtual void invalidate(int32_t defaultScreen);
	bool isDefaultDevice();
	virtual bool isDisplayChangeSupported() override;
	static bool isFSExclusiveModeAllowed();
	virtual bool isFullScreenSupported() override;
	bool isPixFmtSupported(int32_t index, int32_t screen);
	virtual bool isValid();
	::java::awt::image::ColorModel* makeColorModel(int32_t screen, bool dynamic);
	virtual void paletteChanged() override;
	virtual void removeDisplayChangedListener(::sun::awt::DisplayChangedListener* client);
	virtual void removeFSWindowListener(::java::awt::Window* w);
	virtual void setDisplayMode(::java::awt::DisplayMode* dm) override;
	virtual void setFullScreenWindow(::java::awt::Window* w) override;
	virtual void setNativeScale(int32_t screen, float scaleX, float scaleY);
	virtual $String* toString() override;
	int32_t screen = 0;
	::java::awt::image::ColorModel* dynamicColorModel = nullptr;
	::java::awt::image::ColorModel* colorModel = nullptr;
	$Array<::java::awt::GraphicsConfiguration>* configs = nullptr;
	::java::awt::GraphicsConfiguration* defaultConfig = nullptr;
	$String* idString = nullptr;
	$String* descString = nullptr;
	bool valid = false;
	::sun::awt::SunDisplayChanger* topLevels = nullptr;
	static bool pfDisabled;
	static ::java::awt::AWTPermission* fullScreenExclusivePermission;
	::java::awt::DisplayMode* defaultDisplayMode = nullptr;
	::java::awt::event::WindowListener* fsWindowListener = nullptr;
	float scaleX = 0.0;
	float scaleY = 0.0;
};

	} // awt
} // sun

#endif // _sun_awt_Win32GraphicsDevice_h_
#ifndef _sun_java2d_d3d_D3DGraphicsDevice_h_
#define _sun_java2d_d3d_D3DGraphicsDevice_h_
//$ class sun.java2d.d3d.D3DGraphicsDevice
//$ extends sun.awt.Win32GraphicsDevice

#include <java/lang/Array.h>
#include <sun/awt/Win32GraphicsDevice.h>

namespace java {
	namespace awt {
		class DisplayMode;
		class Frame;
		class GraphicsConfiguration;
		class Rectangle;
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
	namespace java2d {
		namespace d3d {
			class D3DContext;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {
				class ContextCapabilities;
			}
		}
	}
}

namespace sun {
	namespace java2d {
		namespace d3d {

class D3DGraphicsDevice : public ::sun::awt::Win32GraphicsDevice {
	$class(D3DGraphicsDevice, 0, ::sun::awt::Win32GraphicsDevice)
public:
	D3DGraphicsDevice();
	void init$(int32_t screennum, ::sun::java2d::pipe::hw::ContextCapabilities* d3dCaps);
	virtual void addFSWindowListener(::java::awt::Window* w) override;
	virtual void configDisplayMode(int32_t screen, ::java::awt::peer::WindowPeer* w, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate) override;
	static void configDisplayModeNative(int32_t screen, int64_t hwnd, int32_t width, int32_t height, int32_t bitDepth, int32_t refreshRate);
	static ::sun::java2d::d3d::D3DGraphicsDevice* createDevice(int32_t screen);
	virtual void displayChanged() override;
	virtual void enterFullScreenExclusive(int32_t screen, ::java::awt::peer::WindowPeer* wp) override;
	static bool enterFullScreenExclusiveNative(int32_t screen, int64_t hwnd);
	virtual void enumDisplayModes(int32_t screen, ::java::util::ArrayList* modes) override;
	static void enumDisplayModesNative(int32_t screen, ::java::util::ArrayList* modes);
	virtual void exitFullScreenExclusive(int32_t screen, ::java::awt::peer::WindowPeer* w) override;
	static bool exitFullScreenExclusiveNative(int32_t screen);
	virtual int32_t getAvailableAcceleratedMemory() override;
	static int64_t getAvailableAcceleratedMemoryNative(int32_t screen);
	virtual $Array<::java::awt::GraphicsConfiguration>* getConfigurations() override;
	::sun::java2d::d3d::D3DContext* getContext();
	::sun::java2d::pipe::hw::ContextCapabilities* getContextCapabilities();
	virtual ::java::awt::DisplayMode* getCurrentDisplayMode(int32_t screen) override;
	static ::java::awt::DisplayMode* getCurrentDisplayModeNative(int32_t screen);
	virtual ::java::awt::GraphicsConfiguration* getDefaultConfiguration() override;
	static ::sun::java2d::pipe::hw::ContextCapabilities* getDeviceCaps(int32_t screen);
	static int32_t getDeviceCapsNative(int32_t screen);
	static $String* getDeviceIdNative(int32_t screen);
	::java::awt::Frame* getToplevelOwner(::java::awt::Window* w);
	static bool initD3D();
	virtual void invalidate(int32_t defaultScreen) override;
	bool isCapPresent(int32_t cap);
	static bool isD3DAvailable();
	static bool isD3DAvailableOnDevice(int32_t screen);
	static bool isD3DAvailableOnDeviceNative(int32_t screen);
	bool isD3DEnabledOnDevice();
	virtual void removeFSWindowListener(::java::awt::Window* w) override;
	::sun::java2d::d3d::D3DContext* context = nullptr;
	static bool d3dAvailable;
	::sun::java2d::pipe::hw::ContextCapabilities* d3dCaps = nullptr;
	bool fsStatus = false;
	::java::awt::Rectangle* ownerOrigBounds = nullptr;
	bool ownerWasVisible = false;
	::java::awt::Window* realFSWindow = nullptr;
	::java::awt::event::WindowListener* fsWindowListener = nullptr;
	bool fsWindowWasAlwaysOnTop = false;
};

		} // d3d
	} // java2d
} // sun

#endif // _sun_java2d_d3d_D3DGraphicsDevice_h_
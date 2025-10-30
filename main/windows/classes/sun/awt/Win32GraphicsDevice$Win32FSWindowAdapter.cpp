#include <sun/awt/Win32GraphicsDevice$Win32FSWindowAdapter.h>

#include <java/awt/DisplayMode.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <sun/awt/Win32GraphicsDevice.h>
#include <jcpp.h>

#undef ICONIFIED
#undef NORMAL

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $DisplayMode = ::java::awt::DisplayMode;
using $Frame = ::java::awt::Frame;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Win32GraphicsDevice = ::sun::awt::Win32GraphicsDevice;

namespace sun {
	namespace awt {

$FieldInfo _Win32GraphicsDevice$Win32FSWindowAdapter_FieldInfo_[] = {
	{"device", "Lsun/awt/Win32GraphicsDevice;", nullptr, $PRIVATE, $field(Win32GraphicsDevice$Win32FSWindowAdapter, device)},
	{"dm", "Ljava/awt/DisplayMode;", nullptr, $PRIVATE, $field(Win32GraphicsDevice$Win32FSWindowAdapter, dm)},
	{}
};

$MethodInfo _Win32GraphicsDevice$Win32FSWindowAdapter_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/Win32GraphicsDevice;)V", nullptr, 0, $method(static_cast<void(Win32GraphicsDevice$Win32FSWindowAdapter::*)($Win32GraphicsDevice*)>(&Win32GraphicsDevice$Win32FSWindowAdapter::init$))},
	{"setFSWindowsState", "(Ljava/awt/Window;I)V", nullptr, $PRIVATE, $method(static_cast<void(Win32GraphicsDevice$Win32FSWindowAdapter::*)($Window*,int32_t)>(&Win32GraphicsDevice$Win32FSWindowAdapter::setFSWindowsState))},
	{"windowActivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeactivated", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowDeiconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Win32GraphicsDevice$Win32FSWindowAdapter_InnerClassesInfo_[] = {
	{"sun.awt.Win32GraphicsDevice$Win32FSWindowAdapter", "sun.awt.Win32GraphicsDevice", "Win32FSWindowAdapter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Win32GraphicsDevice$Win32FSWindowAdapter_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.Win32GraphicsDevice$Win32FSWindowAdapter",
	"java.awt.event.WindowAdapter",
	nullptr,
	_Win32GraphicsDevice$Win32FSWindowAdapter_FieldInfo_,
	_Win32GraphicsDevice$Win32FSWindowAdapter_MethodInfo_,
	nullptr,
	nullptr,
	_Win32GraphicsDevice$Win32FSWindowAdapter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.Win32GraphicsDevice"
};

$Object* allocate$Win32GraphicsDevice$Win32FSWindowAdapter($Class* clazz) {
	return $of($alloc(Win32GraphicsDevice$Win32FSWindowAdapter));
}

void Win32GraphicsDevice$Win32FSWindowAdapter::init$($Win32GraphicsDevice* device) {
	$WindowAdapter::init$();
	$set(this, device, device);
}

void Win32GraphicsDevice$Win32FSWindowAdapter::setFSWindowsState($Window* other, int32_t state) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsDeviceArray, gds, $nc($($GraphicsEnvironment::getLocalGraphicsEnvironment()))->getScreenDevices());
	if (other != nullptr) {
		{
			$var($GraphicsDeviceArray, arr$, gds);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($GraphicsDevice, gd, arr$->get(i$));
				{
					if (other == $nc(gd)->getFullScreenWindow()) {
						return;
					}
				}
			}
		}
	}
	{
		$var($GraphicsDeviceArray, arr$, gds);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, gd, arr$->get(i$));
			{
				$var($Window, fsw, $nc(gd)->getFullScreenWindow());
				if ($instanceOf($Frame, fsw)) {
					$nc(($cast($Frame, fsw)))->setExtendedState(state);
				}
			}
		}
	}
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowDeactivated($WindowEvent* e) {
	setFSWindowsState($($nc(e)->getOppositeWindow()), $Frame::ICONIFIED);
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowActivated($WindowEvent* e) {
	setFSWindowsState($($nc(e)->getOppositeWindow()), $Frame::NORMAL);
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowIconified($WindowEvent* e) {
	$var($DisplayMode, ddm, $nc(this->device)->defaultDisplayMode);
	if (ddm != nullptr) {
		$set(this, dm, $nc(this->device)->getDisplayMode());
		$nc(this->device)->setDisplayMode(ddm);
	}
}

void Win32GraphicsDevice$Win32FSWindowAdapter::windowDeiconified($WindowEvent* e) {
	if (this->dm != nullptr) {
		$nc(this->device)->setDisplayMode(this->dm);
		$set(this, dm, nullptr);
	}
}

Win32GraphicsDevice$Win32FSWindowAdapter::Win32GraphicsDevice$Win32FSWindowAdapter() {
}

$Class* Win32GraphicsDevice$Win32FSWindowAdapter::load$($String* name, bool initialize) {
	$loadClass(Win32GraphicsDevice$Win32FSWindowAdapter, name, initialize, &_Win32GraphicsDevice$Win32FSWindowAdapter_ClassInfo_, allocate$Win32GraphicsDevice$Win32FSWindowAdapter);
	return class$;
}

$Class* Win32GraphicsDevice$Win32FSWindowAdapter::class$ = nullptr;

	} // awt
} // sun
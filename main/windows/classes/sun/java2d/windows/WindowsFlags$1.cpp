#include <sun/java2d/windows/WindowsFlags$1.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/opengl/WGLGraphicsConfig.h>
#include <sun/java2d/windows/WindowsFlags.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WGLGraphicsConfig = ::sun::java2d::opengl::WGLGraphicsConfig;
using $WindowsFlags = ::sun::java2d::windows::WindowsFlags;

namespace sun {
	namespace java2d {
		namespace windows {

$MethodInfo _WindowsFlags$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WindowsFlags$1::*)()>(&WindowsFlags$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFlags$1_EnclosingMethodInfo_ = {
	"sun.java2d.windows.WindowsFlags",
	"initJavaFlags",
	"()V"
};

$InnerClassInfo _WindowsFlags$1_InnerClassesInfo_[] = {
	{"sun.java2d.windows.WindowsFlags$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFlags$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.windows.WindowsFlags$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_WindowsFlags$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_WindowsFlags$1_EnclosingMethodInfo_,
	_WindowsFlags$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.windows.WindowsFlags"
};

$Object* allocate$WindowsFlags$1($Class* clazz) {
	return $of($alloc(WindowsFlags$1));
}

void WindowsFlags$1::init$() {
}

$Object* WindowsFlags$1::run() {
	$init($WindowsFlags);
	$WindowsFlags::magPresent = $WindowsFlags::getBooleanProp("javax.accessibility.screen_magnifier_present"_s, false);
	bool ddEnabled = !$WindowsFlags::getBooleanProp("sun.java2d.noddraw"_s, $WindowsFlags::magPresent);
	bool ddOffscreenEnabled = $WindowsFlags::getBooleanProp("sun.java2d.ddoffscreen"_s, ddEnabled);
	$WindowsFlags::d3dEnabled = $WindowsFlags::getBooleanProp("sun.java2d.d3d"_s, ddEnabled && ddOffscreenEnabled);
	$WindowsFlags::d3dOnScreenEnabled = $WindowsFlags::getBooleanProp("sun.java2d.d3d.onscreen"_s, $WindowsFlags::d3dEnabled);
	$WindowsFlags::oglEnabled = $WindowsFlags::getBooleanProp("sun.java2d.opengl"_s, false);
	if ($WindowsFlags::oglEnabled) {
		$WindowsFlags::oglVerbose = $WindowsFlags::isBooleanPropTrueVerbose("sun.java2d.opengl"_s);
		if ($WGLGraphicsConfig::isWGLAvailable()) {
			$WindowsFlags::d3dEnabled = false;
		} else {
			if ($WindowsFlags::oglVerbose) {
				$init($System);
				$nc($System::out)->println("Could not enable OpenGL pipeline (WGL not available)"_s);
			}
			$WindowsFlags::oglEnabled = false;
		}
	}
	$WindowsFlags::gdiBlitEnabled = $WindowsFlags::getBooleanProp("sun.java2d.gdiBlit"_s, true);
	$WindowsFlags::d3dSet = $WindowsFlags::getPropertySet("sun.java2d.d3d"_s);
	if ($WindowsFlags::d3dSet) {
		$WindowsFlags::d3dVerbose = $WindowsFlags::isBooleanPropTrueVerbose("sun.java2d.d3d"_s);
	}
	$WindowsFlags::offscreenSharingEnabled = $WindowsFlags::getBooleanProp("sun.java2d.offscreenSharing"_s, false);
	$var($String, dpiOverride, $System::getProperty("sun.java2d.dpiaware"_s));
	if (dpiOverride != nullptr) {
		$WindowsFlags::setHighDPIAware = dpiOverride->equalsIgnoreCase("true"_s);
	} else {
		$var($String, sunLauncherProperty, $System::getProperty("sun.java.launcher"_s, "unknown"_s));
		$WindowsFlags::setHighDPIAware = $nc(sunLauncherProperty)->equalsIgnoreCase("SUN_STANDARD"_s);
	}
	return $of(nullptr);
}

WindowsFlags$1::WindowsFlags$1() {
}

$Class* WindowsFlags$1::load$($String* name, bool initialize) {
	$loadClass(WindowsFlags$1, name, initialize, &_WindowsFlags$1_ClassInfo_, allocate$WindowsFlags$1);
	return class$;
}

$Class* WindowsFlags$1::class$ = nullptr;

		} // windows
	} // java2d
} // sun
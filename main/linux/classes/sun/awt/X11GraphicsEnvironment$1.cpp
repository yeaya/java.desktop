#include <sun/awt/X11GraphicsEnvironment$1.h>

#include <java/awt/GraphicsEnvironment.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/java2d/xr/XRSurfaceData.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $XRSurfaceData = ::sun::java2d::xr::XRSurfaceData;

namespace sun {
	namespace awt {

$MethodInfo _X11GraphicsEnvironment$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(X11GraphicsEnvironment$1::*)()>(&X11GraphicsEnvironment$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _X11GraphicsEnvironment$1_EnclosingMethodInfo_ = {
	"sun.awt.X11GraphicsEnvironment",
	nullptr,
	nullptr
};

$InnerClassInfo _X11GraphicsEnvironment$1_InnerClassesInfo_[] = {
	{"sun.awt.X11GraphicsEnvironment$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _X11GraphicsEnvironment$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11GraphicsEnvironment$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_X11GraphicsEnvironment$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_X11GraphicsEnvironment$1_EnclosingMethodInfo_,
	_X11GraphicsEnvironment$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11GraphicsEnvironment"
};

$Object* allocate$X11GraphicsEnvironment$1($Class* clazz) {
	return $of($alloc(X11GraphicsEnvironment$1));
}

void X11GraphicsEnvironment$1::init$() {
}

$Object* X11GraphicsEnvironment$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	if (!$GraphicsEnvironment::isHeadless()) {
		bool glxRequested = false;
		$var($String, prop, $System::getProperty("sun.java2d.opengl"_s));
		if (prop != nullptr) {
			bool var$0 = prop->equals("true"_s);
			if (var$0 || prop->equals("t"_s)) {
				glxRequested = true;
			} else {
				bool var$2 = prop->equals("True"_s);
				if (var$2 || prop->equals("T"_s)) {
					glxRequested = true;
					$init($X11GraphicsEnvironment);
					$X11GraphicsEnvironment::glxVerbose = true;
				}
			}
		}
		bool xRenderRequested = true;
		bool xRenderIgnoreLinuxVersion = false;
		$var($String, xProp, $System::getProperty("sun.java2d.xrender"_s));
		if (xProp != nullptr) {
			bool var$3 = xProp->equals("false"_s);
			if (var$3 || xProp->equals("f"_s)) {
				xRenderRequested = false;
			} else {
				bool var$5 = xProp->equals("True"_s);
				if (var$5 || xProp->equals("T"_s)) {
					xRenderRequested = true;
					$init($X11GraphicsEnvironment);
					$X11GraphicsEnvironment::xRenderVerbose = true;
				}
			}
			bool var$6 = xProp->equalsIgnoreCase("t"_s);
			if (var$6 || xProp->equalsIgnoreCase("true"_s)) {
				xRenderIgnoreLinuxVersion = true;
			}
		}
		$X11GraphicsEnvironment::initDisplay(glxRequested);
		if (glxRequested) {
			$X11GraphicsEnvironment::glxAvailable = $X11GraphicsEnvironment::initGLX();
			if ($X11GraphicsEnvironment::glxVerbose && !$X11GraphicsEnvironment::glxAvailable) {
				$nc($System::out)->println("Could not enable OpenGL pipeline (GLX 1.3 not available)"_s);
			}
		}
		if (xRenderRequested) {
			$X11GraphicsEnvironment::xRenderAvailable = $X11GraphicsEnvironment::initXRender($X11GraphicsEnvironment::xRenderVerbose, xRenderIgnoreLinuxVersion);
			if ($X11GraphicsEnvironment::xRenderVerbose && !$X11GraphicsEnvironment::xRenderAvailable) {
				$nc($System::out)->println("Could not enable XRender pipeline"_s);
			}
		}
		if ($X11GraphicsEnvironment::xRenderAvailable) {
			$XRSurfaceData::initXRSurfaceData();
		}
	}
	return $of(nullptr);
}

X11GraphicsEnvironment$1::X11GraphicsEnvironment$1() {
}

$Class* X11GraphicsEnvironment$1::load$($String* name, bool initialize) {
	$loadClass(X11GraphicsEnvironment$1, name, initialize, &_X11GraphicsEnvironment$1_ClassInfo_, allocate$X11GraphicsEnvironment$1);
	return class$;
}

$Class* X11GraphicsEnvironment$1::class$ = nullptr;

	} // awt
} // sun
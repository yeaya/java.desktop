#include <sun/java2d/windows/WindowsFlags.h>

#include <java/lang/NumberFormatException.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/windows/WToolkit.h>
#include <sun/java2d/windows/WindowsFlags$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $WindowsFlags$1 = ::sun::java2d::windows::WindowsFlags$1;

namespace sun {
	namespace java2d {
		namespace windows {

$FieldInfo _WindowsFlags_FieldInfo_[] = {
	{"gdiBlitEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, gdiBlitEnabled)},
	{"d3dEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, d3dEnabled)},
	{"d3dVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, d3dVerbose)},
	{"d3dSet", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, d3dSet)},
	{"d3dOnScreenEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, d3dOnScreenEnabled)},
	{"oglEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, oglEnabled)},
	{"oglVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, oglVerbose)},
	{"offscreenSharingEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, offscreenSharingEnabled)},
	{"magPresent", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, magPresent)},
	{"setHighDPIAware", "Z", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFlags, setHighDPIAware)},
	{}
};

$MethodInfo _WindowsFlags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsFlags::*)()>(&WindowsFlags::init$))},
	{"getBooleanProp", "(Ljava/lang/String;Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,bool)>(&WindowsFlags::getBooleanProp))},
	{"getIntProp", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t)>(&WindowsFlags::getIntProp))},
	{"getPropertySet", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&WindowsFlags::getPropertySet))},
	{"initFlags", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&WindowsFlags::initFlags))},
	{"initJavaFlags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&WindowsFlags::initJavaFlags))},
	{"initNativeFlags", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&WindowsFlags::initNativeFlags))},
	{"isBooleanPropTrueVerbose", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&WindowsFlags::isBooleanPropTrueVerbose))},
	{"isD3DEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isD3DEnabled))},
	{"isD3DOnScreenEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isD3DOnScreenEnabled))},
	{"isD3DSet", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isD3DSet))},
	{"isD3DVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isD3DVerbose))},
	{"isGdiBlitEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isGdiBlitEnabled))},
	{"isMagPresent", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isMagPresent))},
	{"isOGLEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isOGLEnabled))},
	{"isOGLVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isOGLVerbose))},
	{"isOffscreenSharingEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&WindowsFlags::isOffscreenSharingEnabled))},
	{}
};

#define _METHOD_INDEX_initNativeFlags 6

$InnerClassInfo _WindowsFlags_InnerClassesInfo_[] = {
	{"sun.java2d.windows.WindowsFlags$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFlags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.windows.WindowsFlags",
	"java.lang.Object",
	nullptr,
	_WindowsFlags_FieldInfo_,
	_WindowsFlags_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFlags_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.windows.WindowsFlags$1"
};

$Object* allocate$WindowsFlags($Class* clazz) {
	return $of($alloc(WindowsFlags));
}

bool WindowsFlags::gdiBlitEnabled = false;
bool WindowsFlags::d3dEnabled = false;
bool WindowsFlags::d3dVerbose = false;
bool WindowsFlags::d3dSet = false;
bool WindowsFlags::d3dOnScreenEnabled = false;
bool WindowsFlags::oglEnabled = false;
bool WindowsFlags::oglVerbose = false;
bool WindowsFlags::offscreenSharingEnabled = false;
bool WindowsFlags::magPresent = false;
bool WindowsFlags::setHighDPIAware = false;

void WindowsFlags::init$() {
}

bool WindowsFlags::initNativeFlags() {
	$init(WindowsFlags);
	bool $ret = false;
	$prepareNativeStatic(WindowsFlags, initNativeFlags, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void WindowsFlags::initFlags() {
	$init(WindowsFlags);
}

bool WindowsFlags::getBooleanProp($String* p, bool defaultVal) {
	$init(WindowsFlags);
	$var($String, propString, $System::getProperty(p));
	bool returnVal = defaultVal;
	if (propString != nullptr) {
		bool var$3 = propString->equals("true"_s);
		bool var$2 = var$3 || propString->equals("t"_s);
		bool var$1 = var$2 || propString->equals("True"_s);
		bool var$0 = var$1 || propString->equals("T"_s);
		if (var$0 || propString->isEmpty()) {
			returnVal = true;
		} else {
			bool var$9 = propString->equals("false"_s);
			bool var$8 = var$9 || propString->equals("f"_s);
			bool var$7 = var$8 || propString->equals("False"_s);
			if (var$7 || propString->equals("F"_s)) {
				returnVal = false;
			}
		}
	}
	return returnVal;
}

bool WindowsFlags::isBooleanPropTrueVerbose($String* p) {
	$init(WindowsFlags);
	$var($String, propString, $System::getProperty(p));
	if (propString != nullptr) {
		bool var$0 = propString->equals("True"_s);
		if (var$0 || propString->equals("T"_s)) {
			return true;
		}
	}
	return false;
}

int32_t WindowsFlags::getIntProp($String* p, int32_t defaultVal) {
	$init(WindowsFlags);
	$var($String, propString, $System::getProperty(p));
	int32_t returnVal = defaultVal;
	if (propString != nullptr) {
		try {
			returnVal = $Integer::parseInt(propString);
		} catch ($NumberFormatException& e) {
		}
	}
	return returnVal;
}

bool WindowsFlags::getPropertySet($String* p) {
	$init(WindowsFlags);
	$var($String, propString, $System::getProperty(p));
	return (propString != nullptr) ? true : false;
}

void WindowsFlags::initJavaFlags() {
	$init(WindowsFlags);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($WindowsFlags$1)));
}

bool WindowsFlags::isD3DEnabled() {
	$init(WindowsFlags);
	return WindowsFlags::d3dEnabled;
}

bool WindowsFlags::isD3DSet() {
	$init(WindowsFlags);
	return WindowsFlags::d3dSet;
}

bool WindowsFlags::isD3DOnScreenEnabled() {
	$init(WindowsFlags);
	return WindowsFlags::d3dOnScreenEnabled;
}

bool WindowsFlags::isD3DVerbose() {
	$init(WindowsFlags);
	return WindowsFlags::d3dVerbose;
}

bool WindowsFlags::isGdiBlitEnabled() {
	$init(WindowsFlags);
	return WindowsFlags::gdiBlitEnabled;
}

bool WindowsFlags::isOffscreenSharingEnabled() {
	$init(WindowsFlags);
	return WindowsFlags::offscreenSharingEnabled;
}

bool WindowsFlags::isMagPresent() {
	$init(WindowsFlags);
	return WindowsFlags::magPresent;
}

bool WindowsFlags::isOGLEnabled() {
	$init(WindowsFlags);
	return WindowsFlags::oglEnabled;
}

bool WindowsFlags::isOGLVerbose() {
	$init(WindowsFlags);
	return WindowsFlags::oglVerbose;
}

void clinit$WindowsFlags($Class* class$) {
	{
		$WToolkit::loadLibraries();
		WindowsFlags::initJavaFlags();
		WindowsFlags::initNativeFlags();
	}
}

WindowsFlags::WindowsFlags() {
}

$Class* WindowsFlags::load$($String* name, bool initialize) {
	$loadClass(WindowsFlags, name, initialize, &_WindowsFlags_ClassInfo_, clinit$WindowsFlags, allocate$WindowsFlags);
	return class$;
}

$Class* WindowsFlags::class$ = nullptr;

		} // windows
	} // java2d
} // sun
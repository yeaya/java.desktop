#include <sun/java2d/MacOSFlags.h>

#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/java2d/MacOSFlags$PropertyState.h>
#include <sun/java2d/metal/MTLGraphicsConfig.h>
#include <sun/java2d/opengl/CGLGraphicsConfig.h>
#include <jcpp.h>

#undef DISABLED
#undef ENABLED
#undef UNSPECIFIED

using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MacOSFlags$PropertyState = ::sun::java2d::MacOSFlags$PropertyState;
using $MTLGraphicsConfig = ::sun::java2d::metal::MTLGraphicsConfig;
using $CGLGraphicsConfig = ::sun::java2d::opengl::CGLGraphicsConfig;

namespace sun {
	namespace java2d {

class MacOSFlags$$Lambda$lambda$initJavaFlags$0 : public $PrivilegedAction {
	$class(MacOSFlags$$Lambda$lambda$initJavaFlags$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return MacOSFlags::lambda$initJavaFlags$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MacOSFlags$$Lambda$lambda$initJavaFlags$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MacOSFlags$$Lambda$lambda$initJavaFlags$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacOSFlags$$Lambda$lambda$initJavaFlags$0::*)()>(&MacOSFlags$$Lambda$lambda$initJavaFlags$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo MacOSFlags$$Lambda$lambda$initJavaFlags$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.java2d.MacOSFlags$$Lambda$lambda$initJavaFlags$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* MacOSFlags$$Lambda$lambda$initJavaFlags$0::load$($String* name, bool initialize) {
	$loadClass(MacOSFlags$$Lambda$lambda$initJavaFlags$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MacOSFlags$$Lambda$lambda$initJavaFlags$0::class$ = nullptr;

$FieldInfo _MacOSFlags_FieldInfo_[] = {
	{"oglEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, oglEnabled)},
	{"oglVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, oglVerbose)},
	{"metalEnabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, metalEnabled)},
	{"metalVerbose", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MacOSFlags, metalVerbose)},
	{}
};

$MethodInfo _MacOSFlags_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacOSFlags::*)()>(&MacOSFlags::init$))},
	{"getBooleanProp", "(Ljava/lang/String;Lsun/java2d/MacOSFlags$PropertyState;)Lsun/java2d/MacOSFlags$PropertyState;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MacOSFlags$PropertyState*(*)($String*,$MacOSFlags$PropertyState*)>(&MacOSFlags::getBooleanProp))},
	{"initJavaFlags", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&MacOSFlags::initJavaFlags))},
	{"isBooleanPropTrueVerbose", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&MacOSFlags::isBooleanPropTrueVerbose))},
	{"isMetalEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MacOSFlags::isMetalEnabled))},
	{"isMetalVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MacOSFlags::isMetalVerbose))},
	{"isOGLEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MacOSFlags::isOGLEnabled))},
	{"isOGLVerbose", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&MacOSFlags::isOGLVerbose))},
	{"lambda$initJavaFlags$0", "()Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)()>(&MacOSFlags::lambda$initJavaFlags$0))},
	{}
};

$InnerClassInfo _MacOSFlags_InnerClassesInfo_[] = {
	{"sun.java2d.MacOSFlags$PropertyState", "sun.java2d.MacOSFlags", "PropertyState", $PRIVATE | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _MacOSFlags_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.MacOSFlags",
	"java.lang.Object",
	nullptr,
	_MacOSFlags_FieldInfo_,
	_MacOSFlags_MethodInfo_,
	nullptr,
	nullptr,
	_MacOSFlags_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.java2d.MacOSFlags$PropertyState"
};

$Object* allocate$MacOSFlags($Class* clazz) {
	return $of($alloc(MacOSFlags));
}

bool MacOSFlags::oglEnabled = false;
bool MacOSFlags::oglVerbose = false;
bool MacOSFlags::metalEnabled = false;
bool MacOSFlags::metalVerbose = false;

void MacOSFlags::init$() {
}

$MacOSFlags$PropertyState* MacOSFlags::getBooleanProp($String* p, $MacOSFlags$PropertyState* defaultVal) {
	$init(MacOSFlags);
	$var($String, propString, $System::getProperty(p));
	$MacOSFlags$PropertyState* returnVal = defaultVal;
	if (propString != nullptr) {
		bool var$3 = propString->equals("true"_s);
		bool var$2 = var$3 || propString->equals("t"_s);
		bool var$1 = var$2 || propString->equals("True"_s);
		bool var$0 = var$1 || propString->equals("T"_s);
		if (var$0 || propString->equals(""_s)) {
			$init($MacOSFlags$PropertyState);
			returnVal = $MacOSFlags$PropertyState::ENABLED;
		} else {
			bool var$9 = propString->equals("false"_s);
			bool var$8 = var$9 || propString->equals("f"_s);
			bool var$7 = var$8 || propString->equals("False"_s);
			if (var$7 || propString->equals("F"_s)) {
				$init($MacOSFlags$PropertyState);
				returnVal = $MacOSFlags$PropertyState::DISABLED;
			}
		}
	}
	return returnVal;
}

bool MacOSFlags::isBooleanPropTrueVerbose($String* p) {
	$init(MacOSFlags);
	$var($String, propString, $System::getProperty(p));
	if (propString != nullptr) {
		bool var$0 = propString->equals("True"_s);
		if (var$0 || propString->equals("T"_s)) {
			return true;
		}
	}
	return false;
}

void MacOSFlags::initJavaFlags() {
	$init(MacOSFlags);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(MacOSFlags$$Lambda$lambda$initJavaFlags$0)));
}

bool MacOSFlags::isMetalEnabled() {
	$init(MacOSFlags);
	return MacOSFlags::metalEnabled;
}

bool MacOSFlags::isMetalVerbose() {
	$init(MacOSFlags);
	return MacOSFlags::metalVerbose;
}

bool MacOSFlags::isOGLEnabled() {
	$init(MacOSFlags);
	return MacOSFlags::oglEnabled;
}

bool MacOSFlags::isOGLVerbose() {
	$init(MacOSFlags);
	return MacOSFlags::oglVerbose;
}

$Object* MacOSFlags::lambda$initJavaFlags$0() {
	$init(MacOSFlags);
	$init($MacOSFlags$PropertyState);
	$MacOSFlags$PropertyState* oglState = getBooleanProp("sun.java2d.opengl"_s, $MacOSFlags$PropertyState::UNSPECIFIED);
	$MacOSFlags$PropertyState* metalState = getBooleanProp("sun.java2d.metal"_s, $MacOSFlags$PropertyState::UNSPECIFIED);
	if ((oglState == $MacOSFlags$PropertyState::UNSPECIFIED && metalState == $MacOSFlags$PropertyState::UNSPECIFIED) || (oglState == $MacOSFlags$PropertyState::DISABLED && metalState == $MacOSFlags$PropertyState::DISABLED) || (oglState == $MacOSFlags$PropertyState::ENABLED && metalState == $MacOSFlags$PropertyState::ENABLED)) {
		oglState = $MacOSFlags$PropertyState::ENABLED;
		metalState = $MacOSFlags$PropertyState::DISABLED;
	}
	if (metalState == $MacOSFlags$PropertyState::UNSPECIFIED) {
		if (oglState == $MacOSFlags$PropertyState::DISABLED) {
			MacOSFlags::oglEnabled = false;
			MacOSFlags::metalEnabled = true;
		} else {
			MacOSFlags::oglEnabled = true;
			MacOSFlags::metalEnabled = false;
		}
	} else {
		if (metalState == $MacOSFlags$PropertyState::ENABLED) {
			MacOSFlags::oglEnabled = false;
			MacOSFlags::metalEnabled = true;
		} else {
			if (metalState == $MacOSFlags$PropertyState::DISABLED) {
				MacOSFlags::oglEnabled = true;
				MacOSFlags::metalEnabled = false;
			}
		}
	}
	MacOSFlags::oglVerbose = isBooleanPropTrueVerbose("sun.java2d.opengl"_s);
	MacOSFlags::metalVerbose = isBooleanPropTrueVerbose("sun.java2d.metal"_s);
	if (MacOSFlags::oglEnabled && !MacOSFlags::metalEnabled) {
		if (!$CGLGraphicsConfig::isCGLAvailable()) {
			if (MacOSFlags::oglVerbose) {
				$nc($System::out)->println("Could not enable OpenGL pipeline (CGL not available)"_s);
			}
			MacOSFlags::oglEnabled = false;
			MacOSFlags::metalEnabled = $MTLGraphicsConfig::isMetalAvailable();
		}
	} else {
		if (MacOSFlags::metalEnabled && !MacOSFlags::oglEnabled) {
			if (!$MTLGraphicsConfig::isMetalAvailable()) {
				if (MacOSFlags::metalVerbose) {
					$nc($System::out)->println("Could not enable Metal pipeline (Metal framework not available)"_s);
				}
				MacOSFlags::metalEnabled = false;
				MacOSFlags::oglEnabled = $CGLGraphicsConfig::isCGLAvailable();
			}
		}
	}
	if (!MacOSFlags::metalEnabled && !MacOSFlags::oglEnabled) {
		$throwNew($InternalError, "Error - unable to initialize any rendering pipeline."_s);
	}
	return $of(nullptr);
}

void clinit$MacOSFlags($Class* class$) {
	{
		MacOSFlags::initJavaFlags();
	}
}

MacOSFlags::MacOSFlags() {
}

$Class* MacOSFlags::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MacOSFlags$$Lambda$lambda$initJavaFlags$0::classInfo$.name)) {
			return MacOSFlags$$Lambda$lambda$initJavaFlags$0::load$(name, initialize);
		}
	}
	$loadClass(MacOSFlags, name, initialize, &_MacOSFlags_ClassInfo_, clinit$MacOSFlags, allocate$MacOSFlags);
	return class$;
}

$Class* MacOSFlags::class$ = nullptr;

	} // java2d
} // sun
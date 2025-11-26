#include <sun/awt/PlatformGraphicsInfo.h>

#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Toolkit.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11GraphicsEnvironment.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $X11GraphicsEnvironment = ::sun::awt::X11GraphicsEnvironment;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;

namespace sun {
	namespace awt {

class PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0 : public $PrivilegedAction {
	$class(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(PlatformGraphicsInfo::lambda$getDefaultHeadlessProperty$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::*)()>(&PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::load$($String* name, bool initialize) {
	$loadClass(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::class$ = nullptr;

$MethodInfo _PlatformGraphicsInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformGraphicsInfo::*)()>(&PlatformGraphicsInfo::init$))},
	{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GraphicsEnvironment*(*)()>(&PlatformGraphicsInfo::createGE))},
	{"createToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Toolkit*(*)()>(&PlatformGraphicsInfo::createToolkit))},
	{"getDefaultHeadlessMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&PlatformGraphicsInfo::getDefaultHeadlessMessage))},
	{"getDefaultHeadlessProperty", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&PlatformGraphicsInfo::getDefaultHeadlessProperty))},
	{"lambda$getDefaultHeadlessProperty$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&PlatformGraphicsInfo::lambda$getDefaultHeadlessProperty$0))},
	{}
};

$ClassInfo _PlatformGraphicsInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.PlatformGraphicsInfo",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PlatformGraphicsInfo_MethodInfo_
};

$Object* allocate$PlatformGraphicsInfo($Class* clazz) {
	return $of($alloc(PlatformGraphicsInfo));
}

void PlatformGraphicsInfo::init$() {
}

$GraphicsEnvironment* PlatformGraphicsInfo::createGE() {
	return $new($X11GraphicsEnvironment);
}

$Toolkit* PlatformGraphicsInfo::createToolkit() {
	return $new($XToolkit);
}

bool PlatformGraphicsInfo::getDefaultHeadlessProperty() {
	$load(PlatformGraphicsInfo);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0)))))))->booleanValue();
}

$String* PlatformGraphicsInfo::getDefaultHeadlessMessage() {
	return "\nNo X11 DISPLAY variable was set,\nbut this program performed an operation which requires it."_s;
}

$Boolean* PlatformGraphicsInfo::lambda$getDefaultHeadlessProperty$0() {
	$useLocalCurrentObjectStackCache();
	$var($String, display, $System::getenv("DISPLAY"_s));
	return $Boolean::valueOf(display == nullptr || $($nc(display)->trim())->isEmpty());
}

PlatformGraphicsInfo::PlatformGraphicsInfo() {
}

$Class* PlatformGraphicsInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::classInfo$.name)) {
			return PlatformGraphicsInfo$$Lambda$lambda$getDefaultHeadlessProperty$0::load$(name, initialize);
		}
	}
	$loadClass(PlatformGraphicsInfo, name, initialize, &_PlatformGraphicsInfo_ClassInfo_, allocate$PlatformGraphicsInfo);
	return class$;
}

$Class* PlatformGraphicsInfo::class$ = nullptr;

	} // awt
} // sun
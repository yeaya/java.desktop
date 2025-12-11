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
#include <sun/awt/CGraphicsEnvironment.h>
#include <sun/awt/SunToolkit.h>
#include <sun/java2d/SunGraphicsEnvironment.h>
#include <sun/lwawt/LWToolkit.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Toolkit = ::java::awt::Toolkit;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CGraphicsEnvironment = ::sun::awt::CGraphicsEnvironment;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunGraphicsEnvironment = ::sun::java2d::SunGraphicsEnvironment;
using $LWToolkit = ::sun::lwawt::LWToolkit;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace awt {

class PlatformGraphicsInfo$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(PlatformGraphicsInfo$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(PlatformGraphicsInfo::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PlatformGraphicsInfo$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PlatformGraphicsInfo$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformGraphicsInfo$$Lambda$lambda$static$0::*)()>(&PlatformGraphicsInfo$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo PlatformGraphicsInfo$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.PlatformGraphicsInfo$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* PlatformGraphicsInfo$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(PlatformGraphicsInfo$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PlatformGraphicsInfo$$Lambda$lambda$static$0::class$ = nullptr;

$MethodInfo _PlatformGraphicsInfo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformGraphicsInfo::*)()>(&PlatformGraphicsInfo::init$))},
	{"createGE", "()Ljava/awt/GraphicsEnvironment;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$GraphicsEnvironment*(*)()>(&PlatformGraphicsInfo::createGE))},
	{"createToolkit", "()Ljava/awt/Toolkit;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Toolkit*(*)()>(&PlatformGraphicsInfo::createToolkit))},
	{"getDefaultHeadlessMessage", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&PlatformGraphicsInfo::getDefaultHeadlessMessage))},
	{"getDefaultHeadlessProperty", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&PlatformGraphicsInfo::getDefaultHeadlessProperty))},
	{"isInAquaSession", "()Z", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&PlatformGraphicsInfo::isInAquaSession))},
	{"lambda$static$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&PlatformGraphicsInfo::lambda$static$0))},
	{}
};

#define _METHOD_INDEX_isInAquaSession 5

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
	$init(PlatformGraphicsInfo);
	return $new($CGraphicsEnvironment);
}

$Toolkit* PlatformGraphicsInfo::createToolkit() {
	$init(PlatformGraphicsInfo);
	return $new($LWCToolkit);
}

bool PlatformGraphicsInfo::isInAquaSession() {
	$init(PlatformGraphicsInfo);
	bool $ret = false;
	$prepareNativeStatic(PlatformGraphicsInfo, isInAquaSession, bool);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

bool PlatformGraphicsInfo::getDefaultHeadlessProperty() {
	$init(PlatformGraphicsInfo);
	return !isInAquaSession();
}

$String* PlatformGraphicsInfo::getDefaultHeadlessMessage() {
	$init(PlatformGraphicsInfo);
	return "\nThe application is not running in a desktop session,\nbut this program performed an operation which requires it."_s;
}

$Void* PlatformGraphicsInfo::lambda$static$0() {
	$init(PlatformGraphicsInfo);
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return nullptr;
}

void clinit$PlatformGraphicsInfo($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(PlatformGraphicsInfo$$Lambda$lambda$static$0)));
	}
}

PlatformGraphicsInfo::PlatformGraphicsInfo() {
}

$Class* PlatformGraphicsInfo::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PlatformGraphicsInfo$$Lambda$lambda$static$0::classInfo$.name)) {
			return PlatformGraphicsInfo$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(PlatformGraphicsInfo, name, initialize, &_PlatformGraphicsInfo_ClassInfo_, clinit$PlatformGraphicsInfo, allocate$PlatformGraphicsInfo);
	return class$;
}

$Class* PlatformGraphicsInfo::class$ = nullptr;

	} // awt
} // sun
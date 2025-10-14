#include <com/sun/media/sound/Platform.h>

#include <com/sun/media/sound/Printer.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $Printer = ::com::sun::media::sound::Printer;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class Platform$$Lambda$lambda$loadLibraries$0 : public $PrivilegedAction {
	$class(Platform$$Lambda$lambda$loadLibraries$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Platform::lambda$loadLibraries$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Platform$$Lambda$lambda$loadLibraries$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Platform$$Lambda$lambda$loadLibraries$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Platform$$Lambda$lambda$loadLibraries$0::*)()>(&Platform$$Lambda$lambda$loadLibraries$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Platform$$Lambda$lambda$loadLibraries$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.media.sound.Platform$$Lambda$lambda$loadLibraries$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Platform$$Lambda$lambda$loadLibraries$0::load$($String* name, bool initialize) {
	$loadClass(Platform$$Lambda$lambda$loadLibraries$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Platform$$Lambda$lambda$loadLibraries$0::class$ = nullptr;

$FieldInfo _Platform_FieldInfo_[] = {
	{"libName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Platform, libName)},
	{"isNativeLibLoaded", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Platform, isNativeLibLoaded)},
	{"bigEndian", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Platform, bigEndian)},
	{}
};

$MethodInfo _Platform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Platform::*)()>(&Platform::init$))},
	{"initialize", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Platform::initialize))},
	{"isBigEndian", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Platform::isBigEndian))},
	{"isDirectAudioEnabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Platform::isDirectAudioEnabled))},
	{"isMidiIOEnabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Platform::isMidiIOEnabled))},
	{"isPortsEnabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&Platform::isPortsEnabled))},
	{"lambda$loadLibraries$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&Platform::lambda$loadLibraries$0))},
	{"loadLibraries", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Platform::loadLibraries))},
	{"nIsBigEndian", "()Z", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<bool(*)()>(&Platform::nIsBigEndian))},
	{}
};

#define _METHOD_INDEX_nIsBigEndian 8

$ClassInfo _Platform_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.Platform",
	"java.lang.Object",
	nullptr,
	_Platform_FieldInfo_,
	_Platform_MethodInfo_
};

$Object* allocate$Platform($Class* clazz) {
	return $of($alloc(Platform));
}

$String* Platform::libName = nullptr;
bool Platform::isNativeLibLoaded = false;
bool Platform::bigEndian = false;

void Platform::init$() {
}

void Platform::initialize() {
	$init(Platform);
}

bool Platform::isBigEndian() {
	$init(Platform);
	return Platform::bigEndian;
}

void Platform::loadLibraries() {
	$init(Platform);
	$beforeCallerSensitive();
	Platform::isNativeLibLoaded = true;
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Platform$$Lambda$lambda$loadLibraries$0)));
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		$init($Printer);
		if ($Printer::err$) {
			$Printer::err($$str({"Couldn\'t load library "_s, Platform::libName, ": "_s, $(t->toString())}));
		}
		Platform::isNativeLibLoaded = false;
	}
	if (Platform::isNativeLibLoaded) {
		Platform::bigEndian = nIsBigEndian();
	}
}

bool Platform::isMidiIOEnabled() {
	$init(Platform);
	return Platform::isNativeLibLoaded;
}

bool Platform::isPortsEnabled() {
	$init(Platform);
	return Platform::isNativeLibLoaded;
}

bool Platform::isDirectAudioEnabled() {
	$init(Platform);
	return Platform::isNativeLibLoaded;
}

bool Platform::nIsBigEndian() {
	$init(Platform);
	bool $ret = false;
	$prepareNativeStatic(Platform, nIsBigEndian, bool);
	$ret = $invokeNativeStatic(Platform, nIsBigEndian);
	$finishNativeStatic();
	return $ret;
}

$Void* Platform::lambda$loadLibraries$0() {
	$init(Platform);
	$beforeCallerSensitive();
	$System::loadLibrary(Platform::libName);
	return nullptr;
}

void clinit$Platform($Class* class$) {
	$assignStatic(Platform::libName, "jsound"_s);
	{
		Platform::loadLibraries();
	}
}

Platform::Platform() {
}

$Class* Platform::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Platform$$Lambda$lambda$loadLibraries$0::classInfo$.name)) {
			return Platform$$Lambda$lambda$loadLibraries$0::load$(name, initialize);
		}
	}
	$loadClass(Platform, name, initialize, &_Platform_ClassInfo_, clinit$Platform, allocate$Platform);
	return class$;
}

$Class* Platform::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
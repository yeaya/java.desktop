#include <sun/awt/windows/WDesktopProperties$WinPlaySound.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WDesktopProperties.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $WDesktopProperties = ::sun::awt::windows::WDesktopProperties;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDesktopProperties$WinPlaySound_FieldInfo_[] = {
	{"this$0", "Lsun/awt/windows/WDesktopProperties;", nullptr, $FINAL | $SYNTHETIC, $field(WDesktopProperties$WinPlaySound, this$0)},
	{"winEventName", "Ljava/lang/String;", nullptr, 0, $field(WDesktopProperties$WinPlaySound, winEventName)},
	{}
};

$MethodInfo _WDesktopProperties$WinPlaySound_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/windows/WDesktopProperties;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WDesktopProperties$WinPlaySound::*)($WDesktopProperties*,$String*)>(&WDesktopProperties$WinPlaySound::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WDesktopProperties$WinPlaySound_InnerClassesInfo_[] = {
	{"sun.awt.windows.WDesktopProperties$WinPlaySound", "sun.awt.windows.WDesktopProperties", "WinPlaySound", 0},
	{}
};

$ClassInfo _WDesktopProperties$WinPlaySound_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WDesktopProperties$WinPlaySound",
	"java.lang.Object",
	"java.lang.Runnable",
	_WDesktopProperties$WinPlaySound_FieldInfo_,
	_WDesktopProperties$WinPlaySound_MethodInfo_,
	nullptr,
	nullptr,
	_WDesktopProperties$WinPlaySound_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WDesktopProperties"
};

$Object* allocate$WDesktopProperties$WinPlaySound($Class* clazz) {
	return $of($alloc(WDesktopProperties$WinPlaySound));
}

void WDesktopProperties$WinPlaySound::init$($WDesktopProperties* this$0, $String* winEventName) {
	$set(this, this$0, this$0);
	$set(this, winEventName, winEventName);
}

void WDesktopProperties$WinPlaySound::run() {
	this->this$0->playWindowsSound(this->winEventName);
}

$String* WDesktopProperties$WinPlaySound::toString() {
	return $str({"WinPlaySound("_s, this->winEventName, ")"_s});
}

bool WDesktopProperties$WinPlaySound::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	try {
		return $nc(this->winEventName)->equals($nc(($cast(WDesktopProperties$WinPlaySound, o)))->winEventName);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t WDesktopProperties$WinPlaySound::hashCode() {
	return $nc(this->winEventName)->hashCode();
}

WDesktopProperties$WinPlaySound::WDesktopProperties$WinPlaySound() {
}

$Class* WDesktopProperties$WinPlaySound::load$($String* name, bool initialize) {
	$loadClass(WDesktopProperties$WinPlaySound, name, initialize, &_WDesktopProperties$WinPlaySound_ClassInfo_, allocate$WDesktopProperties$WinPlaySound);
	return class$;
}

$Class* WDesktopProperties$WinPlaySound::class$ = nullptr;

		} // windows
	} // awt
} // sun
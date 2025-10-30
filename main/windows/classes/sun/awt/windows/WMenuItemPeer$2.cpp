#include <sun/awt/windows/WMenuItemPeer$2.h>

#include <java/awt/Font.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef FINE
#undef PLAIN

using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WMenuItemPeer$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WMenuItemPeer$2::*)()>(&WMenuItemPeer$2::init$))},
	{"run", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WMenuItemPeer$2_EnclosingMethodInfo_ = {
	"sun.awt.windows.WMenuItemPeer",
	nullptr,
	nullptr
};

$InnerClassInfo _WMenuItemPeer$2_InnerClassesInfo_[] = {
	{"sun.awt.windows.WMenuItemPeer$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WMenuItemPeer$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WMenuItemPeer$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_WMenuItemPeer$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/Font;>;",
	&_WMenuItemPeer$2_EnclosingMethodInfo_,
	_WMenuItemPeer$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WMenuItemPeer"
};

$Object* allocate$WMenuItemPeer$2($Class* clazz) {
	return $of($alloc(WMenuItemPeer$2));
}

void WMenuItemPeer$2::init$() {
}

$Object* WMenuItemPeer$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ResourceBundle, rb, $ResourceBundle::getBundle("sun.awt.windows.awtLocalization"_s));
		return $of($Font::decode($($nc(rb)->getString("menuFont"_s))));
	} catch ($MissingResourceException& e) {
		$init($WMenuItemPeer);
		$init($PlatformLogger$Level);
		if ($nc($WMenuItemPeer::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc($WMenuItemPeer::log)->fine($$str({"WMenuItemPeer: "_s, $(e->getMessage()), ". Using default MenuItem font."_s}), static_cast<$Throwable*>(e));
		}
		return $of($new($Font, "SanSerif"_s, $Font::PLAIN, 11));
	}
	$shouldNotReachHere();
}

WMenuItemPeer$2::WMenuItemPeer$2() {
}

$Class* WMenuItemPeer$2::load$($String* name, bool initialize) {
	$loadClass(WMenuItemPeer$2, name, initialize, &_WMenuItemPeer$2_ClassInfo_, allocate$WMenuItemPeer$2);
	return class$;
}

$Class* WMenuItemPeer$2::class$ = nullptr;

		} // windows
	} // awt
} // sun
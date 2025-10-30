#include <sun/awt/windows/WFileDialogPeer$3.h>

#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/awt/windows/WFileDialogPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $WFileDialogPeer = ::sun::awt::windows::WFileDialogPeer;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WFileDialogPeer$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WFileDialogPeer$3::*)()>(&WFileDialogPeer$3::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WFileDialogPeer$3_EnclosingMethodInfo_ = {
	"sun.awt.windows.WFileDialogPeer",
	nullptr,
	nullptr
};

$InnerClassInfo _WFileDialogPeer$3_InnerClassesInfo_[] = {
	{"sun.awt.windows.WFileDialogPeer$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WFileDialogPeer$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WFileDialogPeer$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_WFileDialogPeer$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_WFileDialogPeer$3_EnclosingMethodInfo_,
	_WFileDialogPeer$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WFileDialogPeer"
};

$Object* allocate$WFileDialogPeer$3($Class* clazz) {
	return $of($alloc(WFileDialogPeer$3));
}

void WFileDialogPeer$3::init$() {
}

$Object* WFileDialogPeer$3::run() {
	$beforeCallerSensitive();
	try {
		$var($ResourceBundle, rb, $ResourceBundle::getBundle("sun.awt.windows.awtLocalization"_s));
		return $of($nc(rb)->getString("allFiles"_s));
	} catch ($MissingResourceException& e) {
		return $of("All Files"_s);
	}
	$shouldNotReachHere();
}

WFileDialogPeer$3::WFileDialogPeer$3() {
}

$Class* WFileDialogPeer$3::load$($String* name, bool initialize) {
	$loadClass(WFileDialogPeer$3, name, initialize, &_WFileDialogPeer$3_ClassInfo_, allocate$WFileDialogPeer$3);
	return class$;
}

$Class* WFileDialogPeer$3::class$ = nullptr;

		} // windows
	} // awt
} // sun
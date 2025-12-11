#include <sun/lwawt/macosx/LWCToolkit$1.h>

#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _LWCToolkit$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LWCToolkit$1::*)()>(&LWCToolkit$1::init$))},
	{"run", "()Ljava/util/ResourceBundle;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LWCToolkit$1_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.LWCToolkit",
	nullptr,
	nullptr
};

$InnerClassInfo _LWCToolkit$1_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.LWCToolkit$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWCToolkit$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.LWCToolkit$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_LWCToolkit$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/ResourceBundle;>;",
	&_LWCToolkit$1_EnclosingMethodInfo_,
	_LWCToolkit$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.LWCToolkit"
};

$Object* allocate$LWCToolkit$1($Class* clazz) {
	return $of($alloc(LWCToolkit$1));
}

void LWCToolkit$1::init$() {
}

$Object* LWCToolkit$1::run() {
	$beforeCallerSensitive();
	$var($ResourceBundle, platformResources, nullptr);
	try {
		$assign(platformResources, $ResourceBundle::getBundle("sun.awt.resources.awtosx"_s));
	} catch ($MissingResourceException& e) {
	}
	$System::loadLibrary("awt"_s);
	$System::loadLibrary("fontmanager"_s);
	return $of(platformResources);
}

LWCToolkit$1::LWCToolkit$1() {
}

$Class* LWCToolkit$1::load$($String* name, bool initialize) {
	$loadClass(LWCToolkit$1, name, initialize, &_LWCToolkit$1_ClassInfo_, allocate$LWCToolkit$1);
	return class$;
}

$Class* LWCToolkit$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
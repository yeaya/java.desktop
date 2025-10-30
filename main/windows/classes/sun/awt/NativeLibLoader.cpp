#include <sun/awt/NativeLibLoader.h>

#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/NativeLibLoader$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $NativeLibLoader$1 = ::sun::awt::NativeLibLoader$1;

namespace sun {
	namespace awt {

$MethodInfo _NativeLibLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeLibLoader::*)()>(&NativeLibLoader::init$))},
	{"loadLibraries", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&NativeLibLoader::loadLibraries))},
	{}
};

$InnerClassInfo _NativeLibLoader_InnerClassesInfo_[] = {
	{"sun.awt.NativeLibLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeLibLoader_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.NativeLibLoader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativeLibLoader_MethodInfo_,
	nullptr,
	nullptr,
	_NativeLibLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.NativeLibLoader$1"
};

$Object* allocate$NativeLibLoader($Class* clazz) {
	return $of($alloc(NativeLibLoader));
}

void NativeLibLoader::init$() {
}

void NativeLibLoader::loadLibraries() {
	$load(NativeLibLoader);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($NativeLibLoader$1)));
}

NativeLibLoader::NativeLibLoader() {
}

$Class* NativeLibLoader::load$($String* name, bool initialize) {
	$loadClass(NativeLibLoader, name, initialize, &_NativeLibLoader_ClassInfo_, allocate$NativeLibLoader);
	return class$;
}

$Class* NativeLibLoader::class$ = nullptr;

	} // awt
} // sun
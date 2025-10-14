#include <java/awt/event/NativeLibLoader.h>

#include <java/awt/event/NativeLibLoader$1.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $NativeLibLoader$1 = ::java::awt::event::NativeLibLoader$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {
		namespace event {

$MethodInfo _NativeLibLoader_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeLibLoader::*)()>(&NativeLibLoader::init$))},
	{"loadLibraries", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&NativeLibLoader::loadLibraries))},
	{}
};

$InnerClassInfo _NativeLibLoader_InnerClassesInfo_[] = {
	{"java.awt.event.NativeLibLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeLibLoader_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.event.NativeLibLoader",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativeLibLoader_MethodInfo_,
	nullptr,
	nullptr,
	_NativeLibLoader_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.event.NativeLibLoader$1"
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

		} // event
	} // awt
} // java
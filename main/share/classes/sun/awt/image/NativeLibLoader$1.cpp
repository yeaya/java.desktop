#include <sun/awt/image/NativeLibLoader$1.h>

#include <sun/awt/image/NativeLibLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _NativeLibLoader$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeLibLoader$1::*)()>(&NativeLibLoader$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NativeLibLoader$1_EnclosingMethodInfo_ = {
	"sun.awt.image.NativeLibLoader",
	"loadLibraries",
	"()V"
};

$InnerClassInfo _NativeLibLoader$1_InnerClassesInfo_[] = {
	{"sun.awt.image.NativeLibLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NativeLibLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.NativeLibLoader$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_NativeLibLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_NativeLibLoader$1_EnclosingMethodInfo_,
	_NativeLibLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.NativeLibLoader"
};

$Object* allocate$NativeLibLoader$1($Class* clazz) {
	return $of($alloc(NativeLibLoader$1));
}

void NativeLibLoader$1::init$() {
}

$Object* NativeLibLoader$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	return $of(nullptr);
}

NativeLibLoader$1::NativeLibLoader$1() {
}

$Class* NativeLibLoader$1::load$($String* name, bool initialize) {
	$loadClass(NativeLibLoader$1, name, initialize, &_NativeLibLoader$1_ClassInfo_, allocate$NativeLibLoader$1);
	return class$;
}

$Class* NativeLibLoader$1::class$ = nullptr;

		} // image
	} // awt
} // sun
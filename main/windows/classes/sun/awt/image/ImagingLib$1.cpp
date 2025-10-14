#include <sun/awt/image/ImagingLib$1.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/image/ImagingLib.h>
#include <jcpp.h>

#undef FALSE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ImagingLib = ::sun::awt::image::ImagingLib;

namespace sun {
	namespace awt {
		namespace image {

$MethodInfo _ImagingLib$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ImagingLib$1::*)()>(&ImagingLib$1::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImagingLib$1_EnclosingMethodInfo_ = {
	"sun.awt.image.ImagingLib",
	nullptr,
	nullptr
};

$InnerClassInfo _ImagingLib$1_InnerClassesInfo_[] = {
	{"sun.awt.image.ImagingLib$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImagingLib$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.image.ImagingLib$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ImagingLib$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_ImagingLib$1_EnclosingMethodInfo_,
	_ImagingLib$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.image.ImagingLib"
};

$Object* allocate$ImagingLib$1($Class* clazz) {
	return $of($alloc(ImagingLib$1));
}

void ImagingLib$1::init$() {
}

$Object* ImagingLib$1::run() {
	$beforeCallerSensitive();
	$var($String, arch, $System::getProperty("os.arch"_s));
	try {
		$System::loadLibrary("mlib_image"_s);
	} catch ($UnsatisfiedLinkError&) {
		$var($UnsatisfiedLinkError, e, $catch());
		$init($Boolean);
		return $of($Boolean::FALSE);
	}
	bool success = $ImagingLib::init();
	return $of($Boolean::valueOf(success));
}

ImagingLib$1::ImagingLib$1() {
}

$Class* ImagingLib$1::load$($String* name, bool initialize) {
	$loadClass(ImagingLib$1, name, initialize, &_ImagingLib$1_ClassInfo_, allocate$ImagingLib$1);
	return class$;
}

$Class* ImagingLib$1::class$ = nullptr;

		} // image
	} // awt
} // sun
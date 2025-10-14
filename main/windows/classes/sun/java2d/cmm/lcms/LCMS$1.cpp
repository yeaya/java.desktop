#include <sun/java2d/cmm/lcms/LCMS$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/cmm/lcms/LCMS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $LCMS = ::sun::java2d::cmm::lcms::LCMS;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$MethodInfo _LCMS$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LCMS$1::*)()>(&LCMS$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LCMS$1_EnclosingMethodInfo_ = {
	"sun.java2d.cmm.lcms.LCMS",
	"getModule",
	"()Lsun/java2d/cmm/PCMM;"
};

$InnerClassInfo _LCMS$1_InnerClassesInfo_[] = {
	{"sun.java2d.cmm.lcms.LCMS$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LCMS$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.java2d.cmm.lcms.LCMS$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_LCMS$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_LCMS$1_EnclosingMethodInfo_,
	_LCMS$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.cmm.lcms.LCMS"
};

$Object* allocate$LCMS$1($Class* clazz) {
	return $of($alloc(LCMS$1));
}

void LCMS$1::init$() {
}

$Object* LCMS$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	$System::loadLibrary("lcms"_s);
	return $of(nullptr);
}

LCMS$1::LCMS$1() {
}

$Class* LCMS$1::load$($String* name, bool initialize) {
	$loadClass(LCMS$1, name, initialize, &_LCMS$1_ClassInfo_, allocate$LCMS$1);
	return class$;
}

$Class* LCMS$1::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun
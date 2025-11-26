#include <sun/java2d/cmm/lcms/LcmsServiceProvider.h>

#include <sun/java2d/cmm/CMMServiceProvider.h>
#include <sun/java2d/cmm/PCMM.h>
#include <sun/java2d/cmm/lcms/LCMS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CMMServiceProvider = ::sun::java2d::cmm::CMMServiceProvider;
using $PCMM = ::sun::java2d::cmm::PCMM;
using $LCMS = ::sun::java2d::cmm::lcms::LCMS;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$MethodInfo _LcmsServiceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LcmsServiceProvider::*)()>(&LcmsServiceProvider::init$))},
	{"getModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _LcmsServiceProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.java2d.cmm.lcms.LcmsServiceProvider",
	"sun.java2d.cmm.CMMServiceProvider",
	nullptr,
	nullptr,
	_LcmsServiceProvider_MethodInfo_
};

$Object* allocate$LcmsServiceProvider($Class* clazz) {
	return $of($alloc(LcmsServiceProvider));
}

void LcmsServiceProvider::init$() {
	$CMMServiceProvider::init$();
}

$PCMM* LcmsServiceProvider::getModule() {
	return $LCMS::getModule();
}

LcmsServiceProvider::LcmsServiceProvider() {
}

$Class* LcmsServiceProvider::load$($String* name, bool initialize) {
	$loadClass(LcmsServiceProvider, name, initialize, &_LcmsServiceProvider_ClassInfo_, allocate$LcmsServiceProvider);
	return class$;
}

$Class* LcmsServiceProvider::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun
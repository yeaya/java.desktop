#include <sun/java2d/cmm/CMMServiceProvider.h>

#include <sun/java2d/cmm/CMSManager.h>
#include <sun/java2d/cmm/PCMM.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CMSManager = ::sun::java2d::cmm::CMSManager;
using $PCMM = ::sun::java2d::cmm::PCMM;

namespace sun {
	namespace java2d {
		namespace cmm {

$MethodInfo _CMMServiceProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CMMServiceProvider::*)()>(&CMMServiceProvider::init$))},
	{"getColorManagementModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$PCMM*(CMMServiceProvider::*)()>(&CMMServiceProvider::getColorManagementModule))},
	{"getModule", "()Lsun/java2d/cmm/PCMM;", nullptr, $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _CMMServiceProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.java2d.cmm.CMMServiceProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CMMServiceProvider_MethodInfo_
};

$Object* allocate$CMMServiceProvider($Class* clazz) {
	return $of($alloc(CMMServiceProvider));
}

void CMMServiceProvider::init$() {
}

$PCMM* CMMServiceProvider::getColorManagementModule() {
	if ($CMSManager::canCreateModule()) {
		return getModule();
	}
	return nullptr;
}

CMMServiceProvider::CMMServiceProvider() {
}

$Class* CMMServiceProvider::load$($String* name, bool initialize) {
	$loadClass(CMMServiceProvider, name, initialize, &_CMMServiceProvider_ClassInfo_, allocate$CMMServiceProvider);
	return class$;
}

$Class* CMMServiceProvider::class$ = nullptr;

		} // cmm
	} // java2d
} // sun
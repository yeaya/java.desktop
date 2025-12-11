#include <sun/lwawt/macosx/CWarningWindow$Lock.h>

#include <sun/lwawt/macosx/CWarningWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CWarningWindow$Lock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CWarningWindow$Lock::*)()>(&CWarningWindow$Lock::init$))},
	{}
};

$InnerClassInfo _CWarningWindow$Lock_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWarningWindow$Lock", "sun.lwawt.macosx.CWarningWindow", "Lock", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _CWarningWindow$Lock_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CWarningWindow$Lock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CWarningWindow$Lock_MethodInfo_,
	nullptr,
	nullptr,
	_CWarningWindow$Lock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWarningWindow"
};

$Object* allocate$CWarningWindow$Lock($Class* clazz) {
	return $of($alloc(CWarningWindow$Lock));
}

void CWarningWindow$Lock::init$() {
}

CWarningWindow$Lock::CWarningWindow$Lock() {
}

$Class* CWarningWindow$Lock::load$($String* name, bool initialize) {
	$loadClass(CWarningWindow$Lock, name, initialize, &_CWarningWindow$Lock_ClassInfo_, allocate$CWarningWindow$Lock);
	return class$;
}

$Class* CWarningWindow$Lock::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
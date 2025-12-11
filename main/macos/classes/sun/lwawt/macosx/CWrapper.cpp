#include <sun/lwawt/macosx/CWrapper.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CWrapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CWrapper::*)()>(&CWrapper::init$))},
	{}
};

$InnerClassInfo _CWrapper_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CWrapper$NSView", "sun.lwawt.macosx.CWrapper", "NSView", $STATIC | $FINAL},
	{"sun.lwawt.macosx.CWrapper$NSWindow", "sun.lwawt.macosx.CWrapper", "NSWindow", $STATIC | $FINAL},
	{}
};

$ClassInfo _CWrapper_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CWrapper",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CWrapper_MethodInfo_,
	nullptr,
	nullptr,
	_CWrapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CWrapper$NSView,sun.lwawt.macosx.CWrapper$NSWindow"
};

$Object* allocate$CWrapper($Class* clazz) {
	return $of($alloc(CWrapper));
}

void CWrapper::init$() {
}

CWrapper::CWrapper() {
}

$Class* CWrapper::load$($String* name, bool initialize) {
	$loadClass(CWrapper, name, initialize, &_CWrapper_ClassInfo_, allocate$CWrapper);
	return class$;
}

$Class* CWrapper::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
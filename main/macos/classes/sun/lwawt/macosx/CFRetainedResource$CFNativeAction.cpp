#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>

#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CFRetainedResource$CFNativeAction_MethodInfo_[] = {
	{"run", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CFRetainedResource$CFNativeAction_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CFRetainedResource$CFNativeAction", "sun.lwawt.macosx.CFRetainedResource", "CFNativeAction", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CFRetainedResource$CFNativeAction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	nullptr,
	nullptr,
	_CFRetainedResource$CFNativeAction_MethodInfo_,
	nullptr,
	nullptr,
	_CFRetainedResource$CFNativeAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CFRetainedResource"
};

$Object* allocate$CFRetainedResource$CFNativeAction($Class* clazz) {
	return $of($alloc(CFRetainedResource$CFNativeAction));
}

$Class* CFRetainedResource$CFNativeAction::load$($String* name, bool initialize) {
	$loadClass(CFRetainedResource$CFNativeAction, name, initialize, &_CFRetainedResource$CFNativeAction_ClassInfo_, allocate$CFRetainedResource$CFNativeAction);
	return class$;
}

$Class* CFRetainedResource$CFNativeAction::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
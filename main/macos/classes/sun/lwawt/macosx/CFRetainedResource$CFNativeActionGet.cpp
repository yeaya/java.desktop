#include <sun/lwawt/macosx/CFRetainedResource$CFNativeActionGet.h>

#include <sun/lwawt/macosx/CFRetainedResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace lwawt {
		namespace macosx {

$MethodInfo _CFRetainedResource$CFNativeActionGet_MethodInfo_[] = {
	{"run", "(J)J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CFRetainedResource$CFNativeActionGet_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet", "sun.lwawt.macosx.CFRetainedResource", "CFNativeActionGet", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CFRetainedResource$CFNativeActionGet_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.lwawt.macosx.CFRetainedResource$CFNativeActionGet",
	nullptr,
	nullptr,
	nullptr,
	_CFRetainedResource$CFNativeActionGet_MethodInfo_,
	nullptr,
	nullptr,
	_CFRetainedResource$CFNativeActionGet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CFRetainedResource"
};

$Object* allocate$CFRetainedResource$CFNativeActionGet($Class* clazz) {
	return $of($alloc(CFRetainedResource$CFNativeActionGet));
}

$Class* CFRetainedResource$CFNativeActionGet::load$($String* name, bool initialize) {
	$loadClass(CFRetainedResource$CFNativeActionGet, name, initialize, &_CFRetainedResource$CFNativeActionGet_ClassInfo_, allocate$CFRetainedResource$CFNativeActionGet);
	return class$;
}

$Class* CFRetainedResource$CFNativeActionGet::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun
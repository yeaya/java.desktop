#include <sun/java2d/DisposerTarget.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$MethodInfo _DisposerTarget_MethodInfo_[] = {
	{"getDisposerReferent", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DisposerTarget_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.DisposerTarget",
	nullptr,
	nullptr,
	nullptr,
	_DisposerTarget_MethodInfo_
};

$Object* allocate$DisposerTarget($Class* clazz) {
	return $of($alloc(DisposerTarget));
}

$Class* DisposerTarget::load$($String* name, bool initialize) {
	$loadClass(DisposerTarget, name, initialize, &_DisposerTarget_ClassInfo_, allocate$DisposerTarget);
	return class$;
}

$Class* DisposerTarget::class$ = nullptr;

	} // java2d
} // sun
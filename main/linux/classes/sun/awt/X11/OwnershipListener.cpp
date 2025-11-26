#include <sun/awt/X11/OwnershipListener.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _OwnershipListener_MethodInfo_[] = {
	{"ownershipChanged", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OwnershipListener_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.awt.X11.OwnershipListener",
	nullptr,
	nullptr,
	nullptr,
	_OwnershipListener_MethodInfo_
};

$Object* allocate$OwnershipListener($Class* clazz) {
	return $of($alloc(OwnershipListener));
}

$Class* OwnershipListener::load$($String* name, bool initialize) {
	$loadClass(OwnershipListener, name, initialize, &_OwnershipListener_ClassInfo_, allocate$OwnershipListener);
	return class$;
}

$Class* OwnershipListener::class$ = nullptr;

		} // X11
	} // awt
} // sun
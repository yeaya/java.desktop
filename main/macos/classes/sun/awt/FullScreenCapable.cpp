#include <sun/awt/FullScreenCapable.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _FullScreenCapable_MethodInfo_[] = {
	{"enterFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"exitFullScreenMode", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FullScreenCapable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.FullScreenCapable",
	nullptr,
	nullptr,
	nullptr,
	_FullScreenCapable_MethodInfo_
};

$Object* allocate$FullScreenCapable($Class* clazz) {
	return $of($alloc(FullScreenCapable));
}

$Class* FullScreenCapable::load$($String* name, bool initialize) {
	$loadClass(FullScreenCapable, name, initialize, &_FullScreenCapable_ClassInfo_, allocate$FullScreenCapable);
	return class$;
}

$Class* FullScreenCapable::class$ = nullptr;

	} // awt
} // sun
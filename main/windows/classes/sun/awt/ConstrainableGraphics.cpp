#include <sun/awt/ConstrainableGraphics.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _ConstrainableGraphics_MethodInfo_[] = {
	{"constrain", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConstrainableGraphics_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.ConstrainableGraphics",
	nullptr,
	nullptr,
	nullptr,
	_ConstrainableGraphics_MethodInfo_
};

$Object* allocate$ConstrainableGraphics($Class* clazz) {
	return $of($alloc(ConstrainableGraphics));
}

$Class* ConstrainableGraphics::load$($String* name, bool initialize) {
	$loadClass(ConstrainableGraphics, name, initialize, &_ConstrainableGraphics_ClassInfo_, allocate$ConstrainableGraphics);
	return class$;
}

$Class* ConstrainableGraphics::class$ = nullptr;

	} // awt
} // sun
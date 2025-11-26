#include <java/awt/SecondaryLoop.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _SecondaryLoop_MethodInfo_[] = {
	{"enter", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"exit", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SecondaryLoop_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.SecondaryLoop",
	nullptr,
	nullptr,
	nullptr,
	_SecondaryLoop_MethodInfo_
};

$Object* allocate$SecondaryLoop($Class* clazz) {
	return $of($alloc(SecondaryLoop));
}

$Class* SecondaryLoop::load$($String* name, bool initialize) {
	$loadClass(SecondaryLoop, name, initialize, &_SecondaryLoop_ClassInfo_, allocate$SecondaryLoop);
	return class$;
}

$Class* SecondaryLoop::class$ = nullptr;

	} // awt
} // java
#include <sun/java2d/pipe/LoopBasedPipe.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$ClassInfo _LoopBasedPipe_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.LoopBasedPipe"
};

$Object* allocate$LoopBasedPipe($Class* clazz) {
	return $of($alloc(LoopBasedPipe));
}

$Class* LoopBasedPipe::load$($String* name, bool initialize) {
	$loadClass(LoopBasedPipe, name, initialize, &_LoopBasedPipe_ClassInfo_, allocate$LoopBasedPipe);
	return class$;
}

$Class* LoopBasedPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun
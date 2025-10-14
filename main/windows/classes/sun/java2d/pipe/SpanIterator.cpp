#include <sun/java2d/pipe/SpanIterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$MethodInfo _SpanIterator_MethodInfo_[] = {
	{"getNativeIterator", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getPathBox", "([I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"intersectClipBox", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"nextSpan", "([I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"skipDownTo", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SpanIterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.pipe.SpanIterator",
	nullptr,
	nullptr,
	nullptr,
	_SpanIterator_MethodInfo_
};

$Object* allocate$SpanIterator($Class* clazz) {
	return $of($alloc(SpanIterator));
}

$Class* SpanIterator::load$($String* name, bool initialize) {
	$loadClass(SpanIterator, name, initialize, &_SpanIterator_ClassInfo_, allocate$SpanIterator);
	return class$;
}

$Class* SpanIterator::class$ = nullptr;

		} // pipe
	} // java2d
} // sun
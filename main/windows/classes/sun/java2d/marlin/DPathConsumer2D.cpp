#include <sun/java2d/marlin/DPathConsumer2D.h>

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
		namespace marlin {

$MethodInfo _DPathConsumer2D_MethodInfo_[] = {
	{"closePath", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"curveTo", "(DDDDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getNativeConsumer", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"lineTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"moveTo", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"pathDone", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"quadTo", "(DDDD)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DPathConsumer2D_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.java2d.marlin.DPathConsumer2D",
	nullptr,
	nullptr,
	nullptr,
	_DPathConsumer2D_MethodInfo_
};

$Object* allocate$DPathConsumer2D($Class* clazz) {
	return $of($alloc(DPathConsumer2D));
}

$Class* DPathConsumer2D::load$($String* name, bool initialize) {
	$loadClass(DPathConsumer2D, name, initialize, &_DPathConsumer2D_ClassInfo_, allocate$DPathConsumer2D);
	return class$;
}

$Class* DPathConsumer2D::class$ = nullptr;

		} // marlin
	} // java2d
} // sun
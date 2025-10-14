#include <sun/java2d/SurfaceDataProxy$CountdownTracker.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/java2d/SurfaceDataProxy.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StateTracker = ::sun::java2d::StateTracker;
using $SurfaceDataProxy = ::sun::java2d::SurfaceDataProxy;

namespace sun {
	namespace java2d {

$FieldInfo _SurfaceDataProxy$CountdownTracker_FieldInfo_[] = {
	{"countdown", "I", nullptr, $PRIVATE, $field(SurfaceDataProxy$CountdownTracker, countdown)},
	{}
};

$MethodInfo _SurfaceDataProxy$CountdownTracker_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SurfaceDataProxy$CountdownTracker::*)(int32_t)>(&SurfaceDataProxy$CountdownTracker::init$))},
	{"isCurrent", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _SurfaceDataProxy$CountdownTracker_InnerClassesInfo_[] = {
	{"sun.java2d.SurfaceDataProxy$CountdownTracker", "sun.java2d.SurfaceDataProxy", "CountdownTracker", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SurfaceDataProxy$CountdownTracker_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.java2d.SurfaceDataProxy$CountdownTracker",
	"java.lang.Object",
	"sun.java2d.StateTracker",
	_SurfaceDataProxy$CountdownTracker_FieldInfo_,
	_SurfaceDataProxy$CountdownTracker_MethodInfo_,
	nullptr,
	nullptr,
	_SurfaceDataProxy$CountdownTracker_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.java2d.SurfaceDataProxy"
};

$Object* allocate$SurfaceDataProxy$CountdownTracker($Class* clazz) {
	return $of($alloc(SurfaceDataProxy$CountdownTracker));
}

void SurfaceDataProxy$CountdownTracker::init$(int32_t threshold) {
	this->countdown = threshold;
}

bool SurfaceDataProxy$CountdownTracker::isCurrent() {
	$synchronized(this) {
		return (--this->countdown >= 0);
	}
}

SurfaceDataProxy$CountdownTracker::SurfaceDataProxy$CountdownTracker() {
}

$Class* SurfaceDataProxy$CountdownTracker::load$($String* name, bool initialize) {
	$loadClass(SurfaceDataProxy$CountdownTracker, name, initialize, &_SurfaceDataProxy$CountdownTracker_ClassInfo_, allocate$SurfaceDataProxy$CountdownTracker);
	return class$;
}

$Class* SurfaceDataProxy$CountdownTracker::class$ = nullptr;

	} // java2d
} // sun
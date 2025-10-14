#include <com/sun/media/sound/SoftControl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftControl_MethodInfo_[] = {
	{"get", "(ILjava/lang/String;)[D", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SoftControl_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.SoftControl",
	nullptr,
	nullptr,
	nullptr,
	_SoftControl_MethodInfo_
};

$Object* allocate$SoftControl($Class* clazz) {
	return $of($alloc(SoftControl));
}

$Class* SoftControl::load$($String* name, bool initialize) {
	$loadClass(SoftControl, name, initialize, &_SoftControl_ClassInfo_, allocate$SoftControl);
	return class$;
}

$Class* SoftControl::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
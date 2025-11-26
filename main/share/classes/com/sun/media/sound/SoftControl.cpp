#include <com/sun/media/sound/SoftControl.h>

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
#include <com/sun/media/sound/AutoClosingClip.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Clip = ::javax::sound::sampled::Clip;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _AutoClosingClip_MethodInfo_[] = {
	{"isAutoClosing", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setAutoClosing", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AutoClosingClip_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.media.sound.AutoClosingClip",
	nullptr,
	"javax.sound.sampled.Clip",
	nullptr,
	_AutoClosingClip_MethodInfo_
};

$Object* allocate$AutoClosingClip($Class* clazz) {
	return $of($alloc(AutoClosingClip));
}

$Class* AutoClosingClip::load$($String* name, bool initialize) {
	$loadClass(AutoClosingClip, name, initialize, &_AutoClosingClip_ClassInfo_, allocate$AutoClosingClip);
	return class$;
}

$Class* AutoClosingClip::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
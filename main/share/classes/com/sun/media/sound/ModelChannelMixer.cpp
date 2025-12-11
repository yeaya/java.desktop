#include <com/sun/media/sound/ModelChannelMixer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelChannelMixer_MethodInfo_[] = {
	{"process", "([[FII)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelChannelMixer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelChannelMixer",
	nullptr,
	"javax.sound.midi.MidiChannel",
	nullptr,
	_ModelChannelMixer_MethodInfo_
};

$Object* allocate$ModelChannelMixer($Class* clazz) {
	return $of($alloc(ModelChannelMixer));
}

$Class* ModelChannelMixer::load$($String* name, bool initialize) {
	$loadClass(ModelChannelMixer, name, initialize, &_ModelChannelMixer_ClassInfo_, allocate$ModelChannelMixer);
	return class$;
}

$Class* ModelChannelMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
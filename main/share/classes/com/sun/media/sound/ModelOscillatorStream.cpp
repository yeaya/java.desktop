#include <com/sun/media/sound/ModelOscillatorStream.h>

#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelOscillatorStream_MethodInfo_[] = {
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"noteOff", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"noteOn", "(Ljavax/sound/midi/MidiChannel;Ljavax/sound/midi/VoiceStatus;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"read", "([[FII)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"setPitch", "(F)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelOscillatorStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelOscillatorStream",
	nullptr,
	nullptr,
	nullptr,
	_ModelOscillatorStream_MethodInfo_
};

$Object* allocate$ModelOscillatorStream($Class* clazz) {
	return $of($alloc(ModelOscillatorStream));
}

$Class* ModelOscillatorStream::load$($String* name, bool initialize) {
	$loadClass(ModelOscillatorStream, name, initialize, &_ModelOscillatorStream_ClassInfo_, allocate$ModelOscillatorStream);
	return class$;
}

$Class* ModelOscillatorStream::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
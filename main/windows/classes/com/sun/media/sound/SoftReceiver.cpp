#include <com/sun/media/sound/SoftReceiver.h>

#include <com/sun/media/sound/AudioSynthesizer.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/TreeMap.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiDeviceReceiver.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/midi/Synthesizer.h>
#include <jcpp.h>

using $AudioSynthesizer = ::com::sun::media::sound::AudioSynthesizer;
using $SoftMainMixer = ::com::sun::media::sound::SoftMainMixer;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeMap = ::java::util::TreeMap;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDeviceReceiver = ::javax::sound::midi::MidiDeviceReceiver;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Receiver = ::javax::sound::midi::Receiver;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $Synthesizer = ::javax::sound::midi::Synthesizer;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftReceiver_FieldInfo_[] = {
	{"open", "Z", nullptr, 0, $field(SoftReceiver, open)},
	{"control_mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftReceiver, control_mutex)},
	{"synth", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $PRIVATE | $FINAL, $field(SoftReceiver, synth)},
	{"midimessages", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/Long;Ljava/lang/Object;>;", 0, $field(SoftReceiver, midimessages)},
	{"mainmixer", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, 0, $field(SoftReceiver, mainmixer)},
	{}
};

$MethodInfo _SoftReceiver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftReceiver::*)($SoftSynthesizer*)>(&SoftReceiver::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC},
	{"send", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftReceiver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftReceiver",
	"java.lang.Object",
	"javax.sound.midi.MidiDeviceReceiver",
	_SoftReceiver_FieldInfo_,
	_SoftReceiver_MethodInfo_
};

$Object* allocate$SoftReceiver($Class* clazz) {
	return $of($alloc(SoftReceiver));
}

void SoftReceiver::init$($SoftSynthesizer* synth) {
	this->open = true;
	$set(this, control_mutex, $nc(synth)->control_mutex);
	$set(this, synth, synth);
	$set(this, mainmixer, synth->getMainMixer());
	if (this->mainmixer != nullptr) {
		$set(this, midimessages, $nc(this->mainmixer)->midimessages);
	}
}

$MidiDevice* SoftReceiver::getMidiDevice() {
	return this->synth;
}

void SoftReceiver::send($MidiMessage* message, int64_t timeStamp) {
	$synchronized(this->control_mutex) {
		if (!this->open) {
			$throwNew($IllegalStateException, "Receiver is not open"_s);
		}
	}
	if (timeStamp != -1) {
		$synchronized(this->control_mutex) {
			$nc(this->mainmixer)->activity();
			while ($nc(this->midimessages)->get($($Long::valueOf(timeStamp))) != nullptr) {
				++timeStamp;
			}
			if ($instanceOf($ShortMessage, message) && ($nc(($cast($ShortMessage, message)))->getChannel() > 15)) {
				$var($Object, var$0, $of($Long::valueOf(timeStamp)));
				$nc(this->midimessages)->put(var$0, $($nc(message)->clone()));
			} else {
				$var($Object, var$1, $of($Long::valueOf(timeStamp)));
				$nc(this->midimessages)->put(var$1, $($nc(message)->getMessage()));
			}
		}
	} else {
		$nc(this->mainmixer)->processMessage(message);
	}
}

void SoftReceiver::close() {
	$synchronized(this->control_mutex) {
		this->open = false;
	}
	$nc(this->synth)->removeReceiver(this);
}

SoftReceiver::SoftReceiver() {
}

$Class* SoftReceiver::load$($String* name, bool initialize) {
	$loadClass(SoftReceiver, name, initialize, &_SoftReceiver_ClassInfo_, allocate$SoftReceiver);
	return class$;
}

$Class* SoftReceiver::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
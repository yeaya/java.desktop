#include <com/sun/media/sound/RealTimeSequencerProvider.h>

#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <jcpp.h>

using $MidiDevice$InfoArray = $Array<::javax::sound::midi::MidiDevice$Info>;
using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceProvider = ::javax::sound::midi::spi::MidiDeviceProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _RealTimeSequencerProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RealTimeSequencerProvider::*)()>(&RealTimeSequencerProvider::init$))},
	{"getDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC},
	{"getDeviceInfo", "()[Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RealTimeSequencerProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.RealTimeSequencerProvider",
	"javax.sound.midi.spi.MidiDeviceProvider",
	nullptr,
	nullptr,
	_RealTimeSequencerProvider_MethodInfo_
};

$Object* allocate$RealTimeSequencerProvider($Class* clazz) {
	return $of($alloc(RealTimeSequencerProvider));
}

void RealTimeSequencerProvider::init$() {
	$MidiDeviceProvider::init$();
}

$MidiDevice$InfoArray* RealTimeSequencerProvider::getDeviceInfo() {
	$init($RealTimeSequencer);
	return $new($MidiDevice$InfoArray, {$RealTimeSequencer::info});
}

$MidiDevice* RealTimeSequencerProvider::getDevice($MidiDevice$Info* info) {
	$Objects::requireNonNull(info);
	$init($RealTimeSequencer);
	if ($nc($RealTimeSequencer::info)->equals(info)) {
		return static_cast<$MidiDevice*>(static_cast<$AbstractMidiDevice*>($new($RealTimeSequencer)));
	}
	$throw($($MidiUtils::unsupportedDevice(info)));
}

RealTimeSequencerProvider::RealTimeSequencerProvider() {
}

$Class* RealTimeSequencerProvider::load$($String* name, bool initialize) {
	$loadClass(RealTimeSequencerProvider, name, initialize, &_RealTimeSequencerProvider_ClassInfo_, allocate$RealTimeSequencerProvider);
	return class$;
}

$Class* RealTimeSequencerProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
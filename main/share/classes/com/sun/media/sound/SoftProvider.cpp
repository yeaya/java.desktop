#include <com/sun/media/sound/SoftProvider.h>

#include <com/sun/media/sound/AudioSynthesizer.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/util/Objects.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/Synthesizer.h>
#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <jcpp.h>

using $MidiDevice$InfoArray = $Array<::javax::sound::midi::MidiDevice$Info>;
using $AudioSynthesizer = ::com::sun::media::sound::AudioSynthesizer;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Objects = ::java::util::Objects;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $Synthesizer = ::javax::sound::midi::Synthesizer;
using $MidiDeviceProvider = ::javax::sound::midi::spi::MidiDeviceProvider;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftProvider::*)()>(&SoftProvider::init$))},
	{"getDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC},
	{"getDeviceInfo", "()[Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SoftProvider_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftProvider",
	"javax.sound.midi.spi.MidiDeviceProvider",
	nullptr,
	nullptr,
	_SoftProvider_MethodInfo_
};

$Object* allocate$SoftProvider($Class* clazz) {
	return $of($alloc(SoftProvider));
}

void SoftProvider::init$() {
	$MidiDeviceProvider::init$();
}

$MidiDevice$InfoArray* SoftProvider::getDeviceInfo() {
	$init($SoftSynthesizer);
	return $new($MidiDevice$InfoArray, {$SoftSynthesizer::info});
}

$MidiDevice* SoftProvider::getDevice($MidiDevice$Info* info) {
	$Objects::requireNonNull(info);
	$init($SoftSynthesizer);
	if ($nc($SoftSynthesizer::info)->equals(info)) {
		return $new($SoftSynthesizer);
	}
	$throw($($MidiUtils::unsupportedDevice(info)));
}

SoftProvider::SoftProvider() {
}

$Class* SoftProvider::load$($String* name, bool initialize) {
	$loadClass(SoftProvider, name, initialize, &_SoftProvider_ClassInfo_, allocate$SoftProvider);
	return class$;
}

$Class* SoftProvider::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
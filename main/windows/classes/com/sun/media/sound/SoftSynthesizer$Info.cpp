#include <com/sun/media/sound/SoftSynthesizer$Info.h>

#include <com/sun/media/sound/SoftSynthesizer.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <jcpp.h>

using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftSynthesizer$Info_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SoftSynthesizer$Info::*)()>(&SoftSynthesizer$Info::init$))},
	{}
};

$InnerClassInfo _SoftSynthesizer$Info_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftSynthesizer$Info", "com.sun.media.sound.SoftSynthesizer", "Info", $PRIVATE | $STATIC},
	{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SoftSynthesizer$Info_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftSynthesizer$Info",
	"javax.sound.midi.MidiDevice$Info",
	nullptr,
	nullptr,
	_SoftSynthesizer$Info_MethodInfo_,
	nullptr,
	nullptr,
	_SoftSynthesizer$Info_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftSynthesizer"
};

$Object* allocate$SoftSynthesizer$Info($Class* clazz) {
	return $of($alloc(SoftSynthesizer$Info));
}

void SoftSynthesizer$Info::init$() {
	$MidiDevice$Info::init$("Gervill"_s, "OpenJDK"_s, "Software MIDI Synthesizer"_s, "1.0"_s);
}

SoftSynthesizer$Info::SoftSynthesizer$Info() {
}

$Class* SoftSynthesizer$Info::load$($String* name, bool initialize) {
	$loadClass(SoftSynthesizer$Info, name, initialize, &_SoftSynthesizer$Info_ClassInfo_, allocate$SoftSynthesizer$Info);
	return class$;
}

$Class* SoftSynthesizer$Info::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
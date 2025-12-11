#include <javax/sound/midi/Soundbank.h>

#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _Soundbank_MethodInfo_[] = {
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInstrument", "(Ljavax/sound/midi/Patch;)Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResources", "()[Ljavax/sound/midi/SoundbankResource;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Soundbank_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.Soundbank",
	nullptr,
	nullptr,
	nullptr,
	_Soundbank_MethodInfo_
};

$Object* allocate$Soundbank($Class* clazz) {
	return $of($alloc(Soundbank));
}

$Class* Soundbank::load$($String* name, bool initialize) {
	$loadClass(Soundbank, name, initialize, &_Soundbank_ClassInfo_, allocate$Soundbank);
	return class$;
}

$Class* Soundbank::class$ = nullptr;

		} // midi
	} // sound
} // javax
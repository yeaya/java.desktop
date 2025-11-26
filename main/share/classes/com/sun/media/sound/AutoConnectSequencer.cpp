#include <com/sun/media/sound/AutoConnectSequencer.h>

#include <javax/sound/midi/Receiver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Receiver = ::javax::sound::midi::Receiver;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _AutoConnectSequencer_MethodInfo_[] = {
	{"setAutoConnect", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AutoConnectSequencer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.AutoConnectSequencer",
	nullptr,
	nullptr,
	nullptr,
	_AutoConnectSequencer_MethodInfo_
};

$Object* allocate$AutoConnectSequencer($Class* clazz) {
	return $of($alloc(AutoConnectSequencer));
}

$Class* AutoConnectSequencer::load$($String* name, bool initialize) {
	$loadClass(AutoConnectSequencer, name, initialize, &_AutoConnectSequencer_ClassInfo_, allocate$AutoConnectSequencer);
	return class$;
}

$Class* AutoConnectSequencer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
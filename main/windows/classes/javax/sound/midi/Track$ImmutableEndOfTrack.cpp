#include <javax/sound/midi/Track$ImmutableEndOfTrack.h>

#include <com/sun/media/sound/MidiUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef META
#undef META_END_OF_TRACK_TYPE

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Track = ::javax::sound::midi::Track;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _Track$ImmutableEndOfTrack_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Track$ImmutableEndOfTrack::*)()>(&Track$ImmutableEndOfTrack::init$))},
	{"setMessage", "(I[BI)V", nullptr, $PUBLIC, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{}
};

$InnerClassInfo _Track$ImmutableEndOfTrack_InnerClassesInfo_[] = {
	{"javax.sound.midi.Track$ImmutableEndOfTrack", "javax.sound.midi.Track", "ImmutableEndOfTrack", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Track$ImmutableEndOfTrack_ClassInfo_ = {
	$ACC_SUPER,
	"javax.sound.midi.Track$ImmutableEndOfTrack",
	"javax.sound.midi.MetaMessage",
	nullptr,
	nullptr,
	_Track$ImmutableEndOfTrack_MethodInfo_,
	nullptr,
	nullptr,
	_Track$ImmutableEndOfTrack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.midi.Track"
};

$Object* allocate$Track$ImmutableEndOfTrack($Class* clazz) {
	return $of($alloc(Track$ImmutableEndOfTrack));
}

void Track$ImmutableEndOfTrack::init$() {
	$MetaMessage::init$($$new($bytes, 3));
	$nc(this->data)->set(0, (int8_t)$MetaMessage::META);
	$nc(this->data)->set(1, (int8_t)$MidiUtils::META_END_OF_TRACK_TYPE);
	$nc(this->data)->set(2, (int8_t)0);
}

void Track$ImmutableEndOfTrack::setMessage(int32_t type, $bytes* data, int32_t length) {
	$throwNew($InvalidMidiDataException, "cannot modify end of track message"_s);
}

Track$ImmutableEndOfTrack::Track$ImmutableEndOfTrack() {
}

$Class* Track$ImmutableEndOfTrack::load$($String* name, bool initialize) {
	$loadClass(Track$ImmutableEndOfTrack, name, initialize, &_Track$ImmutableEndOfTrack_ClassInfo_, allocate$Track$ImmutableEndOfTrack);
	return class$;
}

$Class* Track$ImmutableEndOfTrack::class$ = nullptr;

		} // midi
	} // sound
} // javax
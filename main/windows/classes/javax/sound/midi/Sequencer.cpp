#include <javax/sound/midi/Sequencer.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/ControllerEventListener.h>
#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Sequencer$SyncMode.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef LOOP_CONTINUOUSLY

using $Sequencer$SyncModeArray = $Array<::javax::sound::midi::Sequencer$SyncMode>;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ControllerEventListener = ::javax::sound::midi::ControllerEventListener;
using $MetaEventListener = ::javax::sound::midi::MetaEventListener;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $Sequence = ::javax::sound::midi::Sequence;
using $Sequencer$SyncMode = ::javax::sound::midi::Sequencer$SyncMode;
using $Track = ::javax::sound::midi::Track;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _Sequencer_FieldInfo_[] = {
	{"LOOP_CONTINUOUSLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Sequencer, LOOP_CONTINUOUSLY)},
	{}
};

$MethodInfo _Sequencer_MethodInfo_[] = {
	{"addControllerEventListener", "(Ljavax/sound/midi/ControllerEventListener;[I)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"addMetaEventListener", "(Ljavax/sound/midi/MetaEventListener;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoopCount", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoopEndPoint", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoopStartPoint", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMasterSyncMode", "()Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMasterSyncModes", "()[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getSequence", "()Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSlaveSyncMode", "()Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSlaveSyncModes", "()[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTempoFactor", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getTempoInBPM", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getTempoInMPQ", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getTickLength", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTickPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getTrackMute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getTrackSolo", "(I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRecording", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isRunning", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"recordDisable", "(Ljavax/sound/midi/Track;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"recordEnable", "(Ljavax/sound/midi/Track;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeControllerEventListener", "(Ljavax/sound/midi/ControllerEventListener;[I)[I", nullptr, $PUBLIC | $ABSTRACT},
	{"removeMetaEventListener", "(Ljavax/sound/midi/MetaEventListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLoopCount", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLoopEndPoint", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLoopStartPoint", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMasterSyncMode", "(Ljavax/sound/midi/Sequencer$SyncMode;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMicrosecondPosition", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSequence", "(Ljavax/sound/midi/Sequence;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"setSequence", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,javax.sound.midi.InvalidMidiDataException"},
	{"setSlaveSyncMode", "(Ljavax/sound/midi/Sequencer$SyncMode;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTempoFactor", "(F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTempoInBPM", "(F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTempoInMPQ", "(F)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTickPosition", "(J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTrackMute", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setTrackSolo", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"startRecording", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"stopRecording", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Sequencer_InnerClassesInfo_[] = {
	{"javax.sound.midi.Sequencer$SyncMode", "javax.sound.midi.Sequencer", "SyncMode", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Sequencer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.Sequencer",
	nullptr,
	"javax.sound.midi.MidiDevice",
	_Sequencer_FieldInfo_,
	_Sequencer_MethodInfo_,
	nullptr,
	nullptr,
	_Sequencer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.midi.Sequencer$SyncMode"
};

$Object* allocate$Sequencer($Class* clazz) {
	return $of($alloc(Sequencer));
}

$Class* Sequencer::load$($String* name, bool initialize) {
	$loadClass(Sequencer, name, initialize, &_Sequencer_ClassInfo_, allocate$Sequencer);
	return class$;
}

$Class* Sequencer::class$ = nullptr;

		} // midi
	} // sound
} // javax
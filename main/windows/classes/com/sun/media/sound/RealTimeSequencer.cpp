#include <com/sun/media/sound/RealTimeSequencer.h>

#include <com/sun/media/sound/AbstractMidiDevice$AbstractReceiver.h>
#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/EventDispatcher.h>
#include <com/sun/media/sound/MidiUtils$TempoCache.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/Printer.h>
#include <com/sun/media/sound/RealTimeSequencer$ControllerListElement.h>
#include <com/sun/media/sound/RealTimeSequencer$DataPump.h>
#include <com/sun/media/sound/RealTimeSequencer$PlayThread.h>
#include <com/sun/media/sound/RealTimeSequencer$RealTimeSequencerInfo.h>
#include <com/sun/media/sound/RealTimeSequencer$RecordingTrack.h>
#include <com/sun/media/sound/RealTimeSequencer$SequencerReceiver.h>
#include <com/sun/media/sound/RealTimeSequencer$SequencerTransmitter.h>
#include <com/sun/media/sound/ReferenceCountingDevice.h>
#include <java/io/InputStream.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <javax/sound/midi/ControllerEventListener.h>
#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiDeviceReceiver.h>
#include <javax/sound/midi/MidiDeviceTransmitter.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/MidiSystem.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Sequencer$SyncMode.h>
#include <javax/sound/midi/Sequencer.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/midi/Synthesizer.h>
#include <javax/sound/midi/Track.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

#undef DEFAULT_TEMPO_MPQ
#undef INTERNAL_CLOCK
#undef LOOP_CONTINUOUSLY
#undef NO_SYNC

using $Sequencer$SyncModeArray = $Array<::javax::sound::midi::Sequencer$SyncMode>;
using $TrackArray = $Array<::javax::sound::midi::Track>;
using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$AbstractReceiver = ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver;
using $AbstractMidiDevice$BasicTransmitter = ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter;
using $AutoConnectSequencer = ::com::sun::media::sound::AutoConnectSequencer;
using $EventDispatcher = ::com::sun::media::sound::EventDispatcher;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $MidiUtils$TempoCache = ::com::sun::media::sound::MidiUtils$TempoCache;
using $Printer = ::com::sun::media::sound::Printer;
using $RealTimeSequencer$ControllerListElement = ::com::sun::media::sound::RealTimeSequencer$ControllerListElement;
using $RealTimeSequencer$DataPump = ::com::sun::media::sound::RealTimeSequencer$DataPump;
using $RealTimeSequencer$PlayThread = ::com::sun::media::sound::RealTimeSequencer$PlayThread;
using $RealTimeSequencer$RealTimeSequencerInfo = ::com::sun::media::sound::RealTimeSequencer$RealTimeSequencerInfo;
using $RealTimeSequencer$RecordingTrack = ::com::sun::media::sound::RealTimeSequencer$RecordingTrack;
using $RealTimeSequencer$SequencerReceiver = ::com::sun::media::sound::RealTimeSequencer$SequencerReceiver;
using $RealTimeSequencer$SequencerTransmitter = ::com::sun::media::sound::RealTimeSequencer$SequencerTransmitter;
using $ReferenceCountingDevice = ::com::sun::media::sound::ReferenceCountingDevice;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ControllerEventListener = ::javax::sound::midi::ControllerEventListener;
using $MetaEventListener = ::javax::sound::midi::MetaEventListener;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiDeviceReceiver = ::javax::sound::midi::MidiDeviceReceiver;
using $MidiDeviceTransmitter = ::javax::sound::midi::MidiDeviceTransmitter;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $MidiSystem = ::javax::sound::midi::MidiSystem;
using $Receiver = ::javax::sound::midi::Receiver;
using $Sequence = ::javax::sound::midi::Sequence;
using $Sequencer = ::javax::sound::midi::Sequencer;
using $Sequencer$SyncMode = ::javax::sound::midi::Sequencer$SyncMode;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $Synthesizer = ::javax::sound::midi::Synthesizer;
using $Track = ::javax::sound::midi::Track;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RealTimeSequencer_FieldInfo_[] = {
	{"dispatchers", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/ThreadGroup;Lcom/sun/media/sound/EventDispatcher;>;", $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer, dispatchers)},
	{"info", "Ljavax/sound/midi/MidiDevice$Info;", nullptr, $STATIC | $FINAL, $staticField(RealTimeSequencer, info)},
	{"masterSyncModes", "[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer, masterSyncModes)},
	{"slaveSyncModes", "[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer, slaveSyncModes)},
	{"masterSyncMode", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer, masterSyncMode)},
	{"slaveSyncMode", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RealTimeSequencer, slaveSyncMode)},
	{"sequence", "Ljavax/sound/midi/Sequence;", nullptr, $PRIVATE, $field(RealTimeSequencer, sequence)},
	{"cacheTempoMPQ", "D", nullptr, $PRIVATE, $field(RealTimeSequencer, cacheTempoMPQ)},
	{"cacheTempoFactor", "F", nullptr, $PRIVATE, $field(RealTimeSequencer, cacheTempoFactor)},
	{"trackMuted", "[Z", nullptr, $PRIVATE, $field(RealTimeSequencer, trackMuted)},
	{"trackSolo", "[Z", nullptr, $PRIVATE, $field(RealTimeSequencer, trackSolo)},
	{"tempoCache", "Lcom/sun/media/sound/MidiUtils$TempoCache;", nullptr, $PRIVATE | $FINAL, $field(RealTimeSequencer, tempoCache)},
	{"running", "Z", nullptr, $PRIVATE | $VOLATILE, $field(RealTimeSequencer, running)},
	{"playThread", "Lcom/sun/media/sound/RealTimeSequencer$PlayThread;", nullptr, $PRIVATE, $field(RealTimeSequencer, playThread)},
	{"recording", "Z", nullptr, $PRIVATE | $VOLATILE, $field(RealTimeSequencer, recording)},
	{"recordingTracks", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;>;", $PRIVATE | $FINAL, $field(RealTimeSequencer, recordingTracks)},
	{"loopStart", "J", nullptr, $PRIVATE, $field(RealTimeSequencer, loopStart)},
	{"loopEnd", "J", nullptr, $PRIVATE, $field(RealTimeSequencer, loopEnd)},
	{"loopCount", "I", nullptr, $PRIVATE, $field(RealTimeSequencer, loopCount)},
	{"metaEventListeners", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(RealTimeSequencer, metaEventListeners)},
	{"controllerEventListeners", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/media/sound/RealTimeSequencer$ControllerListElement;>;", $PRIVATE | $FINAL, $field(RealTimeSequencer, controllerEventListeners)},
	{"autoConnect", "Z", nullptr, $PRIVATE, $field(RealTimeSequencer, autoConnect)},
	{"doAutoConnectAtNextOpen", "Z", nullptr, $PRIVATE, $field(RealTimeSequencer, doAutoConnectAtNextOpen)},
	{"autoConnectedReceiver", "Ljavax/sound/midi/Receiver;", nullptr, 0, $field(RealTimeSequencer, autoConnectedReceiver)},
	{}
};

$MethodInfo _RealTimeSequencer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*getDeviceInfo", "()Ljavax/sound/midi/MidiDevice$Info;", nullptr, $PUBLIC | $FINAL},
	{"*getMaxReceivers", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getMaxTransmitters", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $FINAL},
	{"*getReceivers", "()Ljava/util/List;", nullptr, $PUBLIC | $FINAL},
	{"*getTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC | $FINAL},
	{"*getTransmitters", "()Ljava/util/List;", nullptr, $PUBLIC | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RealTimeSequencer::*)()>(&RealTimeSequencer::init$))},
	{"addControllerEventListener", "(Ljavax/sound/midi/ControllerEventListener;[I)[I", nullptr, $PUBLIC},
	{"addMetaEventListener", "(Ljavax/sound/midi/MetaEventListener;)Z", nullptr, $PUBLIC},
	{"createReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PROTECTED, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"createTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PROTECTED, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"doAutoConnect", "()V", nullptr, $PRIVATE, $method(static_cast<void(RealTimeSequencer::*)()>(&RealTimeSequencer::doAutoConnect))},
	{"ensureBoolArraySize", "([ZI)[Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<$booleans*(*)($booleans*,int32_t)>(&RealTimeSequencer::ensureBoolArraySize))},
	{"findTrack", "(Ljavax/sound/midi/Track;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RealTimeSequencer::*)($Track*)>(&RealTimeSequencer::findTrack))},
	{"getDataPump", "()Lcom/sun/media/sound/RealTimeSequencer$DataPump;", nullptr, $PRIVATE, $method(static_cast<$RealTimeSequencer$DataPump*(RealTimeSequencer::*)()>(&RealTimeSequencer::getDataPump))},
	{"getEventDispatcher", "()Lcom/sun/media/sound/EventDispatcher;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$EventDispatcher*(*)()>(&RealTimeSequencer::getEventDispatcher))},
	{"getLoopCount", "()I", nullptr, $PUBLIC},
	{"getLoopEndPoint", "()J", nullptr, $PUBLIC},
	{"getLoopStartPoint", "()J", nullptr, $PUBLIC},
	{"getMasterSyncMode", "()Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC},
	{"getMasterSyncModes", "()[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC},
	{"getSequence", "()Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC},
	{"getSlaveSyncMode", "()Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC},
	{"getSlaveSyncModes", "()[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC},
	{"getTempoCache", "()Lcom/sun/media/sound/MidiUtils$TempoCache;", nullptr, $PRIVATE, $method(static_cast<$MidiUtils$TempoCache*(RealTimeSequencer::*)()>(&RealTimeSequencer::getTempoCache))},
	{"getTempoFactor", "()F", nullptr, $PUBLIC},
	{"getTempoInBPM", "()F", nullptr, $PUBLIC},
	{"getTempoInMPQ", "()F", nullptr, $PUBLIC},
	{"getTickLength", "()J", nullptr, $PUBLIC},
	{"getTickPosition", "()J", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTrackCount", "()I", nullptr, 0, $method(static_cast<int32_t(RealTimeSequencer::*)()>(&RealTimeSequencer::getTrackCount))},
	{"getTrackMute", "(I)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTrackSolo", "(I)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"hasReceivers", "()Z", nullptr, $PROTECTED},
	{"hasTransmitters", "()Z", nullptr, $PROTECTED},
	{"implClose", "()V", nullptr, $PROTECTED | $SYNCHRONIZED},
	{"implOpen", "()V", nullptr, $PROTECTED, nullptr, "javax.sound.midi.MidiUnavailableException"},
	{"implStart", "()V", nullptr, 0, $method(static_cast<void(RealTimeSequencer::*)()>(&RealTimeSequencer::implStart))},
	{"implStop", "()V", nullptr, 0, $method(static_cast<void(RealTimeSequencer::*)()>(&RealTimeSequencer::implStop))},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isRecording", "()Z", nullptr, $PUBLIC},
	{"isRunning", "()Z", nullptr, $PUBLIC},
	{"needCaching", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(RealTimeSequencer::*)()>(&RealTimeSequencer::needCaching))},
	{"*open", "()V", nullptr, $PUBLIC | $FINAL},
	{"propagateCaches", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(RealTimeSequencer::*)()>(&RealTimeSequencer::propagateCaches))},
	{"recordDisable", "(Ljavax/sound/midi/Track;)V", nullptr, $PUBLIC},
	{"recordEnable", "(Ljavax/sound/midi/Track;I)V", nullptr, $PUBLIC},
	{"removeControllerEventListener", "(Ljavax/sound/midi/ControllerEventListener;[I)[I", nullptr, $PUBLIC},
	{"removeMetaEventListener", "(Ljavax/sound/midi/MetaEventListener;)V", nullptr, $PUBLIC},
	{"sendControllerEvents", "(Ljavax/sound/midi/MidiMessage;)V", nullptr, 0, $method(static_cast<void(RealTimeSequencer::*)($MidiMessage*)>(&RealTimeSequencer::sendControllerEvents))},
	{"sendMetaEvents", "(Ljavax/sound/midi/MidiMessage;)V", nullptr, 0, $method(static_cast<void(RealTimeSequencer::*)($MidiMessage*)>(&RealTimeSequencer::sendMetaEvents))},
	{"setAutoConnect", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC},
	{"setCaches", "()V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<void(RealTimeSequencer::*)()>(&RealTimeSequencer::setCaches))},
	{"setLoopCount", "(I)V", nullptr, $PUBLIC},
	{"setLoopEndPoint", "(J)V", nullptr, $PUBLIC},
	{"setLoopStartPoint", "(J)V", nullptr, $PUBLIC},
	{"setMasterSyncMode", "(Ljavax/sound/midi/Sequencer$SyncMode;)V", nullptr, $PUBLIC},
	{"setMicrosecondPosition", "(J)V", nullptr, $PUBLIC},
	{"setSequence", "(Ljavax/sound/midi/Sequence;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "javax.sound.midi.InvalidMidiDataException"},
	{"setSequence", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException,javax.sound.midi.InvalidMidiDataException"},
	{"setSlaveSyncMode", "(Ljavax/sound/midi/Sequencer$SyncMode;)V", nullptr, $PUBLIC},
	{"setTempoFactor", "(F)V", nullptr, $PUBLIC},
	{"setTempoInBPM", "(F)V", nullptr, $PUBLIC},
	{"setTempoInMPQ", "(F)V", nullptr, $PUBLIC},
	{"setTickPosition", "(J)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setTrackMute", "(IZ)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setTrackSolo", "(IZ)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"start", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"startRecording", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"stopRecording", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _RealTimeSequencer_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RealTimeSequencer$DataPump", "com.sun.media.sound.RealTimeSequencer", "DataPump", $PRIVATE},
	{"com.sun.media.sound.RealTimeSequencer$PlayThread", "com.sun.media.sound.RealTimeSequencer", "PlayThread", $FINAL},
	{"com.sun.media.sound.RealTimeSequencer$RecordingTrack", "com.sun.media.sound.RealTimeSequencer", "RecordingTrack", $STATIC},
	{"com.sun.media.sound.RealTimeSequencer$ControllerListElement", "com.sun.media.sound.RealTimeSequencer", "ControllerListElement", $PRIVATE},
	{"com.sun.media.sound.RealTimeSequencer$RealTimeSequencerInfo", "com.sun.media.sound.RealTimeSequencer", "RealTimeSequencerInfo", $PRIVATE | $STATIC},
	{"com.sun.media.sound.RealTimeSequencer$SequencerReceiver", "com.sun.media.sound.RealTimeSequencer", "SequencerReceiver", $FINAL},
	{"com.sun.media.sound.RealTimeSequencer$SequencerTransmitter", "com.sun.media.sound.RealTimeSequencer", "SequencerTransmitter", $PRIVATE},
	{}
};

$ClassInfo _RealTimeSequencer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.RealTimeSequencer",
	"com.sun.media.sound.AbstractMidiDevice",
	"javax.sound.midi.Sequencer,com.sun.media.sound.AutoConnectSequencer",
	_RealTimeSequencer_FieldInfo_,
	_RealTimeSequencer_MethodInfo_,
	nullptr,
	nullptr,
	_RealTimeSequencer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.RealTimeSequencer$DataPump,com.sun.media.sound.RealTimeSequencer$PlayThread,com.sun.media.sound.RealTimeSequencer$RecordingTrack,com.sun.media.sound.RealTimeSequencer$ControllerListElement,com.sun.media.sound.RealTimeSequencer$RealTimeSequencerInfo,com.sun.media.sound.RealTimeSequencer$SequencerReceiver,com.sun.media.sound.RealTimeSequencer$SequencerTransmitter"
};

$Object* allocate$RealTimeSequencer($Class* clazz) {
	return $of($alloc(RealTimeSequencer));
}

$MidiDevice$Info* RealTimeSequencer::getDeviceInfo() {
	 return this->$AbstractMidiDevice::getDeviceInfo();
}

void RealTimeSequencer::open() {
	this->$AbstractMidiDevice::open();
}

void RealTimeSequencer::close() {
	this->$AbstractMidiDevice::close();
}

bool RealTimeSequencer::isOpen() {
	 return this->$AbstractMidiDevice::isOpen();
}

int32_t RealTimeSequencer::getMaxReceivers() {
	 return this->$AbstractMidiDevice::getMaxReceivers();
}

int32_t RealTimeSequencer::getMaxTransmitters() {
	 return this->$AbstractMidiDevice::getMaxTransmitters();
}

$Receiver* RealTimeSequencer::getReceiver() {
	 return this->$AbstractMidiDevice::getReceiver();
}

$List* RealTimeSequencer::getReceivers() {
	 return this->$AbstractMidiDevice::getReceivers();
}

$Transmitter* RealTimeSequencer::getTransmitter() {
	 return this->$AbstractMidiDevice::getTransmitter();
}

$List* RealTimeSequencer::getTransmitters() {
	 return this->$AbstractMidiDevice::getTransmitters();
}

void RealTimeSequencer::finalize() {
	this->$AbstractMidiDevice::finalize();
}

int32_t RealTimeSequencer::hashCode() {
	 return this->$AbstractMidiDevice::hashCode();
}

bool RealTimeSequencer::equals(Object$* arg0) {
	 return this->$AbstractMidiDevice::equals(arg0);
}

$Object* RealTimeSequencer::clone() {
	 return this->$AbstractMidiDevice::clone();
}

$String* RealTimeSequencer::toString() {
	 return this->$AbstractMidiDevice::toString();
}

$Map* RealTimeSequencer::dispatchers = nullptr;
$MidiDevice$Info* RealTimeSequencer::info = nullptr;
$Sequencer$SyncModeArray* RealTimeSequencer::masterSyncModes = nullptr;
$Sequencer$SyncModeArray* RealTimeSequencer::slaveSyncModes = nullptr;
$Sequencer$SyncMode* RealTimeSequencer::masterSyncMode = nullptr;
$Sequencer$SyncMode* RealTimeSequencer::slaveSyncMode = nullptr;

void RealTimeSequencer::init$() {
	$AbstractMidiDevice::init$(RealTimeSequencer::info);
	$set(this, sequence, nullptr);
	this->cacheTempoMPQ = (double)-1;
	this->cacheTempoFactor = (float)-1;
	$set(this, trackMuted, nullptr);
	$set(this, trackSolo, nullptr);
	$set(this, tempoCache, $new($MidiUtils$TempoCache));
	$set(this, recordingTracks, $new($ArrayList));
	this->loopStart = 0;
	this->loopEnd = -1;
	this->loopCount = 0;
	$set(this, metaEventListeners, $new($ArrayList));
	$set(this, controllerEventListeners, $new($ArrayList));
	this->autoConnect = false;
	this->doAutoConnectAtNextOpen = false;
	$set(this, autoConnectedReceiver, nullptr);
}

void RealTimeSequencer::setSequence($Sequence* sequence) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (sequence != this->sequence) {
			if (this->sequence != nullptr && sequence == nullptr) {
				setCaches();
				stop();
				$set(this, trackMuted, nullptr);
				$set(this, trackSolo, nullptr);
				this->loopStart = 0;
				this->loopEnd = -1;
				this->loopCount = 0;
				if (getDataPump() != nullptr) {
					$nc($(getDataPump()))->setTickPos(0);
					$nc($(getDataPump()))->resetLoopCount();
				}
			}
			if (this->playThread != nullptr) {
				$nc(this->playThread)->setSequence(sequence);
			}
			$set(this, sequence, sequence);
			if (sequence != nullptr) {
				$nc(this->tempoCache)->refresh(sequence);
				setTickPosition(0);
				propagateCaches();
			}
		} else if (sequence != nullptr) {
			$nc(this->tempoCache)->refresh(sequence);
			if (this->playThread != nullptr) {
				$nc(this->playThread)->setSequence(sequence);
			}
		}
	}
}

void RealTimeSequencer::setSequence($InputStream* stream) {
	$synchronized(this) {
		if (stream == nullptr) {
			setSequence(($Sequence*)nullptr);
			return;
		}
		$var($Sequence, seq, $MidiSystem::getSequence(stream));
		setSequence(seq);
	}
}

$Sequence* RealTimeSequencer::getSequence() {
	return this->sequence;
}

void RealTimeSequencer::start() {
	$synchronized(this) {
		if (!isOpen()) {
			$throwNew($IllegalStateException, "sequencer not open"_s);
		}
		if (this->sequence == nullptr) {
			$throwNew($IllegalStateException, "sequence not set"_s);
		}
		if (this->running == true) {
			return;
		}
		implStart();
	}
}

void RealTimeSequencer::stop() {
	$synchronized(this) {
		if (!isOpen()) {
			$throwNew($IllegalStateException, "sequencer not open"_s);
		}
		stopRecording();
		if (this->running == false) {
			return;
		}
		implStop();
	}
}

bool RealTimeSequencer::isRunning() {
	return this->running;
}

void RealTimeSequencer::startRecording() {
	if (!isOpen()) {
		$throwNew($IllegalStateException, "Sequencer not open"_s);
	}
	start();
	this->recording = true;
}

void RealTimeSequencer::stopRecording() {
	if (!isOpen()) {
		$throwNew($IllegalStateException, "Sequencer not open"_s);
	}
	this->recording = false;
}

bool RealTimeSequencer::isRecording() {
	return this->recording;
}

void RealTimeSequencer::recordEnable($Track* track, int32_t channel) {
	$useLocalCurrentObjectStackCache();
	if (!findTrack(track)) {
		$throwNew($IllegalArgumentException, "Track does not exist in the current sequence"_s);
	}
	$synchronized(this->recordingTracks) {
		$var($RealTimeSequencer$RecordingTrack, rc, $RealTimeSequencer$RecordingTrack::get(this->recordingTracks, track));
		if (rc != nullptr) {
			rc->channel = channel;
		} else {
			$nc(this->recordingTracks)->add($$new($RealTimeSequencer$RecordingTrack, track, channel));
		}
	}
}

void RealTimeSequencer::recordDisable($Track* track) {
	$synchronized(this->recordingTracks) {
		$var($RealTimeSequencer$RecordingTrack, rc, $RealTimeSequencer$RecordingTrack::get(this->recordingTracks, track));
		if (rc != nullptr) {
			$nc(this->recordingTracks)->remove($of(rc));
		}
	}
}

bool RealTimeSequencer::findTrack($Track* track) {
	bool found = false;
	if (this->sequence != nullptr) {
		$var($TrackArray, tracks, $nc(this->sequence)->getTracks());
		for (int32_t i = 0; i < $nc(tracks)->length; ++i) {
			if (track == tracks->get(i)) {
				found = true;
				break;
			}
		}
	}
	return found;
}

float RealTimeSequencer::getTempoInBPM() {
	return (float)$MidiUtils::convertTempo(getTempoInMPQ());
}

void RealTimeSequencer::setTempoInBPM(float bpm) {
	if (bpm <= 0) {
		bpm = 1.0f;
	}
	setTempoInMPQ((float)$MidiUtils::convertTempo((double)bpm));
}

float RealTimeSequencer::getTempoInMPQ() {
	if (needCaching()) {
		if (this->cacheTempoMPQ != -1) {
			return (float)this->cacheTempoMPQ;
		}
		if (this->sequence != nullptr) {
			return $nc(this->tempoCache)->getTempoMPQAt(getTickPosition());
		}
		return (float)$MidiUtils::DEFAULT_TEMPO_MPQ;
	}
	return $nc($(getDataPump()))->getTempoMPQ();
}

void RealTimeSequencer::setTempoInMPQ(float mpq) {
	if (mpq <= 0) {
		mpq = 1.0f;
	}
	if (needCaching()) {
		this->cacheTempoMPQ = mpq;
	} else {
		$nc($(getDataPump()))->setTempoMPQ(mpq);
		this->cacheTempoMPQ = (double)-1;
	}
}

void RealTimeSequencer::setTempoFactor(float factor) {
	if (factor <= 0) {
		return;
	}
	if (needCaching()) {
		this->cacheTempoFactor = factor;
	} else {
		$nc($(getDataPump()))->setTempoFactor(factor);
		this->cacheTempoFactor = (float)-1;
	}
}

float RealTimeSequencer::getTempoFactor() {
	if (needCaching()) {
		if (this->cacheTempoFactor != -1) {
			return this->cacheTempoFactor;
		}
		return 1.0f;
	}
	return $nc($(getDataPump()))->getTempoFactor();
}

int64_t RealTimeSequencer::getTickLength() {
	if (this->sequence == nullptr) {
		return 0;
	}
	return $nc(this->sequence)->getTickLength();
}

int64_t RealTimeSequencer::getTickPosition() {
	$synchronized(this) {
		if (getDataPump() == nullptr || this->sequence == nullptr) {
			return 0;
		}
		return $nc($(getDataPump()))->getTickPos();
	}
}

void RealTimeSequencer::setTickPosition(int64_t tick) {
	$synchronized(this) {
		if (tick < 0) {
			return;
		}
		if (getDataPump() == nullptr) {
			if (tick != 0) {
			}
		} else if (this->sequence == nullptr) {
			if (tick != 0) {
			}
		} else {
			$nc($(getDataPump()))->setTickPos(tick);
		}
	}
}

int64_t RealTimeSequencer::getMicrosecondLength() {
	if (this->sequence == nullptr) {
		return 0;
	}
	return $nc(this->sequence)->getMicrosecondLength();
}

int64_t RealTimeSequencer::getMicrosecondPosition() {
	if (getDataPump() == nullptr || this->sequence == nullptr) {
		return 0;
	}
	$synchronized(this->tempoCache) {
		return $MidiUtils::tick2microsecond(this->sequence, $nc($(getDataPump()))->getTickPos(), this->tempoCache);
	}
}

void RealTimeSequencer::setMicrosecondPosition(int64_t microseconds) {
	if (microseconds < 0) {
		return;
	}
	if (getDataPump() == nullptr) {
		if (microseconds != 0) {
		}
	} else if (this->sequence == nullptr) {
		if (microseconds != 0) {
		}
	} else {
		$synchronized(this->tempoCache) {
			setTickPosition($MidiUtils::microsecond2tick(this->sequence, microseconds, this->tempoCache));
		}
	}
}

void RealTimeSequencer::setMasterSyncMode($Sequencer$SyncMode* sync) {
}

$Sequencer$SyncMode* RealTimeSequencer::getMasterSyncMode() {
	return RealTimeSequencer::masterSyncMode;
}

$Sequencer$SyncModeArray* RealTimeSequencer::getMasterSyncModes() {
	$var($Sequencer$SyncModeArray, returnedModes, $new($Sequencer$SyncModeArray, $nc(RealTimeSequencer::masterSyncModes)->length));
	$System::arraycopy(RealTimeSequencer::masterSyncModes, 0, returnedModes, 0, $nc(RealTimeSequencer::masterSyncModes)->length);
	return returnedModes;
}

void RealTimeSequencer::setSlaveSyncMode($Sequencer$SyncMode* sync) {
}

$Sequencer$SyncMode* RealTimeSequencer::getSlaveSyncMode() {
	return RealTimeSequencer::slaveSyncMode;
}

$Sequencer$SyncModeArray* RealTimeSequencer::getSlaveSyncModes() {
	$var($Sequencer$SyncModeArray, returnedModes, $new($Sequencer$SyncModeArray, $nc(RealTimeSequencer::slaveSyncModes)->length));
	$System::arraycopy(RealTimeSequencer::slaveSyncModes, 0, returnedModes, 0, $nc(RealTimeSequencer::slaveSyncModes)->length);
	return returnedModes;
}

int32_t RealTimeSequencer::getTrackCount() {
	$useLocalCurrentObjectStackCache();
	$var($Sequence, seq, getSequence());
	if (seq != nullptr) {
		return $nc($($nc(this->sequence)->getTracks()))->length;
	}
	return 0;
}

void RealTimeSequencer::setTrackMute(int32_t track, bool mute) {
	$synchronized(this) {
		int32_t trackCount = getTrackCount();
		if (track < 0 || track >= getTrackCount()) {
			return;
		}
		$set(this, trackMuted, ensureBoolArraySize(this->trackMuted, trackCount));
		$nc(this->trackMuted)->set(track, mute);
		if (getDataPump() != nullptr) {
			$nc($(getDataPump()))->muteSoloChanged();
		}
	}
}

bool RealTimeSequencer::getTrackMute(int32_t track) {
	$synchronized(this) {
		if (track < 0 || track >= getTrackCount()) {
			return false;
		}
		if (this->trackMuted == nullptr || $nc(this->trackMuted)->length <= track) {
			return false;
		}
		return $nc(this->trackMuted)->get(track);
	}
}

void RealTimeSequencer::setTrackSolo(int32_t track, bool solo) {
	$synchronized(this) {
		int32_t trackCount = getTrackCount();
		if (track < 0 || track >= getTrackCount()) {
			return;
		}
		$set(this, trackSolo, ensureBoolArraySize(this->trackSolo, trackCount));
		$nc(this->trackSolo)->set(track, solo);
		if (getDataPump() != nullptr) {
			$nc($(getDataPump()))->muteSoloChanged();
		}
	}
}

bool RealTimeSequencer::getTrackSolo(int32_t track) {
	$synchronized(this) {
		if (track < 0 || track >= getTrackCount()) {
			return false;
		}
		if (this->trackSolo == nullptr || $nc(this->trackSolo)->length <= track) {
			return false;
		}
		return $nc(this->trackSolo)->get(track);
	}
}

bool RealTimeSequencer::addMetaEventListener($MetaEventListener* listener) {
	$synchronized(this->metaEventListeners) {
		if (!$nc(this->metaEventListeners)->contains(listener)) {
			$nc(this->metaEventListeners)->add(listener);
		}
		return true;
	}
}

void RealTimeSequencer::removeMetaEventListener($MetaEventListener* listener) {
	$synchronized(this->metaEventListeners) {
		int32_t index = $nc(this->metaEventListeners)->indexOf(listener);
		if (index >= 0) {
			$nc(this->metaEventListeners)->remove(index);
		}
	}
}

$ints* RealTimeSequencer::addControllerEventListener($ControllerEventListener* listener, $ints* controllers) {
	$synchronized(this->controllerEventListeners) {
		$var($RealTimeSequencer$ControllerListElement, cve, nullptr);
		bool flag = false;
		for (int32_t i = 0; i < $nc(this->controllerEventListeners)->size(); ++i) {
			$assign(cve, $cast($RealTimeSequencer$ControllerListElement, $nc(this->controllerEventListeners)->get(i)));
			if ($nc($of($nc(cve)->listener))->equals(listener)) {
				cve->addControllers(controllers);
				flag = true;
				break;
			}
		}
		if (!flag) {
			$assign(cve, $new($RealTimeSequencer$ControllerListElement, this, listener, controllers));
			$nc(this->controllerEventListeners)->add(cve);
		}
		return $nc(cve)->getControllers();
	}
}

$ints* RealTimeSequencer::removeControllerEventListener($ControllerEventListener* listener, $ints* controllers) {
	$synchronized(this->controllerEventListeners) {
		$var($RealTimeSequencer$ControllerListElement, cve, nullptr);
		bool flag = false;
		for (int32_t i = 0; i < $nc(this->controllerEventListeners)->size(); ++i) {
			$assign(cve, $cast($RealTimeSequencer$ControllerListElement, $nc(this->controllerEventListeners)->get(i)));
			if ($nc($of($nc(cve)->listener))->equals(listener)) {
				cve->removeControllers(controllers);
				flag = true;
				break;
			}
		}
		if (!flag) {
			return $new($ints, 0);
		}
		if (controllers == nullptr) {
			int32_t index = $nc(this->controllerEventListeners)->indexOf(cve);
			if (index >= 0) {
				$nc(this->controllerEventListeners)->remove(index);
			}
			return $new($ints, 0);
		}
		return $nc(cve)->getControllers();
	}
}

void RealTimeSequencer::setLoopStartPoint(int64_t tick) {
	$useLocalCurrentObjectStackCache();
	if ((tick > getTickLength()) || ((this->loopEnd != -1) && (tick > this->loopEnd)) || (tick < 0)) {
		$throwNew($IllegalArgumentException, $$str({"invalid loop start point: "_s, $$str(tick)}));
	}
	this->loopStart = tick;
}

int64_t RealTimeSequencer::getLoopStartPoint() {
	return this->loopStart;
}

void RealTimeSequencer::setLoopEndPoint(int64_t tick) {
	$useLocalCurrentObjectStackCache();
	if ((tick > getTickLength()) || ((this->loopStart > tick) && (tick != -1)) || (tick < -1)) {
		$throwNew($IllegalArgumentException, $$str({"invalid loop end point: "_s, $$str(tick)}));
	}
	this->loopEnd = tick;
}

int64_t RealTimeSequencer::getLoopEndPoint() {
	return this->loopEnd;
}

void RealTimeSequencer::setLoopCount(int32_t count) {
	$useLocalCurrentObjectStackCache();
	if (count != $Sequencer::LOOP_CONTINUOUSLY && count < 0) {
		$throwNew($IllegalArgumentException, $$str({"illegal value for loop count: "_s, $$str(count)}));
	}
	this->loopCount = count;
	if (getDataPump() != nullptr) {
		$nc($(getDataPump()))->resetLoopCount();
	}
}

int32_t RealTimeSequencer::getLoopCount() {
	return this->loopCount;
}

void RealTimeSequencer::implOpen() {
	$set(this, playThread, $new($RealTimeSequencer$PlayThread, this));
	if (this->sequence != nullptr) {
		$nc(this->playThread)->setSequence(this->sequence);
	}
	propagateCaches();
	if (this->doAutoConnectAtNextOpen) {
		doAutoConnect();
	}
}

void RealTimeSequencer::doAutoConnect() {
	$useLocalCurrentObjectStackCache();
	$var($Receiver, rec, nullptr);
	try {
		$var($Synthesizer, synth, $MidiSystem::getSynthesizer());
		if ($instanceOf($ReferenceCountingDevice, synth)) {
			$assign(rec, $nc(($cast($ReferenceCountingDevice, synth)))->getReceiverReferenceCounting());
		} else {
			$nc(synth)->open();
			{
				$var($Throwable, var$0, nullptr);
				try {
					$assign(rec, synth->getReceiver());
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (rec == nullptr) {
						synth->close();
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	} catch ($Exception& e) {
	}
	if (rec == nullptr) {
		try {
			$assign(rec, $MidiSystem::getReceiver());
		} catch ($Exception& e) {
		}
	}
	if (rec != nullptr) {
		$set(this, autoConnectedReceiver, rec);
		try {
			$nc($(getTransmitter()))->setReceiver(rec);
		} catch ($Exception& e) {
		}
	}
}

void RealTimeSequencer::propagateCaches() {
	$synchronized(this) {
		if (this->sequence != nullptr && isOpen()) {
			if (this->cacheTempoFactor != -1) {
				setTempoFactor(this->cacheTempoFactor);
			}
			if (this->cacheTempoMPQ == -1) {
				setTempoInMPQ(($$new($MidiUtils$TempoCache, this->sequence))->getTempoMPQAt(getTickPosition()));
			} else {
				setTempoInMPQ((float)this->cacheTempoMPQ);
			}
		}
	}
}

void RealTimeSequencer::setCaches() {
	$synchronized(this) {
		this->cacheTempoFactor = getTempoFactor();
		this->cacheTempoMPQ = getTempoInMPQ();
	}
}

void RealTimeSequencer::implClose() {
	$synchronized(this) {
		if (this->playThread == nullptr) {
			$init($Printer);
			if ($Printer::err$) {
				$Printer::err("RealTimeSequencer.implClose() called, but playThread not instanciated!"_s);
			}
		} else {
			$nc(this->playThread)->close();
			$set(this, playThread, nullptr);
		}
		$AbstractMidiDevice::implClose();
		$set(this, sequence, nullptr);
		this->running = false;
		this->cacheTempoMPQ = (double)-1;
		this->cacheTempoFactor = (float)-1;
		$set(this, trackMuted, nullptr);
		$set(this, trackSolo, nullptr);
		this->loopStart = 0;
		this->loopEnd = -1;
		this->loopCount = 0;
		this->doAutoConnectAtNextOpen = this->autoConnect;
		if (this->autoConnectedReceiver != nullptr) {
			try {
				$nc(this->autoConnectedReceiver)->close();
			} catch ($Exception& e) {
			}
			$set(this, autoConnectedReceiver, nullptr);
		}
	}
}

void RealTimeSequencer::implStart() {
	if (this->playThread == nullptr) {
		$init($Printer);
		if ($Printer::err$) {
			$Printer::err("RealTimeSequencer.implStart() called, but playThread not instanciated!"_s);
		}
		return;
	}
	$nc(this->tempoCache)->refresh(this->sequence);
	if (!this->running) {
		this->running = true;
		$nc(this->playThread)->start();
	}
}

void RealTimeSequencer::implStop() {
	if (this->playThread == nullptr) {
		$init($Printer);
		if ($Printer::err$) {
			$Printer::err("RealTimeSequencer.implStop() called, but playThread not instanciated!"_s);
		}
		return;
	}
	this->recording = false;
	if (this->running) {
		this->running = false;
		$nc(this->playThread)->stop();
	}
}

$EventDispatcher* RealTimeSequencer::getEventDispatcher() {
	$init(RealTimeSequencer);
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	$synchronized(RealTimeSequencer::dispatchers) {
		$var($EventDispatcher, eventDispatcher, $cast($EventDispatcher, $nc(RealTimeSequencer::dispatchers)->get(tg)));
		if (eventDispatcher == nullptr) {
			$assign(eventDispatcher, $new($EventDispatcher));
			$nc(RealTimeSequencer::dispatchers)->put(tg, eventDispatcher);
			eventDispatcher->start();
		}
		return eventDispatcher;
	}
}

void RealTimeSequencer::sendMetaEvents($MidiMessage* message) {
	if ($nc(this->metaEventListeners)->size() == 0) {
		return;
	}
	$nc($(getEventDispatcher()))->sendAudioEvents(message, this->metaEventListeners);
}

void RealTimeSequencer::sendControllerEvents($MidiMessage* message) {
	$useLocalCurrentObjectStackCache();
	int32_t size = $nc(this->controllerEventListeners)->size();
	if (size == 0) {
		return;
	}
	if (!($instanceOf($ShortMessage, message))) {
		return;
	}
	$var($ShortMessage, msg, $cast($ShortMessage, message));
	int32_t controller = $nc(msg)->getData1();
	$var($List, sendToListeners, $new($ArrayList));
	for (int32_t i = 0; i < size; ++i) {
		$var($RealTimeSequencer$ControllerListElement, cve, $cast($RealTimeSequencer$ControllerListElement, $nc(this->controllerEventListeners)->get(i)));
		for (int32_t j = 0; j < $nc($nc(cve)->controllers)->length; ++j) {
			if ($nc(cve->controllers)->get(j) == controller) {
				sendToListeners->add(cve->listener);
				break;
			}
		}
	}
	$nc($(getEventDispatcher()))->sendAudioEvents(message, sendToListeners);
}

bool RealTimeSequencer::needCaching() {
	return !isOpen() || (this->sequence == nullptr) || (this->playThread == nullptr);
}

$RealTimeSequencer$DataPump* RealTimeSequencer::getDataPump() {
	if (this->playThread != nullptr) {
		return $nc(this->playThread)->getDataPump();
	}
	return nullptr;
}

$MidiUtils$TempoCache* RealTimeSequencer::getTempoCache() {
	return this->tempoCache;
}

$booleans* RealTimeSequencer::ensureBoolArraySize($booleans* array, int32_t desiredSize) {
	$init(RealTimeSequencer);
	if (array == nullptr) {
		return $new($booleans, desiredSize);
	}
	if ($nc(array)->length < desiredSize) {
		$var($booleans, newArray, $new($booleans, desiredSize));
		$System::arraycopy(array, 0, newArray, 0, array->length);
		return newArray;
	}
	return array;
}

bool RealTimeSequencer::hasReceivers() {
	return true;
}

$Receiver* RealTimeSequencer::createReceiver() {
	return $new($RealTimeSequencer$SequencerReceiver, this);
}

bool RealTimeSequencer::hasTransmitters() {
	return true;
}

$Transmitter* RealTimeSequencer::createTransmitter() {
	return $new($RealTimeSequencer$SequencerTransmitter, this);
}

void RealTimeSequencer::setAutoConnect($Receiver* autoConnectedReceiver) {
	this->autoConnect = (autoConnectedReceiver != nullptr);
	$set(this, autoConnectedReceiver, autoConnectedReceiver);
}

void clinit$RealTimeSequencer($Class* class$) {
	$assignStatic(RealTimeSequencer::dispatchers, $new($WeakHashMap));
	$assignStatic(RealTimeSequencer::info, $new($RealTimeSequencer$RealTimeSequencerInfo));
	$init($Sequencer$SyncMode);
	$assignStatic(RealTimeSequencer::masterSyncModes, $new($Sequencer$SyncModeArray, {$Sequencer$SyncMode::INTERNAL_CLOCK}));
	$assignStatic(RealTimeSequencer::slaveSyncModes, $new($Sequencer$SyncModeArray, {$Sequencer$SyncMode::NO_SYNC}));
	$assignStatic(RealTimeSequencer::masterSyncMode, $Sequencer$SyncMode::INTERNAL_CLOCK);
	$assignStatic(RealTimeSequencer::slaveSyncMode, $Sequencer$SyncMode::NO_SYNC);
}

RealTimeSequencer::RealTimeSequencer() {
}

$Class* RealTimeSequencer::load$($String* name, bool initialize) {
	$loadClass(RealTimeSequencer, name, initialize, &_RealTimeSequencer_ClassInfo_, clinit$RealTimeSequencer, allocate$RealTimeSequencer);
	return class$;
}

$Class* RealTimeSequencer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
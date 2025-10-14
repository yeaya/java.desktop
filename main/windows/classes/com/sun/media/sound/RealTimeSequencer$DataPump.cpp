#include <com/sun/media/sound/RealTimeSequencer$DataPump.h>

#include <com/sun/media/sound/AbstractMidiDevice$TransmitterList.h>
#include <com/sun/media/sound/MidiUtils$TempoCache.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/Printer.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef CONTROL_CHANGE
#undef EOM
#undef META
#undef NOTE_OFF
#undef NOTE_ON
#undef PITCH_BEND
#undef PPQ
#undef PROGRAM_CHANGE

using $TrackArray = $Array<::javax::sound::midi::Track>;
using $byteArray2 = $Array<int8_t, 2>;
using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$TransmitterList = ::com::sun::media::sound::AbstractMidiDevice$TransmitterList;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $MidiUtils$TempoCache = ::com::sun::media::sound::MidiUtils$TempoCache;
using $Printer = ::com::sun::media::sound::Printer;
using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Sequence = ::javax::sound::midi::Sequence;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RealTimeSequencer$DataPump_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/RealTimeSequencer;", nullptr, $FINAL | $SYNTHETIC, $field(RealTimeSequencer$DataPump, this$0)},
	{"currTempo", "F", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, currTempo)},
	{"tempoFactor", "F", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, tempoFactor)},
	{"inverseTempoFactor", "F", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, inverseTempoFactor)},
	{"ignoreTempoEventAt", "J", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, ignoreTempoEventAt)},
	{"resolution", "I", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, resolution)},
	{"divisionType", "F", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, divisionType)},
	{"checkPointMillis", "J", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, checkPointMillis)},
	{"checkPointTick", "J", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, checkPointTick)},
	{"noteOnCache", "[I", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, noteOnCache)},
	{"tracks", "[Ljavax/sound/midi/Track;", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, tracks)},
	{"trackDisabled", "[Z", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, trackDisabled)},
	{"trackReadPos", "[I", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, trackReadPos)},
	{"lastTick", "J", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, lastTick)},
	{"needReindex", "Z", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, needReindex)},
	{"currLoopCounter", "I", nullptr, $PRIVATE, $field(RealTimeSequencer$DataPump, currLoopCounter)},
	{}
};

$MethodInfo _RealTimeSequencer$DataPump_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/RealTimeSequencer;)V", nullptr, 0, $method(static_cast<void(RealTimeSequencer$DataPump::*)($RealTimeSequencer*)>(&RealTimeSequencer$DataPump::init$))},
	{"ReindexTrack", "(IJ)V", nullptr, $PRIVATE, $method(static_cast<void(RealTimeSequencer$DataPump::*)(int32_t,int64_t)>(&RealTimeSequencer$DataPump::ReindexTrack))},
	{"applyDisabledTracks", "([Z[Z)V", nullptr, $PRIVATE, $method(static_cast<void(RealTimeSequencer$DataPump::*)($booleans*,$booleans*)>(&RealTimeSequencer$DataPump::applyDisabledTracks))},
	{"chaseEvents", "(JJ)V", nullptr, $SYNCHRONIZED},
	{"chaseTrackEvents", "(IJJZ[[B)V", nullptr, $PRIVATE, $method(static_cast<void(RealTimeSequencer$DataPump::*)(int32_t,int64_t,int64_t,bool,$byteArray2*)>(&RealTimeSequencer$DataPump::chaseTrackEvents))},
	{"clearNoteOnCache", "()V", nullptr, 0},
	{"dispatchMessage", "(ILjavax/sound/midi/MidiEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(RealTimeSequencer$DataPump::*)(int32_t,$MidiEvent*)>(&RealTimeSequencer$DataPump::dispatchMessage))},
	{"getCurrentTimeMillis", "()J", nullptr, $PRIVATE, $method(static_cast<int64_t(RealTimeSequencer$DataPump::*)()>(&RealTimeSequencer$DataPump::getCurrentTimeMillis))},
	{"getTempoFactor", "()F", nullptr, 0},
	{"getTempoMPQ", "()F", nullptr, 0},
	{"getTickPos", "()J", nullptr, 0},
	{"hasCachedTempo", "()Z", nullptr, 0},
	{"init", "()V", nullptr, $SYNCHRONIZED},
	{"makeDisabledArray", "()[Z", nullptr, $PRIVATE, $method(static_cast<$booleans*(RealTimeSequencer$DataPump::*)()>(&RealTimeSequencer$DataPump::makeDisabledArray))},
	{"millis2tick", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(RealTimeSequencer$DataPump::*)(int64_t)>(&RealTimeSequencer$DataPump::millis2tick))},
	{"muteSoloChanged", "()V", nullptr, $SYNCHRONIZED},
	{"notesOff", "(Z)V", nullptr, 0},
	{"pump", "()Z", nullptr, $SYNCHRONIZED},
	{"resetLoopCount", "()V", nullptr, $SYNCHRONIZED},
	{"sendNoteOffIfOn", "(Ljavax/sound/midi/Track;J)V", nullptr, $PRIVATE, $method(static_cast<void(RealTimeSequencer$DataPump::*)($Track*,int64_t)>(&RealTimeSequencer$DataPump::sendNoteOffIfOn))},
	{"setSequence", "(Ljavax/sound/midi/Sequence;)V", nullptr, $SYNCHRONIZED},
	{"setTempoFactor", "(F)V", nullptr, $SYNCHRONIZED},
	{"setTempoMPQ", "(F)V", nullptr, $SYNCHRONIZED},
	{"setTickPos", "(J)V", nullptr, $SYNCHRONIZED},
	{"tick2millis", "(J)J", nullptr, $PRIVATE, $method(static_cast<int64_t(RealTimeSequencer$DataPump::*)(int64_t)>(&RealTimeSequencer$DataPump::tick2millis))},
	{}
};

$InnerClassInfo _RealTimeSequencer$DataPump_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RealTimeSequencer$DataPump", "com.sun.media.sound.RealTimeSequencer", "DataPump", $PRIVATE},
	{}
};

$ClassInfo _RealTimeSequencer$DataPump_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.RealTimeSequencer$DataPump",
	"java.lang.Object",
	nullptr,
	_RealTimeSequencer$DataPump_FieldInfo_,
	_RealTimeSequencer$DataPump_MethodInfo_,
	nullptr,
	nullptr,
	_RealTimeSequencer$DataPump_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.RealTimeSequencer"
};

$Object* allocate$RealTimeSequencer$DataPump($Class* clazz) {
	return $of($alloc(RealTimeSequencer$DataPump));
}

void RealTimeSequencer$DataPump::init$($RealTimeSequencer* this$0) {
	$set(this, this$0, this$0);
	this->needReindex = false;
	this->currLoopCounter = 0;
	init();
}

void RealTimeSequencer$DataPump::init() {
	$synchronized(this) {
		this->ignoreTempoEventAt = -1;
		this->tempoFactor = 1.0f;
		this->inverseTempoFactor = 1.0f;
		$set(this, noteOnCache, $new($ints, 128));
		$set(this, tracks, nullptr);
		$set(this, trackDisabled, nullptr);
	}
}

void RealTimeSequencer$DataPump::setTickPos(int64_t tickPos) {
	$synchronized(this) {
		int64_t oldLastTick = tickPos;
		this->lastTick = tickPos;
		if (this->this$0->running) {
			notesOff(false);
		}
		if (this->this$0->running || tickPos > 0) {
			chaseEvents(oldLastTick, tickPos);
		} else {
			this->needReindex = true;
		}
		if (!hasCachedTempo()) {
			setTempoMPQ($nc($(this->this$0->getTempoCache()))->getTempoMPQAt(this->lastTick, this->currTempo));
			this->ignoreTempoEventAt = -1;
		}
		this->checkPointMillis = 0;
	}
}

int64_t RealTimeSequencer$DataPump::getTickPos() {
	return this->lastTick;
}

bool RealTimeSequencer$DataPump::hasCachedTempo() {
	if (this->ignoreTempoEventAt != this->lastTick) {
		this->ignoreTempoEventAt = -1;
	}
	return this->ignoreTempoEventAt >= 0;
}

void RealTimeSequencer$DataPump::setTempoMPQ(float tempoMPQ) {
	$synchronized(this) {
		if (tempoMPQ > 0 && tempoMPQ != this->currTempo) {
			this->ignoreTempoEventAt = this->lastTick;
			this->currTempo = tempoMPQ;
			this->checkPointMillis = 0;
		}
	}
}

float RealTimeSequencer$DataPump::getTempoMPQ() {
	return this->currTempo;
}

void RealTimeSequencer$DataPump::setTempoFactor(float factor) {
	$synchronized(this) {
		if (factor > 0 && factor != this->tempoFactor) {
			this->tempoFactor = factor;
			this->inverseTempoFactor = 1.0f / factor;
			this->checkPointMillis = 0;
		}
	}
}

float RealTimeSequencer$DataPump::getTempoFactor() {
	return this->tempoFactor;
}

void RealTimeSequencer$DataPump::muteSoloChanged() {
	$synchronized(this) {
		$var($booleans, newDisabled, makeDisabledArray());
		if (this->this$0->running) {
			applyDisabledTracks(this->trackDisabled, newDisabled);
		}
		$set(this, trackDisabled, newDisabled);
	}
}

void RealTimeSequencer$DataPump::setSequence($Sequence* seq) {
	$synchronized(this) {
		if (seq == nullptr) {
			init();
			return;
		}
		$set(this, tracks, $nc(seq)->getTracks());
		muteSoloChanged();
		this->resolution = seq->getResolution();
		this->divisionType = seq->getDivisionType();
		$set(this, trackReadPos, $new($ints, $nc(this->tracks)->length));
		this->checkPointMillis = 0;
		this->needReindex = true;
	}
}

void RealTimeSequencer$DataPump::resetLoopCount() {
	$synchronized(this) {
		this->currLoopCounter = this->this$0->loopCount;
	}
}

void RealTimeSequencer$DataPump::clearNoteOnCache() {
	for (int32_t i = 0; i < 128; ++i) {
		$nc(this->noteOnCache)->set(i, 0);
	}
}

void RealTimeSequencer$DataPump::notesOff(bool doControllers) {
	int32_t done = 0;
	for (int32_t ch = 0; ch < 16; ++ch) {
		int32_t channelMask = ($sl(1, ch));
		for (int32_t i = 0; i < 128; ++i) {
			if (((int32_t)($nc(this->noteOnCache)->get(i) & (uint32_t)channelMask)) != 0) {
				(*$nc(this->noteOnCache))[i] ^= channelMask;
				$nc($(this->this$0->getTransmitterList()))->sendMessage(($ShortMessage::NOTE_ON | ch) | (i << 8), (int64_t)-1);
				++done;
			}
		}
		$nc($(this->this$0->getTransmitterList()))->sendMessage(($ShortMessage::CONTROL_CHANGE | ch) | (123 << 8), (int64_t)-1);
		$nc($(this->this$0->getTransmitterList()))->sendMessage(($ShortMessage::CONTROL_CHANGE | ch) | (64 << 8), (int64_t)-1);
		if (doControllers) {
			$nc($(this->this$0->getTransmitterList()))->sendMessage(($ShortMessage::CONTROL_CHANGE | ch) | (121 << 8), (int64_t)-1);
			++done;
		}
	}
}

$booleans* RealTimeSequencer$DataPump::makeDisabledArray() {
	if (this->tracks == nullptr) {
		return nullptr;
	}
	$var($booleans, newTrackDisabled, $new($booleans, $nc(this->tracks)->length));
	$var($booleans, solo, nullptr);
	$var($booleans, mute, nullptr);
	$synchronized(this->this$0) {
		$assign(mute, this->this$0->trackMuted);
		$assign(solo, this->this$0->trackSolo);
	}
	bool hasSolo = false;
	if (solo != nullptr) {
		for (int32_t i = 0; i < solo->length; ++i) {
			if (solo->get(i)) {
				hasSolo = true;
				break;
			}
		}
	}
	if (hasSolo) {
		for (int32_t i = 0; i < newTrackDisabled->length; ++i) {
			newTrackDisabled->set(i, (i >= $nc(solo)->length) || (!$nc(solo)->get(i)));
		}
	} else {
		for (int32_t i = 0; i < newTrackDisabled->length; ++i) {
			newTrackDisabled->set(i, (mute != nullptr) && (i < mute->length) && (mute->get(i)));
		}
	}
	return newTrackDisabled;
}

void RealTimeSequencer$DataPump::sendNoteOffIfOn($Track* track, int64_t endTick) {
	int32_t size = $nc(track)->size();
	int32_t done = 0;
	try {
		for (int32_t i = 0; i < size; ++i) {
			$var($MidiEvent, event, track->get(i));
			if ($nc(event)->getTick() > endTick) {
				break;
			}
			$var($MidiMessage, msg, $nc(event)->getMessage());
			int32_t status = $nc(msg)->getStatus();
			int32_t len = msg->getLength();
			if (len == 3 && (((int32_t)(status & (uint32_t)240)) == $ShortMessage::NOTE_ON)) {
				int32_t note = -1;
				if ($instanceOf($ShortMessage, msg)) {
					$var($ShortMessage, smsg, $cast($ShortMessage, msg));
					if (smsg->getData2() > 0) {
						note = smsg->getData1();
					}
				} else {
					$var($bytes, data, msg->getMessage());
					if (((int32_t)($nc(data)->get(2) & (uint32_t)127)) > 0) {
						note = (int32_t)(data->get(1) & (uint32_t)127);
					}
				}
				if (note >= 0) {
					int32_t bit = $sl(1, (int32_t)(status & (uint32_t)15));
					if (((int32_t)($nc(this->noteOnCache)->get(note) & (uint32_t)bit)) != 0) {
						$nc($(this->this$0->getTransmitterList()))->sendMessage(status | (note << 8), (int64_t)-1);
						(*$nc(this->noteOnCache))[note] &= (uint32_t)(0x0000FFFF ^ bit);
						++done;
					}
				}
			}
		}
	} catch ($ArrayIndexOutOfBoundsException&) {
		$catch();
	}
}

void RealTimeSequencer$DataPump::applyDisabledTracks($booleans* oldDisabled, $booleans* newDisabled) {
	$var($byteArray2, tempArray, nullptr);
	$synchronized(this->this$0) {
		for (int32_t i = 0; i < $nc(newDisabled)->length; ++i) {
			if (((oldDisabled == nullptr) || (i >= $nc(oldDisabled)->length) || !$nc(oldDisabled)->get(i)) && newDisabled->get(i)) {
				if ($nc(this->tracks)->length > i) {
					sendNoteOffIfOn($nc(this->tracks)->get(i), this->lastTick);
				}
			} else if ((oldDisabled != nullptr) && (i < oldDisabled->length) && oldDisabled->get(i) && !newDisabled->get(i)) {
				if (tempArray == nullptr) {
					$assign(tempArray, $new($byteArray2, 128, 16));
				}
				chaseTrackEvents(i, 0, this->lastTick, true, tempArray);
			}
		}
	}
}

void RealTimeSequencer$DataPump::chaseTrackEvents(int32_t trackNum, int64_t startTick, int64_t endTick, bool doReindex, $byteArray2* tempArray) {
	if (startTick > endTick) {
		startTick = 0;
	}
	$var($bytes, progs, $new($bytes, 16));
	for (int32_t ch = 0; ch < 16; ++ch) {
		progs->set(ch, (int8_t)-1);
		for (int32_t co = 0; co < 128; ++co) {
			$nc($nc(tempArray)->get(co))->set(ch, (int8_t)-1);
		}
	}
	$var($Track, track, $nc(this->tracks)->get(trackNum));
	int32_t size = $nc(track)->size();
	try {
		for (int32_t i = 0; i < size; ++i) {
			$var($MidiEvent, event, track->get(i));
			if ($nc(event)->getTick() >= endTick) {
				if (doReindex && (trackNum < $nc(this->trackReadPos)->length)) {
					$nc(this->trackReadPos)->set(trackNum, (i > 0) ? (i - 1) : 0);
				}
				break;
			}
			$var($MidiMessage, msg, $nc(event)->getMessage());
			int32_t status = $nc(msg)->getStatus();
			int32_t len = msg->getLength();
			if (len == 3 && (((int32_t)(status & (uint32_t)240)) == $ShortMessage::CONTROL_CHANGE)) {
				if ($instanceOf($ShortMessage, msg)) {
					$var($ShortMessage, smsg, $cast($ShortMessage, msg));
					$nc($nc(tempArray)->get((int32_t)(smsg->getData1() & (uint32_t)127)))->set((int32_t)(status & (uint32_t)15), (int8_t)smsg->getData2());
				} else {
					$var($bytes, data, msg->getMessage());
					$nc($nc(tempArray)->get((int32_t)($nc(data)->get(1) & (uint32_t)127)))->set((int32_t)(status & (uint32_t)15), data->get(2));
				}
			}
			if (len == 2 && (((int32_t)(status & (uint32_t)240)) == $ShortMessage::PROGRAM_CHANGE)) {
				if ($instanceOf($ShortMessage, msg)) {
					$var($ShortMessage, smsg, $cast($ShortMessage, msg));
					progs->set((int32_t)(status & (uint32_t)15), (int8_t)smsg->getData1());
				} else {
					$var($bytes, data, msg->getMessage());
					progs->set((int32_t)(status & (uint32_t)15), $nc(data)->get(1));
				}
			}
		}
	} catch ($ArrayIndexOutOfBoundsException&) {
		$catch();
	}
	int32_t numControllersSent = 0;
	for (int32_t ch = 0; ch < 16; ++ch) {
		for (int32_t co = 0; co < 128; ++co) {
			int8_t controllerValue = $nc($nc(tempArray)->get(co))->get(ch);
			if (controllerValue >= 0) {
				int32_t packedMsg = (($ShortMessage::CONTROL_CHANGE | ch) | (co << 8)) | (controllerValue << 16);
				$nc($(this->this$0->getTransmitterList()))->sendMessage(packedMsg, (int64_t)-1);
				++numControllersSent;
			}
		}
		if (progs->get(ch) >= 0) {
			$nc($(this->this$0->getTransmitterList()))->sendMessage(($ShortMessage::PROGRAM_CHANGE | ch) | (progs->get(ch) << 8), (int64_t)-1);
		}
		if (progs->get(ch) >= 0 || startTick == 0 || endTick == 0) {
			$nc($(this->this$0->getTransmitterList()))->sendMessage(($ShortMessage::PITCH_BEND | ch) | (64 << 16), (int64_t)-1);
			$nc($(this->this$0->getTransmitterList()))->sendMessage(($ShortMessage::CONTROL_CHANGE | ch) | (64 << 8), (int64_t)-1);
		}
	}
}

void RealTimeSequencer$DataPump::chaseEvents(int64_t startTick, int64_t endTick) {
	$synchronized(this) {
		$var($byteArray2, tempArray, $new($byteArray2, 128, 16));
		for (int32_t t = 0; t < $nc(this->tracks)->length; ++t) {
			if ((this->trackDisabled == nullptr) || ($nc(this->trackDisabled)->length <= t) || (!$nc(this->trackDisabled)->get(t))) {
				chaseTrackEvents(t, startTick, endTick, true, tempArray);
			}
		}
	}
}

int64_t RealTimeSequencer$DataPump::getCurrentTimeMillis() {
	return $div($System::nanoTime(), (int64_t)1000000);
}

int64_t RealTimeSequencer$DataPump::millis2tick(int64_t millis) {
	$init($Sequence);
	if (this->divisionType != $Sequence::PPQ) {
		double dTick = $div(((((double)millis) * this->tempoFactor) * ((double)this->divisionType) * ((double)this->resolution)), ((double)1000));
		return $cast(int64_t, dTick);
	}
	return $MidiUtils::microsec2ticks(millis * 1000, this->currTempo * this->inverseTempoFactor, this->resolution);
}

int64_t RealTimeSequencer$DataPump::tick2millis(int64_t tick) {
	$init($Sequence);
	if (this->divisionType != $Sequence::PPQ) {
		double dMillis = ((((double)tick) * 1000) / (this->tempoFactor * ((double)this->divisionType) * ((double)this->resolution)));
		return $cast(int64_t, dMillis);
	}
	return $MidiUtils::ticks2microsec(tick, this->currTempo * this->inverseTempoFactor, this->resolution) / 1000;
}

void RealTimeSequencer$DataPump::ReindexTrack(int32_t trackNum, int64_t tick) {
	if (trackNum < $nc(this->trackReadPos)->length && trackNum < $nc(this->tracks)->length) {
		$nc(this->trackReadPos)->set(trackNum, $MidiUtils::tick2index($nc(this->tracks)->get(trackNum), tick));
	}
}

bool RealTimeSequencer$DataPump::dispatchMessage(int32_t trackNum, $MidiEvent* event) {
	bool changesPending = false;
	$var($MidiMessage, message, $nc(event)->getMessage());
	int32_t msgStatus = $nc(message)->getStatus();
	int32_t msgLen = message->getLength();
	if (msgStatus == $MetaMessage::META && msgLen >= 2) {
		if (trackNum == 0) {
			int32_t newTempo = $MidiUtils::getTempoMPQ(message);
			if (newTempo > 0) {
				if (event->getTick() != this->ignoreTempoEventAt) {
					setTempoMPQ((float)newTempo);
					changesPending = true;
				}
				this->ignoreTempoEventAt = -1;
			}
		}
		this->this$0->sendMetaEvents(message);
	} else {
		$nc($(this->this$0->getTransmitterList()))->sendMessage(message, (int64_t)-1);
		switch ((int32_t)(msgStatus & (uint32_t)240)) {
		case $ShortMessage::NOTE_OFF:
			{
				{
					int32_t note = (int32_t)($nc(($cast($ShortMessage, message)))->getData1() & (uint32_t)127);
					(*$nc(this->noteOnCache))[note] &= (uint32_t)(0x0000FFFF ^ ($sl(1, (int32_t)(msgStatus & (uint32_t)15))));
					break;
				}
			}
		case $ShortMessage::NOTE_ON:
			{
				{
					$var($ShortMessage, smsg, $cast($ShortMessage, message));
					int32_t note = (int32_t)(smsg->getData1() & (uint32_t)127);
					int32_t vel = (int32_t)(smsg->getData2() & (uint32_t)127);
					if (vel > 0) {
						(*$nc(this->noteOnCache))[note] |= $sl(1, (int32_t)(msgStatus & (uint32_t)15));
					} else {
						(*$nc(this->noteOnCache))[note] &= (uint32_t)(0x0000FFFF ^ ($sl(1, (int32_t)(msgStatus & (uint32_t)15))));
					}
					break;
				}
			}
		case $ShortMessage::CONTROL_CHANGE:
			{
				this->this$0->sendControllerEvents(message);
				break;
			}
		}
	}
	return changesPending;
}

bool RealTimeSequencer$DataPump::pump() {
	$synchronized(this) {
		int64_t currMillis = 0;
		int64_t targetTick = this->lastTick;
		$var($MidiEvent, currEvent, nullptr);
		bool changesPending = false;
		bool doLoop = false;
		bool EOM = false;
		currMillis = getCurrentTimeMillis();
		int32_t finishedTracks = 0;
		do {
			changesPending = false;
			if (this->needReindex) {
				if ($nc(this->trackReadPos)->length < $nc(this->tracks)->length) {
					$set(this, trackReadPos, $new($ints, $nc(this->tracks)->length));
				}
				for (int32_t t = 0; t < $nc(this->tracks)->length; ++t) {
					ReindexTrack(t, targetTick);
				}
				this->needReindex = false;
				this->checkPointMillis = 0;
			}
			if (this->checkPointMillis == 0) {
				currMillis = getCurrentTimeMillis();
				this->checkPointMillis = currMillis;
				targetTick = this->lastTick;
				this->checkPointTick = targetTick;
			} else {
				targetTick = this->checkPointTick + millis2tick(currMillis - this->checkPointMillis);
				if ((this->this$0->loopEnd != -1) && ((this->this$0->loopCount > 0 && this->currLoopCounter > 0) || (this->this$0->loopCount == -1))) {
					if (this->lastTick <= this->this$0->loopEnd && targetTick >= this->this$0->loopEnd) {
						targetTick = this->this$0->loopEnd - 1;
						doLoop = true;
					}
				}
				this->lastTick = targetTick;
			}
			finishedTracks = 0;
			for (int32_t t = 0; t < $nc(this->tracks)->length; ++t) {
				try {
					bool disabled = $nc(this->trackDisabled)->get(t);
					$var($Track, thisTrack, $nc(this->tracks)->get(t));
					int32_t readPos = $nc(this->trackReadPos)->get(t);
					int32_t size = $nc(thisTrack)->size();
					while (!changesPending && (readPos < size) && $nc(($assign(currEvent, thisTrack->get(readPos))))->getTick() <= targetTick) {
						if ((readPos == size - 1) && $MidiUtils::isMetaEndOfTrack($($nc(currEvent)->getMessage()))) {
							readPos = size;
							break;
						}
						++readPos;
						if (!disabled || ((t == 0) && ($MidiUtils::isMetaTempo($($nc(currEvent)->getMessage()))))) {
							changesPending = dispatchMessage(t, currEvent);
						}
					}
					if (readPos >= size) {
						++finishedTracks;
					}
					$nc(this->trackReadPos)->set(t, readPos);
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$init($Printer);
					if ($Printer::err$) {
						e->printStackTrace();
					}
					if ($instanceOf($ArrayIndexOutOfBoundsException, e)) {
						this->needReindex = true;
						changesPending = true;
					}
				}
				if (changesPending) {
					break;
				}
			}
			EOM = (finishedTracks == $nc(this->tracks)->length);
			if (doLoop || (((this->this$0->loopCount > 0 && this->currLoopCounter > 0) || (this->this$0->loopCount == -1)) && !changesPending && (this->this$0->loopEnd == -1) && EOM)) {
				int64_t oldCheckPointMillis = this->checkPointMillis;
				int64_t loopEndTick = this->this$0->loopEnd;
				if (loopEndTick == -1) {
					loopEndTick = this->lastTick;
				}
				if (this->this$0->loopCount != -1) {
					--this->currLoopCounter;
				}
				setTickPos(this->this$0->loopStart);
				this->checkPointMillis = oldCheckPointMillis + tick2millis(loopEndTick - this->checkPointTick);
				this->checkPointTick = this->this$0->loopStart;
				this->needReindex = false;
				changesPending = false;
				doLoop = false;
				EOM = false;
			}
		} while (changesPending);
		return EOM;
	}
}

RealTimeSequencer$DataPump::RealTimeSequencer$DataPump() {
}

$Class* RealTimeSequencer$DataPump::load$($String* name, bool initialize) {
	$loadClass(RealTimeSequencer$DataPump, name, initialize, &_RealTimeSequencer$DataPump_ClassInfo_, allocate$RealTimeSequencer$DataPump);
	return class$;
}

$Class* RealTimeSequencer$DataPump::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
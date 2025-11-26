#include <com/sun/media/sound/MidiUtils.h>

#include <com/sun/media/sound/MidiUtils$TempoCache.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef DEFAULT_TEMPO_MPQ
#undef META
#undef META_END_OF_TRACK_TYPE
#undef META_TEMPO_TYPE
#undef PPQ

using $MidiUtils$TempoCache = ::com::sun::media::sound::MidiUtils$TempoCache;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Sequence = ::javax::sound::midi::Sequence;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiUtils_FieldInfo_[] = {
	{"DEFAULT_TEMPO_MPQ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MidiUtils, DEFAULT_TEMPO_MPQ)},
	{"META_END_OF_TRACK_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MidiUtils, META_END_OF_TRACK_TYPE)},
	{"META_TEMPO_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MidiUtils, META_TEMPO_TYPE)},
	{}
};

$MethodInfo _MidiUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MidiUtils::*)()>(&MidiUtils::init$))},
	{"checkSysexStatus", "([BI)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t)>(&MidiUtils::checkSysexStatus)), "javax.sound.midi.InvalidMidiDataException"},
	{"checkSysexStatus", "(I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t)>(&MidiUtils::checkSysexStatus)), "javax.sound.midi.InvalidMidiDataException"},
	{"convertTempo", "(D)D", nullptr, $PUBLIC | $STATIC, $method(static_cast<double(*)(double)>(&MidiUtils::convertTempo))},
	{"getTempoMPQ", "(Ljavax/sound/midi/MidiMessage;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($MidiMessage*)>(&MidiUtils::getTempoMPQ))},
	{"isMetaEndOfTrack", "(Ljavax/sound/midi/MidiMessage;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MidiMessage*)>(&MidiUtils::isMetaEndOfTrack))},
	{"isMetaTempo", "(Ljavax/sound/midi/MidiMessage;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($MidiMessage*)>(&MidiUtils::isMetaTempo))},
	{"microsec2ticks", "(JDI)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,double,int32_t)>(&MidiUtils::microsec2ticks))},
	{"microsecond2tick", "(Ljavax/sound/midi/Sequence;JLcom/sun/media/sound/MidiUtils$TempoCache;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Sequence*,int64_t,$MidiUtils$TempoCache*)>(&MidiUtils::microsecond2tick))},
	{"tick2index", "(Ljavax/sound/midi/Track;J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($Track*,int64_t)>(&MidiUtils::tick2index))},
	{"tick2microsecond", "(Ljavax/sound/midi/Sequence;JLcom/sun/media/sound/MidiUtils$TempoCache;)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)($Sequence*,int64_t,$MidiUtils$TempoCache*)>(&MidiUtils::tick2microsecond))},
	{"ticks2microsec", "(JDI)J", nullptr, $PUBLIC | $STATIC, $method(static_cast<int64_t(*)(int64_t,double,int32_t)>(&MidiUtils::ticks2microsec))},
	{"unsupportedDevice", "(Ljavax/sound/midi/MidiDevice$Info;)Ljava/lang/RuntimeException;", nullptr, $STATIC, $method(static_cast<$RuntimeException*(*)($MidiDevice$Info*)>(&MidiUtils::unsupportedDevice))},
	{}
};

$InnerClassInfo _MidiUtils_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiUtils$TempoCache", "com.sun.media.sound.MidiUtils", "TempoCache", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MidiUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiUtils",
	"java.lang.Object",
	nullptr,
	_MidiUtils_FieldInfo_,
	_MidiUtils_MethodInfo_,
	nullptr,
	nullptr,
	_MidiUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiUtils$TempoCache"
};

$Object* allocate$MidiUtils($Class* clazz) {
	return $of($alloc(MidiUtils));
}

void MidiUtils::init$() {
}

$RuntimeException* MidiUtils::unsupportedDevice($MidiDevice$Info* info) {
	$useLocalCurrentObjectStackCache();
	return $new($IllegalArgumentException, $($String::format("MidiDevice %s not supported by this provider"_s, $$new($ObjectArray, {$of(info)}))));
}

void MidiUtils::checkSysexStatus($bytes* data, int32_t length) {
	if ($nc(data)->length == 0 || length == 0) {
		$throwNew($InvalidMidiDataException, "Status byte is missing"_s);
	}
	checkSysexStatus((int32_t)($nc(data)->get(0) & (uint32_t)255));
}

void MidiUtils::checkSysexStatus(int32_t status) {
	$useLocalCurrentObjectStackCache();
	if (status != 240 && status != 247) {
		$throwNew($InvalidMidiDataException, $($String::format("Invalid status byte for sysex message: 0x%X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(status)))}))));
	}
}

bool MidiUtils::isMetaEndOfTrack($MidiMessage* midiMsg) {
	bool var$0 = $nc(midiMsg)->getLength() != 3;
	if (var$0 || $nc(midiMsg)->getStatus() != $MetaMessage::META) {
		return false;
	}
	$var($bytes, msg, $nc(midiMsg)->getMessage());
	return (((int32_t)($nc(msg)->get(1) & (uint32_t)255)) == MidiUtils::META_END_OF_TRACK_TYPE) && (msg->get(2) == 0);
}

bool MidiUtils::isMetaTempo($MidiMessage* midiMsg) {
	bool var$0 = $nc(midiMsg)->getLength() != 6;
	if (var$0 || $nc(midiMsg)->getStatus() != $MetaMessage::META) {
		return false;
	}
	$var($bytes, msg, $nc(midiMsg)->getMessage());
	return (((int32_t)($nc(msg)->get(1) & (uint32_t)255)) == MidiUtils::META_TEMPO_TYPE) && (msg->get(2) == 3);
}

int32_t MidiUtils::getTempoMPQ($MidiMessage* midiMsg) {
	bool var$0 = $nc(midiMsg)->getLength() != 6;
	if (var$0 || $nc(midiMsg)->getStatus() != $MetaMessage::META) {
		return -1;
	}
	$var($bytes, msg, $nc(midiMsg)->getMessage());
	if ((((int32_t)($nc(msg)->get(1) & (uint32_t)255)) != MidiUtils::META_TEMPO_TYPE) || ($nc(msg)->get(2) != 3)) {
		return -1;
	}
	int32_t tempo = (((int32_t)($nc(msg)->get(5) & (uint32_t)255)) | (((int32_t)(msg->get(4) & (uint32_t)255)) << 8)) | (((int32_t)(msg->get(3) & (uint32_t)255)) << 16);
	return tempo;
}

double MidiUtils::convertTempo(double tempo) {
	if (tempo <= 0) {
		tempo = (double)1;
	}
	return ((double)(int64_t)60000000) / tempo;
}

int64_t MidiUtils::ticks2microsec(int64_t tick, double tempoMPQ, int32_t resolution) {
	return $cast(int64_t, (((double)tick) * tempoMPQ / resolution));
}

int64_t MidiUtils::microsec2ticks(int64_t us, double tempoMPQ, int32_t resolution) {
	return $cast(int64_t, ((((double)us) * resolution) / tempoMPQ));
}

int64_t MidiUtils::tick2microsecond($Sequence* seq, int64_t tick, $MidiUtils$TempoCache* cache$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($MidiUtils$TempoCache, cache, cache$renamed);
	$init($Sequence);
	if ($nc(seq)->getDivisionType() != $Sequence::PPQ) {
		double var$0 = (double)tick;
		float var$2 = seq->getDivisionType();
		double var$1 = (double)(var$2 * seq->getResolution());
		double seconds = (var$0 / var$1);
		return $cast(int64_t, (0x000F4240 * seconds));
	}
	if (cache == nullptr) {
		$assign(cache, $new($MidiUtils$TempoCache, seq));
	}
	int32_t resolution = $nc(seq)->getResolution();
	$var($longs, ticks, $nc(cache)->ticks);
	$var($ints, tempos, cache->tempos);
	int32_t cacheCount = $nc(tempos)->length;
	int32_t snapshotIndex = cache->snapshotIndex;
	int32_t snapshotMicro = cache->snapshotMicro;
	int64_t us = 0;
	if (snapshotIndex <= 0 || snapshotIndex >= cacheCount || $nc(ticks)->get(snapshotIndex) > tick) {
		snapshotMicro = 0;
		snapshotIndex = 0;
	}
	if (cacheCount > 0) {
		int32_t i = snapshotIndex + 1;
		while (i < cacheCount && $nc(ticks)->get(i) <= tick) {
			snapshotMicro += ticks2microsec(ticks->get(i) - ticks->get(i - 1), (double)tempos->get(i - 1), resolution);
			snapshotIndex = i;
			++i;
		}
		us = snapshotMicro + ticks2microsec(tick - $nc(ticks)->get(snapshotIndex), (double)tempos->get(snapshotIndex), resolution);
	}
	cache->snapshotIndex = snapshotIndex;
	cache->snapshotMicro = snapshotMicro;
	return us;
}

int64_t MidiUtils::microsecond2tick($Sequence* seq, int64_t micros, $MidiUtils$TempoCache* cache$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($MidiUtils$TempoCache, cache, cache$renamed);
	$init($Sequence);
	if ($nc(seq)->getDivisionType() != $Sequence::PPQ) {
		double var$0 = ((double)micros) * ((double)seq->getDivisionType());
		double dTick = $div((var$0 * ((double)seq->getResolution())), ((double)0x000F4240));
		int64_t tick = $cast(int64_t, dTick);
		if (cache != nullptr) {
			cache->currTempo = $cast(int32_t, cache->getTempoMPQAt(tick));
		}
		return tick;
	}
	if (cache == nullptr) {
		$assign(cache, $new($MidiUtils$TempoCache, seq));
	}
	$var($longs, ticks, $nc(cache)->ticks);
	$var($ints, tempos, cache->tempos);
	int32_t cacheCount = $nc(tempos)->length;
	int32_t resolution = $nc(seq)->getResolution();
	int64_t us = 0;
	int64_t tick = 0;
	int32_t newReadPos = 0;
	int32_t i = 1;
	if (micros > 0 && cacheCount > 0) {
		while (i < cacheCount) {
			int64_t nextTime = us + ticks2microsec($nc(ticks)->get(i) - ticks->get(i - 1), (double)tempos->get(i - 1), resolution);
			if (nextTime > micros) {
				break;
			}
			us = nextTime;
			++i;
		}
		tick = $nc(ticks)->get(i - 1) + microsec2ticks(micros - us, (double)tempos->get(i - 1), resolution);
	}
	cache->currTempo = tempos->get(i - 1);
	return tick;
}

int32_t MidiUtils::tick2index($Track* track, int64_t tick) {
	$useLocalCurrentObjectStackCache();
	int32_t ret = 0;
	if (tick > 0) {
		int32_t low = 0;
		int32_t high = $nc(track)->size() - 1;
		while (low < high) {
			ret = (low + high) >> 1;
			int64_t t = $nc($(track->get(ret)))->getTick();
			if (t == tick) {
				break;
			} else if (t < tick) {
				if (low == high - 1) {
					++ret;
					break;
				}
				low = ret;
			} else {
				high = ret;
			}
		}
	}
	return ret;
}

MidiUtils::MidiUtils() {
}

$Class* MidiUtils::load$($String* name, bool initialize) {
	$loadClass(MidiUtils, name, initialize, &_MidiUtils_ClassInfo_, allocate$MidiUtils);
	return class$;
}

$Class* MidiUtils::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/MidiUtils$TempoCache.h>

#include <com/sun/media/sound/MidiUtils.h>
#include <java/util/ArrayList.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

using $TrackArray = $Array<::javax::sound::midi::Track>;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Sequence = ::javax::sound::midi::Sequence;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiUtils$TempoCache_FieldInfo_[] = {
	{"ticks", "[J", nullptr, 0, $field(MidiUtils$TempoCache, ticks)},
	{"tempos", "[I", nullptr, 0, $field(MidiUtils$TempoCache, tempos)},
	{"snapshotIndex", "I", nullptr, 0, $field(MidiUtils$TempoCache, snapshotIndex)},
	{"snapshotMicro", "I", nullptr, 0, $field(MidiUtils$TempoCache, snapshotMicro)},
	{"currTempo", "I", nullptr, 0, $field(MidiUtils$TempoCache, currTempo)},
	{"firstTempoIsFake", "Z", nullptr, $PRIVATE, $field(MidiUtils$TempoCache, firstTempoIsFake)},
	{}
};

$MethodInfo _MidiUtils$TempoCache_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MidiUtils$TempoCache::*)()>(&MidiUtils$TempoCache::init$))},
	{"<init>", "(Ljavax/sound/midi/Sequence;)V", nullptr, $PUBLIC, $method(static_cast<void(MidiUtils$TempoCache::*)($Sequence*)>(&MidiUtils$TempoCache::init$))},
	{"getCurrTempoMPQ", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(MidiUtils$TempoCache::*)()>(&MidiUtils$TempoCache::getCurrTempoMPQ))},
	{"getTempoMPQAt", "(J)F", nullptr, 0, $method(static_cast<float(MidiUtils$TempoCache::*)(int64_t)>(&MidiUtils$TempoCache::getTempoMPQAt))},
	{"getTempoMPQAt", "(JF)F", nullptr, $SYNCHRONIZED, $method(static_cast<float(MidiUtils$TempoCache::*)(int64_t,float)>(&MidiUtils$TempoCache::getTempoMPQAt))},
	{"refresh", "(Ljavax/sound/midi/Sequence;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(static_cast<void(MidiUtils$TempoCache::*)($Sequence*)>(&MidiUtils$TempoCache::refresh))},
	{}
};

$InnerClassInfo _MidiUtils$TempoCache_InnerClassesInfo_[] = {
	{"com.sun.media.sound.MidiUtils$TempoCache", "com.sun.media.sound.MidiUtils", "TempoCache", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MidiUtils$TempoCache_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiUtils$TempoCache",
	"java.lang.Object",
	nullptr,
	_MidiUtils$TempoCache_FieldInfo_,
	_MidiUtils$TempoCache_MethodInfo_,
	nullptr,
	nullptr,
	_MidiUtils$TempoCache_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.MidiUtils"
};

$Object* allocate$MidiUtils$TempoCache($Class* clazz) {
	return $of($alloc(MidiUtils$TempoCache));
}

void MidiUtils$TempoCache::init$() {
	this->snapshotIndex = 0;
	this->snapshotMicro = 0;
	this->firstTempoIsFake = false;
	$set(this, ticks, $new($longs, 1));
	$set(this, tempos, $new($ints, 1));
	$nc(this->tempos)->set(0, 0x0007A120);
	this->snapshotIndex = 0;
	this->snapshotMicro = 0;
}

void MidiUtils$TempoCache::init$($Sequence* seq) {
	MidiUtils$TempoCache::init$();
	refresh(seq);
}

void MidiUtils$TempoCache::refresh($Sequence* seq) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($ArrayList, list, $new($ArrayList));
		$var($TrackArray, tracks, $nc(seq)->getTracks());
		if ($nc(tracks)->length > 0) {
			$var($Track, track, tracks->get(0));
			int32_t c = $nc(track)->size();
			for (int32_t i = 0; i < c; ++i) {
				$var($MidiEvent, ev, track->get(i));
				$var($MidiMessage, msg, $nc(ev)->getMessage());
				if ($MidiUtils::isMetaTempo(msg)) {
					list->add(ev);
				}
			}
		}
		int32_t size = list->size() + 1;
		this->firstTempoIsFake = true;
		if ((size > 1) && ($nc(($cast($MidiEvent, $(list->get(0)))))->getTick() == 0)) {
			--size;
			this->firstTempoIsFake = false;
		}
		$set(this, ticks, $new($longs, size));
		$set(this, tempos, $new($ints, size));
		int32_t e = 0;
		if (this->firstTempoIsFake) {
			$nc(this->ticks)->set(0, 0);
			$nc(this->tempos)->set(0, 0x0007A120);
			++e;
		}
		for (int32_t i = 0; i < list->size(); ++i, ++e) {
			$var($MidiEvent, evt, $cast($MidiEvent, list->get(i)));
			$nc(this->ticks)->set(e, $nc(evt)->getTick());
			$nc(this->tempos)->set(e, $MidiUtils::getTempoMPQ($(evt->getMessage())));
		}
		this->snapshotIndex = 0;
		this->snapshotMicro = 0;
	}
}

int32_t MidiUtils$TempoCache::getCurrTempoMPQ() {
	return this->currTempo;
}

float MidiUtils$TempoCache::getTempoMPQAt(int64_t tick) {
	return getTempoMPQAt(tick, -1.0f);
}

float MidiUtils$TempoCache::getTempoMPQAt(int64_t tick, float startTempoMPQ) {
	$synchronized(this) {
		for (int32_t i = 0; i < $nc(this->ticks)->length; ++i) {
			if ($nc(this->ticks)->get(i) > tick) {
				if (i > 0) {
					--i;
				}
				if (startTempoMPQ > 0 && i == 0 && this->firstTempoIsFake) {
					return startTempoMPQ;
				}
				return (float)$nc(this->tempos)->get(i);
			}
		}
		return (float)$nc(this->tempos)->get($nc(this->tempos)->length - 1);
	}
}

MidiUtils$TempoCache::MidiUtils$TempoCache() {
}

$Class* MidiUtils$TempoCache::load$($String* name, bool initialize) {
	$loadClass(MidiUtils$TempoCache, name, initialize, &_MidiUtils$TempoCache_ClassInfo_, allocate$MidiUtils$TempoCache);
	return class$;
}

$Class* MidiUtils$TempoCache::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
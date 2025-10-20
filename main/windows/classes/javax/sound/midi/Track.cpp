#include <javax/sound/midi/Track.h>

#include <com/sun/media/sound/MidiUtils.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Track$ImmutableEndOfTrack.h>
#include <jcpp.h>

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Track$ImmutableEndOfTrack = ::javax::sound::midi::Track$ImmutableEndOfTrack;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _Track_FieldInfo_[] = {
	{"eventsList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/sound/midi/MidiEvent;>;", $PRIVATE | $FINAL, $field(Track, eventsList)},
	{"set", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljavax/sound/midi/MidiEvent;>;", $PRIVATE | $FINAL, $field(Track, set)},
	{"eotEvent", "Ljavax/sound/midi/MidiEvent;", nullptr, $PRIVATE | $FINAL, $field(Track, eotEvent)},
	{}
};

$MethodInfo _Track_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Track::*)()>(&Track::init$))},
	{"add", "(Ljavax/sound/midi/MidiEvent;)Z", nullptr, $PUBLIC},
	{"get", "(I)Ljavax/sound/midi/MidiEvent;", nullptr, $PUBLIC, nullptr, "java.lang.ArrayIndexOutOfBoundsException"},
	{"remove", "(Ljavax/sound/midi/MidiEvent;)Z", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"ticks", "()J", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Track_InnerClassesInfo_[] = {
	{"javax.sound.midi.Track$ImmutableEndOfTrack", "javax.sound.midi.Track", "ImmutableEndOfTrack", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Track_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.Track",
	"java.lang.Object",
	nullptr,
	_Track_FieldInfo_,
	_Track_MethodInfo_,
	nullptr,
	nullptr,
	_Track_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.midi.Track$ImmutableEndOfTrack"
};

$Object* allocate$Track($Class* clazz) {
	return $of($alloc(Track));
}

void Track::init$() {
	$set(this, eventsList, $new($ArrayList));
	$set(this, set, $new($HashSet));
	$var($MetaMessage, eot, $new($Track$ImmutableEndOfTrack));
	$set(this, eotEvent, $new($MidiEvent, eot, 0));
	$nc(this->eventsList)->add(this->eotEvent);
	$nc(this->set)->add(this->eotEvent);
}

bool Track::add($MidiEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (event == nullptr) {
		return false;
	}
	$synchronized(this->eventsList) {
		if (!$nc(this->set)->contains(event)) {
			int32_t eventsCount = $nc(this->eventsList)->size();
			$var($MidiEvent, lastEvent, nullptr);
			if (eventsCount > 0) {
				$assign(lastEvent, $cast($MidiEvent, $nc(this->eventsList)->get(eventsCount - 1)));
			}
			if (lastEvent != this->eotEvent) {
				if (lastEvent != nullptr) {
					$nc(this->eotEvent)->setTick(lastEvent->getTick());
				} else {
					$nc(this->eotEvent)->setTick(0);
				}
				$nc(this->eventsList)->add(this->eotEvent);
				$nc(this->set)->add(this->eotEvent);
				eventsCount = $nc(this->eventsList)->size();
			}
			if ($MidiUtils::isMetaEndOfTrack($($nc(event)->getMessage()))) {
				int64_t var$0 = $nc(event)->getTick();
				if (var$0 > $nc(this->eotEvent)->getTick()) {
					$nc(this->eotEvent)->setTick(event->getTick());
				}
				return true;
			}
			$nc(this->set)->add(event);
			int32_t i = eventsCount;
			for (; i > 0; --i) {
				int64_t var$1 = $nc(event)->getTick();
				if (var$1 >= $nc(($cast($MidiEvent, $($nc(this->eventsList)->get(i - 1)))))->getTick()) {
					break;
				}
			}
			if (i == eventsCount) {
				$nc(this->eventsList)->set(eventsCount - 1, event);
				int64_t var$2 = $nc(this->eotEvent)->getTick();
				if (var$2 < $nc(event)->getTick()) {
					$nc(this->eotEvent)->setTick(event->getTick());
				}
				$nc(this->eventsList)->add(this->eotEvent);
			} else {
				$nc(this->eventsList)->add(i, event);
			}
			return true;
		}
	}
	return false;
}

bool Track::remove($MidiEvent* event) {
	$synchronized(this->eventsList) {
		if ($nc(this->set)->remove(event)) {
			int32_t i = $nc(this->eventsList)->indexOf(event);
			if (i >= 0) {
				$nc(this->eventsList)->remove(i);
				return true;
			}
		}
	}
	return false;
}

$MidiEvent* Track::get(int32_t index) {
	$useLocalCurrentObjectStackCache();
	try {
		$synchronized(this->eventsList) {
			return $cast($MidiEvent, $nc(this->eventsList)->get(index));
		}
	} catch ($IndexOutOfBoundsException&) {
		$var($IndexOutOfBoundsException, ioobe, $catch());
		$throwNew($ArrayIndexOutOfBoundsException, $(ioobe->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t Track::size() {
	$synchronized(this->eventsList) {
		return $nc(this->eventsList)->size();
	}
}

int64_t Track::ticks() {
	int64_t ret = 0;
	$synchronized(this->eventsList) {
		if ($nc(this->eventsList)->size() > 0) {
			ret = $nc(($cast($MidiEvent, $($nc(this->eventsList)->get($nc(this->eventsList)->size() - 1)))))->getTick();
		}
	}
	return ret;
}

Track::Track() {
}

$Class* Track::load$($String* name, bool initialize) {
	$loadClass(Track, name, initialize, &_Track_ClassInfo_, allocate$Track);
	return class$;
}

$Class* Track::class$ = nullptr;

		} // midi
	} // sound
} // javax
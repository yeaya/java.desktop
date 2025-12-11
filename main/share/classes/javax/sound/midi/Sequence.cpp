#include <javax/sound/midi/Sequence.h>

#include <com/sun/media/sound/MidiUtils$TempoCache.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <java/util/Vector.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef PPQ
#undef SMPTE_24
#undef SMPTE_25
#undef SMPTE_30
#undef SMPTE_30DROP

using $PatchArray = $Array<::javax::sound::midi::Patch>;
using $TrackArray = $Array<::javax::sound::midi::Track>;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $MidiUtils$TempoCache = ::com::sun::media::sound::MidiUtils$TempoCache;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $Track = ::javax::sound::midi::Track;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _Sequence_FieldInfo_[] = {
	{"PPQ", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequence, PPQ)},
	{"SMPTE_24", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequence, SMPTE_24)},
	{"SMPTE_25", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequence, SMPTE_25)},
	{"SMPTE_30DROP", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequence, SMPTE_30DROP)},
	{"SMPTE_30", "F", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequence, SMPTE_30)},
	{"divisionType", "F", nullptr, $PROTECTED, $field(Sequence, divisionType)},
	{"resolution", "I", nullptr, $PROTECTED, $field(Sequence, resolution)},
	{"tracks", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/sound/midi/Track;>;", $PROTECTED, $field(Sequence, tracks)},
	{}
};

$MethodInfo _Sequence_MethodInfo_[] = {
	{"<init>", "(FI)V", nullptr, $PUBLIC, $method(static_cast<void(Sequence::*)(float,int32_t)>(&Sequence::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"<init>", "(FII)V", nullptr, $PUBLIC, $method(static_cast<void(Sequence::*)(float,int32_t,int32_t)>(&Sequence::init$)), "javax.sound.midi.InvalidMidiDataException"},
	{"createTrack", "()Ljavax/sound/midi/Track;", nullptr, $PUBLIC},
	{"deleteTrack", "(Ljavax/sound/midi/Track;)Z", nullptr, $PUBLIC},
	{"getDivisionType", "()F", nullptr, $PUBLIC},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC},
	{"getPatchList", "()[Ljavax/sound/midi/Patch;", nullptr, $PUBLIC},
	{"getResolution", "()I", nullptr, $PUBLIC},
	{"getTickLength", "()J", nullptr, $PUBLIC},
	{"getTracks", "()[Ljavax/sound/midi/Track;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Sequence_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.midi.Sequence",
	"java.lang.Object",
	nullptr,
	_Sequence_FieldInfo_,
	_Sequence_MethodInfo_
};

$Object* allocate$Sequence($Class* clazz) {
	return $of($alloc(Sequence));
}

float Sequence::PPQ = 0.0;
float Sequence::SMPTE_24 = 0.0;
float Sequence::SMPTE_25 = 0.0;
float Sequence::SMPTE_30DROP = 0.0;
float Sequence::SMPTE_30 = 0.0;

void Sequence::init$(float divisionType, int32_t resolution) {
	$useLocalCurrentObjectStackCache();
	$set(this, tracks, $new($Vector));
	if (divisionType == Sequence::PPQ) {
		this->divisionType = Sequence::PPQ;
	} else if (divisionType == Sequence::SMPTE_24) {
		this->divisionType = Sequence::SMPTE_24;
	} else if (divisionType == Sequence::SMPTE_25) {
		this->divisionType = Sequence::SMPTE_25;
	} else if (divisionType == Sequence::SMPTE_30DROP) {
		this->divisionType = Sequence::SMPTE_30DROP;
	} else if (divisionType == Sequence::SMPTE_30) {
		this->divisionType = Sequence::SMPTE_30;
	} else {
		$throwNew($InvalidMidiDataException, $$str({"Unsupported division type: "_s, $$str(divisionType)}));
	}
	this->resolution = resolution;
}

void Sequence::init$(float divisionType, int32_t resolution, int32_t numTracks) {
	$useLocalCurrentObjectStackCache();
	$set(this, tracks, $new($Vector));
	if (divisionType == Sequence::PPQ) {
		this->divisionType = Sequence::PPQ;
	} else if (divisionType == Sequence::SMPTE_24) {
		this->divisionType = Sequence::SMPTE_24;
	} else if (divisionType == Sequence::SMPTE_25) {
		this->divisionType = Sequence::SMPTE_25;
	} else if (divisionType == Sequence::SMPTE_30DROP) {
		this->divisionType = Sequence::SMPTE_30DROP;
	} else if (divisionType == Sequence::SMPTE_30) {
		this->divisionType = Sequence::SMPTE_30;
	} else {
		$throwNew($InvalidMidiDataException, $$str({"Unsupported division type: "_s, $$str(divisionType)}));
	}
	this->resolution = resolution;
	for (int32_t i = 0; i < numTracks; ++i) {
		$nc(this->tracks)->addElement($$new($Track));
	}
}

float Sequence::getDivisionType() {
	return this->divisionType;
}

int32_t Sequence::getResolution() {
	return this->resolution;
}

$Track* Sequence::createTrack() {
	$var($Track, track, $new($Track));
	$nc(this->tracks)->addElement(track);
	return track;
}

bool Sequence::deleteTrack($Track* track) {
	return $nc(this->tracks)->removeElement(track);
}

$TrackArray* Sequence::getTracks() {
	return $fcast($TrackArray, $nc(this->tracks)->toArray($$new($TrackArray, 0)));
}

int64_t Sequence::getMicrosecondLength() {
	return $MidiUtils::tick2microsecond(this, getTickLength(), nullptr);
}

int64_t Sequence::getTickLength() {
	$useLocalCurrentObjectStackCache();
	int64_t length = 0;
	$synchronized(this->tracks) {
		for (int32_t i = 0; i < $nc(this->tracks)->size(); ++i) {
			int64_t temp = $nc(($cast($Track, $($nc(this->tracks)->elementAt(i)))))->ticks();
			if (temp > length) {
				length = temp;
			}
		}
		return length;
	}
}

$PatchArray* Sequence::getPatchList() {
	return $new($PatchArray, 0);
}

Sequence::Sequence() {
}

void clinit$Sequence($Class* class$) {
	Sequence::PPQ = 0.0f;
	Sequence::SMPTE_24 = 24.0f;
	Sequence::SMPTE_25 = 25.0f;
	Sequence::SMPTE_30DROP = 29.97f;
	Sequence::SMPTE_30 = 30.0f;
}

$Class* Sequence::load$($String* name, bool initialize) {
	$loadClass(Sequence, name, initialize, &_Sequence_ClassInfo_, clinit$Sequence, allocate$Sequence);
	return class$;
}

$Class* Sequence::class$ = nullptr;

		} // midi
	} // sound
} // javax
#include <com/sun/media/sound/RealTimeSequencer$RecordingTrack.h>

#include <com/sun/media/sound/RealTimeSequencer.h>
#include <java/util/List.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RealTimeSequencer$RecordingTrack_FieldInfo_[] = {
	{"track", "Ljavax/sound/midi/Track;", nullptr, $PRIVATE | $FINAL, $field(RealTimeSequencer$RecordingTrack, track)},
	{"channel", "I", nullptr, $PRIVATE, $field(RealTimeSequencer$RecordingTrack, channel)},
	{}
};

$MethodInfo _RealTimeSequencer$RecordingTrack_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/Track;I)V", nullptr, 0, $method(static_cast<void(RealTimeSequencer$RecordingTrack::*)($Track*,int32_t)>(&RealTimeSequencer$RecordingTrack::init$))},
	{"get", "(Ljava/util/List;Ljavax/sound/midi/Track;)Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;", "(Ljava/util/List<Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;>;Ljavax/sound/midi/Track;)Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;", $STATIC, $method(static_cast<RealTimeSequencer$RecordingTrack*(*)($List*,$Track*)>(&RealTimeSequencer$RecordingTrack::get))},
	{"get", "(Ljava/util/List;I)Ljavax/sound/midi/Track;", "(Ljava/util/List<Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;>;I)Ljavax/sound/midi/Track;", $STATIC, $method(static_cast<$Track*(*)($List*,int32_t)>(&RealTimeSequencer$RecordingTrack::get))},
	{}
};

$InnerClassInfo _RealTimeSequencer$RecordingTrack_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RealTimeSequencer$RecordingTrack", "com.sun.media.sound.RealTimeSequencer", "RecordingTrack", $STATIC},
	{}
};

$ClassInfo _RealTimeSequencer$RecordingTrack_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.RealTimeSequencer$RecordingTrack",
	"java.lang.Object",
	nullptr,
	_RealTimeSequencer$RecordingTrack_FieldInfo_,
	_RealTimeSequencer$RecordingTrack_MethodInfo_,
	nullptr,
	nullptr,
	_RealTimeSequencer$RecordingTrack_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.RealTimeSequencer"
};

$Object* allocate$RealTimeSequencer$RecordingTrack($Class* clazz) {
	return $of($alloc(RealTimeSequencer$RecordingTrack));
}

void RealTimeSequencer$RecordingTrack::init$($Track* track, int32_t channel) {
	$set(this, track, track);
	this->channel = channel;
}

RealTimeSequencer$RecordingTrack* RealTimeSequencer$RecordingTrack::get($List* recordingTracks, $Track* track) {
	$useLocalCurrentObjectStackCache();
	$synchronized(recordingTracks) {
		int32_t size = $nc(recordingTracks)->size();
		for (int32_t i = 0; i < size; ++i) {
			$var(RealTimeSequencer$RecordingTrack, current, $cast(RealTimeSequencer$RecordingTrack, recordingTracks->get(i)));
			if ($nc(current)->track == track) {
				return current;
			}
		}
	}
	return nullptr;
}

$Track* RealTimeSequencer$RecordingTrack::get($List* recordingTracks, int32_t channel) {
	$useLocalCurrentObjectStackCache();
	$synchronized(recordingTracks) {
		int32_t size = $nc(recordingTracks)->size();
		for (int32_t i = 0; i < size; ++i) {
			$var(RealTimeSequencer$RecordingTrack, current, $cast(RealTimeSequencer$RecordingTrack, recordingTracks->get(i)));
			if (($nc(current)->channel == channel) || ($nc(current)->channel == -1)) {
				return current->track;
			}
		}
	}
	return nullptr;
}

RealTimeSequencer$RecordingTrack::RealTimeSequencer$RecordingTrack() {
}

$Class* RealTimeSequencer$RecordingTrack::load$($String* name, bool initialize) {
	$loadClass(RealTimeSequencer$RecordingTrack, name, initialize, &_RealTimeSequencer$RecordingTrack_ClassInfo_, allocate$RealTimeSequencer$RecordingTrack);
	return class$;
}

$Class* RealTimeSequencer$RecordingTrack::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#ifndef _com_sun_media_sound_SoftPerformer$KeySortComparator_h_
#define _com_sun_media_sound_SoftPerformer$KeySortComparator_h_
//$ class com.sun.media.sound.SoftPerformer$KeySortComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class ModelSource;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class SoftPerformer$KeySortComparator : public ::java::util::Comparator {
	$class(SoftPerformer$KeySortComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	SoftPerformer$KeySortComparator();
	void init$();
	virtual int32_t compare(::com::sun::media::sound::ModelSource* o1, ::com::sun::media::sound::ModelSource* o2);
	virtual int32_t compare(Object$* o1, Object$* o2) override;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_SoftPerformer$KeySortComparator_h_
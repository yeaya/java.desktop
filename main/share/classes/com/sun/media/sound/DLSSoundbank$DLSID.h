#ifndef _com_sun_media_sound_DLSSoundbank$DLSID_h_
#define _com_sun_media_sound_DLSSoundbank$DLSID_h_
//$ class com.sun.media.sound.DLSSoundbank$DLSID
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class RIFFReader;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DLSSoundbank$DLSID : public ::java::lang::Object {
	$class(DLSSoundbank$DLSID, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DLSSoundbank$DLSID();
	void init$();
	void init$(int64_t i1, int32_t s1, int32_t s2, int32_t x1, int32_t x2, int32_t x3, int32_t x4, int32_t x5, int32_t x6, int32_t x7, int32_t x8);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	static ::com::sun::media::sound::DLSSoundbank$DLSID* read(::com::sun::media::sound::RIFFReader* riff);
	int64_t i1 = 0;
	int32_t s1 = 0;
	int32_t s2 = 0;
	int32_t x1 = 0;
	int32_t x2 = 0;
	int32_t x3 = 0;
	int32_t x4 = 0;
	int32_t x5 = 0;
	int32_t x6 = 0;
	int32_t x7 = 0;
	int32_t x8 = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DLSSoundbank$DLSID_h_
#ifndef _com_sun_media_sound_DLSSample_h_
#define _com_sun_media_sound_DLSSample_h_
//$ class com.sun.media.sound.DLSSample
//$ extends javax.sound.midi.SoundbankResource

#include <java/lang/Array.h>
#include <javax/sound/midi/SoundbankResource.h>

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DLSInfo;
				class DLSSampleOptions;
				class ModelByteBuffer;
			}
		}
	}
}
namespace javax {
	namespace sound {
		namespace midi {
			class Soundbank;
		}
	}
}
namespace javax {
	namespace sound {
		namespace sampled {
			class AudioFormat;
		}
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DLSSample : public ::javax::sound::midi::SoundbankResource {
	$class(DLSSample, $NO_CLASS_INIT, ::javax::sound::midi::SoundbankResource)
public:
	DLSSample();
	void init$(::javax::sound::midi::Soundbank* soundBank);
	void init$();
	virtual $Object* getData() override;
	::com::sun::media::sound::ModelByteBuffer* getDataBuffer();
	::javax::sound::sampled::AudioFormat* getFormat();
	$bytes* getGuid();
	::com::sun::media::sound::DLSInfo* getInfo();
	virtual $String* getName() override;
	::com::sun::media::sound::DLSSampleOptions* getSampleoptions();
	void setData(::com::sun::media::sound::ModelByteBuffer* data);
	void setData($bytes* data);
	void setData($bytes* data, int32_t offset, int32_t length);
	void setFormat(::javax::sound::sampled::AudioFormat* format);
	void setGuid($bytes* guid);
	void setName($String* name);
	void setSampleoptions(::com::sun::media::sound::DLSSampleOptions* sampleOptions);
	virtual $String* toString() override;
	$bytes* guid = nullptr;
	::com::sun::media::sound::DLSInfo* info = nullptr;
	::com::sun::media::sound::DLSSampleOptions* sampleoptions = nullptr;
	::com::sun::media::sound::ModelByteBuffer* data = nullptr;
	::javax::sound::sampled::AudioFormat* format = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_DLSSample_h_
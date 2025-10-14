#ifndef _com_sun_media_sound_DLSRegion_h_
#define _com_sun_media_sound_DLSRegion_h_
//$ class com.sun.media.sound.DLSRegion
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OPTION_SELFNONEXCLUSIVE")
#undef OPTION_SELFNONEXCLUSIVE

namespace com {
	namespace sun {
		namespace media {
			namespace sound {
				class DLSSample;
				class DLSSampleOptions;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class DLSRegion : public ::java::lang::Object {
	$class(DLSRegion, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DLSRegion();
	void init$();
	int64_t getChannel();
	int32_t getExclusiveClass();
	int32_t getFusoptions();
	int32_t getKeyfrom();
	int32_t getKeyto();
	::java::util::List* getModulators();
	int32_t getOptions();
	int32_t getPhasegroup();
	::com::sun::media::sound::DLSSample* getSample();
	::com::sun::media::sound::DLSSampleOptions* getSampleoptions();
	int32_t getVelfrom();
	int32_t getVelto();
	void setChannel(int64_t channel);
	void setExclusiveClass(int32_t exclusiveClass);
	void setFusoptions(int32_t fusoptions);
	void setKeyfrom(int32_t keyfrom);
	void setKeyto(int32_t keyto);
	void setModulators(::java::util::List* modulators);
	void setOptions(int32_t options);
	void setPhasegroup(int32_t phasegroup);
	void setSample(::com::sun::media::sound::DLSSample* sample);
	void setSampleoptions(::com::sun::media::sound::DLSSampleOptions* sampleOptions);
	void setVelfrom(int32_t velfrom);
	void setVelto(int32_t velto);
	static const int32_t OPTION_SELFNONEXCLUSIVE = 1;
	::java::util::List* modulators = nullptr;
	int32_t keyfrom = 0;
	int32_t keyto = 0;
	int32_t velfrom = 0;
	int32_t velto = 0;
	int32_t options = 0;
	int32_t exclusiveClass = 0;
	int32_t fusoptions = 0;
	int32_t phasegroup = 0;
	int64_t channel = 0;
	::com::sun::media::sound::DLSSample* sample = nullptr;
	::com::sun::media::sound::DLSSampleOptions* sampleoptions = nullptr;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("OPTION_SELFNONEXCLUSIVE")

#endif // _com_sun_media_sound_DLSRegion_h_
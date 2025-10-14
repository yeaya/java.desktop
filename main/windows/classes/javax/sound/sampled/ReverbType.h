#ifndef _javax_sound_sampled_ReverbType_h_
#define _javax_sound_sampled_ReverbType_h_
//$ class javax.sound.sampled.ReverbType
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sound {
		namespace sampled {

class $export ReverbType : public ::java::lang::Object {
	$class(ReverbType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReverbType();
	void init$($String* name, int32_t earlyReflectionDelay, float earlyReflectionIntensity, int32_t lateReflectionDelay, float lateReflectionIntensity, int32_t decayTime);
	virtual bool equals(Object$* obj) override;
	int32_t getDecayTime();
	int32_t getEarlyReflectionDelay();
	float getEarlyReflectionIntensity();
	int32_t getLateReflectionDelay();
	float getLateReflectionIntensity();
	virtual $String* getName();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* name = nullptr;
	int32_t earlyReflectionDelay = 0;
	float earlyReflectionIntensity = 0.0;
	int32_t lateReflectionDelay = 0;
	float lateReflectionIntensity = 0.0;
	int32_t decayTime = 0;
};

		} // sampled
	} // sound
} // javax

#endif // _javax_sound_sampled_ReverbType_h_
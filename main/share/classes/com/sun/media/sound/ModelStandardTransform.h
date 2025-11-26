#ifndef _com_sun_media_sound_ModelStandardTransform_h_
#define _com_sun_media_sound_ModelStandardTransform_h_
//$ class com.sun.media.sound.ModelStandardTransform
//$ extends com.sun.media.sound.ModelTransform

#include <com/sun/media/sound/ModelTransform.h>

#pragma push_macro("DIRECTION_MAX2MIN")
#undef DIRECTION_MAX2MIN
#pragma push_macro("DIRECTION_MIN2MAX")
#undef DIRECTION_MIN2MAX
#pragma push_macro("POLARITY_BIPOLAR")
#undef POLARITY_BIPOLAR
#pragma push_macro("POLARITY_UNIPOLAR")
#undef POLARITY_UNIPOLAR
#pragma push_macro("TRANSFORM_ABSOLUTE")
#undef TRANSFORM_ABSOLUTE
#pragma push_macro("TRANSFORM_CONCAVE")
#undef TRANSFORM_CONCAVE
#pragma push_macro("TRANSFORM_CONVEX")
#undef TRANSFORM_CONVEX
#pragma push_macro("TRANSFORM_LINEAR")
#undef TRANSFORM_LINEAR
#pragma push_macro("TRANSFORM_SWITCH")
#undef TRANSFORM_SWITCH

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelStandardTransform : public ::com::sun::media::sound::ModelTransform {
	$class(ModelStandardTransform, $NO_CLASS_INIT, ::com::sun::media::sound::ModelTransform)
public:
	ModelStandardTransform();
	void init$();
	void init$(bool direction);
	void init$(bool direction, bool polarity);
	void init$(bool direction, bool polarity, int32_t transform);
	bool getDirection();
	bool getPolarity();
	int32_t getTransform();
	void setDirection(bool direction);
	void setPolarity(bool polarity);
	void setTransform(int32_t transform);
	virtual double transform(double value) override;
	static const bool DIRECTION_MIN2MAX = false;
	static const bool DIRECTION_MAX2MIN = true;
	static const bool POLARITY_UNIPOLAR = false;
	static const bool POLARITY_BIPOLAR = true;
	static const int32_t TRANSFORM_LINEAR = 0;
	static const int32_t TRANSFORM_CONCAVE = 1;
	static const int32_t TRANSFORM_CONVEX = 2;
	static const int32_t TRANSFORM_SWITCH = 3;
	static const int32_t TRANSFORM_ABSOLUTE = 4;
	bool direction = false;
	bool polarity = false;
	int32_t transform$ = 0;
};

			} // sound
		} // media
	} // sun
} // com

#pragma pop_macro("DIRECTION_MAX2MIN")
#pragma pop_macro("DIRECTION_MIN2MAX")
#pragma pop_macro("POLARITY_BIPOLAR")
#pragma pop_macro("POLARITY_UNIPOLAR")
#pragma pop_macro("TRANSFORM_ABSOLUTE")
#pragma pop_macro("TRANSFORM_CONCAVE")
#pragma pop_macro("TRANSFORM_CONVEX")
#pragma pop_macro("TRANSFORM_LINEAR")
#pragma pop_macro("TRANSFORM_SWITCH")

#endif // _com_sun_media_sound_ModelStandardTransform_h_
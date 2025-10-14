#include <com/sun/media/sound/ModelWavetable.h>

#include <com/sun/media/sound/AudioFloatInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOOP_TYPE_FORWARD
#undef LOOP_TYPE_OFF
#undef LOOP_TYPE_PINGPONG
#undef LOOP_TYPE_RELEASE
#undef LOOP_TYPE_REVERSE

using $AudioFloatInputStream = ::com::sun::media::sound::AudioFloatInputStream;
using $ModelOscillator = ::com::sun::media::sound::ModelOscillator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _ModelWavetable_FieldInfo_[] = {
	{"LOOP_TYPE_OFF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelWavetable, LOOP_TYPE_OFF)},
	{"LOOP_TYPE_FORWARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelWavetable, LOOP_TYPE_FORWARD)},
	{"LOOP_TYPE_RELEASE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelWavetable, LOOP_TYPE_RELEASE)},
	{"LOOP_TYPE_PINGPONG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelWavetable, LOOP_TYPE_PINGPONG)},
	{"LOOP_TYPE_REVERSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ModelWavetable, LOOP_TYPE_REVERSE)},
	{}
};

$MethodInfo _ModelWavetable_MethodInfo_[] = {
	{"getLoopLength", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoopStart", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getLoopType", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getPitchcorrection", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"openStream", "()Lcom/sun/media/sound/AudioFloatInputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelWavetable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelWavetable",
	nullptr,
	"com.sun.media.sound.ModelOscillator",
	_ModelWavetable_FieldInfo_,
	_ModelWavetable_MethodInfo_
};

$Object* allocate$ModelWavetable($Class* clazz) {
	return $of($alloc(ModelWavetable));
}

$Class* ModelWavetable::load$($String* name, bool initialize) {
	$loadClass(ModelWavetable, name, initialize, &_ModelWavetable_ClassInfo_, allocate$ModelWavetable);
	return class$;
}

$Class* ModelWavetable::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/ModelOscillator.h>

#include <com/sun/media/sound/ModelOscillatorStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ModelOscillatorStream = ::com::sun::media::sound::ModelOscillatorStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelOscillator_MethodInfo_[] = {
	{"getAttenuation", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"getChannels", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"open", "(F)Lcom/sun/media/sound/ModelOscillatorStream;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelOscillator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.media.sound.ModelOscillator",
	nullptr,
	nullptr,
	nullptr,
	_ModelOscillator_MethodInfo_
};

$Object* allocate$ModelOscillator($Class* clazz) {
	return $of($alloc(ModelOscillator));
}

$Class* ModelOscillator::load$($String* name, bool initialize) {
	$loadClass(ModelOscillator, name, initialize, &_ModelOscillator_ClassInfo_, allocate$ModelOscillator);
	return class$;
}

$Class* ModelOscillator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
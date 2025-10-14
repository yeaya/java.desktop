#include <com/sun/media/sound/SF2LayerRegion.h>

#include <com/sun/media/sound/SF2Region.h>
#include <com/sun/media/sound/SF2Sample.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SF2Region = ::com::sun::media::sound::SF2Region;
using $SF2Sample = ::com::sun::media::sound::SF2Sample;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2LayerRegion_FieldInfo_[] = {
	{"sample", "Lcom/sun/media/sound/SF2Sample;", nullptr, 0, $field(SF2LayerRegion, sample)},
	{}
};

$MethodInfo _SF2LayerRegion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2LayerRegion::*)()>(&SF2LayerRegion::init$))},
	{"getSample", "()Lcom/sun/media/sound/SF2Sample;", nullptr, $PUBLIC, $method(static_cast<$SF2Sample*(SF2LayerRegion::*)()>(&SF2LayerRegion::getSample))},
	{"setSample", "(Lcom/sun/media/sound/SF2Sample;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2LayerRegion::*)($SF2Sample*)>(&SF2LayerRegion::setSample))},
	{}
};

$ClassInfo _SF2LayerRegion_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2LayerRegion",
	"com.sun.media.sound.SF2Region",
	nullptr,
	_SF2LayerRegion_FieldInfo_,
	_SF2LayerRegion_MethodInfo_
};

$Object* allocate$SF2LayerRegion($Class* clazz) {
	return $of($alloc(SF2LayerRegion));
}

void SF2LayerRegion::init$() {
	$SF2Region::init$();
}

$SF2Sample* SF2LayerRegion::getSample() {
	return this->sample;
}

void SF2LayerRegion::setSample($SF2Sample* sample) {
	$set(this, sample, sample);
}

SF2LayerRegion::SF2LayerRegion() {
}

$Class* SF2LayerRegion::load$($String* name, bool initialize) {
	$loadClass(SF2LayerRegion, name, initialize, &_SF2LayerRegion_ClassInfo_, allocate$SF2LayerRegion);
	return class$;
}

$Class* SF2LayerRegion::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
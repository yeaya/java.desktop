#include <com/sun/media/sound/SF2InstrumentRegion.h>

#include <com/sun/media/sound/SF2Layer.h>
#include <com/sun/media/sound/SF2Region.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $SF2Layer = ::com::sun::media::sound::SF2Layer;
using $SF2Region = ::com::sun::media::sound::SF2Region;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2InstrumentRegion_FieldInfo_[] = {
	{"layer", "Lcom/sun/media/sound/SF2Layer;", nullptr, 0, $field(SF2InstrumentRegion, layer)},
	{}
};

$MethodInfo _SF2InstrumentRegion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2InstrumentRegion::*)()>(&SF2InstrumentRegion::init$))},
	{"getLayer", "()Lcom/sun/media/sound/SF2Layer;", nullptr, $PUBLIC, $method(static_cast<$SF2Layer*(SF2InstrumentRegion::*)()>(&SF2InstrumentRegion::getLayer))},
	{"setLayer", "(Lcom/sun/media/sound/SF2Layer;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2InstrumentRegion::*)($SF2Layer*)>(&SF2InstrumentRegion::setLayer))},
	{}
};

$ClassInfo _SF2InstrumentRegion_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2InstrumentRegion",
	"com.sun.media.sound.SF2Region",
	nullptr,
	_SF2InstrumentRegion_FieldInfo_,
	_SF2InstrumentRegion_MethodInfo_
};

$Object* allocate$SF2InstrumentRegion($Class* clazz) {
	return $of($alloc(SF2InstrumentRegion));
}

void SF2InstrumentRegion::init$() {
	$SF2Region::init$();
}

$SF2Layer* SF2InstrumentRegion::getLayer() {
	return this->layer;
}

void SF2InstrumentRegion::setLayer($SF2Layer* layer) {
	$set(this, layer, layer);
}

SF2InstrumentRegion::SF2InstrumentRegion() {
}

$Class* SF2InstrumentRegion::load$($String* name, bool initialize) {
	$loadClass(SF2InstrumentRegion, name, initialize, &_SF2InstrumentRegion_ClassInfo_, allocate$SF2InstrumentRegion);
	return class$;
}

$Class* SF2InstrumentRegion::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
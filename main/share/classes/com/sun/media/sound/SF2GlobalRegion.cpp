#include <com/sun/media/sound/SF2GlobalRegion.h>

#include <com/sun/media/sound/SF2Region.h>
#include <jcpp.h>

using $SF2Region = ::com::sun::media::sound::SF2Region;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SF2GlobalRegion_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2GlobalRegion::*)()>(&SF2GlobalRegion::init$))},
	{}
};

$ClassInfo _SF2GlobalRegion_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2GlobalRegion",
	"com.sun.media.sound.SF2Region",
	nullptr,
	nullptr,
	_SF2GlobalRegion_MethodInfo_
};

$Object* allocate$SF2GlobalRegion($Class* clazz) {
	return $of($alloc(SF2GlobalRegion));
}

void SF2GlobalRegion::init$() {
	$SF2Region::init$();
}

SF2GlobalRegion::SF2GlobalRegion() {
}

$Class* SF2GlobalRegion::load$($String* name, bool initialize) {
	$loadClass(SF2GlobalRegion, name, initialize, &_SF2GlobalRegion_ClassInfo_, allocate$SF2GlobalRegion);
	return class$;
}

$Class* SF2GlobalRegion::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
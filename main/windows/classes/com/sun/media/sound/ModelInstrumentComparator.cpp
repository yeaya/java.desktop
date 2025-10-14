#include <com/sun/media/sound/ModelInstrumentComparator.h>

#include <com/sun/media/sound/ModelPatch.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <jcpp.h>

using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Instrument = ::javax::sound::midi::Instrument;
using $Patch = ::javax::sound::midi::Patch;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelInstrumentComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ModelInstrumentComparator::*)()>(&ModelInstrumentComparator::init$))},
	{"compare", "(Ljavax/sound/midi/Instrument;Ljavax/sound/midi/Instrument;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(ModelInstrumentComparator::*)($Instrument*,$Instrument*)>(&ModelInstrumentComparator::compare))},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$ClassInfo _ModelInstrumentComparator_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.ModelInstrumentComparator",
	"java.lang.Object",
	"java.util.Comparator",
	nullptr,
	_ModelInstrumentComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljavax/sound/midi/Instrument;>;"
};

$Object* allocate$ModelInstrumentComparator($Class* clazz) {
	return $of($alloc(ModelInstrumentComparator));
}

void ModelInstrumentComparator::init$() {
}

int32_t ModelInstrumentComparator::compare($Instrument* arg0, $Instrument* arg1) {
	$var($Patch, p0, $nc(arg0)->getPatch());
	$var($Patch, p1, $nc(arg1)->getPatch());
	int32_t var$0 = $nc(p0)->getBank() * 128;
	int32_t a = var$0 + p0->getProgram();
	int32_t var$1 = $nc(p1)->getBank() * 128;
	int32_t b = var$1 + p1->getProgram();
	if ($instanceOf($ModelPatch, p0)) {
		a += $nc(($cast($ModelPatch, p0)))->isPercussion() ? 0x00200000 : 0;
	}
	if ($instanceOf($ModelPatch, p1)) {
		b += $nc(($cast($ModelPatch, p1)))->isPercussion() ? 0x00200000 : 0;
	}
	return a - b;
}

int32_t ModelInstrumentComparator::compare(Object$* arg0, Object$* arg1) {
	return this->compare($cast($Instrument, arg0), $cast($Instrument, arg1));
}

ModelInstrumentComparator::ModelInstrumentComparator() {
}

$Class* ModelInstrumentComparator::load$($String* name, bool initialize) {
	$loadClass(ModelInstrumentComparator, name, initialize, &_ModelInstrumentComparator_ClassInfo_, allocate$ModelInstrumentComparator);
	return class$;
}

$Class* ModelInstrumentComparator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
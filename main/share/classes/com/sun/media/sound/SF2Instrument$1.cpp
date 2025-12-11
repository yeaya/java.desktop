#include <com/sun/media/sound/SF2Instrument$1.h>

#include <com/sun/media/sound/SF2Instrument.h>
#include <jcpp.h>

using $SF2Instrument = ::com::sun::media::sound::SF2Instrument;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Instrument$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SF2Instrument;", nullptr, $FINAL | $SYNTHETIC, $field(SF2Instrument$1, this$0)},
	{}
};

$MethodInfo _SF2Instrument$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SF2Instrument;)V", nullptr, 0, $method(static_cast<void(SF2Instrument$1::*)($SF2Instrument*)>(&SF2Instrument$1::init$))},
	{"transform", "(D)D", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SF2Instrument$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SF2Instrument",
	"getPerformers",
	"()[Lcom/sun/media/sound/ModelPerformer;"
};

$InnerClassInfo _SF2Instrument$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SF2Instrument$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SF2Instrument$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SF2Instrument$1",
	"java.lang.Object",
	"com.sun.media.sound.ModelTransform",
	_SF2Instrument$1_FieldInfo_,
	_SF2Instrument$1_MethodInfo_,
	nullptr,
	&_SF2Instrument$1_EnclosingMethodInfo_,
	_SF2Instrument$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SF2Instrument"
};

$Object* allocate$SF2Instrument$1($Class* clazz) {
	return $of($alloc(SF2Instrument$1));
}

void SF2Instrument$1::init$($SF2Instrument* this$0) {
	$set(this, this$0, this$0);
}

double SF2Instrument$1::transform(double value) {
	if (value < 0.5) {
		return 1 - value * 2;
	} else {
		return (double)0;
	}
}

SF2Instrument$1::SF2Instrument$1() {
}

$Class* SF2Instrument$1::load$($String* name, bool initialize) {
	$loadClass(SF2Instrument$1, name, initialize, &_SF2Instrument$1_ClassInfo_, allocate$SF2Instrument$1);
	return class$;
}

$Class* SF2Instrument$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
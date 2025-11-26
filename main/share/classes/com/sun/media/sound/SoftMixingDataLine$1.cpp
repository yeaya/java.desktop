#include <com/sun/media/sound/SoftMixingDataLine$1.h>

#include <javax/sound/sampled/FloatControl$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _SoftMixingDataLine$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(SoftMixingDataLine$1::*)($String*)>(&SoftMixingDataLine$1::init$))},
	{}
};

$EnclosingMethodInfo _SoftMixingDataLine$1_EnclosingMethodInfo_ = {
	"com.sun.media.sound.SoftMixingDataLine",
	nullptr,
	nullptr
};

$InnerClassInfo _SoftMixingDataLine$1_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$1", nullptr, nullptr, 0},
	{"javax.sound.sampled.FloatControl$Type", "javax.sound.sampled.FloatControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SoftMixingDataLine$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$1",
	"javax.sound.sampled.FloatControl$Type",
	nullptr,
	nullptr,
	_SoftMixingDataLine$1_MethodInfo_,
	nullptr,
	&_SoftMixingDataLine$1_EnclosingMethodInfo_,
	_SoftMixingDataLine$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$1($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$1));
}

void SoftMixingDataLine$1::init$($String* name) {
	$FloatControl$Type::init$(name);
}

SoftMixingDataLine$1::SoftMixingDataLine$1() {
}

$Class* SoftMixingDataLine$1::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$1, name, initialize, &_SoftMixingDataLine$1_ClassInfo_, allocate$SoftMixingDataLine$1);
	return class$;
}

$Class* SoftMixingDataLine$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
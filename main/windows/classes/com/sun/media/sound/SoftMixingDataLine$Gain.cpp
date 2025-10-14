#include <com/sun/media/sound/SoftMixingDataLine$Gain.h>

#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef MASTER_GAIN

using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingDataLine$Gain_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$Gain, this$0)},
	{}
};

$MethodInfo _SoftMixingDataLine$Gain_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingDataLine$Gain::*)($SoftMixingDataLine*)>(&SoftMixingDataLine$Gain::init$))},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingDataLine$Gain_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$Gain", "com.sun.media.sound.SoftMixingDataLine", "Gain", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SoftMixingDataLine$Gain_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$Gain",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_SoftMixingDataLine$Gain_FieldInfo_,
	_SoftMixingDataLine$Gain_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine$Gain_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$Gain($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$Gain));
}

void SoftMixingDataLine$Gain::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::MASTER_GAIN, -80.0f, 6.0206f, 80.0f / 128.0f, -1, 0.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
}

void SoftMixingDataLine$Gain::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	this->this$0->calcVolume();
}

SoftMixingDataLine$Gain::SoftMixingDataLine$Gain() {
}

$Class* SoftMixingDataLine$Gain::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$Gain, name, initialize, &_SoftMixingDataLine$Gain_ClassInfo_, allocate$SoftMixingDataLine$Gain);
	return class$;
}

$Class* SoftMixingDataLine$Gain::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/SoftMixingDataLine$ReverbSend.h>

#include <com/sun/media/sound/SoftMixingDataLine$Balance.h>
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

#undef REVERB_SEND

using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $SoftMixingDataLine$Balance = ::com::sun::media::sound::SoftMixingDataLine$Balance;
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

$FieldInfo _SoftMixingDataLine$ReverbSend_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$ReverbSend, this$0)},
	{}
};

$MethodInfo _SoftMixingDataLine$ReverbSend_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingDataLine$ReverbSend::*)($SoftMixingDataLine*)>(&SoftMixingDataLine$ReverbSend::init$))},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingDataLine$ReverbSend_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$ReverbSend", "com.sun.media.sound.SoftMixingDataLine", "ReverbSend", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SoftMixingDataLine$ReverbSend_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$ReverbSend",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_SoftMixingDataLine$ReverbSend_FieldInfo_,
	_SoftMixingDataLine$ReverbSend_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine$ReverbSend_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$ReverbSend($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$ReverbSend));
}

void SoftMixingDataLine$ReverbSend::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::REVERB_SEND, -80.0f, 6.0206f, 80.0f / 128.0f, -1, -80.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
}

void SoftMixingDataLine$ReverbSend::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	$nc(this->this$0->balance_control)->setValue(newValue);
}

SoftMixingDataLine$ReverbSend::SoftMixingDataLine$ReverbSend() {
}

$Class* SoftMixingDataLine$ReverbSend::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$ReverbSend, name, initialize, &_SoftMixingDataLine$ReverbSend_ClassInfo_, allocate$SoftMixingDataLine$ReverbSend);
	return class$;
}

$Class* SoftMixingDataLine$ReverbSend::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
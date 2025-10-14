#include <com/sun/media/sound/SoftMixingDataLine$ChorusSend.h>

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

#undef CHORUS_SEND

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

$FieldInfo _SoftMixingDataLine$ChorusSend_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$ChorusSend, this$0)},
	{}
};

$MethodInfo _SoftMixingDataLine$ChorusSend_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingDataLine$ChorusSend::*)($SoftMixingDataLine*)>(&SoftMixingDataLine$ChorusSend::init$))},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingDataLine$ChorusSend_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$ChorusSend", "com.sun.media.sound.SoftMixingDataLine", "ChorusSend", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SoftMixingDataLine$ChorusSend_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$ChorusSend",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_SoftMixingDataLine$ChorusSend_FieldInfo_,
	_SoftMixingDataLine$ChorusSend_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine$ChorusSend_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$ChorusSend($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$ChorusSend));
}

void SoftMixingDataLine$ChorusSend::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($SoftMixingDataLine);
	$FloatControl::init$($SoftMixingDataLine::CHORUS_SEND, -80.0f, 6.0206f, 80.0f / 128.0f, -1, -80.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
}

void SoftMixingDataLine$ChorusSend::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	$nc(this->this$0->balance_control)->setValue(newValue);
}

SoftMixingDataLine$ChorusSend::SoftMixingDataLine$ChorusSend() {
}

$Class* SoftMixingDataLine$ChorusSend::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$ChorusSend, name, initialize, &_SoftMixingDataLine$ChorusSend_ClassInfo_, allocate$SoftMixingDataLine$ChorusSend);
	return class$;
}

$Class* SoftMixingDataLine$ChorusSend::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
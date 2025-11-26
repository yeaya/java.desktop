#include <com/sun/media/sound/SoftMixingDataLine$Balance.h>

#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef BALANCE

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

$FieldInfo _SoftMixingDataLine$Balance_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$Balance, this$0)},
	{}
};

$MethodInfo _SoftMixingDataLine$Balance_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingDataLine$Balance::*)($SoftMixingDataLine*)>(&SoftMixingDataLine$Balance::init$))},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingDataLine$Balance_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$Balance", "com.sun.media.sound.SoftMixingDataLine", "Balance", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SoftMixingDataLine$Balance_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$Balance",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_SoftMixingDataLine$Balance_FieldInfo_,
	_SoftMixingDataLine$Balance_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine$Balance_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$Balance($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$Balance));
}

void SoftMixingDataLine$Balance::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::BALANCE, -1.0f, 1.0f, (1.0f / 128.0f), -1, 0.0f, ""_s, "Left"_s, "Center"_s, "Right"_s);
}

void SoftMixingDataLine$Balance::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	this->this$0->calcVolume();
}

SoftMixingDataLine$Balance::SoftMixingDataLine$Balance() {
}

$Class* SoftMixingDataLine$Balance::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$Balance, name, initialize, &_SoftMixingDataLine$Balance_ClassInfo_, allocate$SoftMixingDataLine$Balance);
	return class$;
}

$Class* SoftMixingDataLine$Balance::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/SoftMixingDataLine$Pan.h>

#include <com/sun/media/sound/SoftMixingDataLine$Balance.h>
#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef PAN

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

$FieldInfo _SoftMixingDataLine$Pan_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$Pan, this$0)},
	{}
};

$MethodInfo _SoftMixingDataLine$Pan_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingDataLine$Pan::*)($SoftMixingDataLine*)>(&SoftMixingDataLine$Pan::init$))},
	{"getValue", "()F", nullptr, $PUBLIC},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingDataLine$Pan_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$Pan", "com.sun.media.sound.SoftMixingDataLine", "Pan", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SoftMixingDataLine$Pan_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$Pan",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_SoftMixingDataLine$Pan_FieldInfo_,
	_SoftMixingDataLine$Pan_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine$Pan_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$Pan($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$Pan));
}

void SoftMixingDataLine$Pan::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::PAN, -1.0f, 1.0f, (1.0f / 128.0f), -1, 0.0f, ""_s, "Left"_s, "Center"_s, "Right"_s);
}

void SoftMixingDataLine$Pan::setValue(float newValue) {
	$FloatControl::setValue(newValue);
	$nc(this->this$0->balance_control)->setValue(newValue);
}

float SoftMixingDataLine$Pan::getValue() {
	return $nc(this->this$0->balance_control)->getValue();
}

SoftMixingDataLine$Pan::SoftMixingDataLine$Pan() {
}

$Class* SoftMixingDataLine$Pan::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$Pan, name, initialize, &_SoftMixingDataLine$Pan_ClassInfo_, allocate$SoftMixingDataLine$Pan);
	return class$;
}

$Class* SoftMixingDataLine$Pan::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Gain.h>

#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef MASTER_GAIN

using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _DirectAudioDevice$DirectDL$Gain_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL;", nullptr, $FINAL | $SYNTHETIC, $field(DirectAudioDevice$DirectDL$Gain, this$0)},
	{"linearGain", "F", nullptr, $PRIVATE, $field(DirectAudioDevice$DirectDL$Gain, linearGain)},
	{}
};

$MethodInfo _DirectAudioDevice$DirectDL$Gain_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/DirectAudioDevice$DirectDL;)V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectDL$Gain::*)($DirectAudioDevice$DirectDL*)>(&DirectAudioDevice$DirectDL$Gain::init$))},
	{"getLinearGain", "()F", nullptr, 0, $method(static_cast<float(DirectAudioDevice$DirectDL$Gain::*)()>(&DirectAudioDevice$DirectDL$Gain::getLinearGain))},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectDL$Gain_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL$Gain", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Gain", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _DirectAudioDevice$DirectDL$Gain_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectDL$Gain",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_DirectAudioDevice$DirectDL$Gain_FieldInfo_,
	_DirectAudioDevice$DirectDL$Gain_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectDL$Gain_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectDL$Gain($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectDL$Gain));
}

void DirectAudioDevice$DirectDL$Gain::init$($DirectAudioDevice$DirectDL* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$var($FloatControl$Type, var$0, $FloatControl$Type::MASTER_GAIN);
	float var$1 = $Toolkit::linearToDB(0.0f);
	float var$2 = $Toolkit::linearToDB(2.0f);
	float var$3 = $Toolkit::linearToDB(1.0f);
	$FloatControl::init$(var$0, var$1, var$2, $Math::abs(var$3 - $Toolkit::linearToDB(0.0f)) / 128.0f, -1, 0.0f, "dB"_s, "Minimum"_s, ""_s, "Maximum"_s);
	this->linearGain = 1.0f;
}

void DirectAudioDevice$DirectDL$Gain::setValue(float newValue) {
	float newLinearGain = $Toolkit::dBToLinear(newValue);
	$FloatControl::setValue($Toolkit::linearToDB(newLinearGain));
	this->linearGain = newLinearGain;
	this->this$0->calcVolume();
}

float DirectAudioDevice$DirectDL$Gain::getLinearGain() {
	return this->linearGain;
}

DirectAudioDevice$DirectDL$Gain::DirectAudioDevice$DirectDL$Gain() {
}

$Class* DirectAudioDevice$DirectDL$Gain::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectDL$Gain, name, initialize, &_DirectAudioDevice$DirectDL$Gain_ClassInfo_, allocate$DirectAudioDevice$DirectDL$Gain);
	return class$;
}

$Class* DirectAudioDevice$DirectDL$Gain::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
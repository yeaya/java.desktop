#include <com/sun/media/sound/SoftMixingDataLine$Mute.h>

#include <com/sun/media/sound/SoftMixingDataLine.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <javax/sound/sampled/BooleanControl.h>
#include <jcpp.h>

#undef MUTE

using $SoftMixingDataLine = ::com::sun::media::sound::SoftMixingDataLine;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BooleanControl = ::javax::sound::sampled::BooleanControl;
using $BooleanControl$Type = ::javax::sound::sampled::BooleanControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftMixingDataLine$Mute_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$Mute, this$0)},
	{}
};

$MethodInfo _SoftMixingDataLine$Mute_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingDataLine$Mute::*)($SoftMixingDataLine*)>(&SoftMixingDataLine$Mute::init$))},
	{"setValue", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingDataLine$Mute_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$Mute", "com.sun.media.sound.SoftMixingDataLine", "Mute", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SoftMixingDataLine$Mute_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$Mute",
	"javax.sound.sampled.BooleanControl",
	nullptr,
	_SoftMixingDataLine$Mute_FieldInfo_,
	_SoftMixingDataLine$Mute_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine$Mute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$Mute($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$Mute));
}

void SoftMixingDataLine$Mute::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($BooleanControl$Type);
	$BooleanControl::init$($BooleanControl$Type::MUTE, false, "True"_s, "False"_s);
}

void SoftMixingDataLine$Mute::setValue(bool newValue) {
	$BooleanControl::setValue(newValue);
	this->this$0->calcVolume();
}

SoftMixingDataLine$Mute::SoftMixingDataLine$Mute() {
}

$Class* SoftMixingDataLine$Mute::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$Mute, name, initialize, &_SoftMixingDataLine$Mute_ClassInfo_, allocate$SoftMixingDataLine$Mute);
	return class$;
}

$Class* SoftMixingDataLine$Mute::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
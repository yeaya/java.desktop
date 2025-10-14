#include <com/sun/media/sound/SoftMixingDataLine$ApplyReverb.h>

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

#undef APPLY_REVERB

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

$FieldInfo _SoftMixingDataLine$ApplyReverb_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/SoftMixingDataLine;", nullptr, $FINAL | $SYNTHETIC, $field(SoftMixingDataLine$ApplyReverb, this$0)},
	{}
};

$MethodInfo _SoftMixingDataLine$ApplyReverb_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/SoftMixingDataLine;)V", nullptr, $PRIVATE, $method(static_cast<void(SoftMixingDataLine$ApplyReverb::*)($SoftMixingDataLine*)>(&SoftMixingDataLine$ApplyReverb::init$))},
	{"setValue", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SoftMixingDataLine$ApplyReverb_InnerClassesInfo_[] = {
	{"com.sun.media.sound.SoftMixingDataLine$ApplyReverb", "com.sun.media.sound.SoftMixingDataLine", "ApplyReverb", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _SoftMixingDataLine$ApplyReverb_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftMixingDataLine$ApplyReverb",
	"javax.sound.sampled.BooleanControl",
	nullptr,
	_SoftMixingDataLine$ApplyReverb_FieldInfo_,
	_SoftMixingDataLine$ApplyReverb_MethodInfo_,
	nullptr,
	nullptr,
	_SoftMixingDataLine$ApplyReverb_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.SoftMixingDataLine"
};

$Object* allocate$SoftMixingDataLine$ApplyReverb($Class* clazz) {
	return $of($alloc(SoftMixingDataLine$ApplyReverb));
}

void SoftMixingDataLine$ApplyReverb::init$($SoftMixingDataLine* this$0) {
	$set(this, this$0, this$0);
	$init($BooleanControl$Type);
	$BooleanControl::init$($BooleanControl$Type::APPLY_REVERB, false, "True"_s, "False"_s);
}

void SoftMixingDataLine$ApplyReverb::setValue(bool newValue) {
	$BooleanControl::setValue(newValue);
	this->this$0->calcVolume();
}

SoftMixingDataLine$ApplyReverb::SoftMixingDataLine$ApplyReverb() {
}

$Class* SoftMixingDataLine$ApplyReverb::load$($String* name, bool initialize) {
	$loadClass(SoftMixingDataLine$ApplyReverb, name, initialize, &_SoftMixingDataLine$ApplyReverb_ClassInfo_, allocate$SoftMixingDataLine$ApplyReverb);
	return class$;
}

$Class* SoftMixingDataLine$ApplyReverb::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
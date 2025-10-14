#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Balance.h>

#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Pan.h>
#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
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

#undef BALANCE

using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
using $DirectAudioDevice$DirectDL$Pan = ::com::sun::media::sound::DirectAudioDevice$DirectDL$Pan;
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

$FieldInfo _DirectAudioDevice$DirectDL$Balance_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL;", nullptr, $FINAL | $SYNTHETIC, $field(DirectAudioDevice$DirectDL$Balance, this$0)},
	{}
};

$MethodInfo _DirectAudioDevice$DirectDL$Balance_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/DirectAudioDevice$DirectDL;)V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectDL$Balance::*)($DirectAudioDevice$DirectDL*)>(&DirectAudioDevice$DirectDL$Balance::init$))},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{"setValueImpl", "(F)V", nullptr, 0, $method(static_cast<void(DirectAudioDevice$DirectDL$Balance::*)(float)>(&DirectAudioDevice$DirectDL$Balance::setValueImpl))},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectDL$Balance_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL$Balance", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Balance", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _DirectAudioDevice$DirectDL$Balance_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectDL$Balance",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_DirectAudioDevice$DirectDL$Balance_FieldInfo_,
	_DirectAudioDevice$DirectDL$Balance_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectDL$Balance_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectDL$Balance($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectDL$Balance));
}

void DirectAudioDevice$DirectDL$Balance::init$($DirectAudioDevice$DirectDL* this$0) {
	$set(this, this$0, this$0);
	$init($FloatControl$Type);
	$FloatControl::init$($FloatControl$Type::BALANCE, -1.0f, 1.0f, (1.0f / 128.0f), -1, 0.0f, ""_s, "Left"_s, "Center"_s, "Right"_s);
}

void DirectAudioDevice$DirectDL$Balance::setValue(float newValue) {
	setValueImpl(newValue);
	$nc(this->this$0->panControl)->setValueImpl(newValue);
	this->this$0->calcVolume();
}

void DirectAudioDevice$DirectDL$Balance::setValueImpl(float newValue) {
	$FloatControl::setValue(newValue);
}

DirectAudioDevice$DirectDL$Balance::DirectAudioDevice$DirectDL$Balance() {
}

$Class* DirectAudioDevice$DirectDL$Balance::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectDL$Balance, name, initialize, &_DirectAudioDevice$DirectDL$Balance_ClassInfo_, allocate$DirectAudioDevice$DirectDL$Balance);
	return class$;
}

$Class* DirectAudioDevice$DirectDL$Balance::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
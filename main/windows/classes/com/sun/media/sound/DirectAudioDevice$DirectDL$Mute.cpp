#include <com/sun/media/sound/DirectAudioDevice$DirectDL$Mute.h>

#include <com/sun/media/sound/DirectAudioDevice$DirectDL.h>
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

using $DirectAudioDevice$DirectDL = ::com::sun::media::sound::DirectAudioDevice$DirectDL;
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

$FieldInfo _DirectAudioDevice$DirectDL$Mute_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/DirectAudioDevice$DirectDL;", nullptr, $FINAL | $SYNTHETIC, $field(DirectAudioDevice$DirectDL$Mute, this$0)},
	{}
};

$MethodInfo _DirectAudioDevice$DirectDL$Mute_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/DirectAudioDevice$DirectDL;)V", nullptr, $PRIVATE, $method(static_cast<void(DirectAudioDevice$DirectDL$Mute::*)($DirectAudioDevice$DirectDL*)>(&DirectAudioDevice$DirectDL$Mute::init$))},
	{"setValue", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirectAudioDevice$DirectDL$Mute_InnerClassesInfo_[] = {
	{"com.sun.media.sound.DirectAudioDevice$DirectDL", "com.sun.media.sound.DirectAudioDevice", "DirectDL", $PRIVATE | $STATIC},
	{"com.sun.media.sound.DirectAudioDevice$DirectDL$Mute", "com.sun.media.sound.DirectAudioDevice$DirectDL", "Mute", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _DirectAudioDevice$DirectDL$Mute_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.DirectAudioDevice$DirectDL$Mute",
	"javax.sound.sampled.BooleanControl",
	nullptr,
	_DirectAudioDevice$DirectDL$Mute_FieldInfo_,
	_DirectAudioDevice$DirectDL$Mute_MethodInfo_,
	nullptr,
	nullptr,
	_DirectAudioDevice$DirectDL$Mute_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.DirectAudioDevice"
};

$Object* allocate$DirectAudioDevice$DirectDL$Mute($Class* clazz) {
	return $of($alloc(DirectAudioDevice$DirectDL$Mute));
}

void DirectAudioDevice$DirectDL$Mute::init$($DirectAudioDevice$DirectDL* this$0) {
	$set(this, this$0, this$0);
	$init($BooleanControl$Type);
	$BooleanControl::init$($BooleanControl$Type::MUTE, false, "True"_s, "False"_s);
}

void DirectAudioDevice$DirectDL$Mute::setValue(bool newValue) {
	$BooleanControl::setValue(newValue);
	this->this$0->calcVolume();
}

DirectAudioDevice$DirectDL$Mute::DirectAudioDevice$DirectDL$Mute() {
}

$Class* DirectAudioDevice$DirectDL$Mute::load$($String* name, bool initialize) {
	$loadClass(DirectAudioDevice$DirectDL$Mute, name, initialize, &_DirectAudioDevice$DirectDL$Mute_ClassInfo_, allocate$DirectAudioDevice$DirectDL$Mute);
	return class$;
}

$Class* DirectAudioDevice$DirectDL$Mute::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
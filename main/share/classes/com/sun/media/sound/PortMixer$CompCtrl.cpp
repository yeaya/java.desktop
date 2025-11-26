#include <com/sun/media/sound/PortMixer$CompCtrl.h>

#include <com/sun/media/sound/PortMixer$CompCtrl$CCT.h>
#include <com/sun/media/sound/PortMixer.h>
#include <javax/sound/sampled/CompoundControl$Type.h>
#include <javax/sound/sampled/CompoundControl.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $PortMixer = ::com::sun::media::sound::PortMixer;
using $PortMixer$CompCtrl$CCT = ::com::sun::media::sound::PortMixer$CompCtrl$CCT;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompoundControl = ::javax::sound::sampled::CompoundControl;
using $CompoundControl$Type = ::javax::sound::sampled::CompoundControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _PortMixer$CompCtrl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljavax/sound/sampled/Control;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$CompCtrl::*)($String*,$ControlArray*)>(&PortMixer$CompCtrl::init$))},
	{}
};

$InnerClassInfo _PortMixer$CompCtrl_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$CompCtrl", "com.sun.media.sound.PortMixer", "CompCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$CompCtrl$CCT", "com.sun.media.sound.PortMixer$CompCtrl", "CCT", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PortMixer$CompCtrl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$CompCtrl",
	"javax.sound.sampled.CompoundControl",
	nullptr,
	nullptr,
	_PortMixer$CompCtrl_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$CompCtrl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$CompCtrl($Class* clazz) {
	return $of($alloc(PortMixer$CompCtrl));
}

void PortMixer$CompCtrl::init$($String* name, $ControlArray* controls) {
	$CompoundControl::init$($$new($PortMixer$CompCtrl$CCT, name), controls);
}

PortMixer$CompCtrl::PortMixer$CompCtrl() {
}

$Class* PortMixer$CompCtrl::load$($String* name, bool initialize) {
	$loadClass(PortMixer$CompCtrl, name, initialize, &_PortMixer$CompCtrl_ClassInfo_, allocate$PortMixer$CompCtrl);
	return class$;
}

$Class* PortMixer$CompCtrl::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/PortMixer$BoolCtrl.h>

#include <com/sun/media/sound/PortMixer$BoolCtrl$BCT.h>
#include <com/sun/media/sound/PortMixer.h>
#include <javax/sound/sampled/BooleanControl$Type.h>
#include <javax/sound/sampled/BooleanControl.h>
#include <jcpp.h>

#undef MUTE

using $PortMixer = ::com::sun::media::sound::PortMixer;
using $PortMixer$BoolCtrl$BCT = ::com::sun::media::sound::PortMixer$BoolCtrl$BCT;
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

$FieldInfo _PortMixer$BoolCtrl_FieldInfo_[] = {
	{"controlID", "J", nullptr, $PRIVATE | $FINAL, $field(PortMixer$BoolCtrl, controlID)},
	{"closed", "Z", nullptr, $PRIVATE, $field(PortMixer$BoolCtrl, closed)},
	{}
};

$MethodInfo _PortMixer$BoolCtrl_MethodInfo_[] = {
	{"<init>", "(JLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$BoolCtrl::*)(int64_t,$String*)>(&PortMixer$BoolCtrl::init$))},
	{"<init>", "(JLjavax/sound/sampled/BooleanControl$Type;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$BoolCtrl::*)(int64_t,$BooleanControl$Type*)>(&PortMixer$BoolCtrl::init$))},
	{"createType", "(Ljava/lang/String;)Ljavax/sound/sampled/BooleanControl$Type;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BooleanControl$Type*(*)($String*)>(&PortMixer$BoolCtrl::createType))},
	{"getValue", "()Z", nullptr, $PUBLIC},
	{"setValue", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PortMixer$BoolCtrl_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$BoolCtrl", "com.sun.media.sound.PortMixer", "BoolCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$BoolCtrl$BCT", "com.sun.media.sound.PortMixer$BoolCtrl", "BCT", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PortMixer$BoolCtrl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$BoolCtrl",
	"javax.sound.sampled.BooleanControl",
	nullptr,
	_PortMixer$BoolCtrl_FieldInfo_,
	_PortMixer$BoolCtrl_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$BoolCtrl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$BoolCtrl($Class* clazz) {
	return $of($alloc(PortMixer$BoolCtrl));
}

$BooleanControl$Type* PortMixer$BoolCtrl::createType($String* name) {
	$init(PortMixer$BoolCtrl);
	if ($nc(name)->equals("Mute"_s)) {
		$init($BooleanControl$Type);
		return $BooleanControl$Type::MUTE;
	} else if (name->equals("Select"_s)) {
	}
	return $new($PortMixer$BoolCtrl$BCT, name);
}

void PortMixer$BoolCtrl::init$(int64_t controlID, $String* name) {
	PortMixer$BoolCtrl::init$(controlID, $(createType(name)));
}

void PortMixer$BoolCtrl::init$(int64_t controlID, $BooleanControl$Type* typ) {
	$BooleanControl::init$(typ, false);
	this->closed = false;
	this->controlID = controlID;
}

void PortMixer$BoolCtrl::setValue(bool value) {
	if (!this->closed) {
		$PortMixer::nControlSetIntValue(this->controlID, value ? 1 : 0);
	}
}

bool PortMixer$BoolCtrl::getValue() {
	if (!this->closed) {
		return ($PortMixer::nControlGetIntValue(this->controlID) != 0) ? true : false;
	}
	return false;
}

PortMixer$BoolCtrl::PortMixer$BoolCtrl() {
}

$Class* PortMixer$BoolCtrl::load$($String* name, bool initialize) {
	$loadClass(PortMixer$BoolCtrl, name, initialize, &_PortMixer$BoolCtrl_ClassInfo_, allocate$PortMixer$BoolCtrl);
	return class$;
}

$Class* PortMixer$BoolCtrl::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
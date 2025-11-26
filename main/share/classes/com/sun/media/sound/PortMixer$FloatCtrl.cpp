#include <com/sun/media/sound/PortMixer$FloatCtrl.h>

#include <com/sun/media/sound/PortMixer$FloatCtrl$FCT.h>
#include <com/sun/media/sound/PortMixer.h>
#include <javax/sound/sampled/FloatControl$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef BALANCE
#undef FLOAT_CONTROL_TYPES
#undef MASTER_GAIN
#undef PAN
#undef VOLUME

using $FloatControl$TypeArray = $Array<::javax::sound::sampled::FloatControl$Type>;
using $PortMixer = ::com::sun::media::sound::PortMixer;
using $PortMixer$FloatCtrl$FCT = ::com::sun::media::sound::PortMixer$FloatCtrl$FCT;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FloatControl = ::javax::sound::sampled::FloatControl;
using $FloatControl$Type = ::javax::sound::sampled::FloatControl$Type;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _PortMixer$FloatCtrl_FieldInfo_[] = {
	{"controlID", "J", nullptr, $PRIVATE | $FINAL, $field(PortMixer$FloatCtrl, controlID)},
	{"closed", "Z", nullptr, $PRIVATE, $field(PortMixer$FloatCtrl, closed)},
	{"FLOAT_CONTROL_TYPES", "[Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PortMixer$FloatCtrl, FLOAT_CONTROL_TYPES)},
	{}
};

$MethodInfo _PortMixer$FloatCtrl_MethodInfo_[] = {
	{"<init>", "(JLjava/lang/String;FFFLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$FloatCtrl::*)(int64_t,$String*,float,float,float,$String*)>(&PortMixer$FloatCtrl::init$))},
	{"<init>", "(JIFFFLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$FloatCtrl::*)(int64_t,int32_t,float,float,float,$String*)>(&PortMixer$FloatCtrl::init$))},
	{"<init>", "(JLjavax/sound/sampled/FloatControl$Type;FFFLjava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(PortMixer$FloatCtrl::*)(int64_t,$FloatControl$Type*,float,float,float,$String*)>(&PortMixer$FloatCtrl::init$))},
	{"getValue", "()F", nullptr, $PUBLIC},
	{"setValue", "(F)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PortMixer$FloatCtrl_InnerClassesInfo_[] = {
	{"com.sun.media.sound.PortMixer$FloatCtrl", "com.sun.media.sound.PortMixer", "FloatCtrl", $PRIVATE | $STATIC | $FINAL},
	{"com.sun.media.sound.PortMixer$FloatCtrl$FCT", "com.sun.media.sound.PortMixer$FloatCtrl", "FCT", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _PortMixer$FloatCtrl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.media.sound.PortMixer$FloatCtrl",
	"javax.sound.sampled.FloatControl",
	nullptr,
	_PortMixer$FloatCtrl_FieldInfo_,
	_PortMixer$FloatCtrl_MethodInfo_,
	nullptr,
	nullptr,
	_PortMixer$FloatCtrl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.PortMixer"
};

$Object* allocate$PortMixer$FloatCtrl($Class* clazz) {
	return $of($alloc(PortMixer$FloatCtrl));
}

$FloatControl$TypeArray* PortMixer$FloatCtrl::FLOAT_CONTROL_TYPES = nullptr;

void PortMixer$FloatCtrl::init$(int64_t controlID, $String* name, float min, float max, float precision, $String* units) {
	PortMixer$FloatCtrl::init$(controlID, static_cast<$FloatControl$Type*>($$new($PortMixer$FloatCtrl$FCT, name)), min, max, precision, units);
}

void PortMixer$FloatCtrl::init$(int64_t controlID, int32_t type, float min, float max, float precision, $String* units) {
	PortMixer$FloatCtrl::init$(controlID, $nc(PortMixer$FloatCtrl::FLOAT_CONTROL_TYPES)->get(type), min, max, precision, units);
}

void PortMixer$FloatCtrl::init$(int64_t controlID, $FloatControl$Type* typ, float min, float max, float precision, $String* units) {
	$FloatControl::init$(typ, min, max, precision, 1000, min, units);
	this->closed = false;
	this->controlID = controlID;
}

void PortMixer$FloatCtrl::setValue(float value) {
	if (!this->closed) {
		$PortMixer::nControlSetFloatValue(this->controlID, value);
	}
}

float PortMixer$FloatCtrl::getValue() {
	if (!this->closed) {
		return $PortMixer::nControlGetFloatValue(this->controlID);
	}
	return getMinimum();
}

void clinit$PortMixer$FloatCtrl($Class* class$) {
	$init($FloatControl$Type);
	$assignStatic(PortMixer$FloatCtrl::FLOAT_CONTROL_TYPES, $new($FloatControl$TypeArray, {
		($FloatControl$Type*)nullptr,
		$FloatControl$Type::BALANCE,
		$FloatControl$Type::MASTER_GAIN,
		$FloatControl$Type::PAN,
		$FloatControl$Type::VOLUME
	}));
}

PortMixer$FloatCtrl::PortMixer$FloatCtrl() {
}

$Class* PortMixer$FloatCtrl::load$($String* name, bool initialize) {
	$loadClass(PortMixer$FloatCtrl, name, initialize, &_PortMixer$FloatCtrl_ClassInfo_, clinit$PortMixer$FloatCtrl, allocate$PortMixer$FloatCtrl);
	return class$;
}

$Class* PortMixer$FloatCtrl::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
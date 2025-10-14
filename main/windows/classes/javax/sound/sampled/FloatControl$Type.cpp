#include <javax/sound/sampled/FloatControl$Type.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/FloatControl.h>
#include <jcpp.h>

#undef AUX_RETURN
#undef AUX_SEND
#undef BALANCE
#undef MASTER_GAIN
#undef PAN
#undef REVERB_RETURN
#undef REVERB_SEND
#undef SAMPLE_RATE
#undef VOLUME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $FloatControl = ::javax::sound::sampled::FloatControl;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _FloatControl$Type_FieldInfo_[] = {
	{"MASTER_GAIN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, MASTER_GAIN)},
	{"AUX_SEND", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, AUX_SEND)},
	{"AUX_RETURN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, AUX_RETURN)},
	{"REVERB_SEND", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, REVERB_SEND)},
	{"REVERB_RETURN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, REVERB_RETURN)},
	{"VOLUME", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, VOLUME)},
	{"PAN", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, PAN)},
	{"BALANCE", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, BALANCE)},
	{"SAMPLE_RATE", "Ljavax/sound/sampled/FloatControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FloatControl$Type, SAMPLE_RATE)},
	{}
};

$MethodInfo _FloatControl$Type_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(FloatControl$Type::*)($String*)>(&FloatControl$Type::init$))},
	{}
};

$InnerClassInfo _FloatControl$Type_InnerClassesInfo_[] = {
	{"javax.sound.sampled.FloatControl$Type", "javax.sound.sampled.FloatControl", "Type", $PUBLIC | $STATIC},
	{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _FloatControl$Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.FloatControl$Type",
	"javax.sound.sampled.Control$Type",
	nullptr,
	_FloatControl$Type_FieldInfo_,
	_FloatControl$Type_MethodInfo_,
	nullptr,
	nullptr,
	_FloatControl$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.FloatControl"
};

$Object* allocate$FloatControl$Type($Class* clazz) {
	return $of($alloc(FloatControl$Type));
}


FloatControl$Type* FloatControl$Type::MASTER_GAIN = nullptr;

FloatControl$Type* FloatControl$Type::AUX_SEND = nullptr;

FloatControl$Type* FloatControl$Type::AUX_RETURN = nullptr;

FloatControl$Type* FloatControl$Type::REVERB_SEND = nullptr;

FloatControl$Type* FloatControl$Type::REVERB_RETURN = nullptr;

FloatControl$Type* FloatControl$Type::VOLUME = nullptr;

FloatControl$Type* FloatControl$Type::PAN = nullptr;

FloatControl$Type* FloatControl$Type::BALANCE = nullptr;

FloatControl$Type* FloatControl$Type::SAMPLE_RATE = nullptr;

void FloatControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

void clinit$FloatControl$Type($Class* class$) {
	$assignStatic(FloatControl$Type::MASTER_GAIN, $new(FloatControl$Type, "Master Gain"_s));
	$assignStatic(FloatControl$Type::AUX_SEND, $new(FloatControl$Type, "AUX Send"_s));
	$assignStatic(FloatControl$Type::AUX_RETURN, $new(FloatControl$Type, "AUX Return"_s));
	$assignStatic(FloatControl$Type::REVERB_SEND, $new(FloatControl$Type, "Reverb Send"_s));
	$assignStatic(FloatControl$Type::REVERB_RETURN, $new(FloatControl$Type, "Reverb Return"_s));
	$assignStatic(FloatControl$Type::VOLUME, $new(FloatControl$Type, "Volume"_s));
	$assignStatic(FloatControl$Type::PAN, $new(FloatControl$Type, "Pan"_s));
	$assignStatic(FloatControl$Type::BALANCE, $new(FloatControl$Type, "Balance"_s));
	$assignStatic(FloatControl$Type::SAMPLE_RATE, $new(FloatControl$Type, "Sample Rate"_s));
}

FloatControl$Type::FloatControl$Type() {
}

$Class* FloatControl$Type::load$($String* name, bool initialize) {
	$loadClass(FloatControl$Type, name, initialize, &_FloatControl$Type_ClassInfo_, clinit$FloatControl$Type, allocate$FloatControl$Type);
	return class$;
}

$Class* FloatControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax
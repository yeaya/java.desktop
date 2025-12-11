#include <javax/sound/sampled/BooleanControl$Type.h>

#include <javax/sound/sampled/BooleanControl.h>
#include <javax/sound/sampled/Control$Type.h>
#include <jcpp.h>

#undef APPLY_REVERB
#undef MUTE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _BooleanControl$Type_FieldInfo_[] = {
	{"MUTE", "Ljavax/sound/sampled/BooleanControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BooleanControl$Type, MUTE)},
	{"APPLY_REVERB", "Ljavax/sound/sampled/BooleanControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BooleanControl$Type, APPLY_REVERB)},
	{}
};

$MethodInfo _BooleanControl$Type_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(BooleanControl$Type::*)($String*)>(&BooleanControl$Type::init$))},
	{}
};

$InnerClassInfo _BooleanControl$Type_InnerClassesInfo_[] = {
	{"javax.sound.sampled.BooleanControl$Type", "javax.sound.sampled.BooleanControl", "Type", $PUBLIC | $STATIC},
	{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _BooleanControl$Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.BooleanControl$Type",
	"javax.sound.sampled.Control$Type",
	nullptr,
	_BooleanControl$Type_FieldInfo_,
	_BooleanControl$Type_MethodInfo_,
	nullptr,
	nullptr,
	_BooleanControl$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.BooleanControl"
};

$Object* allocate$BooleanControl$Type($Class* clazz) {
	return $of($alloc(BooleanControl$Type));
}

BooleanControl$Type* BooleanControl$Type::MUTE = nullptr;
BooleanControl$Type* BooleanControl$Type::APPLY_REVERB = nullptr;

void BooleanControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

void clinit$BooleanControl$Type($Class* class$) {
	$assignStatic(BooleanControl$Type::MUTE, $new(BooleanControl$Type, "Mute"_s));
	$assignStatic(BooleanControl$Type::APPLY_REVERB, $new(BooleanControl$Type, "Apply Reverb"_s));
}

BooleanControl$Type::BooleanControl$Type() {
}

$Class* BooleanControl$Type::load$($String* name, bool initialize) {
	$loadClass(BooleanControl$Type, name, initialize, &_BooleanControl$Type_ClassInfo_, clinit$BooleanControl$Type, allocate$BooleanControl$Type);
	return class$;
}

$Class* BooleanControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax
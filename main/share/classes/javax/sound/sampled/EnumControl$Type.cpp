#include <javax/sound/sampled/EnumControl$Type.h>

#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/EnumControl.h>
#include <jcpp.h>

#undef REVERB

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _EnumControl$Type_FieldInfo_[] = {
	{"REVERB", "Ljavax/sound/sampled/EnumControl$Type;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EnumControl$Type, REVERB)},
	{}
};

$MethodInfo _EnumControl$Type_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(EnumControl$Type::*)($String*)>(&EnumControl$Type::init$))},
	{}
};

$InnerClassInfo _EnumControl$Type_InnerClassesInfo_[] = {
	{"javax.sound.sampled.EnumControl$Type", "javax.sound.sampled.EnumControl", "Type", $PUBLIC | $STATIC},
	{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _EnumControl$Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.EnumControl$Type",
	"javax.sound.sampled.Control$Type",
	nullptr,
	_EnumControl$Type_FieldInfo_,
	_EnumControl$Type_MethodInfo_,
	nullptr,
	nullptr,
	_EnumControl$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.EnumControl"
};

$Object* allocate$EnumControl$Type($Class* clazz) {
	return $of($alloc(EnumControl$Type));
}

EnumControl$Type* EnumControl$Type::REVERB = nullptr;

void EnumControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

void clinit$EnumControl$Type($Class* class$) {
	$assignStatic(EnumControl$Type::REVERB, $new(EnumControl$Type, "Reverb"_s));
}

EnumControl$Type::EnumControl$Type() {
}

$Class* EnumControl$Type::load$($String* name, bool initialize) {
	$loadClass(EnumControl$Type, name, initialize, &_EnumControl$Type_ClassInfo_, clinit$EnumControl$Type, allocate$EnumControl$Type);
	return class$;
}

$Class* EnumControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax
#include <javax/sound/sampled/CompoundControl$Type.h>

#include <javax/sound/sampled/CompoundControl.h>
#include <javax/sound/sampled/Control$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompoundControl = ::javax::sound::sampled::CompoundControl;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$MethodInfo _CompoundControl$Type_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CompoundControl$Type::*)($String*)>(&CompoundControl$Type::init$))},
	{}
};

$InnerClassInfo _CompoundControl$Type_InnerClassesInfo_[] = {
	{"javax.sound.sampled.CompoundControl$Type", "javax.sound.sampled.CompoundControl", "Type", $PUBLIC | $STATIC},
	{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompoundControl$Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.CompoundControl$Type",
	"javax.sound.sampled.Control$Type",
	nullptr,
	nullptr,
	_CompoundControl$Type_MethodInfo_,
	nullptr,
	nullptr,
	_CompoundControl$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.CompoundControl"
};

$Object* allocate$CompoundControl$Type($Class* clazz) {
	return $of($alloc(CompoundControl$Type));
}

void CompoundControl$Type::init$($String* name) {
	$Control$Type::init$(name);
}

CompoundControl$Type::CompoundControl$Type() {
}

$Class* CompoundControl$Type::load$($String* name, bool initialize) {
	$loadClass(CompoundControl$Type, name, initialize, &_CompoundControl$Type_ClassInfo_, allocate$CompoundControl$Type);
	return class$;
}

$Class* CompoundControl$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax
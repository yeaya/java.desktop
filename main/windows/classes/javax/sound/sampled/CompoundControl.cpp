#include <javax/sound/sampled/CompoundControl.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/StringJoiner.h>
#include <javax/sound/sampled/CompoundControl$Type.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringJoiner = ::java::util::StringJoiner;
using $CompoundControl$Type = ::javax::sound::sampled::CompoundControl$Type;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _CompoundControl_FieldInfo_[] = {
	{"controls", "[Ljavax/sound/sampled/Control;", nullptr, $PRIVATE | $FINAL, $field(CompoundControl, controls)},
	{}
};

$MethodInfo _CompoundControl_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/CompoundControl$Type;[Ljavax/sound/sampled/Control;)V", nullptr, $PROTECTED, $method(static_cast<void(CompoundControl::*)($CompoundControl$Type*,$ControlArray*)>(&CompoundControl::init$))},
	{"getMemberControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CompoundControl_InnerClassesInfo_[] = {
	{"javax.sound.sampled.CompoundControl$Type", "javax.sound.sampled.CompoundControl", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CompoundControl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.CompoundControl",
	"javax.sound.sampled.Control",
	nullptr,
	_CompoundControl_FieldInfo_,
	_CompoundControl_MethodInfo_,
	nullptr,
	nullptr,
	_CompoundControl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.CompoundControl$Type"
};

$Object* allocate$CompoundControl($Class* clazz) {
	return $of($alloc(CompoundControl));
}

void CompoundControl::init$($CompoundControl$Type* type, $ControlArray* memberControls) {
	$Control::init$(type);
	$set(this, controls, memberControls);
}

$ControlArray* CompoundControl::getMemberControls() {
	return $cast($ControlArray, $nc(this->controls)->clone());
}

$String* CompoundControl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringJoiner, controls, $new($StringJoiner, ", "_s, "["_s, "]"_s));
	{
		$var($ControlArray, arr$, getMemberControls());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Control, control, arr$->get(i$));
			{
				controls->add($($nc($($nc(control)->getType()))->toString()));
			}
		}
	}
	return $String::format("%s containing %s controls"_s, $$new($ObjectArray, {
		$($of($Control::toString())),
		$of(controls)
	}));
}

CompoundControl::CompoundControl() {
}

$Class* CompoundControl::load$($String* name, bool initialize) {
	$loadClass(CompoundControl, name, initialize, &_CompoundControl_ClassInfo_, allocate$CompoundControl);
	return class$;
}

$Class* CompoundControl::class$ = nullptr;

		} // sampled
	} // sound
} // javax
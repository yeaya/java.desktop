#include <javax/sound/sampled/Control.h>

#include <javax/sound/sampled/Control$Type.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control$Type = ::javax::sound::sampled::Control$Type;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _Control_FieldInfo_[] = {
	{"type", "Ljavax/sound/sampled/Control$Type;", nullptr, $PRIVATE | $FINAL, $field(Control, type)},
	{}
};

$MethodInfo _Control_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/sampled/Control$Type;)V", nullptr, $PROTECTED, $method(static_cast<void(Control::*)($Control$Type*)>(&Control::init$))},
	{"getType", "()Ljavax/sound/sampled/Control$Type;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Control_InnerClassesInfo_[] = {
	{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Control_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.sound.sampled.Control",
	"java.lang.Object",
	nullptr,
	_Control_FieldInfo_,
	_Control_MethodInfo_,
	nullptr,
	nullptr,
	_Control_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.sampled.Control$Type"
};

$Object* allocate$Control($Class* clazz) {
	return $of($alloc(Control));
}

void Control::init$($Control$Type* type) {
	$set(this, type, type);
}

$Control$Type* Control::getType() {
	return this->type;
}

$String* Control::toString() {
	$useLocalCurrentObjectStackCache();
	return $String::format("%s control"_s, $$new($ObjectArray, {$($of(getType()))}));
}

Control::Control() {
}

$Class* Control::load$($String* name, bool initialize) {
	$loadClass(Control, name, initialize, &_Control_ClassInfo_, allocate$Control);
	return class$;
}

$Class* Control::class$ = nullptr;

		} // sampled
	} // sound
} // javax
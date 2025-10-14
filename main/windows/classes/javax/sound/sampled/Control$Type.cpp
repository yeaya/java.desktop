#include <javax/sound/sampled/Control$Type.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/sampled/Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Control = ::javax::sound::sampled::Control;

namespace javax {
	namespace sound {
		namespace sampled {

$FieldInfo _Control$Type_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Control$Type, name)},
	{}
};

$MethodInfo _Control$Type_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Control$Type::*)($String*)>(&Control$Type::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Control$Type_InnerClassesInfo_[] = {
	{"javax.sound.sampled.Control$Type", "javax.sound.sampled.Control", "Type", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Control$Type_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sound.sampled.Control$Type",
	"java.lang.Object",
	nullptr,
	_Control$Type_FieldInfo_,
	_Control$Type_MethodInfo_,
	nullptr,
	nullptr,
	_Control$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.sound.sampled.Control"
};

$Object* allocate$Control$Type($Class* clazz) {
	return $of($alloc(Control$Type));
}

void Control$Type::init$($String* name) {
	$set(this, name, name);
}

bool Control$Type::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t Control$Type::hashCode() {
	return $Object::hashCode();
}

$String* Control$Type::toString() {
	return this->name;
}

Control$Type::Control$Type() {
}

$Class* Control$Type::load$($String* name, bool initialize) {
	$loadClass(Control$Type, name, initialize, &_Control$Type_ClassInfo_, allocate$Control$Type);
	return class$;
}

$Class* Control$Type::class$ = nullptr;

		} // sampled
	} // sound
} // javax
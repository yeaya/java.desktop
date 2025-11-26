#include <com/sun/beans/finder/Signature.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {

$FieldInfo _Signature_FieldInfo_[] = {
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Signature, type)},
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Signature, name)},
	{"args", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(Signature, args)},
	{"code", "I", nullptr, $PRIVATE | $VOLATILE, $field(Signature, code)},
	{}
};

$MethodInfo _Signature_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;[Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(Signature::*)($Class*,$ClassArray*)>(&Signature::init$))},
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)V", 0, $method(static_cast<void(Signature::*)($Class*,$String*,$ClassArray*)>(&Signature::init$))},
	{"addHashCode", "(ILjava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,Object$*)>(&Signature::addHashCode))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getArgs", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", 0, $method(static_cast<$ClassArray*(Signature::*)()>(&Signature::getArgs))},
	{"getName", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(Signature::*)()>(&Signature::getName))},
	{"getType", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $method(static_cast<$Class*(Signature::*)()>(&Signature::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEqual", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&Signature::isEqual))},
	{"isEqual", "([Ljava/lang/Class;[Ljava/lang/Class;)Z", "([Ljava/lang/Class<*>;[Ljava/lang/Class<*>;)Z", $PRIVATE | $STATIC, $method(static_cast<bool(*)($ClassArray*,$ClassArray*)>(&Signature::isEqual))},
	{}
};

$ClassInfo _Signature_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.beans.finder.Signature",
	"java.lang.Object",
	nullptr,
	_Signature_FieldInfo_,
	_Signature_MethodInfo_
};

$Object* allocate$Signature($Class* clazz) {
	return $of($alloc(Signature));
}

void Signature::init$($Class* type, $ClassArray* args) {
	Signature::init$(type, nullptr, args);
}

void Signature::init$($Class* type, $String* name, $ClassArray* args) {
	$set(this, type, type);
	$set(this, name, name);
	$set(this, args, args);
}

$Class* Signature::getType() {
	return this->type;
}

$String* Signature::getName() {
	return this->name;
}

$ClassArray* Signature::getArgs() {
	return this->args;
}

bool Signature::equals(Object$* object) {
	if ($equals(this, object)) {
		return true;
	}
	if ($instanceOf(Signature, object)) {
		$var(Signature, signature, $cast(Signature, object));
		bool var$1 = isEqual($of($nc(signature)->type), $of(this->type));
		bool var$0 = var$1 && isEqual($of($nc(signature)->name), $of(this->name));
		return var$0 && isEqual($nc(signature)->args, this->args);
	}
	return false;
}

bool Signature::isEqual(Object$* obj1, Object$* obj2) {
	return (obj1 == nullptr) ? obj2 == nullptr : $nc($of(obj1))->equals(obj2);
}

bool Signature::isEqual($ClassArray* args1, $ClassArray* args2) {
	if ((args1 == nullptr) || (args2 == nullptr)) {
		return args1 == args2;
	}
	if ($nc(args1)->length != $nc(args2)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(args1)->length; ++i) {
		if (!isEqual($of(args1->get(i)), $of($nc(args2)->get(i)))) {
			return false;
		}
	}
	return true;
}

int32_t Signature::hashCode() {
	if (this->code == 0) {
		int32_t code = 17;
		code = addHashCode(code, this->type);
		code = addHashCode(code, this->name);
		if (this->args != nullptr) {
			{
				$var($ClassArray, arr$, this->args);
				int32_t len$ = $nc(arr$)->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$Class* arg = arr$->get(i$);
					{
						code = addHashCode(code, arg);
					}
				}
			}
		}
		this->code = code;
	}
	return this->code;
}

int32_t Signature::addHashCode(int32_t code, Object$* object) {
	code *= 37;
	return (object != nullptr) ? code + $nc($of(object))->hashCode() : code;
}

Signature::Signature() {
}

$Class* Signature::load$($String* name, bool initialize) {
	$loadClass(Signature, name, initialize, &_Signature_ClassInfo_, allocate$Signature);
	return class$;
}

$Class* Signature::class$ = nullptr;

			} // finder
		} // beans
	} // sun
} // com
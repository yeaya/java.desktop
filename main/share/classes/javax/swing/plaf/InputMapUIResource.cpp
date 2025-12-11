#include <javax/swing/plaf/InputMapUIResource.h>

#include <javax/swing/InputMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _InputMapUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InputMapUIResource::*)()>(&InputMapUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InputMapUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.InputMapUIResource",
	"javax.swing.InputMap",
	"javax.swing.plaf.UIResource",
	nullptr,
	_InputMapUIResource_MethodInfo_
};

$Object* allocate$InputMapUIResource($Class* clazz) {
	return $of($alloc(InputMapUIResource));
}

int32_t InputMapUIResource::hashCode() {
	 return this->$InputMap::hashCode();
}

bool InputMapUIResource::equals(Object$* arg0) {
	 return this->$InputMap::equals(arg0);
}

$Object* InputMapUIResource::clone() {
	 return this->$InputMap::clone();
}

$String* InputMapUIResource::toString() {
	 return this->$InputMap::toString();
}

void InputMapUIResource::finalize() {
	this->$InputMap::finalize();
}

void InputMapUIResource::init$() {
	$InputMap::init$();
}

InputMapUIResource::InputMapUIResource() {
}

$Class* InputMapUIResource::load$($String* name, bool initialize) {
	$loadClass(InputMapUIResource, name, initialize, &_InputMapUIResource_ClassInfo_, allocate$InputMapUIResource);
	return class$;
}

$Class* InputMapUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax
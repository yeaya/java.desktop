#include <javax/swing/plaf/ActionMapUIResource.h>

#include <javax/swing/ActionMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ActionMap = ::javax::swing::ActionMap;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ActionMapUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ActionMapUIResource::*)()>(&ActionMapUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ActionMapUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.ActionMapUIResource",
	"javax.swing.ActionMap",
	"javax.swing.plaf.UIResource",
	nullptr,
	_ActionMapUIResource_MethodInfo_
};

$Object* allocate$ActionMapUIResource($Class* clazz) {
	return $of($alloc(ActionMapUIResource));
}

int32_t ActionMapUIResource::hashCode() {
	 return this->$ActionMap::hashCode();
}

bool ActionMapUIResource::equals(Object$* arg0) {
	 return this->$ActionMap::equals(arg0);
}

$Object* ActionMapUIResource::clone() {
	 return this->$ActionMap::clone();
}

$String* ActionMapUIResource::toString() {
	 return this->$ActionMap::toString();
}

void ActionMapUIResource::finalize() {
	this->$ActionMap::finalize();
}

void ActionMapUIResource::init$() {
	$ActionMap::init$();
}

ActionMapUIResource::ActionMapUIResource() {
}

$Class* ActionMapUIResource::load$($String* name, bool initialize) {
	$loadClass(ActionMapUIResource, name, initialize, &_ActionMapUIResource_ClassInfo_, allocate$ActionMapUIResource);
	return class$;
}

$Class* ActionMapUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax
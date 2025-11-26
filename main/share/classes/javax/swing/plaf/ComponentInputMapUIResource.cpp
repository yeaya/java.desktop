#include <javax/swing/plaf/ComponentInputMapUIResource.h>

#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $JComponent = ::javax::swing::JComponent;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _ComponentInputMapUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(ComponentInputMapUIResource::*)($JComponent*)>(&ComponentInputMapUIResource::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ComponentInputMapUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.ComponentInputMapUIResource",
	"javax.swing.ComponentInputMap",
	"javax.swing.plaf.UIResource",
	nullptr,
	_ComponentInputMapUIResource_MethodInfo_
};

$Object* allocate$ComponentInputMapUIResource($Class* clazz) {
	return $of($alloc(ComponentInputMapUIResource));
}

int32_t ComponentInputMapUIResource::hashCode() {
	 return this->$ComponentInputMap::hashCode();
}

bool ComponentInputMapUIResource::equals(Object$* arg0) {
	 return this->$ComponentInputMap::equals(arg0);
}

$Object* ComponentInputMapUIResource::clone() {
	 return this->$ComponentInputMap::clone();
}

$String* ComponentInputMapUIResource::toString() {
	 return this->$ComponentInputMap::toString();
}

void ComponentInputMapUIResource::finalize() {
	this->$ComponentInputMap::finalize();
}

void ComponentInputMapUIResource::init$($JComponent* component) {
	$ComponentInputMap::init$(component);
}

ComponentInputMapUIResource::ComponentInputMapUIResource() {
}

$Class* ComponentInputMapUIResource::load$($String* name, bool initialize) {
	$loadClass(ComponentInputMapUIResource, name, initialize, &_ComponentInputMapUIResource_ClassInfo_, allocate$ComponentInputMapUIResource);
	return class$;
}

$Class* ComponentInputMapUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax
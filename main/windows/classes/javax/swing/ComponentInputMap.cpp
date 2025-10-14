#include <javax/swing/ComponentInputMap.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {

$FieldInfo _ComponentInputMap_FieldInfo_[] = {
	{"component", "Ljavax/swing/JComponent;", nullptr, $PRIVATE, $field(ComponentInputMap, component)},
	{}
};

$MethodInfo _ComponentInputMap_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(ComponentInputMap::*)($JComponent*)>(&ComponentInputMap::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"getComponent", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC},
	{"put", "(Ljavax/swing/KeyStroke;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"remove", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/InputMap;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ComponentInputMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.ComponentInputMap",
	"javax.swing.InputMap",
	nullptr,
	_ComponentInputMap_FieldInfo_,
	_ComponentInputMap_MethodInfo_
};

$Object* allocate$ComponentInputMap($Class* clazz) {
	return $of($alloc(ComponentInputMap));
}

void ComponentInputMap::init$($JComponent* component) {
	$InputMap::init$();
	$set(this, component, component);
	if (component == nullptr) {
		$throwNew($IllegalArgumentException, "ComponentInputMaps must be associated with a non-null JComponent"_s);
	}
}

void ComponentInputMap::setParent($InputMap* map) {
	if (getParent() == map) {
		return;
	}
	bool var$0 = map != nullptr;
	if (var$0) {
		bool var$1 = !($instanceOf(ComponentInputMap, map));
		if (!var$1) {
			var$1 = $nc(($cast(ComponentInputMap, map)))->getComponent() != getComponent();
		}
		var$0 = (var$1);
	}
	if (var$0) {
		$throwNew($IllegalArgumentException, "ComponentInputMaps must have a parent ComponentInputMap associated with the same component"_s);
	}
	$InputMap::setParent(map);
	$nc($(getComponent()))->componentInputMapChanged(this);
}

$JComponent* ComponentInputMap::getComponent() {
	return this->component;
}

void ComponentInputMap::put($KeyStroke* keyStroke, Object$* actionMapKey) {
	$InputMap::put(keyStroke, actionMapKey);
	if (getComponent() != nullptr) {
		$nc($(getComponent()))->componentInputMapChanged(this);
	}
}

void ComponentInputMap::remove($KeyStroke* key) {
	$InputMap::remove(key);
	if (getComponent() != nullptr) {
		$nc($(getComponent()))->componentInputMapChanged(this);
	}
}

void ComponentInputMap::clear() {
	int32_t oldSize = size();
	$InputMap::clear();
	if (oldSize > 0 && getComponent() != nullptr) {
		$nc($(getComponent()))->componentInputMapChanged(this);
	}
}

ComponentInputMap::ComponentInputMap() {
}

$Class* ComponentInputMap::load$($String* name, bool initialize) {
	$loadClass(ComponentInputMap, name, initialize, &_ComponentInputMap_ClassInfo_, allocate$ComponentInputMap);
	return class$;
}

$Class* ComponentInputMap::class$ = nullptr;

	} // swing
} // javax
#include <com/apple/laf/ClientPropertyApplicator.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClientPropertyApplicator$PropertyArray = $Array<::com::apple::laf::ClientPropertyApplicator$Property>;
using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _ClientPropertyApplicator_FieldInfo_[] = {
	{"properties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/apple/laf/ClientPropertyApplicator$Property<TN;>;>;", $PRIVATE | $FINAL, $field(ClientPropertyApplicator, properties)},
	{}
};

$MethodInfo _ClientPropertyApplicator_MethodInfo_[] = {
	{"<init>", "([Lcom/apple/laf/ClientPropertyApplicator$Property;)V", "([Lcom/apple/laf/ClientPropertyApplicator$Property<TN;>;)V", $PUBLIC | $TRANSIENT, $method(static_cast<void(ClientPropertyApplicator::*)($ClientPropertyApplicator$PropertyArray*)>(&ClientPropertyApplicator::init$))},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", "(TN;Ljava/lang/String;Ljava/lang/Object;)V", 0},
	{"attachAndApplyClientProperties", "(Ljavax/swing/JComponent;)V", "(TT;)V", $PUBLIC},
	{"convertJComponentToTarget", "(Ljavax/swing/JComponent;)Ljava/lang/Object;", "(TT;)TN;", $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeFrom", "(Ljavax/swing/JComponent;)V", "(TT;)V", $PUBLIC},
	{}
};

$InnerClassInfo _ClientPropertyApplicator_InnerClassesInfo_[] = {
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _ClientPropertyApplicator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.ClientPropertyApplicator",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_ClientPropertyApplicator_FieldInfo_,
	_ClientPropertyApplicator_MethodInfo_,
	"<T:Ljavax/swing/JComponent;N:Ljava/lang/Object;>Ljava/lang/Object;Ljava/beans/PropertyChangeListener;",
	nullptr,
	_ClientPropertyApplicator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.ClientPropertyApplicator$Property"
};

$Object* allocate$ClientPropertyApplicator($Class* clazz) {
	return $of($alloc(ClientPropertyApplicator));
}

void ClientPropertyApplicator::init$($ClientPropertyApplicator$PropertyArray* propertyList) {
	$useLocalCurrentObjectStackCache();
	$set(this, properties, $new($HashMap));
	{
		$var($ClientPropertyApplicator$PropertyArray, arr$, propertyList);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($ClientPropertyApplicator$Property, p, arr$->get(i$));
			{
				$nc(this->properties)->put($nc(p)->name, p);
			}
		}
	}
}

void ClientPropertyApplicator::applyProperty(Object$* target, $String* propName, Object$* value) {
	$var($ClientPropertyApplicator$Property, property, $cast($ClientPropertyApplicator$Property, $nc(this->properties)->get(propName)));
	if (property != nullptr) {
		property->applyProperty(target, value);
	}
}

void ClientPropertyApplicator::attachAndApplyClientProperties($JComponent* target) {
	$useLocalCurrentObjectStackCache();
	$nc(target)->addPropertyChangeListener(this);
	$var($Object, obj, convertJComponentToTarget(target));
	if (obj == nullptr) {
		return;
	}
	$var($Set, propNames, $nc(this->properties)->keySet());
	{
		$var($Iterator, i$, $nc(propNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, propName, $cast($String, i$->next()));
			{
				$var($Object, value, target->getClientProperty(propName));
				if (value == nullptr) {
					continue;
				}
				applyProperty(obj, propName, value);
			}
		}
	}
}

void ClientPropertyApplicator::removeFrom($JComponent* target) {
	$nc(target)->removePropertyChangeListener(this);
}

void ClientPropertyApplicator::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, convertJComponentToTarget($cast($JComponent, $($nc(evt)->getSource()))));
	if (obj == nullptr) {
		return;
	}
	$var($Object, var$0, obj);
	$var($String, var$1, $nc(evt)->getPropertyName());
	applyProperty(var$0, var$1, $(evt->getNewValue()));
}

$Object* ClientPropertyApplicator::convertJComponentToTarget($JComponent* component) {
	return $of($of(component));
}

ClientPropertyApplicator::ClientPropertyApplicator() {
}

$Class* ClientPropertyApplicator::load$($String* name, bool initialize) {
	$loadClass(ClientPropertyApplicator, name, initialize, &_ClientPropertyApplicator_ClassInfo_, allocate$ClientPropertyApplicator);
	return class$;
}

$Class* ClientPropertyApplicator::class$ = nullptr;

		} // laf
	} // apple
} // com
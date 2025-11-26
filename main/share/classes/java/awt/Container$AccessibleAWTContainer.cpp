#include <java/awt/Container$AccessibleAWTContainer.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer$AccessibleContainerHandler.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/event/ContainerListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/accessibility/Accessible.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer$AccessibleContainerHandler = ::java::awt::Container$AccessibleAWTContainer$AccessibleContainerHandler;
using $Point = ::java::awt::Point;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;

namespace java {
	namespace awt {

$FieldInfo _Container$AccessibleAWTContainer_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(Container$AccessibleAWTContainer, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Container$AccessibleAWTContainer, serialVersionUID)},
	{"propertyListenersCount", "I", nullptr, $PRIVATE | $VOLATILE | $TRANSIENT, $field(Container$AccessibleAWTContainer, propertyListenersCount)},
	{"accessibleContainerHandler", "Ljava/awt/event/ContainerListener;", nullptr, $PROTECTED, $field(Container$AccessibleAWTContainer, accessibleContainerHandler)},
	{}
};

$MethodInfo _Container$AccessibleAWTContainer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Container;)V", nullptr, $PROTECTED, $method(static_cast<void(Container$AccessibleAWTContainer::*)($Container*)>(&Container$AccessibleAWTContainer::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Container$AccessibleAWTContainer_InnerClassesInfo_[] = {
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{"java.awt.Component$AccessibleAWTComponent", "java.awt.Component", "AccessibleAWTComponent", $PROTECTED | $ABSTRACT},
	{"java.awt.Container$AccessibleAWTContainer$AccessibleContainerHandler", "java.awt.Container$AccessibleAWTContainer", "AccessibleContainerHandler", $PROTECTED},
	{}
};

$ClassInfo _Container$AccessibleAWTContainer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Container$AccessibleAWTContainer",
	"java.awt.Component$AccessibleAWTComponent",
	nullptr,
	_Container$AccessibleAWTContainer_FieldInfo_,
	_Container$AccessibleAWTContainer_MethodInfo_,
	nullptr,
	nullptr,
	_Container$AccessibleAWTContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$AccessibleAWTContainer($Class* clazz) {
	return $of($alloc(Container$AccessibleAWTContainer));
}

void Container$AccessibleAWTContainer::init$($Container* this$0) {
	$set(this, this$0, this$0);
	$Component$AccessibleAWTComponent::init$(this$0);
	this->propertyListenersCount = 0;
	$set(this, accessibleContainerHandler, nullptr);
}

int32_t Container$AccessibleAWTContainer::getAccessibleChildrenCount() {
	return this->this$0->getAccessibleChildrenCount();
}

$Accessible* Container$AccessibleAWTContainer::getAccessibleChild(int32_t i) {
	return this->this$0->getAccessibleChild(i);
}

$Accessible* Container$AccessibleAWTContainer::getAccessibleAt($Point* p) {
	return this->this$0->getAccessibleAt(p);
}

void Container$AccessibleAWTContainer::addPropertyChangeListener($PropertyChangeListener* listener) {
	if (this->accessibleContainerHandler == nullptr) {
		$set(this, accessibleContainerHandler, $new($Container$AccessibleAWTContainer$AccessibleContainerHandler, this));
	}
	if (this->propertyListenersCount++ == 0) {
		this->this$0->addContainerListener(this->accessibleContainerHandler);
	}
	$Component$AccessibleAWTComponent::addPropertyChangeListener(listener);
}

void Container$AccessibleAWTContainer::removePropertyChangeListener($PropertyChangeListener* listener) {
	if (--this->propertyListenersCount == 0) {
		this->this$0->removeContainerListener(this->accessibleContainerHandler);
	}
	$Component$AccessibleAWTComponent::removePropertyChangeListener(listener);
}

Container$AccessibleAWTContainer::Container$AccessibleAWTContainer() {
}

$Class* Container$AccessibleAWTContainer::load$($String* name, bool initialize) {
	$loadClass(Container$AccessibleAWTContainer, name, initialize, &_Container$AccessibleAWTContainer_ClassInfo_, allocate$Container$AccessibleAWTContainer);
	return class$;
}

$Class* Container$AccessibleAWTContainer::class$ = nullptr;

	} // awt
} // java
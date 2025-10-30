#include <java/awt/Container$AccessibleAWTContainer$AccessibleContainerHandler.h>

#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <jcpp.h>

#undef ACCESSIBLE_CHILD_PROPERTY

using $Component = ::java::awt::Component;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace java {
	namespace awt {

$FieldInfo _Container$AccessibleAWTContainer$AccessibleContainerHandler_FieldInfo_[] = {
	{"this$1", "Ljava/awt/Container$AccessibleAWTContainer;", nullptr, $FINAL | $SYNTHETIC, $field(Container$AccessibleAWTContainer$AccessibleContainerHandler, this$1)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Container$AccessibleAWTContainer$AccessibleContainerHandler, serialVersionUID)},
	{}
};

$MethodInfo _Container$AccessibleAWTContainer$AccessibleContainerHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Container$AccessibleAWTContainer;)V", nullptr, $PROTECTED, $method(static_cast<void(Container$AccessibleAWTContainer$AccessibleContainerHandler::*)($Container$AccessibleAWTContainer*)>(&Container$AccessibleAWTContainer$AccessibleContainerHandler::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Container$AccessibleAWTContainer$AccessibleContainerHandler_InnerClassesInfo_[] = {
	{"java.awt.Container$AccessibleAWTContainer", "java.awt.Container", "AccessibleAWTContainer", $PROTECTED},
	{"java.awt.Container$AccessibleAWTContainer$AccessibleContainerHandler", "java.awt.Container$AccessibleAWTContainer", "AccessibleContainerHandler", $PROTECTED},
	{}
};

$ClassInfo _Container$AccessibleAWTContainer$AccessibleContainerHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Container$AccessibleAWTContainer$AccessibleContainerHandler",
	"java.lang.Object",
	"java.awt.event.ContainerListener,java.io.Serializable",
	_Container$AccessibleAWTContainer$AccessibleContainerHandler_FieldInfo_,
	_Container$AccessibleAWTContainer$AccessibleContainerHandler_MethodInfo_,
	nullptr,
	nullptr,
	_Container$AccessibleAWTContainer$AccessibleContainerHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$AccessibleAWTContainer$AccessibleContainerHandler($Class* clazz) {
	return $of($alloc(Container$AccessibleAWTContainer$AccessibleContainerHandler));
}

int32_t Container$AccessibleAWTContainer$AccessibleContainerHandler::hashCode() {
	 return this->$ContainerListener::hashCode();
}

bool Container$AccessibleAWTContainer$AccessibleContainerHandler::equals(Object$* arg0) {
	 return this->$ContainerListener::equals(arg0);
}

$Object* Container$AccessibleAWTContainer$AccessibleContainerHandler::clone() {
	 return this->$ContainerListener::clone();
}

$String* Container$AccessibleAWTContainer$AccessibleContainerHandler::toString() {
	 return this->$ContainerListener::toString();
}

void Container$AccessibleAWTContainer$AccessibleContainerHandler::finalize() {
	this->$ContainerListener::finalize();
}

void Container$AccessibleAWTContainer$AccessibleContainerHandler::init$($Container$AccessibleAWTContainer* this$1) {
	$set(this, this$1, this$1);
}

void Container$AccessibleAWTContainer$AccessibleContainerHandler::componentAdded($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(e)->getChild());
	if (c != nullptr && $instanceOf($Accessible, c)) {
		$init($AccessibleContext);
		this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_CHILD_PROPERTY, nullptr, $($nc(($cast($Accessible, c)))->getAccessibleContext()));
	}
}

void Container$AccessibleAWTContainer$AccessibleContainerHandler::componentRemoved($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(e)->getChild());
	if (c != nullptr && $instanceOf($Accessible, c)) {
		$init($AccessibleContext);
		this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_CHILD_PROPERTY, $($nc(($cast($Accessible, c)))->getAccessibleContext()), nullptr);
	}
}

Container$AccessibleAWTContainer$AccessibleContainerHandler::Container$AccessibleAWTContainer$AccessibleContainerHandler() {
}

$Class* Container$AccessibleAWTContainer$AccessibleContainerHandler::load$($String* name, bool initialize) {
	$loadClass(Container$AccessibleAWTContainer$AccessibleContainerHandler, name, initialize, &_Container$AccessibleAWTContainer$AccessibleContainerHandler_ClassInfo_, allocate$Container$AccessibleAWTContainer$AccessibleContainerHandler);
	return class$;
}

$Class* Container$AccessibleAWTContainer$AccessibleContainerHandler::class$ = nullptr;

	} // awt
} // java
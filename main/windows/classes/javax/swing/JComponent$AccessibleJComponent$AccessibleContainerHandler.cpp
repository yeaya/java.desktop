#include <javax/swing/JComponent$AccessibleJComponent$AccessibleContainerHandler.h>

#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <jcpp.h>

#undef ACCESSIBLE_CHILD_PROPERTY

using $Component = ::java::awt::Component;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;

namespace javax {
	namespace swing {

$FieldInfo _JComponent$AccessibleJComponent$AccessibleContainerHandler_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JComponent$AccessibleJComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$AccessibleJComponent$AccessibleContainerHandler, this$1)},
	{}
};

$MethodInfo _JComponent$AccessibleJComponent$AccessibleContainerHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent$AccessibleJComponent;)V", nullptr, $PROTECTED, $method(static_cast<void(JComponent$AccessibleJComponent$AccessibleContainerHandler::*)($JComponent$AccessibleJComponent*)>(&JComponent$AccessibleJComponent$AccessibleContainerHandler::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComponent$AccessibleJComponent$AccessibleContainerHandler_InnerClassesInfo_[] = {
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler", "javax.swing.JComponent$AccessibleJComponent", "AccessibleContainerHandler", $PROTECTED},
	{}
};

$ClassInfo _JComponent$AccessibleJComponent$AccessibleContainerHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JComponent$AccessibleJComponent$AccessibleContainerHandler",
	"java.lang.Object",
	"java.awt.event.ContainerListener",
	_JComponent$AccessibleJComponent$AccessibleContainerHandler_FieldInfo_,
	_JComponent$AccessibleJComponent$AccessibleContainerHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JComponent$AccessibleJComponent$AccessibleContainerHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComponent"
};

$Object* allocate$JComponent$AccessibleJComponent$AccessibleContainerHandler($Class* clazz) {
	return $of($alloc(JComponent$AccessibleJComponent$AccessibleContainerHandler));
}

void JComponent$AccessibleJComponent$AccessibleContainerHandler::init$($JComponent$AccessibleJComponent* this$1) {
	$set(this, this$1, this$1);
}

void JComponent$AccessibleJComponent$AccessibleContainerHandler::componentAdded($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(e)->getChild());
	if (c != nullptr && $instanceOf($Accessible, c)) {
		$init($AccessibleContext);
		this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_CHILD_PROPERTY, nullptr, $(c->getAccessibleContext()));
	}
}

void JComponent$AccessibleJComponent$AccessibleContainerHandler::componentRemoved($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(e)->getChild());
	if (c != nullptr && $instanceOf($Accessible, c)) {
		$init($AccessibleContext);
		this->this$1->firePropertyChange($AccessibleContext::ACCESSIBLE_CHILD_PROPERTY, $(c->getAccessibleContext()), nullptr);
	}
}

JComponent$AccessibleJComponent$AccessibleContainerHandler::JComponent$AccessibleJComponent$AccessibleContainerHandler() {
}

$Class* JComponent$AccessibleJComponent$AccessibleContainerHandler::load$($String* name, bool initialize) {
	$loadClass(JComponent$AccessibleJComponent$AccessibleContainerHandler, name, initialize, &_JComponent$AccessibleJComponent$AccessibleContainerHandler_ClassInfo_, allocate$JComponent$AccessibleJComponent$AccessibleContainerHandler);
	return class$;
}

$Class* JComponent$AccessibleJComponent$AccessibleContainerHandler::class$ = nullptr;

	} // swing
} // javax
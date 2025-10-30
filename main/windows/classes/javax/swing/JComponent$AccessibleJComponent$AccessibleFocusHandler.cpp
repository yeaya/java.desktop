#include <javax/swing/JComponent$AccessibleJComponent$AccessibleFocusHandler.h>

#include <java/awt/event/FocusEvent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACCESSIBLE_STATE_PROPERTY
#undef FOCUSED

using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;

namespace javax {
	namespace swing {

$CompoundAttribute _JComponent$AccessibleJComponent$AccessibleFocusHandler_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _JComponent$AccessibleJComponent$AccessibleFocusHandler_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JComponent$AccessibleJComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$AccessibleJComponent$AccessibleFocusHandler, this$1)},
	{}
};

$MethodInfo _JComponent$AccessibleJComponent$AccessibleFocusHandler_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent$AccessibleJComponent;)V", nullptr, $PROTECTED, $method(static_cast<void(JComponent$AccessibleJComponent$AccessibleFocusHandler::*)($JComponent$AccessibleJComponent*)>(&JComponent$AccessibleJComponent$AccessibleFocusHandler::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComponent$AccessibleJComponent$AccessibleFocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.JComponent$AccessibleJComponent", "javax.swing.JComponent", "AccessibleJComponent", $PUBLIC | $ABSTRACT},
	{"javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler", "javax.swing.JComponent$AccessibleJComponent", "AccessibleFocusHandler", $PROTECTED},
	{}
};

$ClassInfo _JComponent$AccessibleJComponent$AccessibleFocusHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JComponent$AccessibleJComponent$AccessibleFocusHandler",
	"java.lang.Object",
	"java.awt.event.FocusListener",
	_JComponent$AccessibleJComponent$AccessibleFocusHandler_FieldInfo_,
	_JComponent$AccessibleJComponent$AccessibleFocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JComponent$AccessibleJComponent$AccessibleFocusHandler_InnerClassesInfo_,
	_JComponent$AccessibleJComponent$AccessibleFocusHandler_Annotations_,
	nullptr,
	nullptr,
	"javax.swing.JComponent"
};

$Object* allocate$JComponent$AccessibleJComponent$AccessibleFocusHandler($Class* clazz) {
	return $of($alloc(JComponent$AccessibleJComponent$AccessibleFocusHandler));
}

void JComponent$AccessibleJComponent$AccessibleFocusHandler::init$($JComponent$AccessibleJComponent* this$1) {
	$set(this, this$1, this$1);
}

void JComponent$AccessibleJComponent$AccessibleFocusHandler::focusGained($FocusEvent* event) {
	if ($JComponent::access$000(this->this$1->this$0) != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc($($JComponent::access$100(this->this$1->this$0)))->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, nullptr, $AccessibleState::FOCUSED);
	}
}

void JComponent$AccessibleJComponent$AccessibleFocusHandler::focusLost($FocusEvent* event) {
	if ($JComponent::access$200(this->this$1->this$0) != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc($($JComponent::access$300(this->this$1->this$0)))->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, $AccessibleState::FOCUSED, nullptr);
	}
}

JComponent$AccessibleJComponent$AccessibleFocusHandler::JComponent$AccessibleJComponent$AccessibleFocusHandler() {
}

$Class* JComponent$AccessibleJComponent$AccessibleFocusHandler::load$($String* name, bool initialize) {
	$loadClass(JComponent$AccessibleJComponent$AccessibleFocusHandler, name, initialize, &_JComponent$AccessibleJComponent$AccessibleFocusHandler_ClassInfo_, allocate$JComponent$AccessibleJComponent$AccessibleFocusHandler);
	return class$;
}

$Class* JComponent$AccessibleJComponent$AccessibleFocusHandler::class$ = nullptr;

	} // swing
} // javax
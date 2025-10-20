#include <javax/swing/plaf/synth/SynthScrollPaneUI$ViewportViewFocusHandler.h>

#include <java/awt/Component.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/plaf/synth/SynthScrollPaneUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SynthScrollPaneUI = ::javax::swing::plaf::synth::SynthScrollPaneUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthScrollPaneUI$ViewportViewFocusHandler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthScrollPaneUI$ViewportViewFocusHandler, this$0)},
	{}
};

$MethodInfo _SynthScrollPaneUI$ViewportViewFocusHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthScrollPaneUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthScrollPaneUI$ViewportViewFocusHandler::*)($SynthScrollPaneUI*)>(&SynthScrollPaneUI$ViewportViewFocusHandler::init$))},
	{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"componentRemoved", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthScrollPaneUI$ViewportViewFocusHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportViewFocusHandler", "javax.swing.plaf.synth.SynthScrollPaneUI", "ViewportViewFocusHandler", $PRIVATE},
	{}
};

$ClassInfo _SynthScrollPaneUI$ViewportViewFocusHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportViewFocusHandler",
	"java.lang.Object",
	"java.awt.event.ContainerListener,java.awt.event.FocusListener",
	_SynthScrollPaneUI$ViewportViewFocusHandler_FieldInfo_,
	_SynthScrollPaneUI$ViewportViewFocusHandler_MethodInfo_,
	nullptr,
	nullptr,
	_SynthScrollPaneUI$ViewportViewFocusHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthScrollPaneUI"
};

$Object* allocate$SynthScrollPaneUI$ViewportViewFocusHandler($Class* clazz) {
	return $of($alloc(SynthScrollPaneUI$ViewportViewFocusHandler));
}

int32_t SynthScrollPaneUI$ViewportViewFocusHandler::hashCode() {
	 return this->$ContainerListener::hashCode();
}

bool SynthScrollPaneUI$ViewportViewFocusHandler::equals(Object$* arg0) {
	 return this->$ContainerListener::equals(arg0);
}

$Object* SynthScrollPaneUI$ViewportViewFocusHandler::clone() {
	 return this->$ContainerListener::clone();
}

$String* SynthScrollPaneUI$ViewportViewFocusHandler::toString() {
	 return this->$ContainerListener::toString();
}

void SynthScrollPaneUI$ViewportViewFocusHandler::finalize() {
	this->$ContainerListener::finalize();
}

void SynthScrollPaneUI$ViewportViewFocusHandler::init$($SynthScrollPaneUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthScrollPaneUI$ViewportViewFocusHandler::componentAdded($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JTextComponent, $($nc(e)->getChild()))) {
		$nc($(e->getChild()))->addFocusListener(this);
		this->this$0->viewportViewHasFocus = $nc($(e->getChild()))->isFocusOwner();
		$nc($($SynthScrollPaneUI::access$000(this->this$0)))->repaint();
	}
}

void SynthScrollPaneUI$ViewportViewFocusHandler::componentRemoved($ContainerEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JTextComponent, $($nc(e)->getChild()))) {
		$nc($(e->getChild()))->removeFocusListener(this);
	}
}

void SynthScrollPaneUI$ViewportViewFocusHandler::focusGained($FocusEvent* e) {
	this->this$0->viewportViewHasFocus = true;
	$nc($($SynthScrollPaneUI::access$100(this->this$0)))->repaint();
}

void SynthScrollPaneUI$ViewportViewFocusHandler::focusLost($FocusEvent* e) {
	this->this$0->viewportViewHasFocus = false;
	$nc($($SynthScrollPaneUI::access$200(this->this$0)))->repaint();
}

SynthScrollPaneUI$ViewportViewFocusHandler::SynthScrollPaneUI$ViewportViewFocusHandler() {
}

$Class* SynthScrollPaneUI$ViewportViewFocusHandler::load$($String* name, bool initialize) {
	$loadClass(SynthScrollPaneUI$ViewportViewFocusHandler, name, initialize, &_SynthScrollPaneUI$ViewportViewFocusHandler_ClassInfo_, allocate$SynthScrollPaneUI$ViewportViewFocusHandler);
	return class$;
}

$Class* SynthScrollPaneUI$ViewportViewFocusHandler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
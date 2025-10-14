#include <javax/swing/AbstractButton$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

#undef SELECTED_KEY

using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ButtonModel = ::javax::swing::ButtonModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$FieldInfo _AbstractButton$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/AbstractButton;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractButton$Handler, this$0)},
	{}
};

$MethodInfo _AbstractButton$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/AbstractButton;)V", nullptr, 0, $method(static_cast<void(AbstractButton$Handler::*)($AbstractButton*)>(&AbstractButton$Handler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractButton$Handler_InnerClassesInfo_[] = {
	{"javax.swing.AbstractButton$Handler", "javax.swing.AbstractButton", "Handler", 0},
	{}
};

$ClassInfo _AbstractButton$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.AbstractButton$Handler",
	"java.lang.Object",
	"java.awt.event.ActionListener,javax.swing.event.ChangeListener,java.awt.event.ItemListener,java.io.Serializable",
	_AbstractButton$Handler_FieldInfo_,
	_AbstractButton$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractButton$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.AbstractButton"
};

$Object* allocate$AbstractButton$Handler($Class* clazz) {
	return $of($alloc(AbstractButton$Handler));
}

int32_t AbstractButton$Handler::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool AbstractButton$Handler::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* AbstractButton$Handler::clone() {
	 return this->$ActionListener::clone();
}

$String* AbstractButton$Handler::toString() {
	 return this->$ActionListener::toString();
}

void AbstractButton$Handler::finalize() {
	this->$ActionListener::finalize();
}

void AbstractButton$Handler::init$($AbstractButton* this$0) {
	$set(this, this$0, this$0);
}

void AbstractButton$Handler::stateChanged($ChangeEvent* e) {
	$var($Object, source, $nc(e)->getSource());
	this->this$0->updateMnemonicProperties();
	bool var$0 = this->this$0->isEnabled();
	if (var$0 != $nc(this->this$0->model)->isEnabled()) {
		this->this$0->setEnabled($nc(this->this$0->model)->isEnabled());
	}
	this->this$0->fireStateChanged();
	this->this$0->repaint();
}

void AbstractButton$Handler::actionPerformed($ActionEvent* event) {
	this->this$0->fireActionPerformed(event);
}

void AbstractButton$Handler::itemStateChanged($ItemEvent* event) {
	this->this$0->fireItemStateChanged(event);
	if (this->this$0->shouldUpdateSelectedStateFromAction()) {
		$var($Action, action, this->this$0->getAction());
		if (action != nullptr && $AbstractAction::hasSelectedKey(action)) {
			bool selected = this->this$0->isSelected();
			bool isActionSelected = $AbstractAction::isSelected(action);
			if (isActionSelected != selected) {
				$init($Action);
				action->putValue($Action::SELECTED_KEY, $($Boolean::valueOf(selected)));
			}
		}
	}
}

AbstractButton$Handler::AbstractButton$Handler() {
}

$Class* AbstractButton$Handler::load$($String* name, bool initialize) {
	$loadClass(AbstractButton$Handler, name, initialize, &_AbstractButton$Handler_ClassInfo_, allocate$AbstractButton$Handler);
	return class$;
}

$Class* AbstractButton$Handler::class$ = nullptr;

	} // swing
} // javax
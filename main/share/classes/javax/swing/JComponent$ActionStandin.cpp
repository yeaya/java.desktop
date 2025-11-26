#include <javax/swing/JComponent$ActionStandin.h>

#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Action.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef ACTION_COMMAND_KEY
#undef NAME

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$FieldInfo _JComponent$ActionStandin_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JComponent$ActionStandin, this$0)},
	{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ActionStandin, actionListener)},
	{"command", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ActionStandin, command)},
	{"action", "Ljavax/swing/Action;", nullptr, $PRIVATE | $FINAL, $field(JComponent$ActionStandin, action)},
	{}
};

$MethodInfo _JComponent$ActionStandin_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComponent;Ljava/awt/event/ActionListener;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(JComponent$ActionStandin::*)($JComponent*,$ActionListener*,$String*)>(&JComponent$ActionStandin::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JComponent$ActionStandin_InnerClassesInfo_[] = {
	{"javax.swing.JComponent$ActionStandin", "javax.swing.JComponent", "ActionStandin", $FINAL},
	{}
};

$ClassInfo _JComponent$ActionStandin_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.JComponent$ActionStandin",
	"java.lang.Object",
	"javax.swing.Action",
	_JComponent$ActionStandin_FieldInfo_,
	_JComponent$ActionStandin_MethodInfo_,
	nullptr,
	nullptr,
	_JComponent$ActionStandin_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComponent"
};

$Object* allocate$JComponent$ActionStandin($Class* clazz) {
	return $of($alloc(JComponent$ActionStandin));
}

void JComponent$ActionStandin::init$($JComponent* this$0, $ActionListener* actionListener, $String* command) {
	$set(this, this$0, this$0);
	$set(this, actionListener, actionListener);
	if ($instanceOf($Action, actionListener)) {
		$set(this, action, $cast($Action, actionListener));
	} else {
		$set(this, action, nullptr);
	}
	$set(this, command, command);
}

$Object* JComponent$ActionStandin::getValue($String* key) {
	if (key != nullptr) {
		$init($Action);
		if (key->equals($Action::ACTION_COMMAND_KEY)) {
			return $of(this->command);
		}
		if (this->action != nullptr) {
			return $of($nc(this->action)->getValue(key));
		}
		if (key->equals($Action::NAME)) {
			return $of("ActionStandin"_s);
		}
	}
	return $of(nullptr);
}

bool JComponent$ActionStandin::isEnabled() {
	if (this->actionListener == nullptr) {
		return false;
	}
	if (this->action == nullptr) {
		return true;
	}
	return $nc(this->action)->isEnabled();
}

void JComponent$ActionStandin::actionPerformed($ActionEvent* ae) {
	if (this->actionListener != nullptr) {
		$nc(this->actionListener)->actionPerformed(ae);
	}
}

void JComponent$ActionStandin::putValue($String* key, Object$* value) {
}

void JComponent$ActionStandin::setEnabled(bool b) {
}

void JComponent$ActionStandin::addPropertyChangeListener($PropertyChangeListener* listener) {
}

void JComponent$ActionStandin::removePropertyChangeListener($PropertyChangeListener* listener) {
}

JComponent$ActionStandin::JComponent$ActionStandin() {
}

$Class* JComponent$ActionStandin::load$($String* name, bool initialize) {
	$loadClass(JComponent$ActionStandin, name, initialize, &_JComponent$ActionStandin_ClassInfo_, allocate$JComponent$ActionStandin);
	return class$;
}

$Class* JComponent$ActionStandin::class$ = nullptr;

	} // swing
} // javax
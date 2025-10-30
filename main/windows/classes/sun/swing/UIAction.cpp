#include <sun/swing/UIAction.h>

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Action.h>
#include <jcpp.h>

#undef NAME

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;

namespace sun {
	namespace swing {

$FieldInfo _UIAction_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UIAction, name)},
	{}
};

$MethodInfo _UIAction_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UIAction::*)($String*)>(&UIAction::init$))},
	{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(UIAction::*)()>(&UIAction::getName))},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $FINAL},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UIAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.swing.UIAction",
	"java.lang.Object",
	"javax.swing.Action",
	_UIAction_FieldInfo_,
	_UIAction_MethodInfo_
};

$Object* allocate$UIAction($Class* clazz) {
	return $of($alloc(UIAction));
}

void UIAction::init$($String* name) {
	$set(this, name, name);
}

$String* UIAction::getName() {
	return this->name;
}

$Object* UIAction::getValue($String* key) {
	$init($Action);
	if (key == $Action::NAME) {
		return $of(this->name);
	}
	return $of(nullptr);
}

void UIAction::putValue($String* key, Object$* value) {
}

void UIAction::setEnabled(bool b) {
}

bool UIAction::isEnabled() {
	return accept(nullptr);
}

bool UIAction::accept(Object$* sender) {
	return true;
}

void UIAction::addPropertyChangeListener($PropertyChangeListener* listener) {
}

void UIAction::removePropertyChangeListener($PropertyChangeListener* listener) {
}

UIAction::UIAction() {
}

$Class* UIAction::load$($String* name, bool initialize) {
	$loadClass(UIAction, name, initialize, &_UIAction_ClassInfo_, allocate$UIAction);
	return class$;
}

$Class* UIAction::class$ = nullptr;

	} // swing
} // sun
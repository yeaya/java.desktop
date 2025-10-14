#include <javax/swing/DefaultButtonModel.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/EventQueue.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef ARMED
#undef DESELECTED
#undef ENABLED
#undef ITEM_STATE_CHANGED
#undef PRESSED
#undef ROLLOVER
#undef SELECTED

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $EventQueue = ::java::awt::EventQueue;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {

$FieldInfo _DefaultButtonModel_FieldInfo_[] = {
	{"stateMask", "I", nullptr, $PROTECTED, $field(DefaultButtonModel, stateMask)},
	{"actionCommand", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DefaultButtonModel, actionCommand)},
	{"group", "Ljavax/swing/ButtonGroup;", nullptr, $PROTECTED, $field(DefaultButtonModel, group)},
	{"mnemonic", "I", nullptr, $PROTECTED, $field(DefaultButtonModel, mnemonic)},
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultButtonModel, changeEvent)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultButtonModel, listenerList)},
	{"menuItem", "Z", nullptr, $PRIVATE, $field(DefaultButtonModel, menuItem)},
	{"ARMED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultButtonModel, ARMED)},
	{"SELECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultButtonModel, SELECTED)},
	{"PRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultButtonModel, PRESSED)},
	{"ENABLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultButtonModel, ENABLED)},
	{"ROLLOVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DefaultButtonModel, ROLLOVER)},
	{}
};

$MethodInfo _DefaultButtonModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultButtonModel::*)()>(&DefaultButtonModel::init$))},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC},
	{"fireActionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PROTECTED},
	{"fireItemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getActionCommand", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getGroup", "()Ljavax/swing/ButtonGroup;", nullptr, $PUBLIC},
	{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMnemonic", "()I", nullptr, $PUBLIC},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isArmed", "()Z", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isMenuItem", "()Z", nullptr, 0},
	{"isPressed", "()Z", nullptr, $PUBLIC},
	{"isRollover", "()Z", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC},
	{"setActionCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setArmed", "(Z)V", nullptr, $PUBLIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setGroup", "(Ljavax/swing/ButtonGroup;)V", nullptr, $PUBLIC},
	{"setMenuItem", "(Z)V", nullptr, 0},
	{"setMnemonic", "(I)V", nullptr, $PUBLIC},
	{"setPressed", "(Z)V", nullptr, $PUBLIC},
	{"setRollover", "(Z)V", nullptr, $PUBLIC},
	{"setSelected", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultButtonModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultButtonModel",
	"java.lang.Object",
	"javax.swing.ButtonModel,java.io.Serializable",
	_DefaultButtonModel_FieldInfo_,
	_DefaultButtonModel_MethodInfo_
};

$Object* allocate$DefaultButtonModel($Class* clazz) {
	return $of($alloc(DefaultButtonModel));
}

int32_t DefaultButtonModel::hashCode() {
	 return this->$ButtonModel::hashCode();
}

bool DefaultButtonModel::equals(Object$* arg0) {
	 return this->$ButtonModel::equals(arg0);
}

$Object* DefaultButtonModel::clone() {
	 return this->$ButtonModel::clone();
}

$String* DefaultButtonModel::toString() {
	 return this->$ButtonModel::toString();
}

void DefaultButtonModel::finalize() {
	this->$ButtonModel::finalize();
}

void DefaultButtonModel::init$() {
	this->stateMask = 0;
	$set(this, actionCommand, nullptr);
	$set(this, group, nullptr);
	this->mnemonic = 0;
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
	this->menuItem = false;
	this->stateMask = 0;
	setEnabled(true);
}

void DefaultButtonModel::setActionCommand($String* actionCommand) {
	$set(this, actionCommand, actionCommand);
}

$String* DefaultButtonModel::getActionCommand() {
	return this->actionCommand;
}

bool DefaultButtonModel::isArmed() {
	return ((int32_t)(this->stateMask & (uint32_t)DefaultButtonModel::ARMED)) != 0;
}

bool DefaultButtonModel::isSelected() {
	return ((int32_t)(this->stateMask & (uint32_t)DefaultButtonModel::SELECTED)) != 0;
}

bool DefaultButtonModel::isEnabled() {
	return ((int32_t)(this->stateMask & (uint32_t)DefaultButtonModel::ENABLED)) != 0;
}

bool DefaultButtonModel::isPressed() {
	return ((int32_t)(this->stateMask & (uint32_t)DefaultButtonModel::PRESSED)) != 0;
}

bool DefaultButtonModel::isRollover() {
	return ((int32_t)(this->stateMask & (uint32_t)DefaultButtonModel::ROLLOVER)) != 0;
}

void DefaultButtonModel::setArmed(bool b) {
	bool var$0 = isMenuItem();
	if (var$0 && $UIManager::getBoolean("MenuItem.disabledAreNavigable"_s)) {
		if (isArmed() == b) {
			return;
		}
	} else {
		bool var$2 = (isArmed() == b);
		if (var$2 || !isEnabled()) {
			return;
		}
	}
	if (b) {
		this->stateMask |= DefaultButtonModel::ARMED;
	} else {
		this->stateMask &= (uint32_t)~DefaultButtonModel::ARMED;
	}
	fireStateChanged();
}

void DefaultButtonModel::setEnabled(bool b) {
	if (isEnabled() == b) {
		return;
	}
	if (b) {
		this->stateMask |= DefaultButtonModel::ENABLED;
	} else {
		this->stateMask &= (uint32_t)~DefaultButtonModel::ENABLED;
		this->stateMask &= (uint32_t)~DefaultButtonModel::ARMED;
		this->stateMask &= (uint32_t)~DefaultButtonModel::PRESSED;
	}
	fireStateChanged();
}

void DefaultButtonModel::setSelected(bool b) {
	if (this->isSelected() == b) {
		return;
	}
	if (b) {
		this->stateMask |= DefaultButtonModel::SELECTED;
	} else {
		this->stateMask &= (uint32_t)~DefaultButtonModel::SELECTED;
	}
	fireItemStateChanged($$new($ItemEvent, this, $ItemEvent::ITEM_STATE_CHANGED, this, b ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED));
	fireStateChanged();
}

void DefaultButtonModel::setPressed(bool b) {
	bool var$0 = (isPressed() == b);
	if (var$0 || !isEnabled()) {
		return;
	}
	if (b) {
		this->stateMask |= DefaultButtonModel::PRESSED;
	} else {
		this->stateMask &= (uint32_t)~DefaultButtonModel::PRESSED;
	}
	bool var$1 = !isPressed();
	if (var$1 && isArmed()) {
		int32_t modifiers = 0;
		$var($AWTEvent, currentEvent, $EventQueue::getCurrentEvent());
		if ($instanceOf($InputEvent, currentEvent)) {
			modifiers = $nc(($cast($InputEvent, currentEvent)))->getModifiers();
		} else if ($instanceOf($ActionEvent, currentEvent)) {
			modifiers = $nc(($cast($ActionEvent, currentEvent)))->getModifiers();
		}
		$var($String, var$2, getActionCommand());
		fireActionPerformed($$new($ActionEvent, this, $ActionEvent::ACTION_PERFORMED, var$2, $EventQueue::getMostRecentEventTime(), modifiers));
	}
	fireStateChanged();
}

void DefaultButtonModel::setRollover(bool b) {
	bool var$0 = (isRollover() == b);
	if (var$0 || !isEnabled()) {
		return;
	}
	if (b) {
		this->stateMask |= DefaultButtonModel::ROLLOVER;
	} else {
		this->stateMask &= (uint32_t)~DefaultButtonModel::ROLLOVER;
	}
	fireStateChanged();
}

void DefaultButtonModel::setMnemonic(int32_t key) {
	this->mnemonic = key;
	fireStateChanged();
}

int32_t DefaultButtonModel::getMnemonic() {
	return this->mnemonic;
}

void DefaultButtonModel::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void DefaultButtonModel::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* DefaultButtonModel::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void DefaultButtonModel::fireStateChanged() {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ChangeListener);
		if ($equals(listeners->get(i), $ChangeListener::class$)) {
			if (this->changeEvent == nullptr) {
				$set(this, changeEvent, $new($ChangeEvent, this));
			}
			$nc(($cast($ChangeListener, listeners->get(i + 1))))->stateChanged(this->changeEvent);
		}
	}
}

void DefaultButtonModel::addActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->add($ActionListener::class$, l);
}

void DefaultButtonModel::removeActionListener($ActionListener* l) {
	$load($ActionListener);
	$nc(this->listenerList)->remove($ActionListener::class$, l);
}

$ActionListenerArray* DefaultButtonModel::getActionListeners() {
	$load($ActionListener);
	return $fcast($ActionListenerArray, $nc(this->listenerList)->getListeners($ActionListener::class$));
}

void DefaultButtonModel::fireActionPerformed($ActionEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ActionListener);
		if ($equals(listeners->get(i), $ActionListener::class$)) {
			$nc(($cast($ActionListener, listeners->get(i + 1))))->actionPerformed(e);
		}
	}
}

void DefaultButtonModel::addItemListener($ItemListener* l) {
	$load($ItemListener);
	$nc(this->listenerList)->add($ItemListener::class$, l);
}

void DefaultButtonModel::removeItemListener($ItemListener* l) {
	$load($ItemListener);
	$nc(this->listenerList)->remove($ItemListener::class$, l);
}

$ItemListenerArray* DefaultButtonModel::getItemListeners() {
	$load($ItemListener);
	return $fcast($ItemListenerArray, $nc(this->listenerList)->getListeners($ItemListener::class$));
}

void DefaultButtonModel::fireItemStateChanged($ItemEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ItemListener);
		if ($equals(listeners->get(i), $ItemListener::class$)) {
			$nc(($cast($ItemListener, listeners->get(i + 1))))->itemStateChanged(e);
		}
	}
}

$EventListenerArray* DefaultButtonModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

$ObjectArray* DefaultButtonModel::getSelectedObjects() {
	return nullptr;
}

void DefaultButtonModel::setGroup($ButtonGroup* group) {
	$set(this, group, group);
}

$ButtonGroup* DefaultButtonModel::getGroup() {
	return this->group;
}

bool DefaultButtonModel::isMenuItem() {
	return this->menuItem;
}

void DefaultButtonModel::setMenuItem(bool menuItem) {
	this->menuItem = menuItem;
}

DefaultButtonModel::DefaultButtonModel() {
}

$Class* DefaultButtonModel::load$($String* name, bool initialize) {
	$loadClass(DefaultButtonModel, name, initialize, &_DefaultButtonModel_ClassInfo_, allocate$DefaultButtonModel);
	return class$;
}

$Class* DefaultButtonModel::class$ = nullptr;

	} // swing
} // javax
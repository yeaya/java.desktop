#include <javax/swing/AbstractAction.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ArrayTable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/event/SwingPropertyChangeSupport.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef NAME
#undef RECONFIGURE_ON_NULL
#undef SELECTED_KEY
#undef SHORT_DESCRIPTION
#undef SMALL_ICON
#undef TRUE

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Action = ::javax::swing::Action;
using $ArrayTable = ::javax::swing::ArrayTable;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $SwingPropertyChangeSupport = ::javax::swing::event::SwingPropertyChangeSupport;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace javax {
	namespace swing {

$FieldInfo _AbstractAction_FieldInfo_[] = {
	{"RECONFIGURE_ON_NULL", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(AbstractAction, RECONFIGURE_ON_NULL)},
	{"enabled", "Z", nullptr, $PROTECTED, $field(AbstractAction, enabled)},
	{"arrayTable", "Ljavax/swing/ArrayTable;", nullptr, $PRIVATE | $TRANSIENT, $field(AbstractAction, arrayTable)},
	{"changeSupport", "Ljavax/swing/event/SwingPropertyChangeSupport;", nullptr, $PROTECTED, $field(AbstractAction, changeSupport)},
	{}
};

$MethodInfo _AbstractAction_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AbstractAction::*)()>(&AbstractAction::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractAction::*)($String*)>(&AbstractAction::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(AbstractAction::*)($String*,$Icon*)>(&AbstractAction::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"clone", "()Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.lang.CloneNotSupportedException"},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getKeys", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPropertyChangeListeners", "()[Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hasSelectedKey", "(Ljavax/swing/Action;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Action*)>(&AbstractAction::hasSelectedKey))},
	{"isEnabled", "()Z", nullptr, $PUBLIC},
	{"isSelected", "(Ljavax/swing/Action;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Action*)>(&AbstractAction::isSelected))},
	{"putValue", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractAction::*)($ObjectInputStream*)>(&AbstractAction::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setEnabledFromAction", "(Ljavax/swing/JComponent;Ljavax/swing/Action;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,$Action*)>(&AbstractAction::setEnabledFromAction))},
	{"setToolTipTextFromAction", "(Ljavax/swing/JComponent;Ljavax/swing/Action;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*,$Action*)>(&AbstractAction::setToolTipTextFromAction))},
	{"shouldReconfigure", "(Ljava/beans/PropertyChangeEvent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($PropertyChangeEvent*)>(&AbstractAction::shouldReconfigure))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(AbstractAction::*)($ObjectOutputStream*)>(&AbstractAction::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _AbstractAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.AbstractAction",
	"java.lang.Object",
	"javax.swing.Action,java.lang.Cloneable,java.io.Serializable",
	_AbstractAction_FieldInfo_,
	_AbstractAction_MethodInfo_
};

$Object* allocate$AbstractAction($Class* clazz) {
	return $of($alloc(AbstractAction));
}

int32_t AbstractAction::hashCode() {
	 return this->$Action::hashCode();
}

bool AbstractAction::equals(Object$* arg0) {
	 return this->$Action::equals(arg0);
}

$String* AbstractAction::toString() {
	 return this->$Action::toString();
}

void AbstractAction::finalize() {
	this->$Action::finalize();
}

$Boolean* AbstractAction::RECONFIGURE_ON_NULL = nullptr;

bool AbstractAction::shouldReconfigure($PropertyChangeEvent* e) {
	$init(AbstractAction);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(e)->getPropertyName() == nullptr) {
		$synchronized(AbstractAction::class$) {
			if (AbstractAction::RECONFIGURE_ON_NULL == nullptr) {
				$assignStatic(AbstractAction::RECONFIGURE_ON_NULL, $Boolean::valueOf($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.actions.reconfigureOnNull"_s, "false"_s)))))));
			}
			return $nc(AbstractAction::RECONFIGURE_ON_NULL)->booleanValue();
		}
	}
	return false;
}

void AbstractAction::setEnabledFromAction($JComponent* c, $Action* a) {
	$init(AbstractAction);
	$nc(c)->setEnabled((a != nullptr) ? $nc(a)->isEnabled() : true);
}

void AbstractAction::setToolTipTextFromAction($JComponent* c, $Action* a) {
	$init(AbstractAction);
	$init($Action);
	$nc(c)->setToolTipText(a != nullptr ? $cast($String, $($nc(a)->getValue($Action::SHORT_DESCRIPTION))) : ($String*)nullptr);
}

bool AbstractAction::hasSelectedKey($Action* a) {
	$init(AbstractAction);
	$init($Action);
	return (a != nullptr && a->getValue($Action::SELECTED_KEY) != nullptr);
}

bool AbstractAction::isSelected($Action* a) {
	$init(AbstractAction);
	$init($Boolean);
	$init($Action);
	return $nc($Boolean::TRUE)->equals($($nc(a)->getValue($Action::SELECTED_KEY)));
}

void AbstractAction::init$() {
	this->enabled = true;
}

void AbstractAction::init$($String* name) {
	this->enabled = true;
	$init($Action);
	putValue($Action::NAME, name);
}

void AbstractAction::init$($String* name, $Icon* icon) {
	AbstractAction::init$(name);
	$init($Action);
	putValue($Action::SMALL_ICON, icon);
}

$Object* AbstractAction::getValue($String* key) {
	if (key == "enabled"_s) {
		return $of($Boolean::valueOf(this->enabled));
	}
	if (this->arrayTable == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(this->arrayTable)->get(key));
}

void AbstractAction::putValue($String* key, Object$* newValue$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Object, newValue, newValue$renamed);
	$var($Object, oldValue, nullptr);
	if (key == "enabled"_s) {
		if (newValue == nullptr || !($instanceOf($Boolean, newValue))) {
			$assign(newValue, $Boolean::valueOf(false));
		}
		$assign(oldValue, $Boolean::valueOf(this->enabled));
		this->enabled = $nc(($cast($Boolean, newValue)))->booleanValue();
	} else {
		if (this->arrayTable == nullptr) {
			$set(this, arrayTable, $new($ArrayTable));
		}
		if ($nc(this->arrayTable)->containsKey(key)) {
			$assign(oldValue, $nc(this->arrayTable)->get(key));
		}
		if (newValue == nullptr) {
			$nc(this->arrayTable)->remove(key);
		} else {
			$nc(this->arrayTable)->put(key, newValue);
		}
	}
	firePropertyChange(key, oldValue, newValue);
}

bool AbstractAction::isEnabled() {
	return this->enabled;
}

void AbstractAction::setEnabled(bool newValue) {
	$useLocalCurrentObjectStackCache();
	bool oldValue = this->enabled;
	if (oldValue != newValue) {
		this->enabled = newValue;
		$var($String, var$0, "enabled"_s);
		$var($Object, var$1, $of($Boolean::valueOf(oldValue)));
		firePropertyChange(var$0, var$1, $($Boolean::valueOf(newValue)));
	}
}

$ObjectArray* AbstractAction::getKeys() {
	if (this->arrayTable == nullptr) {
		return nullptr;
	}
	$var($ObjectArray, keys, $new($ObjectArray, $nc(this->arrayTable)->size()));
	$nc(this->arrayTable)->getKeys(keys);
	return keys;
}

void AbstractAction::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	if (this->changeSupport == nullptr || (oldValue != nullptr && newValue != nullptr && $of(oldValue)->equals(newValue))) {
		return;
	}
	$nc(this->changeSupport)->firePropertyChange(propertyName, oldValue, newValue);
}

void AbstractAction::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			$set(this, changeSupport, $new($SwingPropertyChangeSupport, this));
		}
		$nc(this->changeSupport)->addPropertyChangeListener(listener);
	}
}

void AbstractAction::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return;
		}
		$nc(this->changeSupport)->removePropertyChangeListener(listener);
	}
}

$PropertyChangeListenerArray* AbstractAction::getPropertyChangeListeners() {
	$synchronized(this) {
		if (this->changeSupport == nullptr) {
			return $new($PropertyChangeListenerArray, 0);
		}
		return $nc(this->changeSupport)->getPropertyChangeListeners();
	}
}

$Object* AbstractAction::clone() {
	$var(AbstractAction, newAction, $cast(AbstractAction, $Action::clone()));
	$synchronized(this) {
		if (this->arrayTable != nullptr) {
			$set($nc(newAction), arrayTable, $cast($ArrayTable, $nc(this->arrayTable)->clone()));
		}
	}
	return $of(newAction);
}

void AbstractAction::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	$ArrayTable::writeArrayTable(s, this->arrayTable);
}

void AbstractAction::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	for (int32_t counter = s->readInt() - 1; counter >= 0; --counter) {
		$var($String, var$0, $cast($String, s->readObject()));
		putValue(var$0, $(s->readObject()));
	}
}

AbstractAction::AbstractAction() {
}

$Class* AbstractAction::load$($String* name, bool initialize) {
	$loadClass(AbstractAction, name, initialize, &_AbstractAction_ClassInfo_, allocate$AbstractAction);
	return class$;
}

$Class* AbstractAction::class$ = nullptr;

	} // swing
} // javax
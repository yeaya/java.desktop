#include <javax/swing/colorchooser/DefaultColorSelectionModel.h>

#include <java/awt/Color.h>
#include <java/util/EventListener.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

using $ChangeListenerArray = $Array<::javax::swing::event::ChangeListener>;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _DefaultColorSelectionModel_FieldInfo_[] = {
	{"changeEvent", "Ljavax/swing/event/ChangeEvent;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultColorSelectionModel, changeEvent)},
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(DefaultColorSelectionModel, listenerList)},
	{"selectedColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultColorSelectionModel, selectedColor)},
	{}
};

$MethodInfo _DefaultColorSelectionModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultColorSelectionModel::*)()>(&DefaultColorSelectionModel::init$))},
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultColorSelectionModel::*)($Color*)>(&DefaultColorSelectionModel::init$))},
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"fireStateChanged", "()V", nullptr, $PROTECTED},
	{"getChangeListeners", "()[Ljavax/swing/event/ChangeListener;", nullptr, $PUBLIC},
	{"getSelectedColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC},
	{"setSelectedColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultColorSelectionModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.colorchooser.DefaultColorSelectionModel",
	"java.lang.Object",
	"javax.swing.colorchooser.ColorSelectionModel,java.io.Serializable",
	_DefaultColorSelectionModel_FieldInfo_,
	_DefaultColorSelectionModel_MethodInfo_
};

$Object* allocate$DefaultColorSelectionModel($Class* clazz) {
	return $of($alloc(DefaultColorSelectionModel));
}

int32_t DefaultColorSelectionModel::hashCode() {
	 return this->$ColorSelectionModel::hashCode();
}

bool DefaultColorSelectionModel::equals(Object$* arg0) {
	 return this->$ColorSelectionModel::equals(arg0);
}

$Object* DefaultColorSelectionModel::clone() {
	 return this->$ColorSelectionModel::clone();
}

$String* DefaultColorSelectionModel::toString() {
	 return this->$ColorSelectionModel::toString();
}

void DefaultColorSelectionModel::finalize() {
	this->$ColorSelectionModel::finalize();
}

void DefaultColorSelectionModel::init$() {
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
	$init($Color);
	$set(this, selectedColor, $Color::white);
}

void DefaultColorSelectionModel::init$($Color* color) {
	$set(this, changeEvent, nullptr);
	$set(this, listenerList, $new($EventListenerList));
	$set(this, selectedColor, color);
}

$Color* DefaultColorSelectionModel::getSelectedColor() {
	return this->selectedColor;
}

void DefaultColorSelectionModel::setSelectedColor($Color* color) {
	if (color != nullptr && !$nc(this->selectedColor)->equals(color)) {
		$set(this, selectedColor, color);
		fireStateChanged();
	}
}

void DefaultColorSelectionModel::addChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->add($ChangeListener::class$, l);
}

void DefaultColorSelectionModel::removeChangeListener($ChangeListener* l) {
	$load($ChangeListener);
	$nc(this->listenerList)->remove($ChangeListener::class$, l);
}

$ChangeListenerArray* DefaultColorSelectionModel::getChangeListeners() {
	$load($ChangeListener);
	return $fcast($ChangeListenerArray, $nc(this->listenerList)->getListeners($ChangeListener::class$));
}

void DefaultColorSelectionModel::fireStateChanged() {
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

DefaultColorSelectionModel::DefaultColorSelectionModel() {
}

$Class* DefaultColorSelectionModel::load$($String* name, bool initialize) {
	$loadClass(DefaultColorSelectionModel, name, initialize, &_DefaultColorSelectionModel_ClassInfo_, allocate$DefaultColorSelectionModel);
	return class$;
}

$Class* DefaultColorSelectionModel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
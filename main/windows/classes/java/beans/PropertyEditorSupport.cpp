#include <java/beans/PropertyEditorSupport.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyEditor = ::java::beans::PropertyEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Vector = ::java::util::Vector;

namespace java {
	namespace beans {

$FieldInfo _PropertyEditorSupport_FieldInfo_[] = {
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyEditorSupport, value)},
	{"source", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(PropertyEditorSupport, source)},
	{"listeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/beans/PropertyChangeListener;>;", $PRIVATE, $field(PropertyEditorSupport, listeners)},
	{}
};

$MethodInfo _PropertyEditorSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PropertyEditorSupport::*)()>(&PropertyEditorSupport::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PropertyEditorSupport::*)(Object$*)>(&PropertyEditorSupport::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"firePropertyChange", "()V", nullptr, $PUBLIC},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSource", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isPaintable", "()Z", nullptr, $PUBLIC},
	{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"setSource", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"supportsCustomEditor", "()Z", nullptr, $PUBLIC},
	{"unsafeClone", "(Ljava/util/Vector;)Ljava/util/Vector;", "<T:Ljava/lang/Object;>(Ljava/util/Vector<TT;>;)Ljava/util/Vector<TT;>;", $PRIVATE, $method(static_cast<$Vector*(PropertyEditorSupport::*)($Vector*)>(&PropertyEditorSupport::unsafeClone))},
	{}
};

$ClassInfo _PropertyEditorSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyEditorSupport",
	"java.lang.Object",
	"java.beans.PropertyEditor",
	_PropertyEditorSupport_FieldInfo_,
	_PropertyEditorSupport_MethodInfo_
};

$Object* allocate$PropertyEditorSupport($Class* clazz) {
	return $of($alloc(PropertyEditorSupport));
}

void PropertyEditorSupport::init$() {
	setSource(this);
}

void PropertyEditorSupport::init$(Object$* source) {
	if (source == nullptr) {
		$throwNew($NullPointerException);
	}
	setSource(source);
}

$Object* PropertyEditorSupport::getSource() {
	return $of(this->source);
}

void PropertyEditorSupport::setSource(Object$* source) {
	$set(this, source, source);
}

void PropertyEditorSupport::setValue(Object$* value) {
	$set(this, value, value);
	firePropertyChange();
}

$Object* PropertyEditorSupport::getValue() {
	return $of(this->value);
}

bool PropertyEditorSupport::isPaintable() {
	return false;
}

void PropertyEditorSupport::paintValue($Graphics* gfx, $Rectangle* box) {
}

$String* PropertyEditorSupport::getJavaInitializationString() {
	return "???"_s;
}

$String* PropertyEditorSupport::getAsText() {
	return (this->value != nullptr) ? $nc($of(this->value))->toString() : ($String*)nullptr;
}

void PropertyEditorSupport::setAsText($String* text) {
	if ($instanceOf($String, this->value)) {
		setValue(text);
		return;
	}
	$throwNew($IllegalArgumentException, text);
}

$StringArray* PropertyEditorSupport::getTags() {
	return nullptr;
}

$Component* PropertyEditorSupport::getCustomEditor() {
	return nullptr;
}

bool PropertyEditorSupport::supportsCustomEditor() {
	return false;
}

void PropertyEditorSupport::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->listeners == nullptr) {
			$set(this, listeners, $new($Vector));
		}
		$nc(this->listeners)->addElement(listener);
	}
}

void PropertyEditorSupport::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this) {
		if (this->listeners == nullptr) {
			return;
		}
		$nc(this->listeners)->removeElement(listener);
	}
}

void PropertyEditorSupport::firePropertyChange() {
	$useLocalCurrentObjectStackCache();
	$var($Vector, targets, nullptr);
	$synchronized(this) {
		if (this->listeners == nullptr) {
			return;
		}
		$assign(targets, unsafeClone(this->listeners));
	}
	$var($PropertyChangeEvent, evt, $new($PropertyChangeEvent, this->source, nullptr, nullptr, nullptr));
	for (int32_t i = 0; i < $nc(targets)->size(); ++i) {
		$var($PropertyChangeListener, target, $cast($PropertyChangeListener, targets->elementAt(i)));
		$nc(target)->propertyChange(evt);
	}
}

$Vector* PropertyEditorSupport::unsafeClone($Vector* v) {
	return $cast($Vector, $nc(v)->clone());
}

PropertyEditorSupport::PropertyEditorSupport() {
}

$Class* PropertyEditorSupport::load$($String* name, bool initialize) {
	$loadClass(PropertyEditorSupport, name, initialize, &_PropertyEditorSupport_ClassInfo_, allocate$PropertyEditorSupport);
	return class$;
}

$Class* PropertyEditorSupport::class$ = nullptr;

	} // beans
} // java
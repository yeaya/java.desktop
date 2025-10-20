#include <com/sun/beans/editors/EnumEditor.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $PropertyChangeListenerArray = $Array<::java::beans::PropertyChangeListener>;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PropertyEditor = ::java::beans::PropertyEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$FieldInfo _EnumEditor_FieldInfo_[] = {
	{"listeners", "Ljava/util/List;", "Ljava/util/List<Ljava/beans/PropertyChangeListener;>;", $PRIVATE | $FINAL, $field(EnumEditor, listeners)},
	{"type", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/Enum;>;", $PRIVATE | $FINAL, $field(EnumEditor, type)},
	{"tags", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(EnumEditor, tags)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(EnumEditor, value)},
	{}
};

$MethodInfo _EnumEditor_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(static_cast<void(EnumEditor::*)($Class*)>(&EnumEditor::init$))},
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"getAsText", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCustomEditor", "()Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTags", "()[Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isPaintable", "()Z", nullptr, $PUBLIC},
	{"paintValue", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"supportsCustomEditor", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _EnumEditor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.beans.editors.EnumEditor",
	"java.lang.Object",
	"java.beans.PropertyEditor",
	_EnumEditor_FieldInfo_,
	_EnumEditor_MethodInfo_
};

$Object* allocate$EnumEditor($Class* clazz) {
	return $of($alloc(EnumEditor));
}

void EnumEditor::init$($Class* type) {
	$useLocalCurrentObjectStackCache();
	$set(this, listeners, $new($ArrayList));
	$var($ObjectArray, values, $nc(type)->getEnumConstants());
	if (values == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported "_s, type}));
	}
	$load($Enum);
	$set(this, type, type->asSubclass($Enum::class$));
	$set(this, tags, $new($StringArray, $nc(values)->length));
	for (int32_t i = 0; i < values->length; ++i) {
		$nc(this->tags)->set(i, $($nc(($cast($Enum, values->get(i))))->name()));
	}
}

$Object* EnumEditor::getValue() {
	return $of(this->value);
}

void EnumEditor::setValue(Object$* value) {
	$useLocalCurrentObjectStackCache();
	if ((value != nullptr) && !$nc(this->type)->isInstance(value)) {
		$throwNew($IllegalArgumentException, $$str({"Unsupported value: "_s, value}));
	}
	$var($Object, oldValue, nullptr);
	$var($PropertyChangeListenerArray, listeners, nullptr);
	$synchronized(this->listeners) {
		$assign(oldValue, this->value);
		$set(this, value, value);
		if ((value == nullptr) ? oldValue == nullptr : $nc($of(value))->equals(oldValue)) {
			return;
		}
		int32_t size = $nc(this->listeners)->size();
		if (size == 0) {
			return;
		}
		$assign(listeners, $fcast($PropertyChangeListenerArray, $nc(this->listeners)->toArray($$new($PropertyChangeListenerArray, size))));
	}
	$var($PropertyChangeEvent, event, $new($PropertyChangeEvent, this, nullptr, oldValue, value));
	{
		$var($PropertyChangeListenerArray, arr$, listeners);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($PropertyChangeListener, listener, arr$->get(i$));
			{
				$nc(listener)->propertyChange(event);
			}
		}
	}
}

$String* EnumEditor::getAsText() {
	return (this->value != nullptr) ? $nc(($cast($Enum, this->value)))->name() : ($String*)nullptr;
}

void EnumEditor::setAsText($String* text) {
	$var($Object, tmp, (text != nullptr) ? $of($Enum::valueOf(this->type, text)) : ($Object*)nullptr);
	setValue(tmp);
}

$StringArray* EnumEditor::getTags() {
	return $cast($StringArray, $nc(this->tags)->clone());
}

$String* EnumEditor::getJavaInitializationString() {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getAsText());
	return (name != nullptr) ? $str({$($nc(this->type)->getName()), $$str(u'.'), name}) : "null"_s;
}

bool EnumEditor::isPaintable() {
	return false;
}

void EnumEditor::paintValue($Graphics* gfx, $Rectangle* box) {
}

bool EnumEditor::supportsCustomEditor() {
	return false;
}

$Component* EnumEditor::getCustomEditor() {
	return nullptr;
}

void EnumEditor::addPropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this->listeners) {
		$nc(this->listeners)->add(listener);
	}
}

void EnumEditor::removePropertyChangeListener($PropertyChangeListener* listener) {
	$synchronized(this->listeners) {
		$nc(this->listeners)->remove($of(listener));
	}
}

EnumEditor::EnumEditor() {
}

$Class* EnumEditor::load$($String* name, bool initialize) {
	$loadClass(EnumEditor, name, initialize, &_EnumEditor_ClassInfo_, allocate$EnumEditor);
	return class$;
}

$Class* EnumEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com
#include <javax/swing/colorchooser/ValueFormatter.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/Runnable.h>
#include <java/text/ParseException.h>
#include <java/util/EventObject.h>
#include <java/util/Locale.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/colorchooser/ValueFormatter$1.h>
#include <javax/swing/text/DefaultFormatterFactory.h>
#include <javax/swing/text/DocumentFilter.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ENGLISH
#undef RIGHT

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ParseException = ::java::text::ParseException;
using $EventObject = ::java::util::EventObject;
using $Locale = ::java::util::Locale;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JFormattedTextField$AbstractFormatterFactory = ::javax::swing::JFormattedTextField$AbstractFormatterFactory;
using $JTextField = ::javax::swing::JTextField;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ValueFormatter$1 = ::javax::swing::colorchooser::ValueFormatter$1;
using $DefaultFormatterFactory = ::javax::swing::text::DefaultFormatterFactory;
using $DocumentFilter = ::javax::swing::text::DocumentFilter;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _ValueFormatter_FieldInfo_[] = {
	{"filter", "Ljavax/swing/text/DocumentFilter;", nullptr, $PRIVATE | $FINAL, $field(ValueFormatter, filter)},
	{"length", "I", nullptr, $PRIVATE | $FINAL, $field(ValueFormatter, length)},
	{"radix", "I", nullptr, $PRIVATE | $FINAL, $field(ValueFormatter, radix)},
	{"text", "Ljavax/swing/JFormattedTextField;", nullptr, $PRIVATE, $field(ValueFormatter, text)},
	{}
};

$MethodInfo _ValueFormatter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(IZ)V", nullptr, 0, $method(static_cast<void(ValueFormatter::*)(int32_t,bool)>(&ValueFormatter::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"getDocumentFilter", "()Ljavax/swing/text/DocumentFilter;", nullptr, $PROTECTED},
	{"init", "(IZLjavax/swing/JFormattedTextField;)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,bool,$JFormattedTextField*)>(&ValueFormatter::init))},
	{"isValid", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(ValueFormatter::*)(int32_t)>(&ValueFormatter::isValid))},
	{"isValid", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ValueFormatter::*)($String*)>(&ValueFormatter::isValid))},
	{"run", "()V", nullptr, $PUBLIC},
	{"stringToValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueToString", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{}
};

$InnerClassInfo _ValueFormatter_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$AbstractFormatter", "javax.swing.JFormattedTextField", "AbstractFormatter", $PUBLIC | $STATIC | $ABSTRACT},
	{"javax.swing.colorchooser.ValueFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ValueFormatter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.colorchooser.ValueFormatter",
	"javax.swing.JFormattedTextField$AbstractFormatter",
	"java.awt.event.FocusListener,java.lang.Runnable",
	_ValueFormatter_FieldInfo_,
	_ValueFormatter_MethodInfo_,
	nullptr,
	nullptr,
	_ValueFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.colorchooser.ValueFormatter$1"
};

$Object* allocate$ValueFormatter($Class* clazz) {
	return $of($alloc(ValueFormatter));
}

$Object* ValueFormatter::clone() {
	 return this->$JFormattedTextField$AbstractFormatter::clone();
}

int32_t ValueFormatter::hashCode() {
	 return this->$JFormattedTextField$AbstractFormatter::hashCode();
}

bool ValueFormatter::equals(Object$* arg0) {
	 return this->$JFormattedTextField$AbstractFormatter::equals(arg0);
}

$String* ValueFormatter::toString() {
	 return this->$JFormattedTextField$AbstractFormatter::toString();
}

void ValueFormatter::finalize() {
	this->$JFormattedTextField$AbstractFormatter::finalize();
}

void ValueFormatter::init(int32_t length, bool hex, $JFormattedTextField* text) {
	$init(ValueFormatter);
	$useLocalCurrentObjectStackCache();
	$var(ValueFormatter, formatter, $new(ValueFormatter, length, hex));
	$nc(text)->setColumns(length);
	text->setFormatterFactory($$new($DefaultFormatterFactory, formatter));
	text->setHorizontalAlignment($SwingConstants::RIGHT);
	text->setMinimumSize($(text->getPreferredSize()));
	text->addFocusListener(formatter);
}

void ValueFormatter::init$(int32_t length, bool hex) {
	$JFormattedTextField$AbstractFormatter::init$();
	$set(this, filter, $new($ValueFormatter$1, this));
	this->length = length;
	this->radix = hex ? 16 : 10;
}

$Object* ValueFormatter::stringToValue($String* text) {
	try {
		return $of($Integer::valueOf(text, this->radix));
	} catch ($NumberFormatException& nfe) {
		$var($ParseException, pe, $new($ParseException, "illegal format"_s, 0));
		pe->initCause(nfe);
		$throw(pe);
	}
	$shouldNotReachHere();
}

$String* ValueFormatter::valueToString(Object$* object) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Integer, object)) {
		if (this->radix == 10) {
			return $nc($of(object))->toString();
		}
		int32_t value = $nc(($cast($Integer, object)))->intValue();
		int32_t index = this->length;
		$var($chars, array, $new($chars, index));
		while (0 < index--) {
			array->set(index, $Character::forDigit((int32_t)(value & (uint32_t)15), this->radix));
			value >>= 4;
		}
		$init($Locale);
		return $$new($String, array)->toUpperCase($Locale::ENGLISH);
	}
	$throwNew($ParseException, "illegal object"_s, 0);
}

$DocumentFilter* ValueFormatter::getDocumentFilter() {
	return this->filter;
}

void ValueFormatter::focusGained($FocusEvent* event) {
	$var($Object, source, $nc(event)->getSource());
	if ($instanceOf($JFormattedTextField, source)) {
		$set(this, text, $cast($JFormattedTextField, source));
		$SwingUtilities::invokeLater(this);
	}
}

void ValueFormatter::focusLost($FocusEvent* event) {
}

void ValueFormatter::run() {
	if (this->text != nullptr) {
		$nc(this->text)->selectAll();
	}
}

bool ValueFormatter::isValid(int32_t length) {
	return (0 <= length) && (length <= this->length);
}

bool ValueFormatter::isValid($String* text) {
	int32_t length = $nc(text)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t ch = text->charAt(i);
		if ($Character::digit(ch, this->radix) < 0) {
			return false;
		}
	}
	return true;
}

ValueFormatter::ValueFormatter() {
}

$Class* ValueFormatter::load$($String* name, bool initialize) {
	$loadClass(ValueFormatter, name, initialize, &_ValueFormatter_ClassInfo_, allocate$ValueFormatter);
	return class$;
}

$Class* ValueFormatter::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
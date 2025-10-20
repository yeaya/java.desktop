#include <javax/swing/text/DefaultFormatterFactory.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>
#include <javax/swing/JFormattedTextField.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;
using $JFormattedTextField$AbstractFormatterFactory = ::javax::swing::JFormattedTextField$AbstractFormatterFactory;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultFormatterFactory_FieldInfo_[] = {
	{"defaultFormat", "Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PRIVATE, $field(DefaultFormatterFactory, defaultFormat)},
	{"displayFormat", "Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PRIVATE, $field(DefaultFormatterFactory, displayFormat)},
	{"editFormat", "Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PRIVATE, $field(DefaultFormatterFactory, editFormat)},
	{"nullFormat", "Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PRIVATE, $field(DefaultFormatterFactory, nullFormat)},
	{}
};

$MethodInfo _DefaultFormatterFactory_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFormatterFactory::*)()>(&DefaultFormatterFactory::init$))},
	{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFormatterFactory::*)($JFormattedTextField$AbstractFormatter*)>(&DefaultFormatterFactory::init$))},
	{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFormatterFactory::*)($JFormattedTextField$AbstractFormatter*,$JFormattedTextField$AbstractFormatter*)>(&DefaultFormatterFactory::init$))},
	{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;Ljavax/swing/JFormattedTextField$AbstractFormatter;Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFormatterFactory::*)($JFormattedTextField$AbstractFormatter*,$JFormattedTextField$AbstractFormatter*,$JFormattedTextField$AbstractFormatter*)>(&DefaultFormatterFactory::init$))},
	{"<init>", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;Ljavax/swing/JFormattedTextField$AbstractFormatter;Ljavax/swing/JFormattedTextField$AbstractFormatter;Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFormatterFactory::*)($JFormattedTextField$AbstractFormatter*,$JFormattedTextField$AbstractFormatter*,$JFormattedTextField$AbstractFormatter*,$JFormattedTextField$AbstractFormatter*)>(&DefaultFormatterFactory::init$))},
	{"getDefaultFormatter", "()Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC},
	{"getDisplayFormatter", "()Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC},
	{"getEditFormatter", "()Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC},
	{"getFormatter", "(Ljavax/swing/JFormattedTextField;)Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC},
	{"getNullFormatter", "()Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC},
	{"setDefaultFormatter", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC},
	{"setDisplayFormatter", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC},
	{"setEditFormatter", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC},
	{"setNullFormatter", "(Ljavax/swing/JFormattedTextField$AbstractFormatter;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultFormatterFactory_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$AbstractFormatterFactory", "javax.swing.JFormattedTextField", "AbstractFormatterFactory", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DefaultFormatterFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.DefaultFormatterFactory",
	"javax.swing.JFormattedTextField$AbstractFormatterFactory",
	"java.io.Serializable",
	_DefaultFormatterFactory_FieldInfo_,
	_DefaultFormatterFactory_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultFormatterFactory_InnerClassesInfo_
};

$Object* allocate$DefaultFormatterFactory($Class* clazz) {
	return $of($alloc(DefaultFormatterFactory));
}

int32_t DefaultFormatterFactory::hashCode() {
	 return this->$JFormattedTextField$AbstractFormatterFactory::hashCode();
}

bool DefaultFormatterFactory::equals(Object$* arg0) {
	 return this->$JFormattedTextField$AbstractFormatterFactory::equals(arg0);
}

$Object* DefaultFormatterFactory::clone() {
	 return this->$JFormattedTextField$AbstractFormatterFactory::clone();
}

$String* DefaultFormatterFactory::toString() {
	 return this->$JFormattedTextField$AbstractFormatterFactory::toString();
}

void DefaultFormatterFactory::finalize() {
	this->$JFormattedTextField$AbstractFormatterFactory::finalize();
}

void DefaultFormatterFactory::init$() {
	$JFormattedTextField$AbstractFormatterFactory::init$();
}

void DefaultFormatterFactory::init$($JFormattedTextField$AbstractFormatter* defaultFormat) {
	DefaultFormatterFactory::init$(defaultFormat, nullptr);
}

void DefaultFormatterFactory::init$($JFormattedTextField$AbstractFormatter* defaultFormat, $JFormattedTextField$AbstractFormatter* displayFormat) {
	DefaultFormatterFactory::init$(defaultFormat, displayFormat, nullptr);
}

void DefaultFormatterFactory::init$($JFormattedTextField$AbstractFormatter* defaultFormat, $JFormattedTextField$AbstractFormatter* displayFormat, $JFormattedTextField$AbstractFormatter* editFormat) {
	DefaultFormatterFactory::init$(defaultFormat, displayFormat, editFormat, nullptr);
}

void DefaultFormatterFactory::init$($JFormattedTextField$AbstractFormatter* defaultFormat, $JFormattedTextField$AbstractFormatter* displayFormat, $JFormattedTextField$AbstractFormatter* editFormat, $JFormattedTextField$AbstractFormatter* nullFormat) {
	$JFormattedTextField$AbstractFormatterFactory::init$();
	$set(this, defaultFormat, defaultFormat);
	$set(this, displayFormat, displayFormat);
	$set(this, editFormat, editFormat);
	$set(this, nullFormat, nullFormat);
}

void DefaultFormatterFactory::setDefaultFormatter($JFormattedTextField$AbstractFormatter* atf) {
	$set(this, defaultFormat, atf);
}

$JFormattedTextField$AbstractFormatter* DefaultFormatterFactory::getDefaultFormatter() {
	return this->defaultFormat;
}

void DefaultFormatterFactory::setDisplayFormatter($JFormattedTextField$AbstractFormatter* atf) {
	$set(this, displayFormat, atf);
}

$JFormattedTextField$AbstractFormatter* DefaultFormatterFactory::getDisplayFormatter() {
	return this->displayFormat;
}

void DefaultFormatterFactory::setEditFormatter($JFormattedTextField$AbstractFormatter* atf) {
	$set(this, editFormat, atf);
}

$JFormattedTextField$AbstractFormatter* DefaultFormatterFactory::getEditFormatter() {
	return this->editFormat;
}

void DefaultFormatterFactory::setNullFormatter($JFormattedTextField$AbstractFormatter* atf) {
	$set(this, nullFormat, atf);
}

$JFormattedTextField$AbstractFormatter* DefaultFormatterFactory::getNullFormatter() {
	return this->nullFormat;
}

$JFormattedTextField$AbstractFormatter* DefaultFormatterFactory::getFormatter($JFormattedTextField* source) {
	$useLocalCurrentObjectStackCache();
	$var($JFormattedTextField$AbstractFormatter, format, nullptr);
	if (source == nullptr) {
		return nullptr;
	}
	$var($Object, value, $nc(source)->getValue());
	if (value == nullptr) {
		$assign(format, getNullFormatter());
	}
	if (format == nullptr) {
		if (source->hasFocus()) {
			$assign(format, getEditFormatter());
		} else {
			$assign(format, getDisplayFormatter());
		}
		if (format == nullptr) {
			$assign(format, getDefaultFormatter());
		}
	}
	return format;
}

DefaultFormatterFactory::DefaultFormatterFactory() {
}

$Class* DefaultFormatterFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultFormatterFactory, name, initialize, &_DefaultFormatterFactory_ClassInfo_, allocate$DefaultFormatterFactory);
	return class$;
}

$Class* DefaultFormatterFactory::class$ = nullptr;

		} // text
	} // swing
} // javax
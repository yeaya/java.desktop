#include <javax/swing/text/html/Option.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <jcpp.h>

#undef SELECTED
#undef VALUE

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _Option_FieldInfo_[] = {
	{"selected", "Z", nullptr, $PRIVATE, $field(Option, selected)},
	{"label", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Option, label)},
	{"attr", "Ljavax/swing/text/AttributeSet;", nullptr, $PRIVATE, $field(Option, attr)},
	{}
};

$MethodInfo _Option_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(Option::*)($AttributeSet*)>(&Option::init$))},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getLabel", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSelection", "(Z)V", nullptr, $PROTECTED},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Option_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.Option",
	"java.lang.Object",
	"java.io.Serializable",
	_Option_FieldInfo_,
	_Option_MethodInfo_
};

$Object* allocate$Option($Class* clazz) {
	return $of($alloc(Option));
}

void Option::init$($AttributeSet* attr) {
	$set(this, attr, $nc(attr)->copyAttributes());
	$init($HTML$Attribute);
	this->selected = (attr->getAttribute($HTML$Attribute::SELECTED) != nullptr);
}

void Option::setLabel($String* label) {
	$set(this, label, label);
}

$String* Option::getLabel() {
	return this->label;
}

$AttributeSet* Option::getAttributes() {
	return this->attr;
}

$String* Option::toString() {
	return this->label;
}

void Option::setSelection(bool state) {
	this->selected = state;
}

bool Option::isSelected() {
	return this->selected;
}

$String* Option::getValue() {
	$init($HTML$Attribute);
	$var($String, value, $cast($String, $nc(this->attr)->getAttribute($HTML$Attribute::VALUE)));
	if (value == nullptr) {
		$assign(value, this->label);
	}
	return value;
}

Option::Option() {
}

$Class* Option::load$($String* name, bool initialize) {
	$loadClass(Option, name, initialize, &_Option_ClassInfo_, allocate$Option);
	return class$;
}

$Class* Option::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
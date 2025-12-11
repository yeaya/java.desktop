#include <javax/swing/text/html/StyleSheet$SelectorMapping.h>

#include <java/util/HashMap.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $Style = ::javax::swing::text::Style;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$SelectorMapping_FieldInfo_[] = {
	{"specificity", "I", nullptr, $PRIVATE, $field(StyleSheet$SelectorMapping, specificity)},
	{"style", "Ljavax/swing/text/Style;", nullptr, $PRIVATE, $field(StyleSheet$SelectorMapping, style)},
	{"children", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/swing/text/html/StyleSheet$SelectorMapping;>;", $PRIVATE, $field(StyleSheet$SelectorMapping, children)},
	{}
};

$MethodInfo _StyleSheet$SelectorMapping_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(StyleSheet$SelectorMapping::*)(int32_t)>(&StyleSheet$SelectorMapping::init$))},
	{"createChildSelectorMapping", "(I)Ljavax/swing/text/html/StyleSheet$SelectorMapping;", nullptr, $PROTECTED},
	{"getChildSelectorMapping", "(Ljava/lang/String;Z)Ljavax/swing/text/html/StyleSheet$SelectorMapping;", nullptr, $PUBLIC},
	{"getChildSpecificity", "(Ljava/lang/String;)I", nullptr, $PROTECTED},
	{"getSpecificity", "()I", nullptr, $PUBLIC},
	{"getStyle", "()Ljavax/swing/text/Style;", nullptr, $PUBLIC},
	{"setStyle", "(Ljavax/swing/text/Style;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleSheet$SelectorMapping_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$SelectorMapping", "javax.swing.text.html.StyleSheet", "SelectorMapping", $STATIC},
	{}
};

$ClassInfo _StyleSheet$SelectorMapping_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.StyleSheet$SelectorMapping",
	"java.lang.Object",
	"java.io.Serializable",
	_StyleSheet$SelectorMapping_FieldInfo_,
	_StyleSheet$SelectorMapping_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$SelectorMapping_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$SelectorMapping($Class* clazz) {
	return $of($alloc(StyleSheet$SelectorMapping));
}

void StyleSheet$SelectorMapping::init$(int32_t specificity) {
	this->specificity = specificity;
}

int32_t StyleSheet$SelectorMapping::getSpecificity() {
	return this->specificity;
}

void StyleSheet$SelectorMapping::setStyle($Style* style) {
	$set(this, style, style);
}

$Style* StyleSheet$SelectorMapping::getStyle() {
	return this->style;
}

StyleSheet$SelectorMapping* StyleSheet$SelectorMapping::getChildSelectorMapping($String* selector, bool create) {
	$var(StyleSheet$SelectorMapping, retValue, nullptr);
	if (this->children != nullptr) {
		$assign(retValue, $cast(StyleSheet$SelectorMapping, $nc(this->children)->get(selector)));
	} else if (create) {
		$set(this, children, $new($HashMap, 7));
	}
	if (retValue == nullptr && create) {
		int32_t specificity = getChildSpecificity(selector);
		$assign(retValue, createChildSelectorMapping(specificity));
		$nc(this->children)->put(selector, retValue);
	}
	return retValue;
}

StyleSheet$SelectorMapping* StyleSheet$SelectorMapping::createChildSelectorMapping(int32_t specificity) {
	return $new(StyleSheet$SelectorMapping, specificity);
}

int32_t StyleSheet$SelectorMapping::getChildSpecificity($String* selector) {
	char16_t firstChar = $nc(selector)->charAt(0);
	int32_t specificity = getSpecificity();
	if (firstChar == u'.') {
		specificity += 100;
	} else if (firstChar == u'#') {
		specificity += 10000;
	} else {
		specificity += 1;
		if (selector->indexOf((int32_t)u'.') != -1) {
			specificity += 100;
		}
		if (selector->indexOf((int32_t)u'#') != -1) {
			specificity += 10000;
		}
	}
	return specificity;
}

StyleSheet$SelectorMapping::StyleSheet$SelectorMapping() {
}

$Class* StyleSheet$SelectorMapping::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$SelectorMapping, name, initialize, &_StyleSheet$SelectorMapping_ClassInfo_, allocate$StyleSheet$SelectorMapping);
	return class$;
}

$Class* StyleSheet$SelectorMapping::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
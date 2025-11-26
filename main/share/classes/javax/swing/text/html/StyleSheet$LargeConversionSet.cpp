#include <javax/swing/text/html/StyleSheet$LargeConversionSet.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$LargeConversionSet_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/StyleSheet;", nullptr, $FINAL | $SYNTHETIC, $field(StyleSheet$LargeConversionSet, this$0)},
	{}
};

$MethodInfo _StyleSheet$LargeConversionSet_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/StyleSheet;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleSheet$LargeConversionSet::*)($StyleSheet*,$AttributeSet*)>(&StyleSheet$LargeConversionSet::init$))},
	{"<init>", "(Ljavax/swing/text/html/StyleSheet;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleSheet$LargeConversionSet::*)($StyleSheet*)>(&StyleSheet$LargeConversionSet::init$))},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleSheet$LargeConversionSet_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$LargeConversionSet", "javax.swing.text.html.StyleSheet", "LargeConversionSet", 0},
	{}
};

$ClassInfo _StyleSheet$LargeConversionSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.StyleSheet$LargeConversionSet",
	"javax.swing.text.SimpleAttributeSet",
	nullptr,
	_StyleSheet$LargeConversionSet_FieldInfo_,
	_StyleSheet$LargeConversionSet_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$LargeConversionSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$LargeConversionSet($Class* clazz) {
	return $of($alloc(StyleSheet$LargeConversionSet));
}

void StyleSheet$LargeConversionSet::init$($StyleSheet* this$0, $AttributeSet* source) {
	$set(this, this$0, this$0);
	$SimpleAttributeSet::init$(source);
}

void StyleSheet$LargeConversionSet::init$($StyleSheet* this$0) {
	$set(this, this$0, this$0);
	$SimpleAttributeSet::init$();
}

bool StyleSheet$LargeConversionSet::isDefined(Object$* key) {
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			return $SimpleAttributeSet::isDefined(cssKey);
		}
	}
	return $SimpleAttributeSet::isDefined(key);
}

$Object* StyleSheet$LargeConversionSet::getAttribute(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			$var($Object, value, $SimpleAttributeSet::getAttribute(cssKey));
			if (value != nullptr) {
				return $of($nc(this->this$0->css)->cssValueToStyleConstantsValue($cast($StyleConstants, key), value));
			}
		}
	}
	return $of($SimpleAttributeSet::getAttribute(key));
}

StyleSheet$LargeConversionSet::StyleSheet$LargeConversionSet() {
}

$Class* StyleSheet$LargeConversionSet::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$LargeConversionSet, name, initialize, &_StyleSheet$LargeConversionSet_ClassInfo_, allocate$StyleSheet$LargeConversionSet);
	return class$;
}

$Class* StyleSheet$LargeConversionSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
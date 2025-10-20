#include <javax/swing/text/html/StyleSheet$SmallConversionSet.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext$SmallAttributeSet.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/CSS.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyleContext$SmallAttributeSet = ::javax::swing::text::StyleContext$SmallAttributeSet;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$SmallConversionSet_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/StyleSheet;", nullptr, $FINAL | $SYNTHETIC, $field(StyleSheet$SmallConversionSet, this$0)},
	{}
};

$MethodInfo _StyleSheet$SmallConversionSet_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/StyleSheet;Ljavax/swing/text/AttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(StyleSheet$SmallConversionSet::*)($StyleSheet*,$AttributeSet*)>(&StyleSheet$SmallConversionSet::init$))},
	{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StyleSheet$SmallConversionSet_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$SmallConversionSet", "javax.swing.text.html.StyleSheet", "SmallConversionSet", 0},
	{"javax.swing.text.StyleContext$SmallAttributeSet", "javax.swing.text.StyleContext", "SmallAttributeSet", $PUBLIC},
	{}
};

$ClassInfo _StyleSheet$SmallConversionSet_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.StyleSheet$SmallConversionSet",
	"javax.swing.text.StyleContext$SmallAttributeSet",
	nullptr,
	_StyleSheet$SmallConversionSet_FieldInfo_,
	_StyleSheet$SmallConversionSet_MethodInfo_,
	nullptr,
	nullptr,
	_StyleSheet$SmallConversionSet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$SmallConversionSet($Class* clazz) {
	return $of($alloc(StyleSheet$SmallConversionSet));
}

void StyleSheet$SmallConversionSet::init$($StyleSheet* this$0, $AttributeSet* attrs) {
	$set(this, this$0, this$0);
	$StyleContext$SmallAttributeSet::init$(static_cast<$StyleContext*>(this$0), attrs);
}

bool StyleSheet$SmallConversionSet::isDefined(Object$* key) {
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			return $StyleContext$SmallAttributeSet::isDefined(cssKey);
		}
	}
	return $StyleContext$SmallAttributeSet::isDefined(key);
}

$Object* StyleSheet$SmallConversionSet::getAttribute(Object$* key) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($StyleConstants, key)) {
		$var($Object, cssKey, $nc(this->this$0->css)->styleConstantsKeyToCSSKey($cast($StyleConstants, key)));
		if (cssKey != nullptr) {
			$var($Object, value, $StyleContext$SmallAttributeSet::getAttribute(cssKey));
			if (value != nullptr) {
				return $of($nc(this->this$0->css)->cssValueToStyleConstantsValue($cast($StyleConstants, key), value));
			}
		}
	}
	return $of($StyleContext$SmallAttributeSet::getAttribute(key));
}

StyleSheet$SmallConversionSet::StyleSheet$SmallConversionSet() {
}

$Class* StyleSheet$SmallConversionSet::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$SmallConversionSet, name, initialize, &_StyleSheet$SmallConversionSet_ClassInfo_, allocate$StyleSheet$SmallConversionSet);
	return class$;
}

$Class* StyleSheet$SmallConversionSet::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
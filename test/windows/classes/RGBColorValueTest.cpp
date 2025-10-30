#include <RGBColorValueTest.h>

#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/CSS$Attribute.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef BORDER_BOTTOM_COLOR
#undef BORDER_LEFT_COLOR
#undef BORDER_RIGHT_COLOR
#undef BORDER_TOP_COLOR

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $CSS$Attribute = ::javax::swing::text::html::CSS$Attribute;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

$MethodInfo _RGBColorValueTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RGBColorValueTest::*)()>(&RGBColorValueTest::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RGBColorValueTest::main))},
	{}
};

$ClassInfo _RGBColorValueTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RGBColorValueTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RGBColorValueTest_MethodInfo_
};

$Object* allocate$RGBColorValueTest($Class* clazz) {
	return $of($alloc(RGBColorValueTest));
}

void RGBColorValueTest::init$() {
}

void RGBColorValueTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($StyleSheet, styleSheet, $new($StyleSheet));
	$var($AttributeSet, attributeSet, styleSheet->getDeclaration("border-color: rgb(1, 2, 3)    rgb(1, 2, 4);"_s));
	$init($CSS$Attribute);
	bool var$2 = !$nc($($nc($of($($nc(attributeSet)->getAttribute($CSS$Attribute::BORDER_TOP_COLOR))))->toString()))->equals("rgb(1, 2, 3)"_s);
	bool var$1 = var$2 || !$nc($($nc($of($($nc(attributeSet)->getAttribute($CSS$Attribute::BORDER_BOTTOM_COLOR))))->toString()))->equals("rgb(1, 2, 3)"_s);
	bool var$0 = var$1 || !$nc($($nc($of($($nc(attributeSet)->getAttribute($CSS$Attribute::BORDER_RIGHT_COLOR))))->toString()))->equals("rgb(1, 2, 4)"_s);
	if (var$0 || !$nc($($nc($of($($nc(attributeSet)->getAttribute($CSS$Attribute::BORDER_LEFT_COLOR))))->toString()))->equals("rgb(1, 2, 4)"_s)) {
		$throwNew($RuntimeException, "Failed"_s);
	}
}

RGBColorValueTest::RGBColorValueTest() {
}

$Class* RGBColorValueTest::load$($String* name, bool initialize) {
	$loadClass(RGBColorValueTest, name, initialize, &_RGBColorValueTest_ClassInfo_, allocate$RGBColorValueTest);
	return class$;
}

$Class* RGBColorValueTest::class$ = nullptr;
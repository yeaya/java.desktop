#include <javax/swing/text/html/StyleSheet$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef LEFT
#undef RIGHT

using $StyleSheet$BoxPainter$HorizontalMarginArray = $Array<::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$BoxPainter = ::javax::swing::text::html::StyleSheet$BoxPainter;
using $StyleSheet$BoxPainter$HorizontalMargin = ::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$1_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(StyleSheet$1, $SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin)},
	{}
};

$EnclosingMethodInfo _StyleSheet$1_EnclosingMethodInfo_ = {
	"javax.swing.text.html.StyleSheet",
	nullptr,
	nullptr
};

$InnerClassInfo _StyleSheet$1_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _StyleSheet$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.text.html.StyleSheet$1",
	"java.lang.Object",
	nullptr,
	_StyleSheet$1_FieldInfo_,
	nullptr,
	nullptr,
	&_StyleSheet$1_EnclosingMethodInfo_,
	_StyleSheet$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$1($Class* clazz) {
	return $of($alloc(StyleSheet$1));
}

$ints* StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin = nullptr;

void clinit$StyleSheet$1($Class* class$) {
	$assignStatic(StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin, $new($ints, $($StyleSheet$BoxPainter$HorizontalMargin::values())->length));
	{
		try {
			$nc(StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin)->set($StyleSheet$BoxPainter$HorizontalMargin::RIGHT->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(StyleSheet$1::$SwitchMap$javax$swing$text$html$StyleSheet$BoxPainter$HorizontalMargin)->set($StyleSheet$BoxPainter$HorizontalMargin::LEFT->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

StyleSheet$1::StyleSheet$1() {
}

$Class* StyleSheet$1::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$1, name, initialize, &_StyleSheet$1_ClassInfo_, clinit$StyleSheet$1, allocate$StyleSheet$1);
	return class$;
}

$Class* StyleSheet$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
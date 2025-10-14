#include <javax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/StyleSheet$BoxPainter.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

#undef LEFT
#undef RIGHT

using $StyleSheet$BoxPainter$HorizontalMarginArray = $Array<::javax::swing::text::html::StyleSheet$BoxPainter$HorizontalMargin>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;
using $StyleSheet$BoxPainter = ::javax::swing::text::html::StyleSheet$BoxPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _StyleSheet$BoxPainter$HorizontalMargin_FieldInfo_[] = {
	{"LEFT", "Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StyleSheet$BoxPainter$HorizontalMargin, LEFT)},
	{"RIGHT", "Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(StyleSheet$BoxPainter$HorizontalMargin, RIGHT)},
	{"$VALUES", "[Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(StyleSheet$BoxPainter$HorizontalMargin, $VALUES)},
	{}
};

$MethodInfo _StyleSheet$BoxPainter$HorizontalMargin_MethodInfo_[] = {
	{"$values", "()[Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StyleSheet$BoxPainter$HorizontalMarginArray*(*)()>(&StyleSheet$BoxPainter$HorizontalMargin::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(StyleSheet$BoxPainter$HorizontalMargin::*)($String*,int32_t)>(&StyleSheet$BoxPainter$HorizontalMargin::init$))},
	{"valueOf", "(Ljava/lang/String;)Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;", nullptr, $PUBLIC | $STATIC, $method(static_cast<StyleSheet$BoxPainter$HorizontalMargin*(*)($String*)>(&StyleSheet$BoxPainter$HorizontalMargin::valueOf))},
	{"values", "()[Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StyleSheet$BoxPainter$HorizontalMarginArray*(*)()>(&StyleSheet$BoxPainter$HorizontalMargin::values))},
	{}
};

$InnerClassInfo _StyleSheet$BoxPainter$HorizontalMargin_InnerClassesInfo_[] = {
	{"javax.swing.text.html.StyleSheet$BoxPainter", "javax.swing.text.html.StyleSheet", "BoxPainter", $PUBLIC | $STATIC},
	{"javax.swing.text.html.StyleSheet$BoxPainter$HorizontalMargin", "javax.swing.text.html.StyleSheet$BoxPainter", "HorizontalMargin", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _StyleSheet$BoxPainter$HorizontalMargin_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"javax.swing.text.html.StyleSheet$BoxPainter$HorizontalMargin",
	"java.lang.Enum",
	nullptr,
	_StyleSheet$BoxPainter$HorizontalMargin_FieldInfo_,
	_StyleSheet$BoxPainter$HorizontalMargin_MethodInfo_,
	"Ljava/lang/Enum<Ljavax/swing/text/html/StyleSheet$BoxPainter$HorizontalMargin;>;",
	nullptr,
	_StyleSheet$BoxPainter$HorizontalMargin_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.StyleSheet"
};

$Object* allocate$StyleSheet$BoxPainter$HorizontalMargin($Class* clazz) {
	return $of($alloc(StyleSheet$BoxPainter$HorizontalMargin));
}

StyleSheet$BoxPainter$HorizontalMargin* StyleSheet$BoxPainter$HorizontalMargin::LEFT = nullptr;
StyleSheet$BoxPainter$HorizontalMargin* StyleSheet$BoxPainter$HorizontalMargin::RIGHT = nullptr;
$StyleSheet$BoxPainter$HorizontalMarginArray* StyleSheet$BoxPainter$HorizontalMargin::$VALUES = nullptr;

$StyleSheet$BoxPainter$HorizontalMarginArray* StyleSheet$BoxPainter$HorizontalMargin::$values() {
	$init(StyleSheet$BoxPainter$HorizontalMargin);
	return $new($StyleSheet$BoxPainter$HorizontalMarginArray, {
		StyleSheet$BoxPainter$HorizontalMargin::LEFT,
		StyleSheet$BoxPainter$HorizontalMargin::RIGHT
	});
}

$StyleSheet$BoxPainter$HorizontalMarginArray* StyleSheet$BoxPainter$HorizontalMargin::values() {
	$init(StyleSheet$BoxPainter$HorizontalMargin);
	return $cast($StyleSheet$BoxPainter$HorizontalMarginArray, StyleSheet$BoxPainter$HorizontalMargin::$VALUES->clone());
}

StyleSheet$BoxPainter$HorizontalMargin* StyleSheet$BoxPainter$HorizontalMargin::valueOf($String* name) {
	$init(StyleSheet$BoxPainter$HorizontalMargin);
	return $cast(StyleSheet$BoxPainter$HorizontalMargin, $Enum::valueOf(StyleSheet$BoxPainter$HorizontalMargin::class$, name));
}

void StyleSheet$BoxPainter$HorizontalMargin::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$StyleSheet$BoxPainter$HorizontalMargin($Class* class$) {
	$assignStatic(StyleSheet$BoxPainter$HorizontalMargin::LEFT, $new(StyleSheet$BoxPainter$HorizontalMargin, "LEFT"_s, 0));
	$assignStatic(StyleSheet$BoxPainter$HorizontalMargin::RIGHT, $new(StyleSheet$BoxPainter$HorizontalMargin, "RIGHT"_s, 1));
	$assignStatic(StyleSheet$BoxPainter$HorizontalMargin::$VALUES, StyleSheet$BoxPainter$HorizontalMargin::$values());
}

StyleSheet$BoxPainter$HorizontalMargin::StyleSheet$BoxPainter$HorizontalMargin() {
}

$Class* StyleSheet$BoxPainter$HorizontalMargin::load$($String* name, bool initialize) {
	$loadClass(StyleSheet$BoxPainter$HorizontalMargin, name, initialize, &_StyleSheet$BoxPainter$HorizontalMargin_ClassInfo_, clinit$StyleSheet$BoxPainter$HorizontalMargin, allocate$StyleSheet$BoxPainter$HorizontalMargin);
	return class$;
}

$Class* StyleSheet$BoxPainter$HorizontalMargin::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
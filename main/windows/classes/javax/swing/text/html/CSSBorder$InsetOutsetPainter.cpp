#include <javax/swing/text/html/CSSBorder$InsetOutsetPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/CSSBorder$ShadowLightPainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef INSET

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;
using $CSSBorder$ShadowLightPainter = ::javax::swing::text::html::CSSBorder$ShadowLightPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSSBorder$InsetOutsetPainter_FieldInfo_[] = {
	{"type", "Ljavax/swing/text/html/CSS$Value;", nullptr, 0, $field(CSSBorder$InsetOutsetPainter, type)},
	{}
};

$MethodInfo _CSSBorder$InsetOutsetPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/CSS$Value;)V", nullptr, 0, $method(static_cast<void(CSSBorder$InsetOutsetPainter::*)($CSS$Value*)>(&CSSBorder$InsetOutsetPainter::init$))},
	{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSSBorder$InsetOutsetPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$InsetOutsetPainter", "javax.swing.text.html.CSSBorder", "InsetOutsetPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$ShadowLightPainter", "javax.swing.text.html.CSSBorder", "ShadowLightPainter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$InsetOutsetPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSSBorder$InsetOutsetPainter",
	"javax.swing.text.html.CSSBorder$ShadowLightPainter",
	nullptr,
	_CSSBorder$InsetOutsetPainter_FieldInfo_,
	_CSSBorder$InsetOutsetPainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$InsetOutsetPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$InsetOutsetPainter($Class* clazz) {
	return $of($alloc(CSSBorder$InsetOutsetPainter));
}

void CSSBorder$InsetOutsetPainter::init$($CSS$Value* type) {
	$CSSBorder$ShadowLightPainter::init$();
	$set(this, type, type);
}

void CSSBorder$InsetOutsetPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$useLocalCurrentObjectStackCache();
	$init($CSS$Value);
	$nc(g)->setColor(((side + 1) % 4 < 2) == (this->type == $CSS$Value::INSET) ? $(getShadowColor(color)) : $(getLightColor(color)));
	g->fillPolygon(shape);
}

CSSBorder$InsetOutsetPainter::CSSBorder$InsetOutsetPainter() {
}

$Class* CSSBorder$InsetOutsetPainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$InsetOutsetPainter, name, initialize, &_CSSBorder$InsetOutsetPainter_ClassInfo_, allocate$CSSBorder$InsetOutsetPainter);
	return class$;
}

$Class* CSSBorder$InsetOutsetPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
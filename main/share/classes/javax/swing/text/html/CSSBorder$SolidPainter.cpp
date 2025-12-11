#include <javax/swing/text/html/CSSBorder$SolidPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSSBorder$SolidPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSSBorder$SolidPainter::*)()>(&CSSBorder$SolidPainter::init$))},
	{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSSBorder$SolidPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$SolidPainter", "javax.swing.text.html.CSSBorder", "SolidPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$SolidPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSSBorder$SolidPainter",
	"java.lang.Object",
	"javax.swing.text.html.CSSBorder$BorderPainter",
	nullptr,
	_CSSBorder$SolidPainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$SolidPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$SolidPainter($Class* clazz) {
	return $of($alloc(CSSBorder$SolidPainter));
}

void CSSBorder$SolidPainter::init$() {
}

void CSSBorder$SolidPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$nc(g)->setColor(color);
	g->fillPolygon(shape);
}

CSSBorder$SolidPainter::CSSBorder$SolidPainter() {
}

$Class* CSSBorder$SolidPainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$SolidPainter, name, initialize, &_CSSBorder$SolidPainter_ClassInfo_, allocate$CSSBorder$SolidPainter);
	return class$;
}

$Class* CSSBorder$SolidPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
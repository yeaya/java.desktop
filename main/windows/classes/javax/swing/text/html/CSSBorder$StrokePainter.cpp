#include <javax/swing/text/html/CSSBorder$StrokePainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef X_AXIS

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $View = ::javax::swing::text::View;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;
using $CSSBorder$BorderPainter = ::javax::swing::text::html::CSSBorder$BorderPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSSBorder$StrokePainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSSBorder$StrokePainter::*)()>(&CSSBorder$StrokePainter::init$))},
	{"paintStrokes", "(Ljava/awt/Rectangle;Ljava/awt/Graphics;I[I[Ljava/awt/Color;)V", nullptr, 0},
	{}
};

$InnerClassInfo _CSSBorder$StrokePainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$StrokePainter", "javax.swing.text.html.CSSBorder", "StrokePainter", $STATIC | $ABSTRACT},
	{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$StrokePainter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.html.CSSBorder$StrokePainter",
	"java.lang.Object",
	"javax.swing.text.html.CSSBorder$BorderPainter",
	nullptr,
	_CSSBorder$StrokePainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$StrokePainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$StrokePainter($Class* clazz) {
	return $of($alloc(CSSBorder$StrokePainter));
}

void CSSBorder$StrokePainter::init$() {
}

void CSSBorder$StrokePainter::paintStrokes($Rectangle* r, $Graphics* g, int32_t axis, $ints* lengthPattern, $ColorArray* colorPattern) {
	$useLocalCurrentObjectStackCache();
	bool xAxis = (axis == $View::X_AXIS);
	int32_t start = 0;
	int32_t end = (xAxis ? $nc(r)->width : r->height);
	while (start < end) {
		for (int32_t i = 0; i < $nc(lengthPattern)->length; ++i) {
			if (start >= end) {
				break;
			}
			int32_t length = lengthPattern->get(i);
			$var($Color, c, $nc(colorPattern)->get(i));
			if (c != nullptr) {
				int32_t x = r->x + (xAxis ? start : 0);
				int32_t y = r->y + (xAxis ? 0 : start);
				int32_t width = xAxis ? length : r->width;
				int32_t height = xAxis ? r->height : length;
				$nc(g)->setColor(c);
				g->fillRect(x, y, width, height);
			}
			start += length;
		}
	}
}

CSSBorder$StrokePainter::CSSBorder$StrokePainter() {
}

$Class* CSSBorder$StrokePainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$StrokePainter, name, initialize, &_CSSBorder$StrokePainter_ClassInfo_, allocate$CSSBorder$StrokePainter);
	return class$;
}

$Class* CSSBorder$StrokePainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
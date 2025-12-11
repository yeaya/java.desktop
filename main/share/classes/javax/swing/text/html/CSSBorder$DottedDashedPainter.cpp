#include <javax/swing/text/html/CSSBorder$DottedDashedPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSSBorder$StrokePainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef X_AXIS

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $View = ::javax::swing::text::View;
using $CSSBorder$StrokePainter = ::javax::swing::text::html::CSSBorder$StrokePainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSSBorder$DottedDashedPainter_FieldInfo_[] = {
	{"factor", "I", nullptr, $FINAL, $field(CSSBorder$DottedDashedPainter, factor)},
	{}
};

$MethodInfo _CSSBorder$DottedDashedPainter_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(CSSBorder$DottedDashedPainter::*)(int32_t)>(&CSSBorder$DottedDashedPainter::init$))},
	{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSSBorder$DottedDashedPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$DottedDashedPainter", "javax.swing.text.html.CSSBorder", "DottedDashedPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$StrokePainter", "javax.swing.text.html.CSSBorder", "StrokePainter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$DottedDashedPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSSBorder$DottedDashedPainter",
	"javax.swing.text.html.CSSBorder$StrokePainter",
	nullptr,
	_CSSBorder$DottedDashedPainter_FieldInfo_,
	_CSSBorder$DottedDashedPainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$DottedDashedPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$DottedDashedPainter($Class* clazz) {
	return $of($alloc(CSSBorder$DottedDashedPainter));
}

void CSSBorder$DottedDashedPainter::init$(int32_t factor) {
	$CSSBorder$StrokePainter::init$();
	this->factor = factor;
}

void CSSBorder$DottedDashedPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $nc(shape)->getBounds());
	int32_t length = $nc(r)->height * this->factor;
	$var($ints, lengthPattern, $new($ints, {
		length,
		length
	}));
	$var($ColorArray, colorPattern, $new($ColorArray, {
		color,
		($Color*)nullptr
	}));
	paintStrokes(r, g, $View::X_AXIS, lengthPattern, colorPattern);
}

CSSBorder$DottedDashedPainter::CSSBorder$DottedDashedPainter() {
}

$Class* CSSBorder$DottedDashedPainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$DottedDashedPainter, name, initialize, &_CSSBorder$DottedDashedPainter_ClassInfo_, allocate$CSSBorder$DottedDashedPainter);
	return class$;
}

$Class* CSSBorder$DottedDashedPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
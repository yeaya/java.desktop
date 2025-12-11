#include <javax/swing/text/html/CSSBorder$GrooveRidgePainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Math.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/CSS$Value.h>
#include <javax/swing/text/html/CSSBorder$ShadowLightPainter.h>
#include <javax/swing/text/html/CSSBorder$StrokePainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

#undef GROOVE
#undef Y_AXIS

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $View = ::javax::swing::text::View;
using $CSS$Value = ::javax::swing::text::html::CSS$Value;
using $CSSBorder$ShadowLightPainter = ::javax::swing::text::html::CSSBorder$ShadowLightPainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _CSSBorder$GrooveRidgePainter_FieldInfo_[] = {
	{"type", "Ljavax/swing/text/html/CSS$Value;", nullptr, $FINAL, $field(CSSBorder$GrooveRidgePainter, type)},
	{}
};

$MethodInfo _CSSBorder$GrooveRidgePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/CSS$Value;)V", nullptr, 0, $method(static_cast<void(CSSBorder$GrooveRidgePainter::*)($CSS$Value*)>(&CSSBorder$GrooveRidgePainter::init$))},
	{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSSBorder$GrooveRidgePainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$GrooveRidgePainter", "javax.swing.text.html.CSSBorder", "GrooveRidgePainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$ShadowLightPainter", "javax.swing.text.html.CSSBorder", "ShadowLightPainter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$GrooveRidgePainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSSBorder$GrooveRidgePainter",
	"javax.swing.text.html.CSSBorder$ShadowLightPainter",
	nullptr,
	_CSSBorder$GrooveRidgePainter_FieldInfo_,
	_CSSBorder$GrooveRidgePainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$GrooveRidgePainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$GrooveRidgePainter($Class* clazz) {
	return $of($alloc(CSSBorder$GrooveRidgePainter));
}

void CSSBorder$GrooveRidgePainter::init$($CSS$Value* type) {
	$CSSBorder$ShadowLightPainter::init$();
	$set(this, type, type);
}

void CSSBorder$GrooveRidgePainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, $nc(shape)->getBounds());
	int32_t length = $Math::max($nc(r)->height / 2, 1);
	$var($ints, lengthPattern, $new($ints, {
		length,
		length
	}));
	$init($CSS$Value);
	$var($ColorArray, colorPattern, ((side + 1) % 4 < 2) == (this->type == $CSS$Value::GROOVE) ? $new($ColorArray, {
		$(getShadowColor(color)),
		$(getLightColor(color))
	}) : $new($ColorArray, {
		$(getLightColor(color)),
		$(getShadowColor(color))
	}));
	paintStrokes(r, g, $View::Y_AXIS, lengthPattern, colorPattern);
}

CSSBorder$GrooveRidgePainter::CSSBorder$GrooveRidgePainter() {
}

$Class* CSSBorder$GrooveRidgePainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$GrooveRidgePainter, name, initialize, &_CSSBorder$GrooveRidgePainter_ClassInfo_, allocate$CSSBorder$GrooveRidgePainter);
	return class$;
}

$Class* CSSBorder$GrooveRidgePainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
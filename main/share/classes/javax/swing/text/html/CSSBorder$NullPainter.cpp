#include <javax/swing/text/html/CSSBorder$NullPainter.h>

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

$MethodInfo _CSSBorder$NullPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSSBorder$NullPainter::*)()>(&CSSBorder$NullPainter::init$))},
	{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CSSBorder$NullPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$NullPainter", "javax.swing.text.html.CSSBorder", "NullPainter", $STATIC},
	{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$NullPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSSBorder$NullPainter",
	"java.lang.Object",
	"javax.swing.text.html.CSSBorder$BorderPainter",
	nullptr,
	_CSSBorder$NullPainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$NullPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$NullPainter($Class* clazz) {
	return $of($alloc(CSSBorder$NullPainter));
}

void CSSBorder$NullPainter::init$() {
}

void CSSBorder$NullPainter::paint($Polygon* shape, $Graphics* g, $Color* color, int32_t side) {
}

CSSBorder$NullPainter::CSSBorder$NullPainter() {
}

$Class* CSSBorder$NullPainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$NullPainter, name, initialize, &_CSSBorder$NullPainter_ClassInfo_, allocate$CSSBorder$NullPainter);
	return class$;
}

$Class* CSSBorder$NullPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
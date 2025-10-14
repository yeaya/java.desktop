#include <javax/swing/text/html/CSSBorder$ShadowLightPainter.h>

#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSSBorder$StrokePainter.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;
using $CSSBorder$StrokePainter = ::javax::swing::text::html::CSSBorder$StrokePainter;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSSBorder$ShadowLightPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSSBorder$ShadowLightPainter::*)()>(&CSSBorder$ShadowLightPainter::init$))},
	{"getLightColor", "(Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $STATIC, $method(static_cast<$Color*(*)($Color*)>(&CSSBorder$ShadowLightPainter::getLightColor))},
	{"getShadowColor", "(Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $STATIC, $method(static_cast<$Color*(*)($Color*)>(&CSSBorder$ShadowLightPainter::getShadowColor))},
	{}
};

$InnerClassInfo _CSSBorder$ShadowLightPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$ShadowLightPainter", "javax.swing.text.html.CSSBorder", "ShadowLightPainter", $STATIC | $ABSTRACT},
	{"javax.swing.text.html.CSSBorder$StrokePainter", "javax.swing.text.html.CSSBorder", "StrokePainter", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$ShadowLightPainter_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.swing.text.html.CSSBorder$ShadowLightPainter",
	"javax.swing.text.html.CSSBorder$StrokePainter",
	nullptr,
	nullptr,
	_CSSBorder$ShadowLightPainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$ShadowLightPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$ShadowLightPainter($Class* clazz) {
	return $of($alloc(CSSBorder$ShadowLightPainter));
}

void CSSBorder$ShadowLightPainter::init$() {
	$CSSBorder$StrokePainter::init$();
}

$Color* CSSBorder$ShadowLightPainter::getShadowColor($Color* c) {
	$init(CSSBorder$ShadowLightPainter);
	return $CSSBorder::getAdjustedColor(c, -0.3);
}

$Color* CSSBorder$ShadowLightPainter::getLightColor($Color* c) {
	$init(CSSBorder$ShadowLightPainter);
	return $CSSBorder::getAdjustedColor(c, 0.7);
}

CSSBorder$ShadowLightPainter::CSSBorder$ShadowLightPainter() {
}

$Class* CSSBorder$ShadowLightPainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$ShadowLightPainter, name, initialize, &_CSSBorder$ShadowLightPainter_ClassInfo_, allocate$CSSBorder$ShadowLightPainter);
	return class$;
}

$Class* CSSBorder$ShadowLightPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
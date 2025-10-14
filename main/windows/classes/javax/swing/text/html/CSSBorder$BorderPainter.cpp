#include <javax/swing/text/html/CSSBorder$BorderPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSSBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSSBorder = ::javax::swing::text::html::CSSBorder;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSSBorder$BorderPainter_MethodInfo_[] = {
	{"paint", "(Ljava/awt/Polygon;Ljava/awt/Graphics;Ljava/awt/Color;I)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CSSBorder$BorderPainter_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSBorder$BorderPainter", "javax.swing.text.html.CSSBorder", "BorderPainter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSBorder$BorderPainter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.html.CSSBorder$BorderPainter",
	nullptr,
	nullptr,
	nullptr,
	_CSSBorder$BorderPainter_MethodInfo_,
	nullptr,
	nullptr,
	_CSSBorder$BorderPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSBorder"
};

$Object* allocate$CSSBorder$BorderPainter($Class* clazz) {
	return $of($alloc(CSSBorder$BorderPainter));
}

$Class* CSSBorder$BorderPainter::load$($String* name, bool initialize) {
	$loadClass(CSSBorder$BorderPainter, name, initialize, &_CSSBorder$BorderPainter_ClassInfo_, allocate$CSSBorder$BorderPainter);
	return class$;
}

$Class* CSSBorder$BorderPainter::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
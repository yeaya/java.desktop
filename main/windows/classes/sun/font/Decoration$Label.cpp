#include <sun/font/Decoration$Label.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Rectangle2D.h>
#include <sun/font/CoreMetrics.h>
#include <sun/font/Decoration.h>
#include <jcpp.h>

using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CoreMetrics = ::sun::font::CoreMetrics;
using $Decoration = ::sun::font::Decoration;

namespace sun {
	namespace font {

$MethodInfo _Decoration$Label_MethodInfo_[] = {
	{"getCoreMetrics", "()Lsun/font/CoreMetrics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getLogicalBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"handleDraw", "(Ljava/awt/Graphics2D;FF)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleGetCharVisualBounds", "(I)Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{"handleGetOutline", "(FF)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT},
	{"handleGetVisualBounds", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Decoration$Label_InnerClassesInfo_[] = {
	{"sun.font.Decoration$Label", "sun.font.Decoration", "Label", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Decoration$Label_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.font.Decoration$Label",
	nullptr,
	nullptr,
	nullptr,
	_Decoration$Label_MethodInfo_,
	nullptr,
	nullptr,
	_Decoration$Label_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.Decoration"
};

$Object* allocate$Decoration$Label($Class* clazz) {
	return $of($alloc(Decoration$Label));
}

$Class* Decoration$Label::load$($String* name, bool initialize) {
	$loadClass(Decoration$Label, name, initialize, &_Decoration$Label_ClassInfo_, allocate$Decoration$Label);
	return class$;
}

$Class* Decoration$Label::class$ = nullptr;

	} // font
} // sun
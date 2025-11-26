#include <javax/swing/plaf/nimbus/ToolBarSeparatorPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef INSET
#undef NO_CACHING
#undef SPACE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _ToolBarSeparatorPainter_FieldInfo_[] = {
	{"SPACE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ToolBarSeparatorPainter, SPACE)},
	{"INSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ToolBarSeparatorPainter, INSET)},
	{}
};

$MethodInfo _ToolBarSeparatorPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ToolBarSeparatorPainter::*)()>(&ToolBarSeparatorPainter::init$))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ToolBarSeparatorPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ToolBarSeparatorPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ToolBarSeparatorPainter_FieldInfo_,
	_ToolBarSeparatorPainter_MethodInfo_
};

$Object* allocate$ToolBarSeparatorPainter($Class* clazz) {
	return $of($alloc(ToolBarSeparatorPainter));
}

void ToolBarSeparatorPainter::init$() {
	$AbstractRegionPainter::init$();
}

$AbstractRegionPainter$PaintContext* ToolBarSeparatorPainter::getPaintContext() {
	$useLocalCurrentObjectStackCache();
	$var($Insets, var$0, $new($Insets, 1, 0, 1, 0));
	$init($AbstractRegionPainter$PaintContext$CacheMode);
	return $new($AbstractRegionPainter$PaintContext, var$0, $$new($Dimension, 38, 7), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, (double)1, (double)1);
}

void ToolBarSeparatorPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$nc(g)->setColor($($nc(c)->getForeground()));
	int32_t y = height / 2;
	for (int32_t i = ToolBarSeparatorPainter::INSET; i <= width - ToolBarSeparatorPainter::INSET; i += ToolBarSeparatorPainter::SPACE) {
		g->fillRect(i, y, 1, 1);
	}
}

ToolBarSeparatorPainter::ToolBarSeparatorPainter() {
}

$Class* ToolBarSeparatorPainter::load$($String* name, bool initialize) {
	$loadClass(ToolBarSeparatorPainter, name, initialize, &_ToolBarSeparatorPainter_ClassInfo_, allocate$ToolBarSeparatorPainter);
	return class$;
}

$Class* ToolBarSeparatorPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
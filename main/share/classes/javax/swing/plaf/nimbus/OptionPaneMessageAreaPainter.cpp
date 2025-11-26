#include <javax/swing/plaf/nimbus/OptionPaneMessageAreaPainter.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef BACKGROUND_ENABLED

using $Graphics2D = ::java::awt::Graphics2D;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _OptionPaneMessageAreaPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(OptionPaneMessageAreaPainter, BACKGROUND_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(OptionPaneMessageAreaPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaPainter, ellipse)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(OptionPaneMessageAreaPainter, componentColors)},
	{}
};

$MethodInfo _OptionPaneMessageAreaPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(OptionPaneMessageAreaPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&OptionPaneMessageAreaPainter::init$))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _OptionPaneMessageAreaPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.OptionPaneMessageAreaPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_OptionPaneMessageAreaPainter_FieldInfo_,
	_OptionPaneMessageAreaPainter_MethodInfo_
};

$Object* allocate$OptionPaneMessageAreaPainter($Class* clazz) {
	return $of($alloc(OptionPaneMessageAreaPainter));
}

void OptionPaneMessageAreaPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	this->state = state;
	$set(this, ctx, ctx);
}

void OptionPaneMessageAreaPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	}
}

$AbstractRegionPainter$PaintContext* OptionPaneMessageAreaPainter::getPaintContext() {
	return this->ctx;
}

OptionPaneMessageAreaPainter::OptionPaneMessageAreaPainter() {
}

$Class* OptionPaneMessageAreaPainter::load$($String* name, bool initialize) {
	$loadClass(OptionPaneMessageAreaPainter, name, initialize, &_OptionPaneMessageAreaPainter_ClassInfo_, allocate$OptionPaneMessageAreaPainter);
	return class$;
}

$Class* OptionPaneMessageAreaPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
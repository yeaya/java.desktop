#include <javax/swing/plaf/nimbus/TableHeaderPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/Paint.h>
#include <java/awt/Shape.h>
#include <java/awt/geom/Ellipse2D$Float.h>
#include <java/awt/geom/Ellipse2D.h>
#include <java/awt/geom/Path2D$Float.h>
#include <java/awt/geom/Path2D.h>
#include <java/awt/geom/Rectangle2D$Float.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RoundRectangle2D$Float.h>
#include <java/awt/geom/RoundRectangle2D.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef ASCENDINGSORTICON_ENABLED
#undef DESCENDINGSORTICON_ENABLED

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $Paint = ::java::awt::Paint;
using $Shape = ::java::awt::Shape;
using $Ellipse2D = ::java::awt::geom::Ellipse2D;
using $Ellipse2D$Float = ::java::awt::geom::Ellipse2D$Float;
using $Path2D = ::java::awt::geom::Path2D;
using $Path2D$Float = ::java::awt::geom::Path2D$Float;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $Rectangle2D$Float = ::java::awt::geom::Rectangle2D$Float;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $RoundRectangle2D = ::java::awt::geom::RoundRectangle2D;
using $RoundRectangle2D$Float = ::java::awt::geom::RoundRectangle2D$Float;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractRegionPainter = ::javax::swing::plaf::nimbus::AbstractRegionPainter;
using $AbstractRegionPainter$PaintContext = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _TableHeaderPainter_FieldInfo_[] = {
	{"ASCENDINGSORTICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderPainter, ASCENDINGSORTICON_ENABLED)},
	{"DESCENDINGSORTICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderPainter, DESCENDINGSORTICON_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(TableHeaderPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TableHeaderPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TableHeaderPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TableHeaderPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TableHeaderPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TableHeaderPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderPainter, color2)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TableHeaderPainter, componentColors)},
	{}
};

$MethodInfo _TableHeaderPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(TableHeaderPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&TableHeaderPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TableHeaderPainter::*)($Shape*)>(&TableHeaderPainter::decodeGradient1))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TableHeaderPainter::*)()>(&TableHeaderPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TableHeaderPainter::*)()>(&TableHeaderPainter::decodePath2))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintascendingSortIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderPainter::*)($Graphics2D*)>(&TableHeaderPainter::paintascendingSortIconEnabled))},
	{"paintdescendingSortIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderPainter::*)($Graphics2D*)>(&TableHeaderPainter::paintdescendingSortIconEnabled))},
	{}
};

$ClassInfo _TableHeaderPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TableHeaderPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TableHeaderPainter_FieldInfo_,
	_TableHeaderPainter_MethodInfo_
};

$Object* allocate$TableHeaderPainter($Class* clazz) {
	return $of($alloc(TableHeaderPainter));
}

void TableHeaderPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.0057927966f, -0.21904764f, 0.15686274f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.0038565993f, 0.02012986f, 0.054901958f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TableHeaderPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TableHeaderPainter::ASCENDINGSORTICON_ENABLED:
		{
			paintascendingSortIconEnabled(g);
			break;
		}
	case TableHeaderPainter::DESCENDINGSORTICON_ENABLED:
		{
			paintdescendingSortIconEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* TableHeaderPainter::getPaintContext() {
	return this->ctx;
}

void TableHeaderPainter::paintascendingSortIconEnabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
}

void TableHeaderPainter::paintdescendingSortIconEnabled($Graphics2D* g) {
	$set(this, path, decodePath2());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
}

$Path2D* TableHeaderPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(1.7070175f);
	$nc(this->path)->lineTo(var$1, decodeY(0.0f));
	double var$2 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.0f));
	double var$3 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$3, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TableHeaderPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(1.5025063f);
	$nc(this->path)->lineTo(var$2, decodeY(2.0f));
	double var$3 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$3, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* TableHeaderPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

TableHeaderPainter::TableHeaderPainter() {
}

$Class* TableHeaderPainter::load$($String* name, bool initialize) {
	$loadClass(TableHeaderPainter, name, initialize, &_TableHeaderPainter_ClassInfo_, allocate$TableHeaderPainter);
	return class$;
}

$Class* TableHeaderPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
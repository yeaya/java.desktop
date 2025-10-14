#include <javax/swing/plaf/nimbus/TableHeaderRendererPainter.h>

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
#include <java/awt/geom/RectangularShape.h>
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

#undef BACKGROUND_DISABLED
#undef BACKGROUND_DISABLED_SORTED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_FOCUSED
#undef BACKGROUND_ENABLED_FOCUSED_SORTED
#undef BACKGROUND_ENABLED_SORTED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_PRESSED

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

$FieldInfo _TableHeaderRendererPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_ENABLED_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_ENABLED_SORTED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_ENABLED_SORTED)},
	{"BACKGROUND_ENABLED_FOCUSED_SORTED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_ENABLED_FOCUSED_SORTED)},
	{"BACKGROUND_DISABLED_SORTED", "I", nullptr, $STATIC | $FINAL, $constField(TableHeaderRendererPainter, BACKGROUND_DISABLED_SORTED)},
	{"state", "I", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, color24)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TableHeaderRendererPainter, componentColors)},
	{}
};

$MethodInfo _TableHeaderRendererPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(TableHeaderRendererPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&TableHeaderRendererPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TableHeaderRendererPainter::*)($Shape*)>(&TableHeaderRendererPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TableHeaderRendererPainter::*)($Shape*)>(&TableHeaderRendererPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TableHeaderRendererPainter::*)($Shape*)>(&TableHeaderRendererPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TableHeaderRendererPainter::*)($Shape*)>(&TableHeaderRendererPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TableHeaderRendererPainter::*)($Shape*)>(&TableHeaderRendererPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TableHeaderRendererPainter::*)($Shape*)>(&TableHeaderRendererPainter::decodeGradient6))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TableHeaderRendererPainter::*)()>(&TableHeaderRendererPainter::decodePath1))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TableHeaderRendererPainter::*)()>(&TableHeaderRendererPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TableHeaderRendererPainter::*)()>(&TableHeaderRendererPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TableHeaderRendererPainter::*)()>(&TableHeaderRendererPainter::decodeRect3))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundDisabled))},
	{"paintBackgroundDisabledAndSorted", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundDisabledAndSorted))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundEnabledAndFocused))},
	{"paintBackgroundEnabledAndFocusedAndSorted", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundEnabledAndFocusedAndSorted))},
	{"paintBackgroundEnabledAndSorted", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundEnabledAndSorted))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundMouseOver))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TableHeaderRendererPainter::*)($Graphics2D*)>(&TableHeaderRendererPainter::paintBackgroundPressed))},
	{}
};

$ClassInfo _TableHeaderRendererPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TableHeaderRendererPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TableHeaderRendererPainter_FieldInfo_,
	_TableHeaderRendererPainter_MethodInfo_
};

$Object* allocate$TableHeaderRendererPainter($Class* clazz) {
	return $of($alloc(TableHeaderRendererPainter));
}

void TableHeaderRendererPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBorder"_s, -0.013888836f, 5.823001E-4f, -0.12941176f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.08625447f, 0.062745094f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, -0.013888836f, -0.028334536f, -0.17254901f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, -0.013888836f, -0.029445238f, -0.16470587f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, -0.02020204f, -0.053531498f, 0.011764705f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10655806f, 0.24313724f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08455229f, 0.1607843f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07016757f, 0.12941176f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07466974f, 0.23921567f, 0));
	$set(this, color10, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10658931f, 0.25098038f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08613607f, 0.21960783f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07333623f, 0.20392156f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.05960039f, 0.10196078f, 0));
	$set(this, color16, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.017742813f, 0.015686274f, 0));
	$set(this, color17, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0018306673f, -0.02352941f, 0));
	$set(this, color18, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.020436227f, 0.12549019f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, -0.023096085f, -0.62376213f, 0.4352941f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, -0.0012707114f, -0.50901747f, 0.31764704f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, -0.002461195f, -0.47139505f, 0.2862745f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, -0.0051222444f, -0.49103343f, 0.372549f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, -8.738637E-4f, -0.49872798f, 0.3098039f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, -2.2029877E-4f, -0.4916465f, 0.37647057f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TableHeaderRendererPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TableHeaderRendererPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case TableHeaderRendererPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case TableHeaderRendererPainter::BACKGROUND_ENABLED_FOCUSED:
		{
			paintBackgroundEnabledAndFocused(g);
			break;
		}
	case TableHeaderRendererPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case TableHeaderRendererPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case TableHeaderRendererPainter::BACKGROUND_ENABLED_SORTED:
		{
			paintBackgroundEnabledAndSorted(g);
			break;
		}
	case TableHeaderRendererPainter::BACKGROUND_ENABLED_FOCUSED_SORTED:
		{
			paintBackgroundEnabledAndFocusedAndSorted(g);
			break;
		}
	case TableHeaderRendererPainter::BACKGROUND_DISABLED_SORTED:
		{
			paintBackgroundDisabledAndSorted(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* TableHeaderRendererPainter::getPaintContext() {
	return this->ctx;
}

void TableHeaderRendererPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
}

void TableHeaderRendererPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
}

void TableHeaderRendererPainter::paintBackgroundEnabledAndFocused($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color10);
	g->fill(this->path);
}

void TableHeaderRendererPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient3(this->rect)));
	g->fill(this->rect);
}

void TableHeaderRendererPainter::paintBackgroundPressed($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient4(this->rect)));
	g->fill(this->rect);
}

void TableHeaderRendererPainter::paintBackgroundEnabledAndSorted($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient5(this->rect)));
	g->fill(this->rect);
}

void TableHeaderRendererPainter::paintBackgroundEnabledAndFocusedAndSorted($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient6(this->rect)));
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color10);
	g->fill(this->path);
}

void TableHeaderRendererPainter::paintBackgroundDisabledAndSorted($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
}

$Rectangle2D* TableHeaderRendererPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(2.8f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.8f));
	return this->rect;
}

$Rectangle2D* TableHeaderRendererPainter::decodeRect2() {
	double var$0 = (double)decodeX(2.8f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(2.8f));
	float var$4 = decodeY(2.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* TableHeaderRendererPainter::decodeRect3() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(2.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Path2D* TableHeaderRendererPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(3.0f));
	double var$2 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$3, decodeY(0.0f));
	double var$4 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$4, decodeY(0.0f));
	double var$5 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$5, decodeY(0.24000001f));
	double var$6 = (double)decodeX(2.7599998f);
	$nc(this->path)->lineTo(var$6, decodeY(0.24000001f));
	double var$7 = (double)decodeX(2.7599998f);
	$nc(this->path)->lineTo(var$7, decodeY(2.7599998f));
	double var$8 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$8, decodeY(2.7599998f));
	double var$9 = (double)decodeX(0.24000001f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	double var$10 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$10, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* TableHeaderRendererPainter::decodeGradient1($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.14441223f,
		0.43703705f,
		0.59444445f,
		0.75185186f,
		0.8759259f,
		1.0f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* TableHeaderRendererPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.07147767f,
		0.2888889f,
		0.5490909f,
		0.7037037f,
		0.8518518f,
		1.0f
	}), $$new($ColorArray, {
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* TableHeaderRendererPainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.07147767f,
		0.2888889f,
		0.5490909f,
		0.7037037f,
		0.7919203f,
		0.88013697f
	}), $$new($ColorArray, {
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* TableHeaderRendererPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.07147767f,
		0.2888889f,
		0.5490909f,
		0.7037037f,
		0.8518518f,
		1.0f
	}), $$new($ColorArray, {
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* TableHeaderRendererPainter::decodeGradient5($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.08049711f,
		0.32534248f,
		0.56267816f,
		0.7037037f,
		0.83986557f,
		0.97602737f
	}), $$new($ColorArray, {
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* TableHeaderRendererPainter::decodeGradient6($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.07147767f,
		0.2888889f,
		0.5490909f,
		0.7037037f,
		0.8518518f,
		1.0f
	}), $$new($ColorArray, {
		this->color19,
		$(decodeColor(this->color19, this->color23, 0.5f)),
		this->color23,
		$(decodeColor(this->color23, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color24, 0.5f)),
		this->color24
	}));
}

TableHeaderRendererPainter::TableHeaderRendererPainter() {
}

$Class* TableHeaderRendererPainter::load$($String* name, bool initialize) {
	$loadClass(TableHeaderRendererPainter, name, initialize, &_TableHeaderRendererPainter_ClassInfo_, allocate$TableHeaderRendererPainter);
	return class$;
}

$Class* TableHeaderRendererPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
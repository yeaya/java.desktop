#include <javax/swing/plaf/nimbus/TreePainter.h>

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
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter.h>
#include <jcpp.h>

#undef BACKGROUND_DISABLED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_SELECTED
#undef CLOSEDICON_ENABLED
#undef COLLAPSEDICON_ENABLED
#undef COLLAPSEDICON_ENABLED_SELECTED
#undef EXPANDEDICON_ENABLED
#undef EXPANDEDICON_ENABLED_SELECTED
#undef LEAFICON_ENABLED
#undef OPENICON_ENABLED

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

$FieldInfo _TreePainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, BACKGROUND_ENABLED_SELECTED)},
	{"LEAFICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, LEAFICON_ENABLED)},
	{"CLOSEDICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, CLOSEDICON_ENABLED)},
	{"OPENICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, OPENICON_ENABLED)},
	{"COLLAPSEDICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, COLLAPSEDICON_ENABLED)},
	{"COLLAPSEDICON_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, COLLAPSEDICON_ENABLED_SELECTED)},
	{"EXPANDEDICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, EXPANDEDICON_ENABLED)},
	{"EXPANDEDICON_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(TreePainter, EXPANDEDICON_ENABLED_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(TreePainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TreePainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TreePainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TreePainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TreePainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TreePainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TreePainter, color26)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TreePainter, componentColors)},
	{}
};

$MethodInfo _TreePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(TreePainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&TreePainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TreePainter::*)($Shape*)>(&TreePainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TreePainter::*)($Shape*)>(&TreePainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TreePainter::*)($Shape*)>(&TreePainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TreePainter::*)($Shape*)>(&TreePainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TreePainter::*)($Shape*)>(&TreePainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TreePainter::*)($Shape*)>(&TreePainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TreePainter::*)($Shape*)>(&TreePainter::decodeGradient7))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath1))},
	{"decodePath10", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath10))},
	{"decodePath11", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath11))},
	{"decodePath12", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath12))},
	{"decodePath13", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath13))},
	{"decodePath14", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath14))},
	{"decodePath15", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath15))},
	{"decodePath16", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath16))},
	{"decodePath17", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath17))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TreePainter::*)()>(&TreePainter::decodePath9))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TreePainter::*)()>(&TreePainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TreePainter::*)()>(&TreePainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TreePainter::*)()>(&TreePainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(TreePainter::*)()>(&TreePainter::decodeRect4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintclosedIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreePainter::*)($Graphics2D*)>(&TreePainter::paintclosedIconEnabled))},
	{"paintcollapsedIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreePainter::*)($Graphics2D*)>(&TreePainter::paintcollapsedIconEnabled))},
	{"paintcollapsedIconEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreePainter::*)($Graphics2D*)>(&TreePainter::paintcollapsedIconEnabledAndSelected))},
	{"paintexpandedIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreePainter::*)($Graphics2D*)>(&TreePainter::paintexpandedIconEnabled))},
	{"paintexpandedIconEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreePainter::*)($Graphics2D*)>(&TreePainter::paintexpandedIconEnabledAndSelected))},
	{"paintleafIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreePainter::*)($Graphics2D*)>(&TreePainter::paintleafIconEnabled))},
	{"paintopenIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TreePainter::*)($Graphics2D*)>(&TreePainter::paintopenIconEnabled))},
	{}
};

$ClassInfo _TreePainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TreePainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TreePainter_FieldInfo_,
	_TreePainter_MethodInfo_
};

$Object* allocate$TreePainter($Class* clazz) {
	return $of($alloc(TreePainter));
}

void TreePainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.065654516f, -0.13333333f, 0));
	$set(this, color2, $new($Color, 97, 98, 102, 255));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, -0.032679737f, -0.043332636f, 0.24705881f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.0077680945f, -0.51781034f, 0.3490196f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 0.013940871f, -0.599277f, 0.41960782f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 0.004681647f, -0.4198052f, 0.14117646f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -127));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.0f, -0.21f, -99));
	$set(this, color10, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.45978838f, 0.2980392f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 0.0015952587f, -0.34848025f, 0.18823528f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.0015952587f, -0.30844158f, 0.09803921f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.0015952587f, -0.27329817f, 0.035294116f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -125));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -50));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -100));
	$set(this, color18, decodeColor("nimbusBase"_s, 0.0012094378f, -0.23571429f, -0.0784314f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.115166366f, -0.2627451f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 0.0027436614f, -0.335015f, 0.011764705f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 0.0024294257f, -0.3857143f, 0.031372547f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 0.0018081069f, -0.3595238f, -0.13725492f, 0));
	$set(this, color23, $new($Color, 255, 200, 0, 255));
	$set(this, color24, decodeColor("nimbusBase"_s, 0.004681647f, -0.33496243f, -0.027450979f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 0.0019934773f, -0.361378f, -0.10588238f, 0));
	$set(this, color26, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.34509805f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TreePainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TreePainter::LEAFICON_ENABLED:
		{
			paintleafIconEnabled(g);
			break;
		}
	case TreePainter::CLOSEDICON_ENABLED:
		{
			paintclosedIconEnabled(g);
			break;
		}
	case TreePainter::OPENICON_ENABLED:
		{
			paintopenIconEnabled(g);
			break;
		}
	case TreePainter::COLLAPSEDICON_ENABLED:
		{
			paintcollapsedIconEnabled(g);
			break;
		}
	case TreePainter::COLLAPSEDICON_ENABLED_SELECTED:
		{
			paintcollapsedIconEnabledAndSelected(g);
			break;
		}
	case TreePainter::EXPANDEDICON_ENABLED:
		{
			paintexpandedIconEnabled(g);
			break;
		}
	case TreePainter::EXPANDEDICON_ENABLED_SELECTED:
		{
			paintexpandedIconEnabledAndSelected(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* TreePainter::getPaintContext() {
	return this->ctx;
}

void TreePainter::paintleafIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color2);
	g->fill(this->rect);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color7);
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint(this->color8);
	g->fill(this->path);
}

void TreePainter::paintclosedIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath6());
	$nc(g)->setPaint(this->color9);
	g->fill(this->path);
	$set(this, path, decodePath7());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath8());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color15);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color17);
	g->fill(this->rect);
	$set(this, path, decodePath9());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath10());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath11());
	g->setPaint(this->color23);
	g->fill(this->path);
}

void TreePainter::paintopenIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath6());
	$nc(g)->setPaint(this->color9);
	g->fill(this->path);
	$set(this, path, decodePath12());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath13());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color15);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color17);
	g->fill(this->rect);
	$set(this, path, decodePath14());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath15());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath11());
	g->setPaint(this->color23);
	g->fill(this->path);
}

void TreePainter::paintcollapsedIconEnabled($Graphics2D* g) {
	$set(this, path, decodePath16());
	$nc(g)->setPaint(this->color26);
	g->fill(this->path);
}

void TreePainter::paintcollapsedIconEnabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath16());
	$nc(g)->setPaint(this->color4);
	g->fill(this->path);
}

void TreePainter::paintexpandedIconEnabled($Graphics2D* g) {
	$set(this, path, decodePath17());
	$nc(g)->setPaint(this->color26);
	g->fill(this->path);
}

void TreePainter::paintexpandedIconEnabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath17());
	$nc(g)->setPaint(this->color4);
	g->fill(this->path);
}

$Path2D* TreePainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$1, decodeY(3.0f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$3, decodeY(0.2f));
	double var$4 = (double)decodeX(1.9197531f);
	$nc(this->path)->lineTo(var$4, decodeY(0.2f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(0.9f));
	double var$6 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$6, decodeY(3.0f));
	double var$7 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$7, decodeY(3.0f));
	double var$8 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$8, decodeY(0.88888896f));
	double var$9 = (double)decodeX(1.9537036f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	double var$10 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$10, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* TreePainter::decodeRect1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(2.8f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.8f));
	return this->rect;
}

$Path2D* TreePainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$3, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(2.8f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(1.0f));
	double var$5 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$6, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(1.6234567f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(1.6296296f);
	$nc(this->path)->lineTo(var$2, decodeY(1.2037038f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2006173f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(1.0f));
	double var$5 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$6, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.4f));
	double var$1 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(0.2f));
	double var$3 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$3, decodeY(2.8f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(2.8f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$7, decodeY(2.6f));
	double var$8 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$8, decodeY(2.6f));
	double var$9 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$9, decodeY(0.4f));
	double var$10 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$10, decodeY(0.4f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.4f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(3.0f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$5, decodeY(2.4f));
	double var$6 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$6, decodeY(2.4f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6f));
	double var$1 = (double)decodeX(0.6037037f);
	$nc(this->path)->lineTo(var$1, decodeY(1.8425925f));
	double var$2 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$3, decodeY(1.0f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(1.3333334f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(2.6f));
	double var$6 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$6, decodeY(2.6f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(0.40833336f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8645833f));
	double var$3 = (double)decodeX(0.79583335f);
	$nc(this->path)->lineTo(var$3, decodeY(0.8f));
	double var$4 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$4, decodeY(0.8f));
	double var$5 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$5, decodeY(0.6f));
	double var$6 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$6, decodeY(0.6f));
	double var$7 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$7, decodeY(0.4f));
	double var$8 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$8, decodeY(0.2f));
	double var$9 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$9, decodeY(0.2f));
	double var$10 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$10, decodeY(0.4f));
	double var$11 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$11, decodeY(0.6f));
	double var$12 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$12, decodeY(0.6f));
	double var$13 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$13, decodeY(2.6f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* TreePainter::decodeRect2() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(0.4f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(0.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* TreePainter::decodeRect3() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(0.4f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.2f));
	return this->rect;
}

$Rectangle2D* TreePainter::decodeRect4() {
	double var$0 = (double)decodeX(1.5f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(1.5f));
	float var$4 = decodeY(0.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Path2D* TreePainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(3.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.8f));
	double var$1 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$3, decodeY(0.6f));
	double var$4 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$4, decodeY(0.6f));
	double var$5 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$5, decodeY(0.4f));
	double var$6 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$6, decodeY(0.2f));
	double var$7 = (double)decodeX(0.5888889f);
	$nc(this->path)->lineTo(var$7, decodeY(0.20370372f));
	double var$8 = (double)decodeX(0.5962963f);
	$nc(this->path)->lineTo(var$8, decodeY(0.34814817f));
	double var$9 = (double)decodeX(0.34814817f);
	$nc(this->path)->lineTo(var$9, decodeY(0.6f));
	double var$10 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$10, decodeY(0.6f));
	double var$11 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$11, decodeY(2.6f));
	double var$12 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$12, decodeY(2.6f));
	double var$13 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$13, decodeY(1.3333334f));
	double var$14 = (double)decodeX(2.774074f);
	$nc(this->path)->lineTo(var$14, decodeY(1.1604939f));
	double var$15 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$15, decodeY(1.0f));
	double var$16 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$16, decodeY(1.0f));
	double var$17 = (double)decodeX(2.8925927f);
	$nc(this->path)->lineTo(var$17, decodeY(1.1882716f));
	double var$18 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$18, decodeY(1.3333334f));
	double var$19 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$19, decodeY(2.6f));
	double var$20 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$20, decodeY(2.8f));
	double var$21 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$21, decodeY(2.8f));
	double var$22 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$22, decodeY(2.6f));
	double var$23 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$23, decodeY(0.65185183f));
	double var$24 = (double)decodeX(0.63703704f);
	$nc(this->path)->lineTo(var$24, decodeY(0.0f));
	double var$25 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$25, decodeY(0.0f));
	double var$26 = (double)decodeX(1.5925925f);
	$nc(this->path)->lineTo(var$26, decodeY(0.4f));
	double var$27 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$27, decodeY(0.4f));
	double var$28 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$28, decodeY(0.6f));
	double var$29 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$29, decodeY(0.8f));
	double var$30 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$30, decodeY(0.8f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath10() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.4f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$1, decodeY(0.8f));
	double var$2 = (double)decodeX(0.74814814f);
	$nc(this->path)->lineTo(var$2, decodeY(0.8f));
	double var$3 = (double)decodeX(0.4037037f);
	$nc(this->path)->lineTo(var$3, decodeY(1.8425925f));
	double var$4 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$5, decodeY(2.6f));
	double var$6 = (double)decodeX(0.5925926f);
	$nc(this->path)->lineTo(var$6, decodeY(2.225926f));
	double var$7 = (double)decodeX(0.916f);
	$nc(this->path)->lineTo(var$7, decodeY(0.996f));
	double var$8 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$8, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath11() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.2f);
	$nc(this->path)->moveTo(var$0, decodeY(2.2f));
	double var$1 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$1, decodeY(2.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath12() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6f));
	double var$1 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$1, decodeY(2.2f));
	double var$2 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$2, decodeY(1.3333334f));
	double var$3 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3333334f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6666667f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(2.6f));
	double var$6 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$6, decodeY(2.6f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath13() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(2.0f));
	double var$3 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$3, decodeY(1.1666666f));
	double var$4 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$4, decodeY(1.1666666f));
	double var$5 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$5, decodeY(0.6f));
	double var$6 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$6, decodeY(0.6f));
	double var$7 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$7, decodeY(0.4f));
	double var$8 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$8, decodeY(0.2f));
	double var$9 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$9, decodeY(0.2f));
	double var$10 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$10, decodeY(0.4f));
	double var$11 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$11, decodeY(0.6f));
	double var$12 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$12, decodeY(0.6f));
	double var$13 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$13, decodeY(2.6f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath14() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(3.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.1666666f));
	double var$1 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.3333334f));
	double var$2 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$2, decodeY(1.3333334f));
	double var$3 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$3, decodeY(0.6f));
	double var$4 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$4, decodeY(0.6f));
	double var$5 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$5, decodeY(0.4f));
	double var$6 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$6, decodeY(0.2f));
	double var$7 = (double)decodeX(0.5888889f);
	$nc(this->path)->lineTo(var$7, decodeY(0.20370372f));
	double var$8 = (double)decodeX(0.5962963f);
	$nc(this->path)->lineTo(var$8, decodeY(0.34814817f));
	double var$9 = (double)decodeX(0.34814817f);
	$nc(this->path)->lineTo(var$9, decodeY(0.6f));
	double var$10 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$10, decodeY(0.6f));
	double var$11 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$11, decodeY(2.6f));
	double var$12 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$12, decodeY(2.6f));
	double var$13 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$13, decodeY(2.0f));
	double var$14 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$14, decodeY(1.8333333f));
	double var$15 = (double)decodeX(2.916f);
	$nc(this->path)->lineTo(var$15, decodeY(1.3533334f));
	double var$16 = (double)decodeX(2.98f);
	$nc(this->path)->lineTo(var$16, decodeY(1.3766667f));
	double var$17 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$17, decodeY(1.8333333f));
	double var$18 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$18, decodeY(2.0f));
	double var$19 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$19, decodeY(2.6f));
	double var$20 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$20, decodeY(2.8f));
	double var$21 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$21, decodeY(2.8f));
	double var$22 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$22, decodeY(2.6f));
	double var$23 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$23, decodeY(0.65185183f));
	double var$24 = (double)decodeX(0.63703704f);
	$nc(this->path)->lineTo(var$24, decodeY(0.0f));
	double var$25 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$25, decodeY(0.0f));
	double var$26 = (double)decodeX(1.5925925f);
	$nc(this->path)->lineTo(var$26, decodeY(0.4f));
	double var$27 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$27, decodeY(0.4f));
	double var$28 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$28, decodeY(0.6f));
	double var$29 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$29, decodeY(1.1666666f));
	double var$30 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$30, decodeY(1.1666666f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath15() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.4f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3333334f));
	double var$1 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$1, decodeY(1.1666666f));
	double var$2 = (double)decodeX(0.74f);
	$nc(this->path)->lineTo(var$2, decodeY(1.1666666f));
	double var$3 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$3, decodeY(2.0f));
	double var$4 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$5, decodeY(2.6f));
	double var$6 = (double)decodeX(0.5925926f);
	$nc(this->path)->lineTo(var$6, decodeY(2.225926f));
	double var$7 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$7, decodeY(1.3333334f));
	double var$8 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$8, decodeY(1.3333334f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath16() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(1.2397541f);
	$nc(this->path)->lineTo(var$1, decodeY(0.70163935f));
	double var$2 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$3, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TreePainter::decodePath17() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(1.25f);
	$nc(this->path)->lineTo(var$1, decodeY(0.0f));
	double var$2 = (double)decodeX(0.70819676f);
	$nc(this->path)->lineTo(var$2, decodeY(2.9901638f));
	double var$3 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$3, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* TreePainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.046296295f * w) + x, (0.9675926f * h) + y, (0.4861111f * w) + x, (0.5324074f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* TreePainter::decodeGradient2($Shape* s) {
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
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6
	}));
}

$Paint* TreePainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.04191617f,
		0.10329342f,
		0.16467066f,
		0.24550897f,
		0.3263473f,
		0.6631737f,
		1.0f
	}), $$new($ColorArray, {
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13
	}));
}

$Paint* TreePainter::decodeGradient4($Shape* s) {
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
		this->color5,
		$(decodeColor(this->color5, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* TreePainter::decodeGradient5($Shape* s) {
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
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19
	}));
}

$Paint* TreePainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12724552f,
		0.25449103f,
		0.62724555f,
		1.0f
	}), $$new($ColorArray, {
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* TreePainter::decodeGradient7($Shape* s) {
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
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25
	}));
}

TreePainter::TreePainter() {
}

$Class* TreePainter::load$($String* name, bool initialize) {
	$loadClass(TreePainter, name, initialize, &_TreePainter_ClassInfo_, allocate$TreePainter);
	return class$;
}

$Class* TreePainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
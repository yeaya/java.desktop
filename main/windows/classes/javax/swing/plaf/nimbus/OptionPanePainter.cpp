#include <javax/swing/plaf/nimbus/OptionPanePainter.h>

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

#undef BACKGROUND_ENABLED
#undef ERRORICON_ENABLED
#undef INFORMATIONICON_ENABLED
#undef QUESTIONICON_ENABLED
#undef WARNINGICON_ENABLED

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

$FieldInfo _OptionPanePainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(OptionPanePainter, BACKGROUND_ENABLED)},
	{"ERRORICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(OptionPanePainter, ERRORICON_ENABLED)},
	{"INFORMATIONICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(OptionPanePainter, INFORMATIONICON_ENABLED)},
	{"QUESTIONICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(OptionPanePainter, QUESTIONICON_ENABLED)},
	{"WARNINGICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(OptionPanePainter, WARNINGICON_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(OptionPanePainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(OptionPanePainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(OptionPanePainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(OptionPanePainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(OptionPanePainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(OptionPanePainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(OptionPanePainter, color37)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(OptionPanePainter, componentColors)},
	{}
};

$MethodInfo _OptionPanePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(OptionPanePainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&OptionPanePainter::init$))},
	{"decodeEllipse1", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeEllipse1))},
	{"decodeEllipse2", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeEllipse2))},
	{"decodeEllipse3", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeEllipse3))},
	{"decodeEllipse4", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeEllipse4))},
	{"decodeEllipse5", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeEllipse5))},
	{"decodeEllipse6", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeEllipse6))},
	{"decodeEllipse7", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeEllipse7))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient10))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(OptionPanePainter::*)($Shape*)>(&OptionPanePainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodePath9))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(OptionPanePainter::*)()>(&OptionPanePainter::decodeRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"painterrorIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(OptionPanePainter::*)($Graphics2D*)>(&OptionPanePainter::painterrorIconEnabled))},
	{"paintinformationIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(OptionPanePainter::*)($Graphics2D*)>(&OptionPanePainter::paintinformationIconEnabled))},
	{"paintquestionIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(OptionPanePainter::*)($Graphics2D*)>(&OptionPanePainter::paintquestionIconEnabled))},
	{"paintwarningIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(OptionPanePainter::*)($Graphics2D*)>(&OptionPanePainter::paintwarningIconEnabled))},
	{}
};

$ClassInfo _OptionPanePainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.OptionPanePainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_OptionPanePainter_FieldInfo_,
	_OptionPanePainter_MethodInfo_
};

$Object* allocate$OptionPanePainter($Class* clazz) {
	return $of($alloc(OptionPanePainter));
}

void OptionPanePainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusRed"_s, -0.014814814f, 0.18384242f, 0.015686274f, 0));
	$set(this, color2, decodeColor("nimbusRed"_s, -0.014814814f, -0.403261f, 0.21960783f, 0));
	$set(this, color3, decodeColor("nimbusRed"_s, -0.014814814f, -0.07154381f, 0.11372548f, 0));
	$set(this, color4, decodeColor("nimbusRed"_s, -0.014814814f, 0.110274374f, 0.07058823f, 0));
	$set(this, color5, decodeColor("nimbusRed"_s, -0.014814814f, -0.05413574f, 0.2588235f, 0));
	$set(this, color6, $new($Color, 250, 250, 250, 255));
	$set(this, color7, decodeColor("nimbusRed"_s, 0.0f, -0.79881656f, 0.33725488f, -187));
	$set(this, color8, $new($Color, 255, 200, 0, 255));
	$set(this, color9, decodeColor("nimbusInfoBlue"_s, 0.0f, 0.06231594f, -0.054901958f, 0));
	$set(this, color10, decodeColor("nimbusInfoBlue"_s, 3.1620264E-4f, 0.07790506f, -0.19215685f, 0));
	$set(this, color11, decodeColor("nimbusInfoBlue"_s, -8.2296133E-4f, -0.44631243f, 0.19215685f, 0));
	$set(this, color12, decodeColor("nimbusInfoBlue"_s, 0.0012729168f, -0.0739674f, 0.043137252f, 0));
	$set(this, color13, decodeColor("nimbusInfoBlue"_s, 8.354187E-4f, -0.14148629f, 0.19999999f, 0));
	$set(this, color14, decodeColor("nimbusInfoBlue"_s, -0.0014793873f, -0.41456455f, 0.16470587f, 0));
	$set(this, color15, decodeColor("nimbusInfoBlue"_s, 3.437996E-4f, -0.14726585f, 0.043137252f, 0));
	$set(this, color16, decodeColor("nimbusInfoBlue"_s, -4.271865E-4f, -0.0055555105f, 0.0f, 0));
	$set(this, color17, decodeColor("nimbusInfoBlue"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color18, decodeColor("nimbusInfoBlue"_s, -7.866621E-4f, -0.12728173f, 0.17254901f, 0));
	$set(this, color19, $new($Color, 115, 120, 126, 255));
	$set(this, color20, $new($Color, 26, 34, 43, 255));
	$set(this, color21, $new($Color, 168, 173, 178, 255));
	$set(this, color22, $new($Color, 101, 109, 118, 255));
	$set(this, color23, $new($Color, 159, 163, 168, 255));
	$set(this, color24, $new($Color, 116, 122, 130, 255));
	$set(this, color25, $new($Color, 96, 104, 112, 255));
	$set(this, color26, $new($Color, 118, 128, 138, 255));
	$set(this, color27, $new($Color, 255, 255, 255, 255));
	$set(this, color28, decodeColor("nimbusAlertYellow"_s, -4.9102306E-4f, 0.1372549f, -0.15294117f, 0));
	$set(this, color29, decodeColor("nimbusAlertYellow"_s, -0.0015973002f, 0.1372549f, -0.3490196f, 0));
	$set(this, color30, decodeColor("nimbusAlertYellow"_s, 6.530881E-4f, -0.40784314f, 0.0f, 0));
	$set(this, color31, decodeColor("nimbusAlertYellow"_s, -3.9456785E-4f, -0.109803915f, 0.0f, 0));
	$set(this, color32, decodeColor("nimbusAlertYellow"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color33, decodeColor("nimbusAlertYellow"_s, 0.008085668f, -0.04705882f, 0.0f, 0));
	$set(this, color34, decodeColor("nimbusAlertYellow"_s, 0.026515156f, -0.18431371f, 0.0f, 0));
	$set(this, color35, $new($Color, 69, 69, 69, 255));
	$set(this, color36, $new($Color, 0, 0, 0, 255));
	$set(this, color37, $new($Color, 16, 16, 16, 255));
	this->state = state;
	$set(this, ctx, ctx);
}

void OptionPanePainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case OptionPanePainter::ERRORICON_ENABLED:
		{
			painterrorIconEnabled(g);
			break;
		}
	case OptionPanePainter::INFORMATIONICON_ENABLED:
		{
			paintinformationIconEnabled(g);
			break;
		}
	case OptionPanePainter::QUESTIONICON_ENABLED:
		{
			paintquestionIconEnabled(g);
			break;
		}
	case OptionPanePainter::WARNINGICON_ENABLED:
		{
			paintwarningIconEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* OptionPanePainter::getPaintContext() {
	return this->ctx;
}

void OptionPanePainter::painterrorIconEnabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color6);
	g->fill(this->path);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint(this->color6);
	g->fill(this->ellipse);
	$set(this, path, decodePath4());
	g->setPaint(this->color7);
	g->fill(this->path);
}

void OptionPanePainter::paintinformationIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse2());
	$nc(g)->setPaint(this->color8);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint(this->color8);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint(this->color8);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse3());
	g->setPaint($(decodeGradient2(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse4());
	g->setPaint($(decodeGradient3(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient4(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, path, decodePath5());
	g->setPaint(this->color6);
	g->fill(this->path);
	$set(this, ellipse, decodeEllipse6());
	g->setPaint(this->color6);
	g->fill(this->ellipse);
}

void OptionPanePainter::paintquestionIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint($(decodeGradient5(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse4());
	g->setPaint($(decodeGradient6(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient7(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, path, decodePath6());
	g->setPaint(this->color27);
	g->fill(this->path);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint(this->color27);
	g->fill(this->ellipse);
}

void OptionPanePainter::paintwarningIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color8);
	g->fill(this->rect);
	$set(this, path, decodePath7());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath8());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath9());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, ellipse, decodeEllipse7());
	g->setPaint(this->color37);
	g->fill(this->ellipse);
}

$Path2D* OptionPanePainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2708334f));
	double var$1 = (double)decodeX(1.2708334f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(1.6875f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(1.9583333f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2708334f));
	double var$4 = (double)decodeX(1.9583333f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6875f));
	double var$5 = (double)decodeX(1.6875f);
	$nc(this->path)->lineTo(var$5, decodeY(1.9583333f));
	double var$6 = (double)decodeX(1.2708334f);
	$nc(this->path)->lineTo(var$6, decodeY(1.9583333f));
	double var$7 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$7, decodeY(1.6875f));
	double var$8 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$8, decodeY(1.2708334f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* OptionPanePainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0208334f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2916666f));
	double var$1 = (double)decodeX(1.2916666f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0208334f));
	double var$2 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0208334f));
	double var$3 = (double)decodeX(1.9375f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2916666f));
	double var$4 = (double)decodeX(1.9375f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6666667f));
	double var$5 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$5, decodeY(1.9375f));
	double var$6 = (double)decodeX(1.2916666f);
	$nc(this->path)->lineTo(var$6, decodeY(1.9375f));
	double var$7 = (double)decodeX(1.0208334f);
	$nc(this->path)->lineTo(var$7, decodeY(1.6666667f));
	double var$8 = (double)decodeX(1.0208334f);
	$nc(this->path)->lineTo(var$8, decodeY(1.2916666f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* OptionPanePainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.4166666f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2291666f));
	double var$1 = (double)decodeAnchorX(1.4166666f, 0.0f);
	double var$2 = (double)decodeAnchorY(1.2291666f, -2.0f);
	double var$3 = (double)decodeAnchorX(1.4791666f, -2.0f);
	double var$4 = (double)decodeAnchorY(1.1666666f, 0.0f);
	double var$5 = (double)decodeX(1.4791666f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.1666666f));
	double var$6 = (double)decodeAnchorX(1.4791666f, 2.0f);
	double var$7 = (double)decodeAnchorY(1.1666666f, 0.0f);
	double var$8 = (double)decodeAnchorX(1.5416667f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.2291666f, -2.0f);
	double var$10 = (double)decodeX(1.5416667f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.2291666f));
	double var$11 = (double)decodeAnchorX(1.5416667f, 0.0f);
	double var$12 = (double)decodeAnchorY(1.2291666f, 2.0f);
	double var$13 = (double)decodeAnchorX(1.5f, 0.0f);
	double var$14 = (double)decodeAnchorY(1.6041667f, 0.0f);
	double var$15 = (double)decodeX(1.5f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.6041667f));
	double var$16 = (double)decodeX(1.4583334f);
	$nc(this->path)->lineTo(var$16, decodeY(1.6041667f));
	double var$17 = (double)decodeAnchorX(1.4583334f, 0.0f);
	double var$18 = (double)decodeAnchorY(1.6041667f, 0.0f);
	double var$19 = (double)decodeAnchorX(1.4166666f, 0.0f);
	double var$20 = (double)decodeAnchorY(1.2291666f, 2.0f);
	double var$21 = (double)decodeX(1.4166666f);
	$nc(this->path)->curveTo(var$17, var$18, var$19, var$20, var$21, decodeY(1.2291666f));
	$nc(this->path)->closePath();
	return this->path;
}

$Ellipse2D* OptionPanePainter::decodeEllipse1() {
	double var$0 = (double)decodeX(1.4166666f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(1.5416667f);
	double var$2 = (double)(var$3 - decodeX(1.4166666f));
	float var$4 = decodeY(1.7916667f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->ellipse;
}

$Path2D* OptionPanePainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0208334f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2851562f));
	double var$1 = (double)decodeX(1.2799479f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0208334f));
	double var$2 = (double)decodeX(1.6783855f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0208334f));
	double var$3 = (double)decodeX(1.9375f);
	$nc(this->path)->lineTo(var$3, decodeY(1.28125f));
	double var$4 = (double)decodeX(1.9375f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6666667f));
	double var$5 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$5, decodeY(1.9375f));
	double var$6 = (double)decodeX(1.2851562f);
	$nc(this->path)->lineTo(var$6, decodeY(1.936198f));
	double var$7 = (double)decodeX(1.0221354f);
	$nc(this->path)->lineTo(var$7, decodeY(1.673177f));
	double var$8 = (double)decodeX(1.0208334f);
	$nc(this->path)->lineTo(var$8, decodeY(1.5f));
	double var$9 = (double)decodeX(1.0416666f);
	$nc(this->path)->lineTo(var$9, decodeY(1.5f));
	double var$10 = (double)decodeX(1.0416666f);
	$nc(this->path)->lineTo(var$10, decodeY(1.6666667f));
	double var$11 = (double)decodeX(1.2916666f);
	$nc(this->path)->lineTo(var$11, decodeY(1.9166667f));
	double var$12 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$12, decodeY(1.9166667f));
	double var$13 = (double)decodeX(1.9166667f);
	$nc(this->path)->lineTo(var$13, decodeY(1.6666667f));
	double var$14 = (double)decodeX(1.9166667f);
	$nc(this->path)->lineTo(var$14, decodeY(1.2916666f));
	double var$15 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$15, decodeY(1.0416666f));
	double var$16 = (double)decodeX(1.2916666f);
	$nc(this->path)->lineTo(var$16, decodeY(1.0416666f));
	double var$17 = (double)decodeX(1.0416666f);
	$nc(this->path)->lineTo(var$17, decodeY(1.2916666f));
	double var$18 = (double)decodeX(1.0416666f);
	$nc(this->path)->lineTo(var$18, decodeY(1.5f));
	double var$19 = (double)decodeX(1.0208334f);
	$nc(this->path)->lineTo(var$19, decodeY(1.5f));
	double var$20 = (double)decodeX(1.0208334f);
	$nc(this->path)->lineTo(var$20, decodeY(1.2851562f));
	$nc(this->path)->closePath();
	return this->path;
}

$Ellipse2D* OptionPanePainter::decodeEllipse2() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->ellipse;
}

$Ellipse2D* OptionPanePainter::decodeEllipse3() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.9583333f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.9583333f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->ellipse;
}

$Ellipse2D* OptionPanePainter::decodeEllipse4() {
	double var$0 = (double)decodeX(1.0208334f);
	double var$1 = (double)decodeY(1.0208334f);
	float var$3 = decodeX(1.9375f);
	double var$2 = (double)(var$3 - decodeX(1.0208334f));
	float var$4 = decodeY(1.9375f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.0208334f));
	return this->ellipse;
}

$Ellipse2D* OptionPanePainter::decodeEllipse5() {
	double var$0 = (double)decodeX(1.0416666f);
	double var$1 = (double)decodeY(1.0416666f);
	float var$3 = decodeX(1.9166667f);
	double var$2 = (double)(var$3 - decodeX(1.0416666f));
	float var$4 = decodeY(1.9166667f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.0416666f));
	return this->ellipse;
}

$Path2D* OptionPanePainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.375f);
	$nc(this->path)->moveTo(var$0, decodeY(1.375f));
	double var$1 = (double)decodeAnchorX(1.375f, 2.5f);
	double var$2 = (double)decodeAnchorY(1.375f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.5f, -1.1875f);
	double var$4 = (double)decodeAnchorY(1.375f, 0.0f);
	double var$5 = (double)decodeX(1.5f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.375f));
	double var$6 = (double)decodeAnchorX(1.5f, 1.1875f);
	double var$7 = (double)decodeAnchorY(1.375f, 0.0f);
	double var$8 = (double)decodeAnchorX(1.5416667f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.4375f, -2.0f);
	double var$10 = (double)decodeX(1.5416667f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.4375f));
	double var$11 = (double)decodeAnchorX(1.5416667f, 0.0f);
	double var$12 = (double)decodeAnchorY(1.4375f, 2.0f);
	double var$13 = (double)decodeAnchorX(1.5416667f, 0.0f);
	double var$14 = (double)decodeAnchorY(1.6875f, 0.0f);
	double var$15 = (double)decodeX(1.5416667f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.6875f));
	double var$16 = (double)decodeAnchorX(1.5416667f, 0.0f);
	double var$17 = (double)decodeAnchorY(1.6875f, 0.0f);
	double var$18 = (double)decodeAnchorX(1.6028645f, -2.5625f);
	double var$19 = (double)decodeAnchorY(1.6875f, 0.0625f);
	double var$20 = (double)decodeX(1.6028645f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(1.6875f));
	double var$21 = (double)decodeAnchorX(1.6028645f, 2.5625f);
	double var$22 = (double)decodeAnchorY(1.6875f, -0.0625f);
	double var$23 = (double)decodeAnchorX(1.6041667f, 2.5625f);
	double var$24 = (double)decodeAnchorY(1.7708333f, 0.0f);
	double var$25 = (double)decodeX(1.6041667f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(1.7708333f));
	double var$26 = (double)decodeAnchorX(1.6041667f, -2.5625f);
	double var$27 = (double)decodeAnchorY(1.7708333f, 0.0f);
	double var$28 = (double)decodeAnchorX(1.3567709f, 2.5f);
	double var$29 = (double)decodeAnchorY(1.7708333f, 0.0625f);
	double var$30 = (double)decodeX(1.3567709f);
	$nc(this->path)->curveTo(var$26, var$27, var$28, var$29, var$30, decodeY(1.7708333f));
	double var$31 = (double)decodeAnchorX(1.3567709f, -2.5f);
	double var$32 = (double)decodeAnchorY(1.7708333f, -0.0625f);
	double var$33 = (double)decodeAnchorX(1.3541666f, -2.4375f);
	double var$34 = (double)decodeAnchorY(1.6875f, 0.0f);
	double var$35 = (double)decodeX(1.3541666f);
	$nc(this->path)->curveTo(var$31, var$32, var$33, var$34, var$35, decodeY(1.6875f));
	double var$36 = (double)decodeAnchorX(1.3541666f, 2.4375f);
	double var$37 = (double)decodeAnchorY(1.6875f, 0.0f);
	double var$38 = (double)decodeAnchorX(1.4166666f, 0.0f);
	double var$39 = (double)decodeAnchorY(1.6875f, 0.0f);
	double var$40 = (double)decodeX(1.4166666f);
	$nc(this->path)->curveTo(var$36, var$37, var$38, var$39, var$40, decodeY(1.6875f));
	double var$41 = (double)decodeX(1.4166666f);
	$nc(this->path)->lineTo(var$41, decodeY(1.4583334f));
	double var$42 = (double)decodeAnchorX(1.4166666f, 0.0f);
	double var$43 = (double)decodeAnchorY(1.4583334f, 0.0f);
	double var$44 = (double)decodeAnchorX(1.375f, 2.75f);
	double var$45 = (double)decodeAnchorY(1.4583334f, 0.0f);
	double var$46 = (double)decodeX(1.375f);
	$nc(this->path)->curveTo(var$42, var$43, var$44, var$45, var$46, decodeY(1.4583334f));
	double var$47 = (double)decodeAnchorX(1.375f, -2.75f);
	double var$48 = (double)decodeAnchorY(1.4583334f, 0.0f);
	double var$49 = (double)decodeAnchorX(1.375f, -2.5f);
	double var$50 = (double)decodeAnchorY(1.375f, 0.0f);
	double var$51 = (double)decodeX(1.375f);
	$nc(this->path)->curveTo(var$47, var$48, var$49, var$50, var$51, decodeY(1.375f));
	$nc(this->path)->closePath();
	return this->path;
}

$Ellipse2D* OptionPanePainter::decodeEllipse6() {
	double var$0 = (double)decodeX(1.4166666f);
	double var$1 = (double)decodeY(1.1666666f);
	float var$3 = decodeX(1.5416667f);
	double var$2 = (double)(var$3 - decodeX(1.4166666f));
	float var$4 = decodeY(1.2916666f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.1666666f));
	return this->ellipse;
}

$Path2D* OptionPanePainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.3125f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3723959f));
	double var$1 = (double)decodeAnchorX(1.3125f, 1.5f);
	double var$2 = (double)decodeAnchorY(1.3723959f, 1.375f);
	double var$3 = (double)decodeAnchorX(1.3997396f, -0.75f);
	double var$4 = (double)decodeAnchorY(1.3580729f, 1.1875f);
	double var$5 = (double)decodeX(1.3997396f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.3580729f));
	double var$6 = (double)decodeAnchorX(1.3997396f, 0.75f);
	double var$7 = (double)decodeAnchorY(1.3580729f, -1.1875f);
	double var$8 = (double)decodeAnchorX(1.46875f, -1.8125f);
	double var$9 = (double)decodeAnchorY(1.2903646f, 0.0f);
	double var$10 = (double)decodeX(1.46875f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.2903646f));
	double var$11 = (double)decodeAnchorX(1.46875f, 1.8125f);
	double var$12 = (double)decodeAnchorY(1.2903646f, 0.0f);
	double var$13 = (double)decodeAnchorX(1.5351562f, 0.0f);
	double var$14 = (double)decodeAnchorY(1.3502604f, -1.5625f);
	double var$15 = (double)decodeX(1.5351562f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.3502604f));
	double var$16 = (double)decodeAnchorX(1.5351562f, 0.0f);
	double var$17 = (double)decodeAnchorY(1.3502604f, 1.5625f);
	double var$18 = (double)decodeAnchorX(1.4700521f, 1.25f);
	double var$19 = (double)decodeAnchorY(1.4283854f, -1.1875f);
	double var$20 = (double)decodeX(1.4700521f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(1.4283854f));
	double var$21 = (double)decodeAnchorX(1.4700521f, -1.25f);
	double var$22 = (double)decodeAnchorY(1.4283854f, 1.1875f);
	double var$23 = (double)decodeAnchorX(1.4179688f, -0.0625f);
	double var$24 = (double)decodeAnchorY(1.5442708f, -1.5f);
	double var$25 = (double)decodeX(1.4179688f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(1.5442708f));
	double var$26 = (double)decodeAnchorX(1.4179688f, 0.0625f);
	double var$27 = (double)decodeAnchorY(1.5442708f, 1.5f);
	double var$28 = (double)decodeAnchorX(1.4765625f, -1.3125f);
	double var$29 = (double)decodeAnchorY(1.6028645f, 0.0f);
	double var$30 = (double)decodeX(1.4765625f);
	$nc(this->path)->curveTo(var$26, var$27, var$28, var$29, var$30, decodeY(1.6028645f));
	double var$31 = (double)decodeAnchorX(1.4765625f, 1.3125f);
	double var$32 = (double)decodeAnchorY(1.6028645f, 0.0f);
	double var$33 = (double)decodeAnchorX(1.5403645f, 0.0f);
	double var$34 = (double)decodeAnchorY(1.546875f, 1.625f);
	double var$35 = (double)decodeX(1.5403645f);
	$nc(this->path)->curveTo(var$31, var$32, var$33, var$34, var$35, decodeY(1.546875f));
	double var$36 = (double)decodeAnchorX(1.5403645f, 0.0f);
	double var$37 = (double)decodeAnchorY(1.546875f, -1.625f);
	double var$38 = (double)decodeAnchorX(1.6132812f, -1.1875f);
	double var$39 = (double)decodeAnchorY(1.4648438f, 1.25f);
	double var$40 = (double)decodeX(1.6132812f);
	$nc(this->path)->curveTo(var$36, var$37, var$38, var$39, var$40, decodeY(1.4648438f));
	double var$41 = (double)decodeAnchorX(1.6132812f, 1.1875f);
	double var$42 = (double)decodeAnchorY(1.4648438f, -1.25f);
	double var$43 = (double)decodeAnchorX(1.6666667f, 0.0625f);
	double var$44 = (double)decodeAnchorY(1.3463541f, 3.3125f);
	double var$45 = (double)decodeX(1.6666667f);
	$nc(this->path)->curveTo(var$41, var$42, var$43, var$44, var$45, decodeY(1.3463541f));
	double var$46 = (double)decodeAnchorX(1.6666667f, -0.0625f);
	double var$47 = (double)decodeAnchorY(1.3463541f, -3.3125f);
	double var$48 = (double)decodeAnchorX(1.4830729f, 6.125f);
	double var$49 = (double)decodeAnchorY(1.1679688f, -0.0625f);
	double var$50 = (double)decodeX(1.4830729f);
	$nc(this->path)->curveTo(var$46, var$47, var$48, var$49, var$50, decodeY(1.1679688f));
	double var$51 = (double)decodeAnchorX(1.4830729f, -6.125f);
	double var$52 = (double)decodeAnchorY(1.1679688f, 0.0625f);
	double var$53 = (double)decodeAnchorX(1.3046875f, 0.4375f);
	double var$54 = (double)decodeAnchorY(1.2890625f, -1.25f);
	double var$55 = (double)decodeX(1.3046875f);
	$nc(this->path)->curveTo(var$51, var$52, var$53, var$54, var$55, decodeY(1.2890625f));
	double var$56 = (double)decodeAnchorX(1.3046875f, -0.4375f);
	double var$57 = (double)decodeAnchorY(1.2890625f, 1.25f);
	double var$58 = (double)decodeAnchorX(1.3125f, -1.5f);
	double var$59 = (double)decodeAnchorY(1.3723959f, -1.375f);
	double var$60 = (double)decodeX(1.3125f);
	$nc(this->path)->curveTo(var$56, var$57, var$58, var$59, var$60, decodeY(1.3723959f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* OptionPanePainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Path2D* OptionPanePainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.5f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0208334f));
	double var$1 = (double)decodeAnchorX(1.5f, 2.0f);
	double var$2 = (double)decodeAnchorY(1.0208334f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.5664062f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.0820312f, 0.0f);
	double var$5 = (double)decodeX(1.5664062f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.0820312f));
	double var$6 = (double)decodeX(1.9427083f);
	$nc(this->path)->lineTo(var$6, decodeY(1.779948f));
	double var$7 = (double)decodeAnchorX(1.9427083f, 0.0f);
	double var$8 = (double)decodeAnchorY(1.779948f, 0.0f);
	double var$9 = (double)decodeAnchorX(1.9752605f, 0.0f);
	double var$10 = (double)decodeAnchorY(1.8802083f, -2.375f);
	double var$11 = (double)decodeX(1.9752605f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.8802083f));
	double var$12 = (double)decodeAnchorX(1.9752605f, 0.0f);
	double var$13 = (double)decodeAnchorY(1.8802083f, 2.375f);
	double var$14 = (double)decodeAnchorX(1.9166667f, 0.0f);
	double var$15 = (double)decodeAnchorY(1.9375f, 0.0f);
	double var$16 = (double)decodeX(1.9166667f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(1.9375f));
	double var$17 = (double)decodeX(1.0833334f);
	$nc(this->path)->lineTo(var$17, decodeY(1.9375f));
	double var$18 = (double)decodeAnchorX(1.0833334f, 0.0f);
	double var$19 = (double)decodeAnchorY(1.9375f, 0.0f);
	double var$20 = (double)decodeAnchorX(1.0247396f, 0.125f);
	double var$21 = (double)decodeAnchorY(1.8815105f, 2.25f);
	double var$22 = (double)decodeX(1.0247396f);
	$nc(this->path)->curveTo(var$18, var$19, var$20, var$21, var$22, decodeY(1.8815105f));
	double var$23 = (double)decodeAnchorX(1.0247396f, -0.125f);
	double var$24 = (double)decodeAnchorY(1.8815105f, -2.25f);
	double var$25 = (double)decodeAnchorX(1.0598959f, 0.0f);
	double var$26 = (double)decodeAnchorY(1.78125f, 0.0f);
	double var$27 = (double)decodeX(1.0598959f);
	$nc(this->path)->curveTo(var$23, var$24, var$25, var$26, var$27, decodeY(1.78125f));
	double var$28 = (double)decodeX(1.4375f);
	$nc(this->path)->lineTo(var$28, decodeY(1.0833334f));
	double var$29 = (double)decodeAnchorX(1.4375f, 0.0f);
	double var$30 = (double)decodeAnchorY(1.0833334f, 0.0f);
	double var$31 = (double)decodeAnchorX(1.5f, -2.0f);
	double var$32 = (double)decodeAnchorY(1.0208334f, 0.0f);
	double var$33 = (double)decodeX(1.5f);
	$nc(this->path)->curveTo(var$29, var$30, var$31, var$32, var$33, decodeY(1.0208334f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* OptionPanePainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.4986979f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0429688f));
	double var$1 = (double)decodeAnchorX(1.4986979f, 1.75f);
	double var$2 = (double)decodeAnchorY(1.0429688f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.5546875f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.0950521f, 0.0f);
	double var$5 = (double)decodeX(1.5546875f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.0950521f));
	double var$6 = (double)decodeX(1.9322917f);
	$nc(this->path)->lineTo(var$6, decodeY(1.8007812f));
	double var$7 = (double)decodeAnchorX(1.9322917f, 0.0f);
	double var$8 = (double)decodeAnchorY(1.8007812f, 0.0f);
	double var$9 = (double)decodeAnchorX(1.9570312f, 0.0f);
	double var$10 = (double)decodeAnchorY(1.875f, -1.4375f);
	double var$11 = (double)decodeX(1.9570312f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.875f));
	double var$12 = (double)decodeAnchorX(1.9570312f, 0.0f);
	double var$13 = (double)decodeAnchorY(1.875f, 1.4375f);
	double var$14 = (double)decodeAnchorX(1.8841145f, 0.0f);
	double var$15 = (double)decodeAnchorY(1.9166667f, 0.0f);
	double var$16 = (double)decodeX(1.8841145f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(1.9166667f));
	double var$17 = (double)decodeX(1.1002604f);
	$nc(this->path)->lineTo(var$17, decodeY(1.9166667f));
	double var$18 = (double)decodeAnchorX(1.1002604f, 0.0f);
	double var$19 = (double)decodeAnchorY(1.9166667f, 0.0f);
	double var$20 = (double)decodeAnchorX(1.0455729f, 0.0625f);
	double var$21 = (double)decodeAnchorY(1.8723958f, 1.625f);
	double var$22 = (double)decodeX(1.0455729f);
	$nc(this->path)->curveTo(var$18, var$19, var$20, var$21, var$22, decodeY(1.8723958f));
	double var$23 = (double)decodeAnchorX(1.0455729f, -0.0625f);
	double var$24 = (double)decodeAnchorY(1.8723958f, -1.625f);
	double var$25 = (double)decodeAnchorX(1.0755209f, 0.0f);
	double var$26 = (double)decodeAnchorY(1.7903645f, 0.0f);
	double var$27 = (double)decodeX(1.0755209f);
	$nc(this->path)->curveTo(var$23, var$24, var$25, var$26, var$27, decodeY(1.7903645f));
	double var$28 = (double)decodeX(1.4414062f);
	$nc(this->path)->lineTo(var$28, decodeY(1.1028646f));
	double var$29 = (double)decodeAnchorX(1.4414062f, 0.0f);
	double var$30 = (double)decodeAnchorY(1.1028646f, 0.0f);
	double var$31 = (double)decodeAnchorX(1.4986979f, -1.75f);
	double var$32 = (double)decodeAnchorY(1.0429688f, 0.0f);
	double var$33 = (double)decodeX(1.4986979f);
	$nc(this->path)->curveTo(var$29, var$30, var$31, var$32, var$33, decodeY(1.0429688f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* OptionPanePainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.5f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2291666f));
	double var$1 = (double)decodeAnchorX(1.5f, 2.0f);
	double var$2 = (double)decodeAnchorY(1.2291666f, 0.0f);
	double var$3 = (double)decodeAnchorX(1.5625f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.3125f, -2.0f);
	double var$5 = (double)decodeX(1.5625f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.3125f));
	double var$6 = (double)decodeAnchorX(1.5625f, 0.0f);
	double var$7 = (double)decodeAnchorY(1.3125f, 2.0f);
	double var$8 = (double)decodeAnchorX(1.5f, 1.3125f);
	double var$9 = (double)decodeAnchorY(1.6666667f, 0.0f);
	double var$10 = (double)decodeX(1.5f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.6666667f));
	double var$11 = (double)decodeAnchorX(1.5f, -1.3125f);
	double var$12 = (double)decodeAnchorY(1.6666667f, 0.0f);
	double var$13 = (double)decodeAnchorX(1.4375f, 0.0f);
	double var$14 = (double)decodeAnchorY(1.3125f, 2.0f);
	double var$15 = (double)decodeX(1.4375f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.3125f));
	double var$16 = (double)decodeAnchorX(1.4375f, 0.0f);
	double var$17 = (double)decodeAnchorY(1.3125f, -2.0f);
	double var$18 = (double)decodeAnchorX(1.5f, -2.0f);
	double var$19 = (double)decodeAnchorY(1.2291666f, 0.0f);
	double var$20 = (double)decodeX(1.5f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(1.2291666f));
	$nc(this->path)->closePath();
	return this->path;
}

$Ellipse2D* OptionPanePainter::decodeEllipse7() {
	double var$0 = (double)decodeX(1.4375f);
	double var$1 = (double)decodeY(1.7291667f);
	float var$3 = decodeX(1.5625f);
	double var$2 = (double)(var$3 - decodeX(1.4375f));
	float var$4 = decodeY(1.8541667f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.7291667f));
	return this->ellipse;
}

$Paint* OptionPanePainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.17258064f,
		0.3451613f,
		0.5145161f,
		0.683871f,
		0.9f,
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

$Paint* OptionPanePainter::decodeGradient2($Shape* s) {
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
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* OptionPanePainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.24143836f,
		0.48287672f,
		0.7414384f,
		1.0f
	}), $$new($ColorArray, {
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13
	}));
}

$Paint* OptionPanePainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.14212328f,
		0.28424656f,
		0.39212328f,
		0.5f,
		0.60958904f,
		0.7191781f,
		0.85958904f,
		1.0f
	}), $$new($ColorArray, {
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* OptionPanePainter::decodeGradient5($Shape* s) {
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
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20
	}));
}

$Paint* OptionPanePainter::decodeGradient6($Shape* s) {
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
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* OptionPanePainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.15239726f,
		0.30479452f,
		0.47945207f,
		0.6541096f,
		0.8270548f,
		1.0f
	}), $$new($ColorArray, {
		this->color23,
		$(decodeColor(this->color23, this->color24, 0.5f)),
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26
	}));
}

$Paint* OptionPanePainter::decodeGradient8($Shape* s) {
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
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29
	}));
}

$Paint* OptionPanePainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.1729452f,
		0.3458904f,
		0.49315068f,
		0.64041096f,
		0.7328767f,
		0.8253425f,
		0.9126712f,
		1.0f
	}), $$new($ColorArray, {
		this->color30,
		$(decodeColor(this->color30, this->color31, 0.5f)),
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32,
		$(decodeColor(this->color32, this->color33, 0.5f)),
		this->color33,
		$(decodeColor(this->color33, this->color34, 0.5f)),
		this->color34
	}));
}

$Paint* OptionPanePainter::decodeGradient10($Shape* s) {
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
		this->color35,
		$(decodeColor(this->color35, this->color36, 0.5f)),
		this->color36
	}));
}

OptionPanePainter::OptionPanePainter() {
}

$Class* OptionPanePainter::load$($String* name, bool initialize) {
	$loadClass(OptionPanePainter, name, initialize, &_OptionPanePainter_ClassInfo_, allocate$OptionPanePainter);
	return class$;
}

$Class* OptionPanePainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneCloseButtonPainter.h>

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
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED

using $ColorArray = $Array<::java::awt::Color>;
using $Graphics2D = ::java::awt::Graphics2D;
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

$FieldInfo _InternalFrameTitlePaneCloseButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneCloseButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneCloseButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneCloseButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneCloseButtonPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_ENABLED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneCloseButtonPainter, BACKGROUND_ENABLED_WINDOWNOTFOCUSED)},
	{"BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneCloseButtonPainter, BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED)},
	{"BACKGROUND_PRESSED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneCloseButtonPainter, BACKGROUND_PRESSED_WINDOWNOTFOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, color34)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneCloseButtonPainter, componentColors)},
	{}
};

$MethodInfo _InternalFrameTitlePaneCloseButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&InternalFrameTitlePaneCloseButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneCloseButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneCloseButtonPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneCloseButtonPainter::*)()>(&InternalFrameTitlePaneCloseButtonPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneCloseButtonPainter::*)()>(&InternalFrameTitlePaneCloseButtonPainter::decodePath2))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneCloseButtonPainter::*)()>(&InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneCloseButtonPainter::*)()>(&InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneCloseButtonPainter::*)()>(&InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect3))},
	{"decodeRoundRect4", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneCloseButtonPainter::*)()>(&InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneCloseButtonPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneCloseButtonPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneCloseButtonPainter::paintBackgroundEnabledAndWindowNotFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneCloseButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneCloseButtonPainter::paintBackgroundMouseOverAndWindowNotFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneCloseButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneCloseButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneCloseButtonPainter::paintBackgroundPressedAndWindowNotFocused))},
	{}
};

$ClassInfo _InternalFrameTitlePaneCloseButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_InternalFrameTitlePaneCloseButtonPainter_FieldInfo_,
	_InternalFrameTitlePaneCloseButtonPainter_MethodInfo_
};

$Object* allocate$InternalFrameTitlePaneCloseButtonPainter($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneCloseButtonPainter));
}

void InternalFrameTitlePaneCloseButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusRed"_s, 0.5893519f, -0.75736576f, 0.09411764f, 0));
	$set(this, color2, decodeColor("nimbusRed"_s, 0.5962963f, -0.71005917f, 0.0f, 0));
	$set(this, color3, decodeColor("nimbusRed"_s, 0.6005698f, -0.7200287f, -0.015686274f, -122));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.062449392f, 0.07058823f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.0029994324f, -0.38039216f, -185));
	$set(this, color6, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.4431373f, 0));
	$set(this, color7, decodeColor("nimbusRed"_s, -2.7342606E-4f, 0.13829035f, -0.039215684f, 0));
	$set(this, color8, decodeColor("nimbusRed"_s, 6.890595E-4f, -0.36665577f, 0.11764705f, 0));
	$set(this, color9, decodeColor("nimbusRed"_s, -0.001021713f, 0.101804554f, -0.031372547f, 0));
	$set(this, color10, decodeColor("nimbusRed"_s, -2.7342606E-4f, 0.13243341f, -0.035294116f, 0));
	$set(this, color11, decodeColor("nimbusRed"_s, -2.7342606E-4f, 0.002258718f, 0.06666666f, 0));
	$set(this, color12, decodeColor("nimbusRed"_s, 0.0056530247f, 0.0040003657f, -0.38431373f, -122));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color14, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.3882353f, 0));
	$set(this, color15, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.13333333f, 0));
	$set(this, color16, decodeColor("nimbusRed"_s, 6.890595E-4f, -0.38929275f, 0.1607843f, 0));
	$set(this, color17, decodeColor("nimbusRed"_s, 2.537202E-5f, 0.012294531f, 0.043137252f, 0));
	$set(this, color18, decodeColor("nimbusRed"_s, -2.7342606E-4f, 0.033585668f, 0.039215684f, 0));
	$set(this, color19, decodeColor("nimbusRed"_s, -2.7342606E-4f, -0.07198727f, 0.14117646f, 0));
	$set(this, color20, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, 0.0039215684f, -122));
	$set(this, color21, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -140));
	$set(this, color22, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.49411768f, 0));
	$set(this, color23, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.20392159f, 0));
	$set(this, color24, decodeColor("nimbusRed"_s, -0.014814814f, -0.21260965f, 0.019607842f, 0));
	$set(this, color25, decodeColor("nimbusRed"_s, -0.014814814f, 0.17340565f, -0.09803921f, 0));
	$set(this, color26, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.10588235f, 0));
	$set(this, color27, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.04705882f, 0));
	$set(this, color28, decodeColor("nimbusRed"_s, -0.014814814f, 0.20118344f, -0.31764707f, -122));
	$set(this, color29, decodeColor("nimbusRed"_s, 0.5962963f, -0.6994788f, -0.07058823f, 0));
	$set(this, color30, decodeColor("nimbusRed"_s, 0.5962963f, -0.66245294f, -0.23137257f, 0));
	$set(this, color31, decodeColor("nimbusRed"_s, 0.58518517f, -0.77649516f, 0.21568626f, 0));
	$set(this, color32, decodeColor("nimbusRed"_s, 0.5962963f, -0.7372781f, 0.10196078f, 0));
	$set(this, color33, decodeColor("nimbusRed"_s, 0.5962963f, -0.73911506f, 0.12549019f, 0));
	$set(this, color34, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.027957506f, -0.31764707f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void InternalFrameTitlePaneCloseButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED:
		{
			paintBackgroundEnabledAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED:
		{
			paintBackgroundMouseOverAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED:
		{
			paintBackgroundPressedAndWindowNotFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* InternalFrameTitlePaneCloseButtonPainter::getPaintContext() {
	return this->ctx;
}

void InternalFrameTitlePaneCloseButtonPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color3);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color4);
	g->fill(this->path);
}

void InternalFrameTitlePaneCloseButtonPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect2());
	$nc(g)->setPaint(this->color5);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color13);
	g->fill(this->path);
}

void InternalFrameTitlePaneCloseButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect2());
	$nc(g)->setPaint(this->color5);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect4());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color20);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color13);
	g->fill(this->path);
}

void InternalFrameTitlePaneCloseButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect2());
	$nc(g)->setPaint(this->color21);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color13);
	g->fill(this->path);
}

void InternalFrameTitlePaneCloseButtonPainter::paintBackgroundEnabledAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath2());
	g->setPaint(this->color34);
	g->fill(this->path);
}

void InternalFrameTitlePaneCloseButtonPainter::paintBackgroundMouseOverAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect2());
	$nc(g)->setPaint(this->color5);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect4());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color20);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color13);
	g->fill(this->path);
}

void InternalFrameTitlePaneCloseButtonPainter::paintBackgroundPressedAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect2());
	$nc(g)->setPaint(this->color21);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color13);
	g->fill(this->path);
}

$RoundRectangle2D* InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.9444444f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0f), 8.6f, 8.6f);
	return this->roundRect;
}

$Path2D* InternalFrameTitlePaneCloseButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.25f);
	$nc(this->path)->moveTo(var$0, decodeY(1.7373737f));
	double var$1 = (double)decodeX(1.3002392f);
	$nc(this->path)->lineTo(var$1, decodeY(1.794192f));
	double var$2 = (double)decodeX(1.5047847f);
	$nc(this->path)->lineTo(var$2, decodeY(1.5909091f));
	double var$3 = (double)decodeX(1.6842105f);
	$nc(this->path)->lineTo(var$3, decodeY(1.7954545f));
	double var$4 = (double)decodeX(1.7595694f);
	$nc(this->path)->lineTo(var$4, decodeY(1.719697f));
	double var$5 = (double)decodeX(1.5956938f);
	$nc(this->path)->lineTo(var$5, decodeY(1.5239899f));
	double var$6 = (double)decodeX(1.7535884f);
	$nc(this->path)->lineTo(var$6, decodeY(1.3409091f));
	double var$7 = (double)decodeX(1.6830144f);
	$nc(this->path)->lineTo(var$7, decodeY(1.2537879f));
	double var$8 = (double)decodeX(1.5083733f);
	$nc(this->path)->lineTo(var$8, decodeY(1.4406565f));
	double var$9 = (double)decodeX(1.3301436f);
	$nc(this->path)->lineTo(var$9, decodeY(1.2563131f));
	double var$10 = (double)decodeX(1.257177f);
	$nc(this->path)->lineTo(var$10, decodeY(1.3320707f));
	double var$11 = (double)decodeX(1.4270334f);
	$nc(this->path)->lineTo(var$11, decodeY(1.5252526f));
	double var$12 = (double)decodeX(1.25f);
	$nc(this->path)->lineTo(var$12, decodeY(1.7373737f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFrameTitlePaneCloseButtonPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.257177f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2828283f));
	double var$1 = (double)decodeX(1.3217703f);
	$nc(this->path)->lineTo(var$1, decodeY(1.2133838f));
	double var$2 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$2, decodeY(1.4040405f));
	double var$3 = (double)decodeX(1.673445f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2108586f));
	double var$4 = (double)decodeX(1.7440192f);
	$nc(this->path)->lineTo(var$4, decodeY(1.2853535f));
	double var$5 = (double)decodeX(1.5669856f);
	$nc(this->path)->lineTo(var$5, decodeY(1.4709597f));
	double var$6 = (double)decodeX(1.7488039f);
	$nc(this->path)->lineTo(var$6, decodeY(1.6527778f));
	double var$7 = (double)decodeX(1.673445f);
	$nc(this->path)->lineTo(var$7, decodeY(1.7398989f));
	double var$8 = (double)decodeX(1.4988039f);
	$nc(this->path)->lineTo(var$8, decodeY(1.5416667f));
	double var$9 = (double)decodeX(1.3313397f);
	$nc(this->path)->lineTo(var$9, decodeY(1.7424242f));
	double var$10 = (double)decodeX(1.2523923f);
	$nc(this->path)->lineTo(var$10, decodeY(1.6565657f));
	double var$11 = (double)decodeX(1.4366028f);
	$nc(this->path)->lineTo(var$11, decodeY(1.4722222f));
	double var$12 = (double)decodeX(1.257177f);
	$nc(this->path)->lineTo(var$12, decodeY(1.2828283f));
	$nc(this->path)->closePath();
	return this->path;
}

$RoundRectangle2D* InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.6111112f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.6111112f), 6.0f, 6.0f);
	return this->roundRect;
}

$RoundRectangle2D* InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(1.0526316f);
	double var$1 = (double)decodeY(1.0530303f);
	float var$3 = decodeX(1.9473684f);
	double var$2 = (double)(var$3 - decodeX(1.0526316f));
	float var$4 = decodeY(1.8863636f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0530303f), 6.75f, 6.75f);
	return this->roundRect;
}

$RoundRectangle2D* InternalFrameTitlePaneCloseButtonPainter::decodeRoundRect4() {
	double var$0 = (double)decodeX(1.0526316f);
	double var$1 = (double)decodeY(1.0517677f);
	float var$3 = decodeX(1.9473684f);
	double var$2 = (double)(var$3 - decodeX(1.0526316f));
	float var$4 = decodeY(1.8851011f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0517677f), 6.75f, 6.75f);
	return this->roundRect;
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.5951705f,
		0.6505682f,
		0.8252841f,
		1.0f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.5951705f,
		0.6505682f,
		0.81480503f,
		0.97904193f
	}), $$new($ColorArray, {
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.5951705f,
		0.6505682f,
		0.81630206f,
		0.98203593f
	}), $$new($ColorArray, {
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30
	}));
}

$Paint* InternalFrameTitlePaneCloseButtonPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.24101797f,
		0.48203593f,
		0.5838324f,
		0.6856288f,
		0.8428144f,
		1.0f
	}), $$new($ColorArray, {
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32,
		$(decodeColor(this->color32, this->color32, 0.5f)),
		this->color32,
		$(decodeColor(this->color32, this->color33, 0.5f)),
		this->color33
	}));
}

InternalFrameTitlePaneCloseButtonPainter::InternalFrameTitlePaneCloseButtonPainter() {
}

$Class* InternalFrameTitlePaneCloseButtonPainter::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneCloseButtonPainter, name, initialize, &_InternalFrameTitlePaneCloseButtonPainter_ClassInfo_, allocate$InternalFrameTitlePaneCloseButtonPainter);
	return class$;
}

$Class* InternalFrameTitlePaneCloseButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
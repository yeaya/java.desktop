#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneIconifyButtonPainter.h>

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
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED

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

$FieldInfo _InternalFrameTitlePaneIconifyButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneIconifyButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneIconifyButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneIconifyButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneIconifyButtonPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_ENABLED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneIconifyButtonPainter, BACKGROUND_ENABLED_WINDOWNOTFOCUSED)},
	{"BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneIconifyButtonPainter, BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED)},
	{"BACKGROUND_PRESSED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneIconifyButtonPainter, BACKGROUND_PRESSED_WINDOWNOTFOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, color37)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneIconifyButtonPainter, componentColors)},
	{}
};

$MethodInfo _InternalFrameTitlePaneIconifyButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&InternalFrameTitlePaneIconifyButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient10))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneIconifyButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneIconifyButtonPainter::decodeGradient9))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneIconifyButtonPainter::*)()>(&InternalFrameTitlePaneIconifyButtonPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneIconifyButtonPainter::*)()>(&InternalFrameTitlePaneIconifyButtonPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneIconifyButtonPainter::*)()>(&InternalFrameTitlePaneIconifyButtonPainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneIconifyButtonPainter::*)()>(&InternalFrameTitlePaneIconifyButtonPainter::decodeRect4))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneIconifyButtonPainter::*)()>(&InternalFrameTitlePaneIconifyButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneIconifyButtonPainter::*)()>(&InternalFrameTitlePaneIconifyButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneIconifyButtonPainter::*)()>(&InternalFrameTitlePaneIconifyButtonPainter::decodeRoundRect3))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundEnabledAndWindowNotFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundMouseOverAndWindowNotFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneIconifyButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundPressedAndWindowNotFocused))},
	{}
};

$ClassInfo _InternalFrameTitlePaneIconifyButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_InternalFrameTitlePaneIconifyButtonPainter_FieldInfo_,
	_InternalFrameTitlePaneIconifyButtonPainter_MethodInfo_
};

$Object* allocate$InternalFrameTitlePaneIconifyButtonPainter($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneIconifyButtonPainter));
}

void InternalFrameTitlePaneIconifyButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.0029994324f, -0.38039216f, -185));
	$set(this, color2, decodeColor("nimbusOrange"_s, -0.08377897f, 0.02094239f, -0.40392157f, 0));
	$set(this, color3, decodeColor("nimbusOrange"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color4, decodeColor("nimbusOrange"_s, -4.4563413E-4f, -0.48364475f, 0.10588235f, 0));
	$set(this, color5, decodeColor("nimbusOrange"_s, 0.0f, -0.0050992966f, 0.0039215684f, 0));
	$set(this, color6, decodeColor("nimbusOrange"_s, 0.0f, -0.12125945f, 0.10588235f, 0));
	$set(this, color7, decodeColor("nimbusOrange"_s, -0.08377897f, 0.02094239f, -0.40392157f, -106));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color9, decodeColor("nimbusOrange"_s, 0.5203877f, -0.9376068f, 0.007843137f, 0));
	$set(this, color10, decodeColor("nimbusOrange"_s, 0.5273321f, -0.8903002f, -0.086274505f, 0));
	$set(this, color11, decodeColor("nimbusOrange"_s, 0.5273321f, -0.93313926f, 0.019607842f, 0));
	$set(this, color12, decodeColor("nimbusOrange"_s, 0.53526866f, -0.8995122f, -0.058823526f, 0));
	$set(this, color13, decodeColor("nimbusOrange"_s, 0.5233639f, -0.8971863f, -0.07843137f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, -0.0808081f, 0.015910469f, -0.40392157f, -216));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, -0.003968239f, -0.03760965f, 0.007843137f, 0));
	$set(this, color16, $new($Color, 255, 200, 0, 255));
	$set(this, color17, decodeColor("nimbusOrange"_s, -0.08377897f, 0.02094239f, -0.31764707f, 0));
	$set(this, color18, decodeColor("nimbusOrange"_s, -0.02758849f, 0.02094239f, -0.062745094f, 0));
	$set(this, color19, decodeColor("nimbusOrange"_s, -4.4563413E-4f, -0.5074419f, 0.1490196f, 0));
	$set(this, color20, decodeColor("nimbusOrange"_s, 9.745359E-6f, -0.11175901f, 0.07843137f, 0));
	$set(this, color21, decodeColor("nimbusOrange"_s, 0.0f, -0.09280169f, 0.07843137f, 0));
	$set(this, color22, decodeColor("nimbusOrange"_s, 0.0f, -0.19002807f, 0.18039215f, 0));
	$set(this, color23, decodeColor("nimbusOrange"_s, -0.025772434f, 0.02094239f, 0.05098039f, 0));
	$set(this, color24, decodeColor("nimbusOrange"_s, -0.08377897f, 0.02094239f, -0.4f, 0));
	$set(this, color25, decodeColor("nimbusOrange"_s, -0.053104125f, 0.02094239f, -0.109803915f, 0));
	$set(this, color26, decodeColor("nimbusOrange"_s, -0.017887495f, -0.33726656f, 0.039215684f, 0));
	$set(this, color27, decodeColor("nimbusOrange"_s, -0.018038228f, 0.02094239f, -0.043137252f, 0));
	$set(this, color28, decodeColor("nimbusOrange"_s, -0.015844189f, 0.02094239f, -0.027450979f, 0));
	$set(this, color29, decodeColor("nimbusOrange"_s, -0.010274701f, 0.02094239f, 0.015686274f, 0));
	$set(this, color30, decodeColor("nimbusOrange"_s, -0.08377897f, 0.02094239f, -0.14509803f, -91));
	$set(this, color31, decodeColor("nimbusOrange"_s, 0.5273321f, -0.87971985f, -0.15686274f, 0));
	$set(this, color32, decodeColor("nimbusOrange"_s, 0.5273321f, -0.842694f, -0.31764707f, 0));
	$set(this, color33, decodeColor("nimbusOrange"_s, 0.516221f, -0.9567362f, 0.12941176f, 0));
	$set(this, color34, decodeColor("nimbusOrange"_s, 0.5222816f, -0.9229352f, 0.019607842f, 0));
	$set(this, color35, decodeColor("nimbusOrange"_s, 0.5273321f, -0.91751915f, 0.015686274f, 0));
	$set(this, color36, decodeColor("nimbusOrange"_s, 0.5273321f, -0.9193561f, 0.039215684f, 0));
	$set(this, color37, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.017933726f, -0.32156864f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void InternalFrameTitlePaneIconifyButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED:
		{
			paintBackgroundEnabledAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED:
		{
			paintBackgroundMouseOverAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED:
		{
			paintBackgroundPressedAndWindowNotFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* InternalFrameTitlePaneIconifyButtonPainter::getPaintContext() {
	return this->ctx;
}

void InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color7);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color8);
	g->fill(this->rect);
}

void InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color14);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color15);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
}

void InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color23);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color8);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
}

void InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color30);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color8);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
}

void InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundEnabledAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color14);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color37);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
}

void InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundMouseOverAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color23);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color8);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
}

void InternalFrameTitlePaneIconifyButtonPainter::paintBackgroundPressedAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color30);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color8);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
}

$RoundRectangle2D* InternalFrameTitlePaneIconifyButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.6111112f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.6111112f), 6.0f, 6.0f);
	return this->roundRect;
}

$RoundRectangle2D* InternalFrameTitlePaneIconifyButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.9444444f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0f), 8.6f, 8.6f);
	return this->roundRect;
}

$RoundRectangle2D* InternalFrameTitlePaneIconifyButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(1.0526316f);
	double var$1 = (double)decodeY(1.0555556f);
	float var$3 = decodeX(1.9473684f);
	double var$2 = (double)(var$3 - decodeX(1.0526316f));
	float var$4 = decodeY(1.8888888f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0555556f), 6.75f, 6.75f);
	return this->roundRect;
}

$Rectangle2D* InternalFrameTitlePaneIconifyButtonPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.25f);
	double var$1 = (double)decodeY(1.6628788f);
	float var$3 = decodeX(1.75f);
	double var$2 = (double)(var$3 - decodeX(1.25f));
	float var$4 = decodeY(1.7487373f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6628788f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneIconifyButtonPainter::decodeRect2() {
	double var$0 = (double)decodeX(1.2870814f);
	double var$1 = (double)decodeY(1.6123737f);
	float var$3 = decodeX(1.7165072f);
	double var$2 = (double)(var$3 - decodeX(1.2870814f));
	float var$4 = decodeY(1.7222222f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6123737f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneIconifyButtonPainter::decodeRect3() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneIconifyButtonPainter::decodeRect4() {
	double var$0 = (double)decodeX(1.25f);
	double var$1 = (double)decodeY(1.6527778f);
	float var$3 = decodeX(1.7511961f);
	double var$2 = (double)(var$3 - decodeX(1.25f));
	float var$4 = decodeY(1.7828283f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6527778f));
	return this->rect;
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient1($Shape* s) {
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
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient2($Shape* s) {
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
		this->color4,
		$(decodeColor(this->color4, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient3($Shape* s) {
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
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient4($Shape* s) {
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
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient5($Shape* s) {
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
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient6($Shape* s) {
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
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient7($Shape* s) {
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
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient8($Shape* s) {
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
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient9($Shape* s) {
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
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32
	}));
}

$Paint* InternalFrameTitlePaneIconifyButtonPainter::decodeGradient10($Shape* s) {
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
		0.78336793f,
		0.9161677f
	}), $$new($ColorArray, {
		this->color33,
		$(decodeColor(this->color33, this->color34, 0.5f)),
		this->color34,
		$(decodeColor(this->color34, this->color35, 0.5f)),
		this->color35,
		$(decodeColor(this->color35, this->color36, 0.5f)),
		this->color36
	}));
}

InternalFrameTitlePaneIconifyButtonPainter::InternalFrameTitlePaneIconifyButtonPainter() {
}

$Class* InternalFrameTitlePaneIconifyButtonPainter::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneIconifyButtonPainter, name, initialize, &_InternalFrameTitlePaneIconifyButtonPainter_ClassInfo_, allocate$InternalFrameTitlePaneIconifyButtonPainter);
	return class$;
}

$Class* InternalFrameTitlePaneIconifyButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
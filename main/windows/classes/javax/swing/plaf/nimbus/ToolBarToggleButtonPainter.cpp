#include <javax/swing/plaf/nimbus/ToolBarToggleButtonPainter.h>

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

#undef BACKGROUND_DISABLED_SELECTED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_FOCUSED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_FOCUSED
#undef BACKGROUND_MOUSEOVER_SELECTED
#undef BACKGROUND_MOUSEOVER_SELECTED_FOCUSED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_FOCUSED
#undef BACKGROUND_PRESSED_SELECTED
#undef BACKGROUND_PRESSED_SELECTED_FOCUSED
#undef BACKGROUND_SELECTED
#undef BACKGROUND_SELECTED_FOCUSED

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

$FieldInfo _ToolBarToggleButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_PRESSED_FOCUSED)},
	{"BACKGROUND_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_SELECTED)},
	{"BACKGROUND_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_SELECTED_FOCUSED)},
	{"BACKGROUND_PRESSED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_PRESSED_SELECTED)},
	{"BACKGROUND_PRESSED_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_PRESSED_SELECTED_FOCUSED)},
	{"BACKGROUND_MOUSEOVER_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_MOUSEOVER_SELECTED)},
	{"BACKGROUND_MOUSEOVER_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_MOUSEOVER_SELECTED_FOCUSED)},
	{"BACKGROUND_DISABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToolBarToggleButtonPainter, BACKGROUND_DISABLED_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, color28)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ToolBarToggleButtonPainter, componentColors)},
	{}
};

$MethodInfo _ToolBarToggleButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ToolBarToggleButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ToolBarToggleButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient10))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToolBarToggleButtonPainter::*)($Shape*)>(&ToolBarToggleButtonPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodePath1))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect3))},
	{"decodeRoundRect4", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect4))},
	{"decodeRoundRect5", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect5))},
	{"decodeRoundRect6", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect6))},
	{"decodeRoundRect7", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect7))},
	{"decodeRoundRect8", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToolBarToggleButtonPainter::*)()>(&ToolBarToggleButtonPainter::decodeRoundRect8))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundDisabledAndSelected))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundMouseOverAndFocused))},
	{"paintBackgroundMouseOverAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundMouseOverAndSelected))},
	{"paintBackgroundMouseOverAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundMouseOverAndSelectedAndFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundPressedAndFocused))},
	{"paintBackgroundPressedAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundPressedAndSelected))},
	{"paintBackgroundPressedAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundPressedAndSelectedAndFocused))},
	{"paintBackgroundSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundSelected))},
	{"paintBackgroundSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToolBarToggleButtonPainter::*)($Graphics2D*)>(&ToolBarToggleButtonPainter::paintBackgroundSelectedAndFocused))},
	{}
};

$ClassInfo _ToolBarToggleButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ToolBarToggleButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ToolBarToggleButtonPainter_FieldInfo_,
	_ToolBarToggleButtonPainter_MethodInfo_
};

$Object* allocate$ToolBarToggleButtonPainter($Class* clazz) {
	return $of($alloc(ToolBarToggleButtonPainter));
}

void ToolBarToggleButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.06885965f, -0.36862746f, -153));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.020974077f, -0.21960783f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.11169591f, -0.53333336f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10658931f, 0.25098038f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.098526314f, 0.2352941f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07333623f, 0.20392156f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -86));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.060526315f, -0.3529412f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.064372465f, -0.2352941f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.0595709f, -0.12941176f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.061075766f, -0.031372547f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06080256f, -0.035294116f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06472479f, -0.23137254f, 0));
	$set(this, color16, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.06959064f, -0.0745098f, 0));
	$set(this, color17, decodeColor("nimbusBlueGrey"_s, 0.0138888955f, -0.06401469f, -0.07058823f, 0));
	$set(this, color18, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06530018f, 0.035294116f, 0));
	$set(this, color19, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06507177f, 0.031372547f, 0));
	$set(this, color20, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.05338346f, -0.47058824f, 0));
	$set(this, color21, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.049301825f, -0.36078432f, 0));
	$set(this, color22, decodeColor("nimbusBlueGrey"_s, -0.018518567f, -0.03909774f, -0.2509804f, 0));
	$set(this, color23, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.040013492f, -0.13333333f, 0));
	$set(this, color24, decodeColor("nimbusBlueGrey"_s, 0.01010108f, -0.039558575f, -0.1372549f, 0));
	$set(this, color25, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -220));
	$set(this, color26, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.066408664f, 0.054901958f, 0));
	$set(this, color27, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06807348f, 0.086274505f, 0));
	$set(this, color28, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06924191f, 0.109803915f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ToolBarToggleButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ToolBarToggleButtonPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			paintBackgroundMouseOverAndFocused(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			paintBackgroundPressedAndFocused(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_SELECTED:
		{
			paintBackgroundSelected(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_SELECTED_FOCUSED:
		{
			paintBackgroundSelectedAndFocused(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_PRESSED_SELECTED:
		{
			paintBackgroundPressedAndSelected(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_PRESSED_SELECTED_FOCUSED:
		{
			paintBackgroundPressedAndSelectedAndFocused(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED:
		{
			paintBackgroundMouseOverAndSelected(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED_FOCUSED:
		{
			paintBackgroundMouseOverAndSelectedAndFocused(g);
			break;
		}
	case ToolBarToggleButtonPainter::BACKGROUND_DISABLED_SELECTED:
		{
			paintBackgroundDisabledAndSelected(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ToolBarToggleButtonPainter::getPaintContext() {
	return this->ctx;
}

void ToolBarToggleButtonPainter::paintBackgroundFocused($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
}

void ToolBarToggleButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundMouseOverAndFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundPressedAndFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect8());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundSelected($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundSelectedAndFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect8());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundPressedAndSelected($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundPressedAndSelectedAndFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect8());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundMouseOverAndSelected($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundMouseOverAndSelectedAndFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect8());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void ToolBarToggleButtonPainter::paintBackgroundDisabledAndSelected($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color25);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect6());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect7());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

$Path2D* ToolBarToggleButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.4133738f);
	$nc(this->path)->moveTo(var$0, decodeY(0.120000005f));
	double var$1 = (double)decodeX(1.9893618f);
	$nc(this->path)->lineTo(var$1, decodeY(0.120000005f));
	double var$2 = (double)decodeAnchorX(1.9893618f, 3.0f);
	double var$3 = (double)decodeAnchorY(0.120000005f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.8857148f, 0.0f);
	double var$5 = (double)decodeAnchorY(1.0416666f, -3.0f);
	double var$6 = (double)decodeX(2.8857148f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.0416666f));
	double var$7 = (double)decodeX(2.9f);
	$nc(this->path)->lineTo(var$7, decodeY(1.9166667f));
	double var$8 = (double)decodeAnchorX(2.9f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.9166667f, 3.0f);
	double var$10 = (double)decodeAnchorX(1.9893618f, 3.0f);
	double var$11 = (double)decodeAnchorY(2.6714287f, 0.0f);
	double var$12 = (double)decodeX(1.9893618f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.6714287f));
	double var$13 = (double)decodeX(1.0106384f);
	$nc(this->path)->lineTo(var$13, decodeY(2.6714287f));
	double var$14 = (double)decodeAnchorX(1.0106384f, -3.0f);
	double var$15 = (double)decodeAnchorY(2.6714287f, 0.0f);
	double var$16 = (double)decodeAnchorX(0.120000005f, 0.0f);
	double var$17 = (double)decodeAnchorY(1.9166667f, 3.0f);
	double var$18 = (double)decodeX(0.120000005f);
	$nc(this->path)->curveTo(var$14, var$15, var$16, var$17, var$18, decodeY(1.9166667f));
	double var$19 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$19, decodeY(1.0446429f));
	double var$20 = (double)decodeAnchorX(0.120000005f, 0.0f);
	double var$21 = (double)decodeAnchorY(1.0446429f, -3.0f);
	double var$22 = (double)decodeAnchorX(1.0106384f, -3.0f);
	double var$23 = (double)decodeAnchorY(0.120000005f, 0.0f);
	double var$24 = (double)decodeX(1.0106384f);
	$nc(this->path)->curveTo(var$20, var$21, var$22, var$23, var$24, decodeY(0.120000005f));
	double var$25 = (double)decodeX(1.4148936f);
	$nc(this->path)->lineTo(var$25, decodeY(0.120000005f));
	double var$26 = (double)decodeX(1.4148936f);
	$nc(this->path)->lineTo(var$26, decodeY(0.4857143f));
	double var$27 = (double)decodeX(1.0106384f);
	$nc(this->path)->lineTo(var$27, decodeY(0.4857143f));
	double var$28 = (double)decodeAnchorX(1.0106384f, -1.9285715f);
	double var$29 = (double)decodeAnchorY(0.4857143f, 0.0f);
	double var$30 = (double)decodeAnchorX(0.47142857f, -0.044279482f);
	double var$31 = (double)decodeAnchorY(1.0386904f, -2.429218f);
	double var$32 = (double)decodeX(0.47142857f);
	$nc(this->path)->curveTo(var$28, var$29, var$30, var$31, var$32, decodeY(1.0386904f));
	double var$33 = (double)decodeX(0.47142857f);
	$nc(this->path)->lineTo(var$33, decodeY(1.9166667f));
	double var$34 = (double)decodeAnchorX(0.47142857f, 0.0f);
	double var$35 = (double)decodeAnchorY(1.9166667f, 2.2142856f);
	double var$36 = (double)decodeAnchorX(1.0106384f, -1.7857143f);
	double var$37 = (double)decodeAnchorY(2.3142858f, 0.0f);
	double var$38 = (double)decodeX(1.0106384f);
	$nc(this->path)->curveTo(var$34, var$35, var$36, var$37, var$38, decodeY(2.3142858f));
	double var$39 = (double)decodeX(1.9893618f);
	$nc(this->path)->lineTo(var$39, decodeY(2.3142858f));
	double var$40 = (double)decodeAnchorX(1.9893618f, 2.0714285f);
	double var$41 = (double)decodeAnchorY(2.3142858f, 0.0f);
	double var$42 = (double)decodeAnchorX(2.5f, 0.0f);
	double var$43 = (double)decodeAnchorY(1.9166667f, 2.2142856f);
	double var$44 = (double)decodeX(2.5f);
	$nc(this->path)->curveTo(var$40, var$41, var$42, var$43, var$44, decodeY(1.9166667f));
	double var$45 = (double)decodeX(2.5142853f);
	$nc(this->path)->lineTo(var$45, decodeY(1.0416666f));
	double var$46 = (double)decodeAnchorX(2.5142853f, 0.0f);
	double var$47 = (double)decodeAnchorY(1.0416666f, -2.142857f);
	double var$48 = (double)decodeAnchorX(1.9901216f, 2.142857f);
	double var$49 = (double)decodeAnchorY(0.47142857f, 0.0f);
	double var$50 = (double)decodeX(1.9901216f);
	$nc(this->path)->curveTo(var$46, var$47, var$48, var$49, var$50, decodeY(0.47142857f));
	double var$51 = (double)decodeX(1.4148936f);
	$nc(this->path)->lineTo(var$51, decodeY(0.4857143f));
	double var$52 = (double)decodeX(1.4133738f);
	$nc(this->path)->lineTo(var$52, decodeY(0.120000005f));
	$nc(this->path)->closePath();
	return this->path;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.6f), 12.0f, 12.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.4f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.4f), 12.0f, 12.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.2f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.6f), 9.0f, 9.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect4() {
	double var$0 = (double)decodeX(0.120000005f);
	double var$1 = (double)decodeY(0.120000005f);
	float var$3 = decodeX(2.8800004f);
	double var$2 = (double)(var$3 - decodeX(0.120000005f));
	float var$4 = decodeY(2.6800003f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.120000005f), 13.0f, 13.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect5() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.6f), 10.0f, 10.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect6() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.4f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.4f), 10.0f, 10.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect7() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.2f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.6f), 8.0f, 8.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToolBarToggleButtonPainter::decodeRoundRect8() {
	double var$0 = (double)decodeX(0.120000005f);
	double var$1 = (double)decodeY(0.120000005f);
	float var$3 = decodeX(2.8800004f);
	double var$2 = (double)(var$3 - decodeX(0.120000005f));
	float var$4 = decodeY(2.6799998f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.120000005f), 13.0f, 13.0f);
	return this->roundRect;
}

$Paint* ToolBarToggleButtonPainter::decodeGradient1($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.09f,
		0.52f,
		0.95f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.03f,
		0.06f,
		0.33f,
		0.6f,
		0.65f,
		0.7f,
		0.825f,
		0.95f,
		0.975f,
		1.0f
	}), $$new($ColorArray, {
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8,
		$(decodeColor(this->color8, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (1.0041667f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25126263f * w) + x, (1.0092592f * h) + y, $$new($floats, {
		0.0f,
		0.06684492f,
		0.13368984f,
		0.56684494f,
		1.0f
	}), $$new($ColorArray, {
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient5($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (1.0041667f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient6($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25126263f * w) + x, (1.0092592f * h) + y, $$new($floats, {
		0.0f,
		0.06684492f,
		0.13368984f,
		0.56684494f,
		1.0f
	}), $$new($ColorArray, {
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient7($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (1.0041667f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient8($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25126263f * w) + x, (1.0092592f * h) + y, $$new($floats, {
		0.0f,
		0.06684492f,
		0.13368984f,
		0.56684494f,
		1.0f
	}), $$new($ColorArray, {
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23,
		$(decodeColor(this->color23, this->color24, 0.5f)),
		this->color24
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient9($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (1.0041667f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* ToolBarToggleButtonPainter::decodeGradient10($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25126263f * w) + x, (1.0092592f * h) + y, $$new($floats, {
		0.0f,
		0.06684492f,
		0.13368984f,
		0.56684494f,
		1.0f
	}), $$new($ColorArray, {
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28,
		$(decodeColor(this->color28, this->color28, 0.5f)),
		this->color28
	}));
}

ToolBarToggleButtonPainter::ToolBarToggleButtonPainter() {
}

$Class* ToolBarToggleButtonPainter::load$($String* name, bool initialize) {
	$loadClass(ToolBarToggleButtonPainter, name, initialize, &_ToolBarToggleButtonPainter_ClassInfo_, allocate$ToolBarToggleButtonPainter);
	return class$;
}

$Class* ToolBarToggleButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
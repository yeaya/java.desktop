#include <javax/swing/plaf/nimbus/ToggleButtonPainter.h>

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

$FieldInfo _ToggleButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_PRESSED_FOCUSED)},
	{"BACKGROUND_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_SELECTED)},
	{"BACKGROUND_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_SELECTED_FOCUSED)},
	{"BACKGROUND_PRESSED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_PRESSED_SELECTED)},
	{"BACKGROUND_PRESSED_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_PRESSED_SELECTED_FOCUSED)},
	{"BACKGROUND_MOUSEOVER_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_MOUSEOVER_SELECTED)},
	{"BACKGROUND_MOUSEOVER_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_MOUSEOVER_SELECTED_FOCUSED)},
	{"BACKGROUND_DISABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ToggleButtonPainter, BACKGROUND_DISABLED_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(ToggleButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ToggleButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ToggleButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ToggleButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ToggleButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ToggleButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color45)},
	{"color46", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color46)},
	{"color47", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color47)},
	{"color48", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color48)},
	{"color49", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ToggleButtonPainter, color49)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ToggleButtonPainter, componentColors)},
	{}
};

$MethodInfo _ToggleButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ToggleButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ToggleButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient13))},
	{"decodeGradient14", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient14))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ToggleButtonPainter::*)($Shape*)>(&ToggleButtonPainter::decodeGradient9))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToggleButtonPainter::*)()>(&ToggleButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToggleButtonPainter::*)()>(&ToggleButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToggleButtonPainter::*)()>(&ToggleButtonPainter::decodeRoundRect3))},
	{"decodeRoundRect4", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToggleButtonPainter::*)()>(&ToggleButtonPainter::decodeRoundRect4))},
	{"decodeRoundRect5", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToggleButtonPainter::*)()>(&ToggleButtonPainter::decodeRoundRect5))},
	{"decodeRoundRect6", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ToggleButtonPainter::*)()>(&ToggleButtonPainter::decodeRoundRect6))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getExtendedCacheKeys", "(Ljavax/swing/JComponent;)[Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundDisabled))},
	{"paintBackgroundDisabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundDisabledAndSelected))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundEnabled))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundMouseOverAndFocused))},
	{"paintBackgroundMouseOverAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundMouseOverAndSelected))},
	{"paintBackgroundMouseOverAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundMouseOverAndSelectedAndFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundPressedAndFocused))},
	{"paintBackgroundPressedAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundPressedAndSelected))},
	{"paintBackgroundPressedAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundPressedAndSelectedAndFocused))},
	{"paintBackgroundSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundSelected))},
	{"paintBackgroundSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ToggleButtonPainter::*)($Graphics2D*)>(&ToggleButtonPainter::paintBackgroundSelectedAndFocused))},
	{}
};

$ClassInfo _ToggleButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ToggleButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ToggleButtonPainter_FieldInfo_,
	_ToggleButtonPainter_MethodInfo_
};

$Object* allocate$ToggleButtonPainter($Class* clazz) {
	return $of($alloc(ToggleButtonPainter));
}

void ToggleButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.06885965f, -0.36862746f, -232));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06766917f, 0.07843137f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06484103f, 0.027450979f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08477524f, 0.16862744f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, -0.015872955f, -0.080091536f, 0.15686274f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07016757f, 0.12941176f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07052632f, 0.1372549f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.070878744f, 0.14509803f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.06885965f, -0.36862746f, -190));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, -0.055555522f, -0.05356429f, -0.12549019f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.0147816315f, -0.3764706f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10655806f, 0.24313724f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.09823123f, 0.2117647f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.0749532f, 0.24705881f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color16, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color17, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.020974077f, -0.21960783f, 0));
	$set(this, color18, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.11169591f, -0.53333336f, 0));
	$set(this, color19, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10658931f, 0.25098038f, 0));
	$set(this, color20, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.098526314f, 0.2352941f, 0));
	$set(this, color21, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07333623f, 0.20392156f, 0));
	$set(this, color22, $new($Color, 245, 250, 255, 160));
	$set(this, color23, decodeColor("nimbusBlueGrey"_s, 0.055555582f, 0.8894737f, -0.7176471f, 0));
	$set(this, color24, decodeColor("nimbusBlueGrey"_s, 0.0f, 5.847961E-4f, -0.32156864f, 0));
	$set(this, color25, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.05960039f, 0.10196078f, 0));
	$set(this, color26, decodeColor("nimbusBlueGrey"_s, -0.008547008f, -0.04772438f, 0.06666666f, 0));
	$set(this, color27, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0018306673f, -0.02352941f, 0));
	$set(this, color28, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0212406f, 0.13333333f, 0));
	$set(this, color29, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.030845039f, 0.23921567f, 0));
	$set(this, color30, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -86));
	$set(this, color31, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06472479f, -0.23137254f, 0));
	$set(this, color32, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.06959064f, -0.0745098f, 0));
	$set(this, color33, decodeColor("nimbusBlueGrey"_s, 0.0138888955f, -0.06401469f, -0.07058823f, 0));
	$set(this, color34, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06530018f, 0.035294116f, 0));
	$set(this, color35, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06507177f, 0.031372547f, 0));
	$set(this, color36, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.05338346f, -0.47058824f, 0));
	$set(this, color37, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.049301825f, -0.36078432f, 0));
	$set(this, color38, decodeColor("nimbusBlueGrey"_s, -0.018518567f, -0.03909774f, -0.2509804f, 0));
	$set(this, color39, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.040013492f, -0.13333333f, 0));
	$set(this, color40, decodeColor("nimbusBlueGrey"_s, 0.01010108f, -0.039558575f, -0.1372549f, 0));
	$set(this, color41, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.060526315f, -0.3529412f, 0));
	$set(this, color42, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.064372465f, -0.2352941f, 0));
	$set(this, color43, decodeColor("nimbusBlueGrey"_s, -0.006944418f, -0.0595709f, -0.12941176f, 0));
	$set(this, color44, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.061075766f, -0.031372547f, 0));
	$set(this, color45, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06080256f, -0.035294116f, 0));
	$set(this, color46, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -220));
	$set(this, color47, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.066408664f, 0.054901958f, 0));
	$set(this, color48, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06807348f, 0.086274505f, 0));
	$set(this, color49, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06924191f, 0.109803915f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ToggleButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ToggleButtonPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			paintBackgroundMouseOverAndFocused(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			paintBackgroundPressedAndFocused(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_SELECTED:
		{
			paintBackgroundSelected(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_SELECTED_FOCUSED:
		{
			paintBackgroundSelectedAndFocused(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED_SELECTED:
		{
			paintBackgroundPressedAndSelected(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED_SELECTED_FOCUSED:
		{
			paintBackgroundPressedAndSelectedAndFocused(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED:
		{
			paintBackgroundMouseOverAndSelected(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED_FOCUSED:
		{
			paintBackgroundMouseOverAndSelectedAndFocused(g);
			break;
		}
	case ToggleButtonPainter::BACKGROUND_DISABLED_SELECTED:
		{
			paintBackgroundDisabledAndSelected(g);
			break;
		}
	}
}

$ObjectArray* ToggleButtonPainter::getExtendedCacheKeys($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, extendedCacheKeys, nullptr);
	switch (this->state) {
	case ToggleButtonPainter::BACKGROUND_ENABLED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color12, -0.10655806f, 0.24313724f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color13, -0.09823123f, 0.2117647f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color6, -0.07016757f, 0.12941176f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color14, -0.0749532f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color15, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color12, -0.10655806f, 0.24313724f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color13, -0.09823123f, 0.2117647f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color6, -0.07016757f, 0.12941176f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color14, -0.0749532f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color15, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color19, -0.10658931f, 0.25098038f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color20, -0.098526314f, 0.2352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color21, -0.07333623f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color15, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color19, -0.10658931f, 0.25098038f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color20, -0.098526314f, 0.2352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color21, -0.07333623f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color15, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color25, -0.05960039f, 0.10196078f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color26, -0.04772438f, 0.06666666f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color27, -0.0018306673f, -0.02352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color28, -0.0212406f, 0.13333333f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color29, -0.030845039f, 0.23921567f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color25, -0.05960039f, 0.10196078f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color26, -0.04772438f, 0.06666666f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color27, -0.0018306673f, -0.02352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color28, -0.0212406f, 0.13333333f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color29, -0.030845039f, 0.23921567f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_SELECTED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color33, -0.06401469f, -0.07058823f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color34, -0.06530018f, 0.035294116f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color35, -0.06507177f, 0.031372547f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_SELECTED_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color33, -0.06401469f, -0.07058823f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color34, -0.06530018f, 0.035294116f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color35, -0.06507177f, 0.031372547f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED_SELECTED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color38, -0.03909774f, -0.2509804f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color39, -0.040013492f, -0.13333333f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color40, -0.039558575f, -0.1372549f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_PRESSED_SELECTED_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color38, -0.03909774f, -0.2509804f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color39, -0.040013492f, -0.13333333f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color40, -0.039558575f, -0.1372549f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color43, -0.0595709f, -0.12941176f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color44, -0.061075766f, -0.031372547f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color45, -0.06080256f, -0.035294116f, 0)))
			}));
			break;
		}
	case ToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color43, -0.0595709f, -0.12941176f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color44, -0.061075766f, -0.031372547f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color45, -0.06080256f, -0.035294116f, 0)))
			}));
			break;
		}
	}
	return extendedCacheKeys;
}

$AbstractRegionPainter$PaintContext* ToggleButtonPainter::getPaintContext() {
	return this->ctx;
}

void ToggleButtonPainter::paintBackgroundDisabled($Graphics2D* g) {
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
}

void ToggleButtonPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color16);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundMouseOverAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color16);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color22);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundPressedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color16);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color30);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect6());
	$nc(g)->setPaint(this->color16);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundPressedAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color30);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundPressedAndSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect6());
	$nc(g)->setPaint(this->color16);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundMouseOverAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color30);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient12(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundMouseOverAndSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect6());
	$nc(g)->setPaint(this->color16);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient12(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

void ToggleButtonPainter::paintBackgroundDisabledAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color46);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient13(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient14(this->roundRect)));
	g->fill(this->roundRect);
}

$RoundRectangle2D* ToggleButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.2857143f);
	double var$1 = (double)decodeY(0.42857143f);
	float var$3 = decodeX(2.7142859f);
	double var$2 = (double)(var$3 - decodeX(0.2857143f));
	float var$4 = decodeY(2.857143f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.42857143f), 12.0f, 12.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToggleButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.2857143f);
	double var$1 = (double)decodeY(0.2857143f);
	float var$3 = decodeX(2.7142859f);
	double var$2 = (double)(var$3 - decodeX(0.2857143f));
	float var$4 = decodeY(2.7142859f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.2857143f), 9.0f, 9.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToggleButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(0.42857143f);
	double var$1 = (double)decodeY(0.42857143f);
	float var$3 = decodeX(2.5714285f);
	double var$2 = (double)(var$3 - decodeX(0.42857143f));
	float var$4 = decodeY(2.5714285f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.42857143f), 7.0f, 7.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToggleButtonPainter::decodeRoundRect4() {
	double var$0 = (double)decodeX(0.08571429f);
	double var$1 = (double)decodeY(0.08571429f);
	float var$3 = decodeX(2.914286f);
	double var$2 = (double)(var$3 - decodeX(0.08571429f));
	float var$4 = decodeY(2.914286f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.08571429f), 11.0f, 11.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToggleButtonPainter::decodeRoundRect5() {
	double var$0 = (double)decodeX(0.2857143f);
	double var$1 = (double)decodeY(0.42857143f);
	float var$3 = decodeX(2.7142859f);
	double var$2 = (double)(var$3 - decodeX(0.2857143f));
	float var$4 = decodeY(2.857143f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.42857143f), 9.0f, 9.0f);
	return this->roundRect;
}

$RoundRectangle2D* ToggleButtonPainter::decodeRoundRect6() {
	double var$0 = (double)decodeX(0.08571429f);
	double var$1 = (double)decodeY(0.08571429f);
	float var$3 = decodeX(2.914286f);
	double var$2 = (double)(var$3 - decodeX(0.08571429f));
	float var$4 = decodeY(2.9142857f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.08571429f), 11.0f, 11.0f);
	return this->roundRect;
}

$Paint* ToggleButtonPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
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
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* ToggleButtonPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
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
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* ToggleButtonPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
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
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* ToggleButtonPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.024f,
		0.06f,
		0.276f,
		0.6f,
		0.65f,
		0.7f,
		0.856f,
		0.96f,
		0.98399997f,
		1.0f
	}), $$new($ColorArray, {
		$cast($Color, $nc(this->componentColors)->get(0)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(0)), $cast($Color, $nc(this->componentColors)->get(1)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(1)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(1)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(2)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(2)), $cast($Color, $nc(this->componentColors)->get(3)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(3)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(3)), $cast($Color, $nc(this->componentColors)->get(4)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(4))
	}));
}

$Paint* ToggleButtonPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
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
		$cast($Color, $nc(this->componentColors)->get(0)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(0)), $cast($Color, $nc(this->componentColors)->get(1)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(1)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(1)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(2)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(2)), $cast($Color, $nc(this->componentColors)->get(3)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(3)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(3)), $cast($Color, $nc(this->componentColors)->get(4)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(4))
	}));
}

$Paint* ToggleButtonPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
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
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* ToggleButtonPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.024f,
		0.06f,
		0.276f,
		0.6f,
		0.65f,
		0.7f,
		0.856f,
		0.96f,
		0.98f,
		1.0f
	}), $$new($ColorArray, {
		$cast($Color, $nc(this->componentColors)->get(0)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(0)), $cast($Color, $nc(this->componentColors)->get(1)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(1)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(1)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(2)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(2)), $cast($Color, $nc(this->componentColors)->get(3)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(3)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(3)), $cast($Color, $nc(this->componentColors)->get(3)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(3))
	}));
}

$Paint* ToggleButtonPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.05f,
		0.5f,
		0.95f
	}), $$new($ColorArray, {
		this->color23,
		$(decodeColor(this->color23, this->color24, 0.5f)),
		this->color24
	}));
}

$Paint* ToggleButtonPainter::decodeGradient9($Shape* s) {
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
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32
	}));
}

$Paint* ToggleButtonPainter::decodeGradient10($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.06684492f,
		0.13368984f,
		0.56684494f,
		1.0f
	}), $$new($ColorArray, {
		$cast($Color, $nc(this->componentColors)->get(0)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(0)), $cast($Color, $nc(this->componentColors)->get(1)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(1)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(1)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2))
	}));
}

$Paint* ToggleButtonPainter::decodeGradient11($Shape* s) {
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
		this->color36,
		$(decodeColor(this->color36, this->color37, 0.5f)),
		this->color37
	}));
}

$Paint* ToggleButtonPainter::decodeGradient12($Shape* s) {
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
		this->color41,
		$(decodeColor(this->color41, this->color42, 0.5f)),
		this->color42
	}));
}

$Paint* ToggleButtonPainter::decodeGradient13($Shape* s) {
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
		this->color47,
		$(decodeColor(this->color47, this->color48, 0.5f)),
		this->color48
	}));
}

$Paint* ToggleButtonPainter::decodeGradient14($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.06684492f,
		0.13368984f,
		0.56684494f,
		1.0f
	}), $$new($ColorArray, {
		this->color48,
		$(decodeColor(this->color48, this->color49, 0.5f)),
		this->color49,
		$(decodeColor(this->color49, this->color49, 0.5f)),
		this->color49
	}));
}

ToggleButtonPainter::ToggleButtonPainter() {
}

$Class* ToggleButtonPainter::load$($String* name, bool initialize) {
	$loadClass(ToggleButtonPainter, name, initialize, &_ToggleButtonPainter_ClassInfo_, allocate$ToggleButtonPainter);
	return class$;
}

$Class* ToggleButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/nimbus/RadioButtonPainter.h>

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
#undef ICON_DISABLED
#undef ICON_DISABLED_SELECTED
#undef ICON_ENABLED
#undef ICON_FOCUSED
#undef ICON_MOUSEOVER
#undef ICON_MOUSEOVER_FOCUSED
#undef ICON_MOUSEOVER_SELECTED
#undef ICON_MOUSEOVER_SELECTED_FOCUSED
#undef ICON_PRESSED
#undef ICON_PRESSED_FOCUSED
#undef ICON_PRESSED_SELECTED
#undef ICON_PRESSED_SELECTED_FOCUSED
#undef ICON_SELECTED
#undef ICON_SELECTED_FOCUSED

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

$FieldInfo _RadioButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, BACKGROUND_ENABLED)},
	{"ICON_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_DISABLED)},
	{"ICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_ENABLED)},
	{"ICON_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_FOCUSED)},
	{"ICON_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_MOUSEOVER)},
	{"ICON_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_MOUSEOVER_FOCUSED)},
	{"ICON_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_PRESSED)},
	{"ICON_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_PRESSED_FOCUSED)},
	{"ICON_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_SELECTED)},
	{"ICON_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_SELECTED_FOCUSED)},
	{"ICON_PRESSED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_PRESSED_SELECTED)},
	{"ICON_PRESSED_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_PRESSED_SELECTED_FOCUSED)},
	{"ICON_MOUSEOVER_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_MOUSEOVER_SELECTED)},
	{"ICON_MOUSEOVER_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_MOUSEOVER_SELECTED_FOCUSED)},
	{"ICON_DISABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(RadioButtonPainter, ICON_DISABLED_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(RadioButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(RadioButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(RadioButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(RadioButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(RadioButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(RadioButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color45)},
	{"color46", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color46)},
	{"color47", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color47)},
	{"color48", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color48)},
	{"color49", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color49)},
	{"color50", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color50)},
	{"color51", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color51)},
	{"color52", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color52)},
	{"color53", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color53)},
	{"color54", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color54)},
	{"color55", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(RadioButtonPainter, color55)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(RadioButtonPainter, componentColors)},
	{}
};

$MethodInfo _RadioButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(RadioButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&RadioButtonPainter::init$))},
	{"decodeEllipse1", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(RadioButtonPainter::*)()>(&RadioButtonPainter::decodeEllipse1))},
	{"decodeEllipse2", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(RadioButtonPainter::*)()>(&RadioButtonPainter::decodeEllipse2))},
	{"decodeEllipse3", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(RadioButtonPainter::*)()>(&RadioButtonPainter::decodeEllipse3))},
	{"decodeEllipse4", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(RadioButtonPainter::*)()>(&RadioButtonPainter::decodeEllipse4))},
	{"decodeEllipse5", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(RadioButtonPainter::*)()>(&RadioButtonPainter::decodeEllipse5))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient13))},
	{"decodeGradient14", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient14))},
	{"decodeGradient15", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient15))},
	{"decodeGradient16", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient16))},
	{"decodeGradient17", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient17))},
	{"decodeGradient18", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient18))},
	{"decodeGradient19", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient19))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(RadioButtonPainter::*)($Shape*)>(&RadioButtonPainter::decodeGradient9))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"painticonDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonDisabled))},
	{"painticonDisabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonDisabledAndSelected))},
	{"painticonEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonEnabled))},
	{"painticonFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonFocused))},
	{"painticonMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonMouseOver))},
	{"painticonMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonMouseOverAndFocused))},
	{"painticonMouseOverAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonMouseOverAndSelected))},
	{"painticonMouseOverAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonMouseOverAndSelectedAndFocused))},
	{"painticonPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonPressed))},
	{"painticonPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonPressedAndFocused))},
	{"painticonPressedAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonPressedAndSelected))},
	{"painticonPressedAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonPressedAndSelectedAndFocused))},
	{"painticonSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonSelected))},
	{"painticonSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(RadioButtonPainter::*)($Graphics2D*)>(&RadioButtonPainter::painticonSelectedAndFocused))},
	{}
};

$ClassInfo _RadioButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.RadioButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_RadioButtonPainter_FieldInfo_,
	_RadioButtonPainter_MethodInfo_
};

$Object* allocate$RadioButtonPainter($Class* clazz) {
	return $of($alloc(RadioButtonPainter));
}

void RadioButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06766917f, 0.07843137f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06413457f, 0.015686274f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08466425f, 0.16470587f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07016757f, 0.12941176f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.070703305f, 0.14117646f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07052632f, 0.1372549f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.0f, 0.0f, -112));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.053201474f, -0.12941176f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.006356798f, -0.44313726f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10654225f, 0.23921567f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07206477f, 0.17254901f, 0));
	$set(this, color12, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.027819552f, -0.2235294f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.24241486f, -0.6117647f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, -0.111111104f, -0.10655806f, 0.24313724f, 0));
	$set(this, color16, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07333623f, 0.20392156f, 0));
	$set(this, color17, decodeColor("nimbusBlueGrey"_s, 0.08585858f, -0.067389056f, 0.25490195f, 0));
	$set(this, color18, decodeColor("nimbusBlueGrey"_s, -0.111111104f, -0.10628903f, 0.18039215f, 0));
	$set(this, color19, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color20, decodeColor("nimbusBlueGrey"_s, 0.055555582f, 0.23947367f, -0.6666667f, 0));
	$set(this, color21, decodeColor("nimbusBlueGrey"_s, -0.0777778f, -0.06815343f, -0.28235295f, 0));
	$set(this, color22, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06866585f, 0.09803921f, 0));
	$set(this, color23, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0018306673f, -0.02352941f, 0));
	$set(this, color24, decodeColor("nimbusBlueGrey"_s, 0.002924025f, -0.02047892f, 0.082352936f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.36035198f, -0.007843137f, 0));
	$set(this, color26, decodeColor("nimbusBase"_s, 2.9569864E-4f, 0.019458115f, -0.32156867f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, 0.004681647f, -0.6195853f, 0.4235294f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, 0.004681647f, -0.56704473f, 0.36470586f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.43866998f, 0.24705881f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.44879842f, 0.29019606f, 0));
	$set(this, color31, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.07243107f, -0.33333334f, 0));
	$set(this, color32, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.74509805f, 0));
	$set(this, color33, decodeColor("nimbusBlueGrey"_s, -0.027777791f, 0.07129187f, -0.6156863f, 0));
	$set(this, color34, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.49803925f, 0));
	$set(this, color35, decodeColor("nimbusBase"_s, 0.0030477047f, -0.1257143f, -0.15686277f, 0));
	$set(this, color36, decodeColor("nimbusBase"_s, -0.0017285943f, -0.4367347f, 0.21960783f, 0));
	$set(this, color37, decodeColor("nimbusBase"_s, -0.0010654926f, -0.31349206f, 0.15686274f, 0));
	$set(this, color38, decodeColor("nimbusBase"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color39, decodeColor("nimbusBase"_s, 8.05676E-4f, -0.12380952f, 0.109803915f, 0));
	$set(this, color40, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.080223285f, -0.4862745f, 0));
	$set(this, color41, decodeColor("nimbusBase"_s, -6.374717E-4f, -0.20452163f, -0.12156865f, 0));
	$set(this, color42, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.5058824f, 0));
	$set(this, color43, decodeColor("nimbusBase"_s, -0.011985004f, -0.6157143f, 0.43137252f, 0));
	$set(this, color44, decodeColor("nimbusBase"_s, 0.004681647f, -0.56932425f, 0.3960784f, 0));
	$set(this, color45, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4555341f, 0.3215686f, 0));
	$set(this, color46, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.46550155f, 0.372549f, 0));
	$set(this, color47, decodeColor("nimbusBase"_s, 0.0024294257f, -0.47271872f, 0.34117645f, 0));
	$set(this, color48, decodeColor("nimbusBase"_s, 0.010237217f, -0.56289876f, 0.2588235f, 0));
	$set(this, color49, decodeColor("nimbusBase"_s, 0.016586483f, -0.5620301f, 0.19607842f, 0));
	$set(this, color50, decodeColor("nimbusBase"_s, 0.027408898f, -0.5878882f, 0.35294116f, 0));
	$set(this, color51, decodeColor("nimbusBase"_s, 0.021348298f, -0.56722116f, 0.3098039f, 0));
	$set(this, color52, decodeColor("nimbusBase"_s, 0.021348298f, -0.567841f, 0.31764704f, 0));
	$set(this, color53, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.058170296f, 0.0039215684f, 0));
	$set(this, color54, decodeColor("nimbusBlueGrey"_s, -0.013888836f, -0.04195489f, -0.058823526f, 0));
	$set(this, color55, decodeColor("nimbusBlueGrey"_s, 0.009259284f, -0.0147816315f, -0.007843137f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void RadioButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case RadioButtonPainter::ICON_DISABLED:
		{
			painticonDisabled(g);
			break;
		}
	case RadioButtonPainter::ICON_ENABLED:
		{
			painticonEnabled(g);
			break;
		}
	case RadioButtonPainter::ICON_FOCUSED:
		{
			painticonFocused(g);
			break;
		}
	case RadioButtonPainter::ICON_MOUSEOVER:
		{
			painticonMouseOver(g);
			break;
		}
	case RadioButtonPainter::ICON_MOUSEOVER_FOCUSED:
		{
			painticonMouseOverAndFocused(g);
			break;
		}
	case RadioButtonPainter::ICON_PRESSED:
		{
			painticonPressed(g);
			break;
		}
	case RadioButtonPainter::ICON_PRESSED_FOCUSED:
		{
			painticonPressedAndFocused(g);
			break;
		}
	case RadioButtonPainter::ICON_SELECTED:
		{
			painticonSelected(g);
			break;
		}
	case RadioButtonPainter::ICON_SELECTED_FOCUSED:
		{
			painticonSelectedAndFocused(g);
			break;
		}
	case RadioButtonPainter::ICON_PRESSED_SELECTED:
		{
			painticonPressedAndSelected(g);
			break;
		}
	case RadioButtonPainter::ICON_PRESSED_SELECTED_FOCUSED:
		{
			painticonPressedAndSelectedAndFocused(g);
			break;
		}
	case RadioButtonPainter::ICON_MOUSEOVER_SELECTED:
		{
			painticonMouseOverAndSelected(g);
			break;
		}
	case RadioButtonPainter::ICON_MOUSEOVER_SELECTED_FOCUSED:
		{
			painticonMouseOverAndSelectedAndFocused(g);
			break;
		}
	case RadioButtonPainter::ICON_DISABLED_SELECTED:
		{
			painticonDisabledAndSelected(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* RadioButtonPainter::getPaintContext() {
	return this->ctx;
}

void RadioButtonPainter::painticonDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse1());
	$nc(g)->setPaint($(decodeGradient1(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient2(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color7);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient3(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient4(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient3(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient4(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color7);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient5(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient6(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonMouseOverAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient5(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient6(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color19);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient7(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient8(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonPressedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient7(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient8(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color7);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient9(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient10(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient11(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient9(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient10(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient11(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonPressedAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color19);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient12(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient13(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient14(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonPressedAndSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient12(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient13(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient14(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonMouseOverAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color7);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient15(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient16(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient11(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonMouseOverAndSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient15(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient16(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient11(this->ellipse)));
	g->fill(this->ellipse);
}

void RadioButtonPainter::painticonDisabledAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse1());
	$nc(g)->setPaint($(decodeGradient17(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient18(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint($(decodeGradient19(this->ellipse)));
	g->fill(this->ellipse);
}

$Ellipse2D* RadioButtonPainter::decodeEllipse1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->ellipse;
}

$Ellipse2D* RadioButtonPainter::decodeEllipse2() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.4f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->ellipse;
}

$Ellipse2D* RadioButtonPainter::decodeEllipse3() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.8f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->ellipse;
}

$Ellipse2D* RadioButtonPainter::decodeEllipse4() {
	double var$0 = (double)decodeX(0.120000005f);
	double var$1 = (double)decodeY(0.120000005f);
	float var$3 = decodeX(2.8799999f);
	double var$2 = (double)(var$3 - decodeX(0.120000005f));
	float var$4 = decodeY(2.8799999f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.120000005f));
	return this->ellipse;
}

$Ellipse2D* RadioButtonPainter::decodeEllipse5() {
	double var$0 = (double)decodeX(1.125f);
	double var$1 = (double)decodeY(1.125f);
	float var$3 = decodeX(1.875f);
	double var$2 = (double)(var$3 - decodeX(1.125f));
	float var$4 = decodeY(1.875f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.125f));
	return this->ellipse;
}

$Paint* RadioButtonPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* RadioButtonPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.06344411f,
		0.21601209f,
		0.36858007f,
		0.54833835f,
		0.72809666f,
		0.77492446f,
		0.82175225f,
		0.91087615f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6
	}));
}

$Paint* RadioButtonPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* RadioButtonPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.06344411f,
		0.25009555f,
		0.43674698f,
		0.48042166f,
		0.52409637f,
		0.70481926f,
		0.88554215f
	}), $$new($ColorArray, {
		this->color10,
		$(decodeColor(this->color10, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* RadioButtonPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* RadioButtonPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.06344411f,
		0.21601209f,
		0.36858007f,
		0.54833835f,
		0.72809666f,
		0.77492446f,
		0.82175225f,
		0.91087615f,
		1.0f
	}), $$new($ColorArray, {
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* RadioButtonPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21
	}));
}

$Paint* RadioButtonPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.06344411f,
		0.20792687f,
		0.35240963f,
		0.45030123f,
		0.5481928f,
		0.748494f,
		0.9487952f
	}), $$new($ColorArray, {
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23,
		$(decodeColor(this->color23, this->color23, 0.5f)),
		this->color23,
		$(decodeColor(this->color23, this->color24, 0.5f)),
		this->color24
	}));
}

$Paint* RadioButtonPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26
	}));
}

$Paint* RadioButtonPainter::decodeGradient10($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0813253f,
		0.100903615f,
		0.12048193f,
		0.28915662f,
		0.45783132f,
		0.6159638f,
		0.77409637f,
		0.82981926f,
		0.88554215f
	}), $$new($ColorArray, {
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29,
		$(decodeColor(this->color29, this->color29, 0.5f)),
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30
	}));
}

$Paint* RadioButtonPainter::decodeGradient11($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.50490195f * w) + x, (0.0f * h) + y, (0.49509802f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.23192771f,
		0.46385542f,
		0.73192775f,
		1.0f
	}), $$new($ColorArray, {
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32,
		$(decodeColor(this->color32, this->color33, 0.5f)),
		this->color33
	}));
}

$Paint* RadioButtonPainter::decodeGradient12($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color34,
		$(decodeColor(this->color34, this->color26, 0.5f)),
		this->color26
	}));
}

$Paint* RadioButtonPainter::decodeGradient13($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.039156627f,
		0.07831325f,
		0.11746988f,
		0.2876506f,
		0.45783132f,
		0.56174695f,
		0.66566265f,
		0.7756024f,
		0.88554215f
	}), $$new($ColorArray, {
		this->color36,
		$(decodeColor(this->color36, this->color37, 0.5f)),
		this->color37,
		$(decodeColor(this->color37, this->color38, 0.5f)),
		this->color38,
		$(decodeColor(this->color38, this->color38, 0.5f)),
		this->color38,
		$(decodeColor(this->color38, this->color39, 0.5f)),
		this->color39
	}));
}

$Paint* RadioButtonPainter::decodeGradient14($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.50490195f * w) + x, (0.0f * h) + y, (0.49509802f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.23192771f,
		0.46385542f,
		0.73192775f,
		1.0f
	}), $$new($ColorArray, {
		this->color40,
		$(decodeColor(this->color40, this->color32, 0.5f)),
		this->color32,
		$(decodeColor(this->color32, this->color33, 0.5f)),
		this->color33
	}));
}

$Paint* RadioButtonPainter::decodeGradient15($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color41,
		$(decodeColor(this->color41, this->color42, 0.5f)),
		this->color42
	}));
}

$Paint* RadioButtonPainter::decodeGradient16($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0813253f,
		0.100903615f,
		0.12048193f,
		0.20180723f,
		0.28313252f,
		0.49246985f,
		0.7018072f,
		0.7560241f,
		0.810241f,
		0.84789157f,
		0.88554215f
	}), $$new($ColorArray, {
		this->color43,
		$(decodeColor(this->color43, this->color44, 0.5f)),
		this->color44,
		$(decodeColor(this->color44, this->color45, 0.5f)),
		this->color45,
		$(decodeColor(this->color45, this->color45, 0.5f)),
		this->color45,
		$(decodeColor(this->color45, this->color46, 0.5f)),
		this->color46,
		$(decodeColor(this->color46, this->color47, 0.5f)),
		this->color47
	}));
}

$Paint* RadioButtonPainter::decodeGradient17($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49789914f * w) + x, (-0.004201681f * h) + y, (0.5f * w) + x, (0.9978992f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color48,
		$(decodeColor(this->color48, this->color49, 0.5f)),
		this->color49
	}));
}

$Paint* RadioButtonPainter::decodeGradient18($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.49754903f * w) + x, (0.004901961f * h) + y, (0.50735295f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0813253f,
		0.2695783f,
		0.45783132f,
		0.67168677f,
		0.88554215f
	}), $$new($ColorArray, {
		this->color50,
		$(decodeColor(this->color50, this->color51, 0.5f)),
		this->color51,
		$(decodeColor(this->color51, this->color52, 0.5f)),
		this->color52
	}));
}

$Paint* RadioButtonPainter::decodeGradient19($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.50490195f * w) + x, (0.0f * h) + y, (0.49509802f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.23192771f,
		0.46385542f,
		0.73192775f,
		1.0f
	}), $$new($ColorArray, {
		this->color53,
		$(decodeColor(this->color53, this->color54, 0.5f)),
		this->color54,
		$(decodeColor(this->color54, this->color55, 0.5f)),
		this->color55
	}));
}

RadioButtonPainter::RadioButtonPainter() {
}

$Class* RadioButtonPainter::load$($String* name, bool initialize) {
	$loadClass(RadioButtonPainter, name, initialize, &_RadioButtonPainter_ClassInfo_, allocate$RadioButtonPainter);
	return class$;
}

$Class* RadioButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
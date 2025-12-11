#include <javax/swing/plaf/nimbus/CheckBoxPainter.h>

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

$FieldInfo _CheckBoxPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, BACKGROUND_ENABLED)},
	{"ICON_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_DISABLED)},
	{"ICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_ENABLED)},
	{"ICON_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_FOCUSED)},
	{"ICON_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_MOUSEOVER)},
	{"ICON_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_MOUSEOVER_FOCUSED)},
	{"ICON_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_PRESSED)},
	{"ICON_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_PRESSED_FOCUSED)},
	{"ICON_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_SELECTED)},
	{"ICON_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_SELECTED_FOCUSED)},
	{"ICON_PRESSED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_PRESSED_SELECTED)},
	{"ICON_PRESSED_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_PRESSED_SELECTED_FOCUSED)},
	{"ICON_MOUSEOVER_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_MOUSEOVER_SELECTED)},
	{"ICON_MOUSEOVER_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_MOUSEOVER_SELECTED_FOCUSED)},
	{"ICON_DISABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(CheckBoxPainter, ICON_DISABLED_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(CheckBoxPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(CheckBoxPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(CheckBoxPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(CheckBoxPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(CheckBoxPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(CheckBoxPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(CheckBoxPainter, color45)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(CheckBoxPainter, componentColors)},
	{}
};

$MethodInfo _CheckBoxPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(CheckBoxPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&CheckBoxPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient13))},
	{"decodeGradient14", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient14))},
	{"decodeGradient15", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient15))},
	{"decodeGradient16", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient16))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(CheckBoxPainter::*)($Shape*)>(&CheckBoxPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(CheckBoxPainter::*)()>(&CheckBoxPainter::decodePath1))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(CheckBoxPainter::*)()>(&CheckBoxPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(CheckBoxPainter::*)()>(&CheckBoxPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(CheckBoxPainter::*)()>(&CheckBoxPainter::decodeRoundRect3))},
	{"decodeRoundRect4", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(CheckBoxPainter::*)()>(&CheckBoxPainter::decodeRoundRect4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"painticonDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonDisabled))},
	{"painticonDisabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonDisabledAndSelected))},
	{"painticonEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonEnabled))},
	{"painticonFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonFocused))},
	{"painticonMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonMouseOver))},
	{"painticonMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonMouseOverAndFocused))},
	{"painticonMouseOverAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonMouseOverAndSelected))},
	{"painticonMouseOverAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonMouseOverAndSelectedAndFocused))},
	{"painticonPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonPressed))},
	{"painticonPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonPressedAndFocused))},
	{"painticonPressedAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonPressedAndSelected))},
	{"painticonPressedAndSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonPressedAndSelectedAndFocused))},
	{"painticonSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonSelected))},
	{"painticonSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(CheckBoxPainter::*)($Graphics2D*)>(&CheckBoxPainter::painticonSelectedAndFocused))},
	{}
};

$ClassInfo _CheckBoxPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.CheckBoxPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_CheckBoxPainter_FieldInfo_,
	_CheckBoxPainter_MethodInfo_
};

$Object* allocate$CheckBoxPainter($Class* clazz) {
	return $of($alloc(CheckBoxPainter));
}

void CheckBoxPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06766917f, 0.07843137f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06484103f, 0.027450979f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.032459438f, -0.60996324f, 0.36470586f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.02551502f, -0.5996783f, 0.3215686f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.032459438f, -0.59624064f, 0.34509802f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.0f, 0.0f, -89));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.05356429f, -0.12549019f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.015789472f, -0.37254903f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 0.08801502f, -0.63174605f, 0.43921566f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, 0.032459438f, -0.5953556f, 0.32549018f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 0.032459438f, -0.59942394f, 0.4235294f, 0));
	$set(this, color12, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.020974077f, -0.21960783f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.01010108f, 0.08947369f, -0.5294118f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.08801502f, -0.6317773f, 0.4470588f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.032459438f, -0.5985242f, 0.39999998f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	$set(this, color18, decodeColor("nimbusBlueGrey"_s, 0.055555582f, 0.8894737f, -0.7176471f, 0));
	$set(this, color19, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.0016232133f, -0.3254902f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 0.027408898f, -0.5847884f, 0.2980392f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 0.029681683f, -0.52701867f, 0.17254901f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 0.029681683f, -0.5376751f, 0.25098038f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.34585923f, -0.007843137f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.10238093f, -0.25490198f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 0.004681647f, -0.6197143f, 0.43137252f, 0));
	$set(this, color26, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.44153953f, 0.2588235f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4602757f, 0.34509802f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color29, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, -3.528595E-5f, 0.026785731f, -0.23529413f, 0));
	$set(this, color31, decodeColor("nimbusBase"_s, -4.2033195E-4f, -0.38050595f, 0.20392156f, 0));
	$set(this, color32, decodeColor("nimbusBase"_s, -0.0021489263f, -0.2891234f, 0.14117646f, 0));
	$set(this, color33, decodeColor("nimbusBase"_s, -0.006362498f, -0.016311288f, -0.02352941f, 0));
	$set(this, color34, decodeColor("nimbusBase"_s, 0.0f, -0.17930403f, 0.21568626f, 0));
	$set(this, color35, decodeColor("nimbusBase"_s, 0.0013483167f, -0.1769987f, -0.12156865f, 0));
	$set(this, color36, decodeColor("nimbusBase"_s, 0.05468172f, 0.3642857f, -0.43137258f, 0));
	$set(this, color37, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color38, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4555341f, 0.3215686f, 0));
	$set(this, color39, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.47377098f, 0.41960782f, 0));
	$set(this, color40, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.03771078f, 0.062745094f, 0));
	$set(this, color41, decodeColor("nimbusBlueGrey"_s, -0.02222222f, -0.032806106f, 0.011764705f, 0));
	$set(this, color42, decodeColor("nimbusBase"_s, 0.021348298f, -0.59223604f, 0.35294116f, 0));
	$set(this, color43, decodeColor("nimbusBase"_s, 0.021348298f, -0.56722116f, 0.3098039f, 0));
	$set(this, color44, decodeColor("nimbusBase"_s, 0.021348298f, -0.56875f, 0.32941175f, 0));
	$set(this, color45, decodeColor("nimbusBase"_s, 0.027408898f, -0.5735674f, 0.14509803f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void CheckBoxPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case CheckBoxPainter::ICON_DISABLED:
		{
			painticonDisabled(g);
			break;
		}
	case CheckBoxPainter::ICON_ENABLED:
		{
			painticonEnabled(g);
			break;
		}
	case CheckBoxPainter::ICON_FOCUSED:
		{
			painticonFocused(g);
			break;
		}
	case CheckBoxPainter::ICON_MOUSEOVER:
		{
			painticonMouseOver(g);
			break;
		}
	case CheckBoxPainter::ICON_MOUSEOVER_FOCUSED:
		{
			painticonMouseOverAndFocused(g);
			break;
		}
	case CheckBoxPainter::ICON_PRESSED:
		{
			painticonPressed(g);
			break;
		}
	case CheckBoxPainter::ICON_PRESSED_FOCUSED:
		{
			painticonPressedAndFocused(g);
			break;
		}
	case CheckBoxPainter::ICON_SELECTED:
		{
			painticonSelected(g);
			break;
		}
	case CheckBoxPainter::ICON_SELECTED_FOCUSED:
		{
			painticonSelectedAndFocused(g);
			break;
		}
	case CheckBoxPainter::ICON_PRESSED_SELECTED:
		{
			painticonPressedAndSelected(g);
			break;
		}
	case CheckBoxPainter::ICON_PRESSED_SELECTED_FOCUSED:
		{
			painticonPressedAndSelectedAndFocused(g);
			break;
		}
	case CheckBoxPainter::ICON_MOUSEOVER_SELECTED:
		{
			painticonMouseOverAndSelected(g);
			break;
		}
	case CheckBoxPainter::ICON_MOUSEOVER_SELECTED_FOCUSED:
		{
			painticonMouseOverAndSelectedAndFocused(g);
			break;
		}
	case CheckBoxPainter::ICON_DISABLED_SELECTED:
		{
			painticonDisabledAndSelected(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* CheckBoxPainter::getPaintContext() {
	return this->ctx;
}

void CheckBoxPainter::painticonDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void CheckBoxPainter::painticonEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void CheckBoxPainter::painticonFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
}

void CheckBoxPainter::painticonMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
}

void CheckBoxPainter::painticonMouseOverAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
}

void CheckBoxPainter::painticonPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
}

void CheckBoxPainter::painticonPressedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
}

void CheckBoxPainter::painticonSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
}

void CheckBoxPainter::painticonSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
}

void CheckBoxPainter::painticonPressedAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color29);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient12(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
}

void CheckBoxPainter::painticonPressedAndSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient12(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
}

void CheckBoxPainter::painticonMouseOverAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient13(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient14(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
}

void CheckBoxPainter::painticonMouseOverAndSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient13(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient14(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color28);
	g->fill(this->path);
}

void CheckBoxPainter::painticonDisabledAndSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient15(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient16(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint(this->color45);
	g->fill(this->path);
}

$RoundRectangle2D* CheckBoxPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.4f), 3.7058823f, 3.7058823f);
	return this->roundRect;
}

$RoundRectangle2D* CheckBoxPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.4f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.6f), 3.764706f, 3.764706f);
	return this->roundRect;
}

$RoundRectangle2D* CheckBoxPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(1.75f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.8f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.75f), 5.1764708f, 5.1764708f);
	return this->roundRect;
}

$RoundRectangle2D* CheckBoxPainter::decodeRoundRect4() {
	double var$0 = (double)decodeX(0.120000005f);
	double var$1 = (double)decodeY(0.120000005f);
	float var$3 = decodeX(2.8799999f);
	double var$2 = (double)(var$3 - decodeX(0.120000005f));
	float var$4 = decodeY(2.8799999f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.120000005f), 8.0f, 8.0f);
	return this->roundRect;
}

$Path2D* CheckBoxPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0036764f);
	$nc(this->path)->moveTo(var$0, decodeY(1.382353f));
	double var$1 = (double)decodeX(1.2536764f);
	$nc(this->path)->lineTo(var$1, decodeY(1.382353f));
	double var$2 = (double)decodeX(1.430147f);
	$nc(this->path)->lineTo(var$2, decodeY(1.757353f));
	double var$3 = (double)decodeX(1.8235294f);
	$nc(this->path)->lineTo(var$3, decodeY(0.62352943f));
	double var$4 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$4, decodeY(0.61764705f));
	double var$5 = (double)decodeX(1.492647f);
	$nc(this->path)->lineTo(var$5, decodeY(2.0058823f));
	double var$6 = (double)decodeX(1.382353f);
	$nc(this->path)->lineTo(var$6, decodeY(2.0058823f));
	double var$7 = (double)decodeX(1.0036764f);
	$nc(this->path)->lineTo(var$7, decodeY(1.382353f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* CheckBoxPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* CheckBoxPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.32228917f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* CheckBoxPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* CheckBoxPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.32228917f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* CheckBoxPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* CheckBoxPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.32228917f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17
	}));
}

$Paint* CheckBoxPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19
	}));
}

$Paint* CheckBoxPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.32228917f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* CheckBoxPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color23,
		$(decodeColor(this->color23, this->color24, 0.5f)),
		this->color24
	}));
}

$Paint* CheckBoxPainter::decodeGradient10($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.32228917f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* CheckBoxPainter::decodeGradient11($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color28,
		$(decodeColor(this->color28, this->color30, 0.5f)),
		this->color30
	}));
}

$Paint* CheckBoxPainter::decodeGradient12($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.05775076f,
		0.11550152f,
		0.38003993f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32,
		$(decodeColor(this->color32, this->color33, 0.5f)),
		this->color33,
		$(decodeColor(this->color33, this->color34, 0.5f)),
		this->color34
	}));
}

$Paint* CheckBoxPainter::decodeGradient13($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color35,
		$(decodeColor(this->color35, this->color36, 0.5f)),
		this->color36
	}));
}

$Paint* CheckBoxPainter::decodeGradient14($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.32228917f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color37,
		$(decodeColor(this->color37, this->color38, 0.5f)),
		this->color38,
		$(decodeColor(this->color38, this->color39, 0.5f)),
		this->color39
	}));
}

$Paint* CheckBoxPainter::decodeGradient15($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25210086f * w) + x, (0.9957983f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color40,
		$(decodeColor(this->color40, this->color41, 0.5f)),
		this->color41
	}));
}

$Paint* CheckBoxPainter::decodeGradient16($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25f * w) + x, (0.997549f * h) + y, $$new($floats, {
		0.0f,
		0.32228917f,
		0.64457834f,
		0.82228917f,
		1.0f
	}), $$new($ColorArray, {
		this->color42,
		$(decodeColor(this->color42, this->color43, 0.5f)),
		this->color43,
		$(decodeColor(this->color43, this->color44, 0.5f)),
		this->color44
	}));
}

CheckBoxPainter::CheckBoxPainter() {
}

$Class* CheckBoxPainter::load$($String* name, bool initialize) {
	$loadClass(CheckBoxPainter, name, initialize, &_CheckBoxPainter_ClassInfo_, allocate$CheckBoxPainter);
	return class$;
}

$Class* CheckBoxPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
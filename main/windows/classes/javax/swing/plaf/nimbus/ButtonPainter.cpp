#include <javax/swing/plaf/nimbus/ButtonPainter.h>

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

#undef BACKGROUND_DEFAULT
#undef BACKGROUND_DEFAULT_FOCUSED
#undef BACKGROUND_DISABLED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_FOCUSED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_DEFAULT
#undef BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED
#undef BACKGROUND_MOUSEOVER_FOCUSED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_DEFAULT
#undef BACKGROUND_PRESSED_DEFAULT_FOCUSED
#undef BACKGROUND_PRESSED_FOCUSED

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

$FieldInfo _ButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DEFAULT", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_DEFAULT)},
	{"BACKGROUND_DEFAULT_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_DEFAULT_FOCUSED)},
	{"BACKGROUND_MOUSEOVER_DEFAULT", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_MOUSEOVER_DEFAULT)},
	{"BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED)},
	{"BACKGROUND_PRESSED_DEFAULT", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_PRESSED_DEFAULT)},
	{"BACKGROUND_PRESSED_DEFAULT_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_PRESSED_DEFAULT_FOCUSED)},
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ButtonPainter, BACKGROUND_PRESSED_FOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(ButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color45)},
	{"color46", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color46)},
	{"color47", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color47)},
	{"color48", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color48)},
	{"color49", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color49)},
	{"color50", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color50)},
	{"color51", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ButtonPainter, color51)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ButtonPainter, componentColors)},
	{}
};

$MethodInfo _ButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient11))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ButtonPainter::*)($Shape*)>(&ButtonPainter::decodeGradient9))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ButtonPainter::*)()>(&ButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ButtonPainter::*)()>(&ButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ButtonPainter::*)()>(&ButtonPainter::decodeRoundRect3))},
	{"decodeRoundRect4", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ButtonPainter::*)()>(&ButtonPainter::decodeRoundRect4))},
	{"decodeRoundRect5", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ButtonPainter::*)()>(&ButtonPainter::decodeRoundRect5))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getExtendedCacheKeys", "(Ljavax/swing/JComponent;)[Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDefault", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundDefault))},
	{"paintBackgroundDefaultAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundDefaultAndFocused))},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundEnabled))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndDefault", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundMouseOverAndDefault))},
	{"paintBackgroundMouseOverAndDefaultAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundMouseOverAndDefaultAndFocused))},
	{"paintBackgroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundMouseOverAndFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndDefault", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundPressedAndDefault))},
	{"paintBackgroundPressedAndDefaultAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundPressedAndDefaultAndFocused))},
	{"paintBackgroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ButtonPainter::*)($Graphics2D*)>(&ButtonPainter::paintBackgroundPressedAndFocused))},
	{}
};

$ClassInfo _ButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ButtonPainter_FieldInfo_,
	_ButtonPainter_MethodInfo_
};

$Object* allocate$ButtonPainter($Class* clazz) {
	return $of($alloc(ButtonPainter));
}

void ButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.06885965f, -0.36862746f, -190));
	$set(this, color2, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.34585923f, -0.007843137f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.095173776f, -0.25882354f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.004681647f, -0.6197143f, 0.43137252f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.004681647f, -0.5766426f, 0.38039213f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.43866998f, 0.24705881f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.46404046f, 0.36470586f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.47761154f, 0.44313723f, 0));
	$set(this, color9, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, 0.0013483167f, -0.1769987f, -0.12156865f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 0.059279382f, 0.3642857f, -0.43529415f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, -0.0017285943f, -0.5822163f, 0.40392154f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4555341f, 0.3215686f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.47698414f, 0.43921566f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, -0.06415892f, -0.5455182f, 0.45098037f, 0));
	$set(this, color17, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -95));
	$set(this, color18, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, -3.528595E-5f, 0.018606722f, -0.23137257f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, -4.2033195E-4f, -0.38050595f, 0.20392156f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 0.001903832f, -0.29863563f, 0.1490196f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, 0.0018727183f, -0.14126986f, 0.15686274f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, 8.9377165E-4f, -0.20852983f, 0.2588235f, 0));
	$set(this, color25, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.06885965f, -0.36862746f, -232));
	$set(this, color26, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06766917f, 0.07843137f, 0));
	$set(this, color27, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.06484103f, 0.027450979f, 0));
	$set(this, color28, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08477524f, 0.16862744f, 0));
	$set(this, color29, decodeColor("nimbusBlueGrey"_s, -0.015872955f, -0.080091536f, 0.15686274f, 0));
	$set(this, color30, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07016757f, 0.12941176f, 0));
	$set(this, color31, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07052632f, 0.1372549f, 0));
	$set(this, color32, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.070878744f, 0.14509803f, 0));
	$set(this, color33, decodeColor("nimbusBlueGrey"_s, -0.055555522f, -0.05356429f, -0.12549019f, 0));
	$set(this, color34, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.0147816315f, -0.3764706f, 0));
	$set(this, color35, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10655806f, 0.24313724f, 0));
	$set(this, color36, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.09823123f, 0.2117647f, 0));
	$set(this, color37, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.0749532f, 0.24705881f, 0));
	$set(this, color38, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color39, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.020974077f, -0.21960783f, 0));
	$set(this, color40, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.11169591f, -0.53333336f, 0));
	$set(this, color41, decodeColor("nimbusBlueGrey"_s, 0.055555582f, -0.10658931f, 0.25098038f, 0));
	$set(this, color42, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.098526314f, 0.2352941f, 0));
	$set(this, color43, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.07333623f, 0.20392156f, 0));
	$set(this, color44, $new($Color, 245, 250, 255, 160));
	$set(this, color45, decodeColor("nimbusBlueGrey"_s, 0.055555582f, 0.8894737f, -0.7176471f, 0));
	$set(this, color46, decodeColor("nimbusBlueGrey"_s, 0.0f, 5.847961E-4f, -0.32156864f, 0));
	$set(this, color47, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.05960039f, 0.10196078f, 0));
	$set(this, color48, decodeColor("nimbusBlueGrey"_s, -0.008547008f, -0.04772438f, 0.06666666f, 0));
	$set(this, color49, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0018306673f, -0.02352941f, 0));
	$set(this, color50, decodeColor("nimbusBlueGrey"_s, -0.0027777553f, -0.0212406f, 0.13333333f, 0));
	$set(this, color51, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.030845039f, 0.23921567f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ButtonPainter::BACKGROUND_DEFAULT:
		{
			paintBackgroundDefault(g);
			break;
		}
	case ButtonPainter::BACKGROUND_DEFAULT_FOCUSED:
		{
			paintBackgroundDefaultAndFocused(g);
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER_DEFAULT:
		{
			paintBackgroundMouseOverAndDefault(g);
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED:
		{
			paintBackgroundMouseOverAndDefaultAndFocused(g);
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED_DEFAULT:
		{
			paintBackgroundPressedAndDefault(g);
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED_DEFAULT_FOCUSED:
		{
			paintBackgroundPressedAndDefaultAndFocused(g);
			break;
		}
	case ButtonPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case ButtonPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case ButtonPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			paintBackgroundMouseOverAndFocused(g);
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			paintBackgroundPressedAndFocused(g);
			break;
		}
	}
}

$ObjectArray* ButtonPainter::getExtendedCacheKeys($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, extendedCacheKeys, nullptr);
	switch (this->state) {
	case ButtonPainter::BACKGROUND_DEFAULT:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color4, -0.6197143f, 0.43137252f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color5, -0.5766426f, 0.38039213f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color6, -0.43866998f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color7, -0.46404046f, 0.36470586f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color8, -0.47761154f, 0.44313723f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_DEFAULT_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color4, -0.6197143f, 0.43137252f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color5, -0.5766426f, 0.38039213f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color6, -0.43866998f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color7, -0.46404046f, 0.36470586f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color8, -0.47761154f, 0.44313723f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER_DEFAULT:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color12, -0.6198413f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color13, -0.5822163f, 0.40392154f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color14, -0.4555341f, 0.3215686f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color15, -0.47698414f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color16, -0.5455182f, 0.45098037f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color12, -0.6198413f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color13, -0.5822163f, 0.40392154f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color14, -0.4555341f, 0.3215686f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color15, -0.47698414f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color16, -0.5455182f, 0.45098037f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED_DEFAULT:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color20, -0.38050595f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color21, -0.29863563f, 0.1490196f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color22, 0.0f, 0.0f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color23, -0.14126986f, 0.15686274f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color24, -0.20852983f, 0.2588235f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED_DEFAULT_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color20, -0.38050595f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color21, -0.29863563f, 0.1490196f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color22, 0.0f, 0.0f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color23, -0.14126986f, 0.15686274f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color24, -0.20852983f, 0.2588235f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_ENABLED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color35, -0.10655806f, 0.24313724f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color36, -0.09823123f, 0.2117647f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color30, -0.07016757f, 0.12941176f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color37, -0.0749532f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color38, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color35, -0.10655806f, 0.24313724f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color36, -0.09823123f, 0.2117647f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color30, -0.07016757f, 0.12941176f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color37, -0.0749532f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color38, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color41, -0.10658931f, 0.25098038f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color42, -0.098526314f, 0.2352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color43, -0.07333623f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color38, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color41, -0.10658931f, 0.25098038f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color42, -0.098526314f, 0.2352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color43, -0.07333623f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color38, -0.110526316f, 0.25490195f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color47, -0.05960039f, 0.10196078f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color48, -0.04772438f, 0.06666666f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color49, -0.0018306673f, -0.02352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color50, -0.0212406f, 0.13333333f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color51, -0.030845039f, 0.23921567f, 0)))
			}));
			break;
		}
	case ButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color47, -0.05960039f, 0.10196078f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color48, -0.04772438f, 0.06666666f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color49, -0.0018306673f, -0.02352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color50, -0.0212406f, 0.13333333f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color51, -0.030845039f, 0.23921567f, 0)))
			}));
			break;
		}
	}
	return extendedCacheKeys;
}

$AbstractRegionPainter$PaintContext* ButtonPainter::getPaintContext() {
	return this->ctx;
}

void ButtonPainter::paintBackgroundDefault($Graphics2D* g) {
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

void ButtonPainter::paintBackgroundDefaultAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundMouseOverAndDefault($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect5());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundMouseOverAndDefaultAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient3(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundPressedAndDefault($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color17);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundPressedAndDefaultAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color25);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
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
}

void ButtonPainter::paintBackgroundMouseOverAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color44);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

void ButtonPainter::paintBackgroundPressedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect4());
	$nc(g)->setPaint(this->color9);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
}

$RoundRectangle2D* ButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.2857143f);
	double var$1 = (double)decodeY(0.42857143f);
	float var$3 = decodeX(2.7142859f);
	double var$2 = (double)(var$3 - decodeX(0.2857143f));
	float var$4 = decodeY(2.857143f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.42857143f), 12.0f, 12.0f);
	return this->roundRect;
}

$RoundRectangle2D* ButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(0.2857143f);
	double var$1 = (double)decodeY(0.2857143f);
	float var$3 = decodeX(2.7142859f);
	double var$2 = (double)(var$3 - decodeX(0.2857143f));
	float var$4 = decodeY(2.7142859f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.2857143f), 9.0f, 9.0f);
	return this->roundRect;
}

$RoundRectangle2D* ButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(0.42857143f);
	double var$1 = (double)decodeY(0.42857143f);
	float var$3 = decodeX(2.5714285f);
	double var$2 = (double)(var$3 - decodeX(0.42857143f));
	float var$4 = decodeY(2.5714285f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.42857143f), 7.0f, 7.0f);
	return this->roundRect;
}

$RoundRectangle2D* ButtonPainter::decodeRoundRect4() {
	double var$0 = (double)decodeX(0.08571429f);
	double var$1 = (double)decodeY(0.08571429f);
	float var$3 = decodeX(2.914286f);
	double var$2 = (double)(var$3 - decodeX(0.08571429f));
	float var$4 = decodeY(2.914286f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.08571429f), 11.0f, 11.0f);
	return this->roundRect;
}

$RoundRectangle2D* ButtonPainter::decodeRoundRect5() {
	double var$0 = (double)decodeX(0.2857143f);
	double var$1 = (double)decodeY(0.42857143f);
	float var$3 = decodeX(2.7142859f);
	double var$2 = (double)(var$3 - decodeX(0.2857143f));
	float var$4 = decodeY(2.857143f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.42857143f), 9.0f, 9.0f);
	return this->roundRect;
}

$Paint* ButtonPainter::decodeGradient1($Shape* s) {
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
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* ButtonPainter::decodeGradient2($Shape* s) {
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

$Paint* ButtonPainter::decodeGradient3($Shape* s) {
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
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* ButtonPainter::decodeGradient4($Shape* s) {
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
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19
	}));
}

$Paint* ButtonPainter::decodeGradient5($Shape* s) {
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
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* ButtonPainter::decodeGradient6($Shape* s) {
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
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30,
		$(decodeColor(this->color30, this->color30, 0.5f)),
		this->color30,
		$(decodeColor(this->color30, this->color31, 0.5f)),
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32
	}));
}

$Paint* ButtonPainter::decodeGradient7($Shape* s) {
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
		this->color33,
		$(decodeColor(this->color33, this->color34, 0.5f)),
		this->color34
	}));
}

$Paint* ButtonPainter::decodeGradient8($Shape* s) {
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

$Paint* ButtonPainter::decodeGradient9($Shape* s) {
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
		this->color39,
		$(decodeColor(this->color39, this->color40, 0.5f)),
		this->color40
	}));
}

$Paint* ButtonPainter::decodeGradient10($Shape* s) {
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

$Paint* ButtonPainter::decodeGradient11($Shape* s) {
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
		this->color45,
		$(decodeColor(this->color45, this->color46, 0.5f)),
		this->color46
	}));
}

ButtonPainter::ButtonPainter() {
}

$Class* ButtonPainter::load$($String* name, bool initialize) {
	$loadClass(ButtonPainter, name, initialize, &_ButtonPainter_ClassInfo_, allocate$ButtonPainter);
	return class$;
}

$Class* ButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/nimbus/SliderThumbPainter.h>

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
#undef BACKGROUND_DISABLED_ARROWSHAPE
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_ARROWSHAPE
#undef BACKGROUND_FOCUSED
#undef BACKGROUND_FOCUSED_ARROWSHAPE
#undef BACKGROUND_FOCUSED_MOUSEOVER
#undef BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE
#undef BACKGROUND_FOCUSED_PRESSED
#undef BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_ARROWSHAPE
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_ARROWSHAPE

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
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

$FieldInfo _SliderThumbPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_FOCUSED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_FOCUSED_MOUSEOVER)},
	{"BACKGROUND_FOCUSED_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_FOCUSED_PRESSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_ENABLED_ARROWSHAPE", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_ENABLED_ARROWSHAPE)},
	{"BACKGROUND_DISABLED_ARROWSHAPE", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_DISABLED_ARROWSHAPE)},
	{"BACKGROUND_MOUSEOVER_ARROWSHAPE", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_MOUSEOVER_ARROWSHAPE)},
	{"BACKGROUND_PRESSED_ARROWSHAPE", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_PRESSED_ARROWSHAPE)},
	{"BACKGROUND_FOCUSED_ARROWSHAPE", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_FOCUSED_ARROWSHAPE)},
	{"BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE)},
	{"BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE", "I", nullptr, $STATIC | $FINAL, $constField(SliderThumbPainter, BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE)},
	{"state", "I", nullptr, $PRIVATE, $field(SliderThumbPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(SliderThumbPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(SliderThumbPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(SliderThumbPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(SliderThumbPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(SliderThumbPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SliderThumbPainter, color32)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(SliderThumbPainter, componentColors)},
	{}
};

$MethodInfo _SliderThumbPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(SliderThumbPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&SliderThumbPainter::init$))},
	{"decodeEllipse1", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodeEllipse1))},
	{"decodeEllipse2", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodeEllipse2))},
	{"decodeEllipse3", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodeEllipse3))},
	{"decodeEllipse4", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodeEllipse4))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient13))},
	{"decodeGradient14", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient14))},
	{"decodeGradient15", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient15))},
	{"decodeGradient16", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient16))},
	{"decodeGradient17", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient17))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SliderThumbPainter::*)($Shape*)>(&SliderThumbPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SliderThumbPainter::*)()>(&SliderThumbPainter::decodePath4))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundDisabled))},
	{"paintBackgroundDisabledAndArrowShape", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundDisabledAndArrowShape))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndArrowShape", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundEnabledAndArrowShape))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundFocused))},
	{"paintBackgroundFocusedAndArrowShape", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundFocusedAndArrowShape))},
	{"paintBackgroundFocusedAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundFocusedAndMouseOver))},
	{"paintBackgroundFocusedAndMouseOverAndArrowShape", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundFocusedAndMouseOverAndArrowShape))},
	{"paintBackgroundFocusedAndPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundFocusedAndPressed))},
	{"paintBackgroundFocusedAndPressedAndArrowShape", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundFocusedAndPressedAndArrowShape))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndArrowShape", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundMouseOverAndArrowShape))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndArrowShape", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SliderThumbPainter::*)($Graphics2D*)>(&SliderThumbPainter::paintBackgroundPressedAndArrowShape))},
	{}
};

$ClassInfo _SliderThumbPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.SliderThumbPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_SliderThumbPainter_FieldInfo_,
	_SliderThumbPainter_MethodInfo_
};

$Object* allocate$SliderThumbPainter($Class* clazz) {
	return $of($alloc(SliderThumbPainter));
}

void SliderThumbPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.021348298f, -0.5625436f, 0.25490195f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.015098333f, -0.55105823f, 0.19215685f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.021348298f, -0.5924243f, 0.35686272f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.021348298f, -0.56722116f, 0.3098039f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.021348298f, -0.56844974f, 0.32549018f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, -0.003968239f, 0.0014736876f, -0.25490198f, -156));
	$set(this, color7, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.34585923f, -0.007843137f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, -0.0017285943f, -0.11571431f, -0.25490198f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, -0.023096085f, -0.6238095f, 0.43921566f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.43866998f, 0.24705881f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.45714286f, 0.32941175f, 0));
	$set(this, color12, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, -0.0038217902f, -0.15532213f, -0.14901963f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54509807f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.004681647f, -0.62780917f, 0.44313723f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.4653107f, 0.32549018f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4563421f, 0.32549018f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, -0.0017285943f, -0.4732143f, 0.39215684f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 0.0015952587f, -0.04875779f, -0.18823531f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.44943976f, 0.25098038f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 8.9377165E-4f, -0.121094406f, 0.12156862f, 0));
	$set(this, color23, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -121));
	$set(this, color24, $new($Color, 150, 156, 168, 146));
	$set(this, color25, decodeColor("nimbusBase"_s, -0.0033828616f, -0.40608466f, -0.019607842f, 0));
	$set(this, color26, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.17594418f, -0.20784315f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, 0.0023007393f, -0.11332625f, -0.28627452f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, -0.023096085f, -0.62376213f, 0.4352941f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, 0.004681647f, -0.594392f, 0.39999998f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, -0.0017285943f, -0.4454704f, 0.25490195f, 0));
	$set(this, color31, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4625541f, 0.35686272f, 0));
	$set(this, color32, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.47442397f, 0.4235294f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void SliderThumbPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case SliderThumbPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_FOCUSED_MOUSEOVER:
		{
			paintBackgroundFocusedAndMouseOver(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_FOCUSED_PRESSED:
		{
			paintBackgroundFocusedAndPressed(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_ENABLED_ARROWSHAPE:
		{
			paintBackgroundEnabledAndArrowShape(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_DISABLED_ARROWSHAPE:
		{
			paintBackgroundDisabledAndArrowShape(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_MOUSEOVER_ARROWSHAPE:
		{
			paintBackgroundMouseOverAndArrowShape(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_PRESSED_ARROWSHAPE:
		{
			paintBackgroundPressedAndArrowShape(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_FOCUSED_ARROWSHAPE:
		{
			paintBackgroundFocusedAndArrowShape(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE:
		{
			paintBackgroundFocusedAndMouseOverAndArrowShape(g);
			break;
		}
	case SliderThumbPainter::BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE:
		{
			paintBackgroundFocusedAndPressedAndArrowShape(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* SliderThumbPainter::getPaintContext() {
	return this->ctx;
}

void SliderThumbPainter::paintBackgroundDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse1());
	$nc(g)->setPaint($(decodeGradient1(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient2(this->ellipse)));
	g->fill(this->ellipse);
}

void SliderThumbPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient3(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient4(this->ellipse)));
	g->fill(this->ellipse);
}

void SliderThumbPainter::paintBackgroundFocused($Graphics2D* g) {
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

void SliderThumbPainter::paintBackgroundFocusedAndMouseOver($Graphics2D* g) {
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

void SliderThumbPainter::paintBackgroundFocusedAndPressed($Graphics2D* g) {
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

void SliderThumbPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient5(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient6(this->ellipse)));
	g->fill(this->ellipse);
}

void SliderThumbPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, ellipse, decodeEllipse3());
	$nc(g)->setPaint(this->color23);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint($(decodeGradient7(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint($(decodeGradient8(this->ellipse)));
	g->fill(this->ellipse);
}

void SliderThumbPainter::paintBackgroundEnabledAndArrowShape($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color24);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
}

void SliderThumbPainter::paintBackgroundDisabledAndArrowShape($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath2());
	$nc(g)->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

void SliderThumbPainter::paintBackgroundMouseOverAndArrowShape($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color24);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient13(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient14(this->path)));
	g->fill(this->path);
}

void SliderThumbPainter::paintBackgroundPressedAndArrowShape($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color24);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient15(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient16(this->path)));
	g->fill(this->path);
}

void SliderThumbPainter::paintBackgroundFocusedAndArrowShape($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient17(this->path)));
	g->fill(this->path);
}

void SliderThumbPainter::paintBackgroundFocusedAndMouseOverAndArrowShape($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient13(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient14(this->path)));
	g->fill(this->path);
}

void SliderThumbPainter::paintBackgroundFocusedAndPressedAndArrowShape($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath4());
	$nc(g)->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient15(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient16(this->path)));
	g->fill(this->path);
}

$Ellipse2D* SliderThumbPainter::decodeEllipse1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->ellipse;
}

$Ellipse2D* SliderThumbPainter::decodeEllipse2() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.4f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->ellipse;
}

$Ellipse2D* SliderThumbPainter::decodeEllipse3() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.8f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->ellipse;
}

$Ellipse2D* SliderThumbPainter::decodeEllipse4() {
	double var$0 = (double)decodeX(0.120000005f);
	double var$1 = (double)decodeY(0.120000005f);
	float var$3 = decodeX(2.8799999f);
	double var$2 = (double)(var$3 - decodeX(0.120000005f));
	float var$4 = decodeY(2.8799999f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.120000005f));
	return this->ellipse;
}

$Path2D* SliderThumbPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.8166667f);
	$nc(this->path)->moveTo(var$0, decodeY(0.5007576f));
	double var$1 = (double)decodeAnchorX(0.8166667f, 1.5643269f);
	double var$2 = (double)decodeAnchorY(0.5007576f, -0.3097513f);
	double var$3 = (double)decodeAnchorX(2.7925456f, 0.058173586f);
	double var$4 = (double)decodeAnchorY(1.6116884f, -0.4647635f);
	double var$5 = (double)decodeX(2.7925456f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.6116884f));
	double var$6 = (double)decodeAnchorX(2.7925456f, -0.34086856f);
	double var$7 = (double)decodeAnchorY(1.6116884f, 2.7232852f);
	double var$8 = (double)decodeAnchorX(0.7006364f, 4.568128f);
	double var$9 = (double)decodeAnchorY(2.7693636f, -0.006014915f);
	double var$10 = (double)decodeX(0.7006364f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(2.7693636f));
	double var$11 = (double)decodeAnchorX(0.7006364f, -3.5233955f);
	double var$12 = (double)decodeAnchorY(2.7693636f, 0.004639302f);
	double var$13 = (double)decodeAnchorX(0.8166667f, -1.8635255f);
	double var$14 = (double)decodeAnchorY(0.5007576f, 0.36899543f);
	double var$15 = (double)decodeX(0.8166667f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.5007576f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SliderThumbPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6155303f);
	$nc(this->path)->moveTo(var$0, decodeY(2.5954547f));
	double var$1 = (double)decodeAnchorX(0.6155303f, 0.90980893f);
	double var$2 = (double)decodeAnchorY(2.5954547f, 1.3154242f);
	double var$3 = (double)decodeAnchorX(2.6151516f, 0.014588808f);
	double var$4 = (double)decodeAnchorY(1.6112013f, 0.9295521f);
	double var$5 = (double)decodeX(2.6151516f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.6112013f));
	double var$6 = (double)decodeAnchorX(2.6151516f, -0.01365518f);
	double var$7 = (double)decodeAnchorY(1.6112013f, -0.8700643f);
	double var$8 = (double)decodeAnchorX(0.60923916f, 0.9729935f);
	double var$9 = (double)decodeAnchorY(0.40716404f, -1.4248644f);
	double var$10 = (double)decodeX(0.60923916f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.40716404f));
	double var$11 = (double)decodeAnchorX(0.60923916f, -0.7485209f);
	double var$12 = (double)decodeAnchorY(0.40716404f, 1.0961438f);
	double var$13 = (double)decodeAnchorX(0.6155303f, -0.74998796f);
	double var$14 = (double)decodeAnchorY(2.5954547f, -1.0843511f);
	double var$15 = (double)decodeX(0.6155303f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(2.5954547f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SliderThumbPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.8055606f);
	$nc(this->path)->moveTo(var$0, decodeY(0.6009697f));
	double var$1 = (double)decodeAnchorX(0.8055606f, 0.50820893f);
	double var$2 = (double)decodeAnchorY(0.6009697f, -0.8490881f);
	double var$3 = (double)decodeAnchorX(2.3692727f, 0.0031846066f);
	double var$4 = (double)decodeAnchorY(1.613117f, -0.60668826f);
	double var$5 = (double)decodeX(2.3692727f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.613117f));
	double var$6 = (double)decodeAnchorX(2.3692727f, -0.003890196f);
	double var$7 = (double)decodeAnchorY(1.613117f, 0.74110764f);
	double var$8 = (double)decodeAnchorX(0.7945455f, 0.3870974f);
	double var$9 = (double)decodeAnchorY(2.3932729f, 1.240782f);
	double var$10 = (double)decodeX(0.7945455f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(2.3932729f));
	double var$11 = (double)decodeAnchorX(0.7945455f, -0.38636583f);
	double var$12 = (double)decodeAnchorY(2.3932729f, -1.2384372f);
	double var$13 = (double)decodeAnchorX(0.8055606f, -0.995154f);
	double var$14 = (double)decodeAnchorY(0.6009697f, 1.6626496f);
	double var$15 = (double)decodeX(0.8055606f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.6009697f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SliderThumbPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.60059524f);
	$nc(this->path)->moveTo(var$0, decodeY(0.11727543f));
	double var$1 = (double)decodeAnchorX(0.60059524f, 1.5643269f);
	double var$2 = (double)decodeAnchorY(0.11727543f, -0.3097513f);
	double var$3 = (double)decodeAnchorX(2.7925456f, 0.004405844f);
	double var$4 = (double)decodeAnchorY(1.6116884f, -1.1881162f);
	double var$5 = (double)decodeX(2.7925456f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.6116884f));
	double var$6 = (double)decodeAnchorX(2.7925456f, -0.007364541f);
	double var$7 = (double)decodeAnchorY(1.6116884f, 1.9859827f);
	double var$8 = (double)decodeAnchorX(0.7006364f, 2.7716863f);
	double var$9 = (double)decodeAnchorY(2.8693638f, -0.008974582f);
	double var$10 = (double)decodeX(0.7006364f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(2.8693638f));
	double var$11 = (double)decodeAnchorX(0.7006364f, -3.754899f);
	double var$12 = (double)decodeAnchorY(2.8693638f, 0.012158176f);
	double var$13 = (double)decodeAnchorX(0.60059524f, -1.8635255f);
	double var$14 = (double)decodeAnchorY(0.11727543f, 0.36899543f);
	double var$15 = (double)decodeX(0.60059524f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.11727543f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* SliderThumbPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5106101f * w) + x, (-4.553649E-18f * h) + y, (0.49933687f * w) + x, (1.0039787f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* SliderThumbPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5023511f * w) + x, (0.0015673981f * h) + y, (0.5023511f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.21256684f,
		0.42513368f,
		0.71256685f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* SliderThumbPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.51f * w) + x, (-4.553649E-18f * h) + y, (0.51f * w) + x, (1.0039787f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* SliderThumbPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0015673981f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.21256684f,
		0.42513368f,
		0.56149733f,
		0.69786096f,
		0.8489305f,
		1.0f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* SliderThumbPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5106101f * w) + x, (-4.553649E-18f * h) + y, (0.49933687f * w) + x, (1.0039787f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* SliderThumbPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5023511f * w) + x, (0.0015673981f * h) + y, (0.5023511f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.21256684f,
		0.42513368f,
		0.56149733f,
		0.69786096f,
		0.8489305f,
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

$Paint* SliderThumbPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5106101f * w) + x, (-4.553649E-18f * h) + y, (0.49933687f * w) + x, (1.0039787f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color14,
		$(decodeColor(this->color14, this->color19, 0.5f)),
		this->color19
	}));
}

$Paint* SliderThumbPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5023511f * w) + x, (0.0015673981f * h) + y, (0.5023511f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.23796791f,
		0.47593582f,
		0.5360962f,
		0.5962567f,
		0.79812837f,
		1.0f
	}), $$new($ColorArray, {
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* SliderThumbPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.24032257f,
		0.48064515f,
		0.7403226f,
		1.0f
	}), $$new($ColorArray, {
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* SliderThumbPainter::decodeGradient10($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.061290324f,
		0.1016129f,
		0.14193548f,
		0.3016129f,
		0.46129033f,
		0.5983871f,
		0.7354839f,
		0.7935484f,
		0.8516129f
	}), $$new($ColorArray, {
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30,
		$(decodeColor(this->color30, this->color31, 0.5f)),
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32
	}));
}

$Paint* SliderThumbPainter::decodeGradient11($Shape* s) {
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
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* SliderThumbPainter::decodeGradient12($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.21256684f,
		0.42513368f,
		0.71256685f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* SliderThumbPainter::decodeGradient13($Shape* s) {
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
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* SliderThumbPainter::decodeGradient14($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.21256684f,
		0.42513368f,
		0.56149733f,
		0.69786096f,
		0.8489305f,
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

$Paint* SliderThumbPainter::decodeGradient15($Shape* s) {
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
		this->color14,
		$(decodeColor(this->color14, this->color19, 0.5f)),
		this->color19
	}));
}

$Paint* SliderThumbPainter::decodeGradient16($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.23796791f,
		0.47593582f,
		0.5360962f,
		0.5962567f,
		0.79812837f,
		1.0f
	}), $$new($ColorArray, {
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* SliderThumbPainter::decodeGradient17($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.4925773f * w) + x, (0.082019866f * h) + y, (0.4925773f * w) + x, (0.91798013f * h) + y, $$new($floats, {
		0.061290324f,
		0.1016129f,
		0.14193548f,
		0.3016129f,
		0.46129033f,
		0.5983871f,
		0.7354839f,
		0.7935484f,
		0.8516129f
	}), $$new($ColorArray, {
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30,
		$(decodeColor(this->color30, this->color31, 0.5f)),
		this->color31,
		$(decodeColor(this->color31, this->color32, 0.5f)),
		this->color32
	}));
}

SliderThumbPainter::SliderThumbPainter() {
}

$Class* SliderThumbPainter::load$($String* name, bool initialize) {
	$loadClass(SliderThumbPainter, name, initialize, &_SliderThumbPainter_ClassInfo_, allocate$SliderThumbPainter);
	return class$;
}

$Class* SliderThumbPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
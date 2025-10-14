#include <javax/swing/plaf/nimbus/SpinnerPreviousButtonPainter.h>

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
#undef BACKGROUND_FOCUSED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_FOCUSED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_FOCUSED
#undef FOREGROUND_DISABLED
#undef FOREGROUND_ENABLED
#undef FOREGROUND_FOCUSED
#undef FOREGROUND_MOUSEOVER
#undef FOREGROUND_MOUSEOVER_FOCUSED
#undef FOREGROUND_PRESSED
#undef FOREGROUND_PRESSED_FOCUSED

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

$FieldInfo _SpinnerPreviousButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, BACKGROUND_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, BACKGROUND_PRESSED_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, BACKGROUND_PRESSED)},
	{"FOREGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, FOREGROUND_DISABLED)},
	{"FOREGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, FOREGROUND_ENABLED)},
	{"FOREGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, FOREGROUND_FOCUSED)},
	{"FOREGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, FOREGROUND_MOUSEOVER_FOCUSED)},
	{"FOREGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, FOREGROUND_PRESSED_FOCUSED)},
	{"FOREGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, FOREGROUND_MOUSEOVER)},
	{"FOREGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerPreviousButtonPainter, FOREGROUND_PRESSED)},
	{"state", "I", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, color30)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(SpinnerPreviousButtonPainter, componentColors)},
	{}
};

$MethodInfo _SpinnerPreviousButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&SpinnerPreviousButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerPreviousButtonPainter::*)($Shape*)>(&SpinnerPreviousButtonPainter::decodeGradient8))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerPreviousButtonPainter::*)()>(&SpinnerPreviousButtonPainter::decodePath9))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintBackgroundEnabled))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintBackgroundFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintBackgroundMouseOverAndFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintBackgroundPressedAndFocused))},
	{"paintForegroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintForegroundDisabled))},
	{"paintForegroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintForegroundEnabled))},
	{"paintForegroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintForegroundFocused))},
	{"paintForegroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintForegroundMouseOver))},
	{"paintForegroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintForegroundMouseOverAndFocused))},
	{"paintForegroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintForegroundPressed))},
	{"paintForegroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerPreviousButtonPainter::*)($Graphics2D*)>(&SpinnerPreviousButtonPainter::paintForegroundPressedAndFocused))},
	{}
};

$ClassInfo _SpinnerPreviousButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_SpinnerPreviousButtonPainter_FieldInfo_,
	_SpinnerPreviousButtonPainter_MethodInfo_
};

$Object* allocate$SpinnerPreviousButtonPainter($Class* clazz) {
	return $of($alloc(SpinnerPreviousButtonPainter));
}

void SpinnerPreviousButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.015098333f, -0.5557143f, 0.2352941f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.010237217f, -0.55799407f, 0.20784312f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.018570602f, -0.5821429f, 0.32941175f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.021348298f, -0.56722116f, 0.3098039f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.021348298f, -0.567841f, 0.31764704f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.0033834577f, -0.30588236f, -148));
	$set(this, color7, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.2583558f, -0.13333336f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.095173776f, -0.25882354f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 0.004681647f, -0.5383692f, 0.33725488f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, -0.0017285943f, -0.44453782f, 0.25098038f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.43866998f, 0.24705881f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4625541f, 0.35686272f, 0));
	$set(this, color13, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 0.0013483167f, 0.088923395f, -0.2784314f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.059279382f, 0.3642857f, -0.43529415f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.0010585189f, -0.541452f, 0.4078431f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.00254488f, -0.4608264f, 0.32549018f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4555341f, 0.3215686f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4757143f, 0.43137252f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 0.061133325f, 0.3642857f, -0.427451f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, -3.528595E-5f, 0.018606722f, -0.23137257f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 8.354783E-4f, -0.2578073f, 0.12549019f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, 8.9377165E-4f, -0.01599598f, 0.007843137f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, 0.0f, -0.00895375f, 0.007843137f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 8.9377165E-4f, -0.13853917f, 0.14509803f, 0));
	$set(this, color26, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.63529414f, -179));
	$set(this, color27, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -186));
	$set(this, color28, decodeColor("nimbusBase"_s, 0.018570602f, -0.56714284f, 0.1372549f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void SpinnerPreviousButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case SpinnerPreviousButtonPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case SpinnerPreviousButtonPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case SpinnerPreviousButtonPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case SpinnerPreviousButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			paintBackgroundMouseOverAndFocused(g);
			break;
		}
	case SpinnerPreviousButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			paintBackgroundPressedAndFocused(g);
			break;
		}
	case SpinnerPreviousButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case SpinnerPreviousButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case SpinnerPreviousButtonPainter::FOREGROUND_DISABLED:
		{
			paintForegroundDisabled(g);
			break;
		}
	case SpinnerPreviousButtonPainter::FOREGROUND_ENABLED:
		{
			paintForegroundEnabled(g);
			break;
		}
	case SpinnerPreviousButtonPainter::FOREGROUND_FOCUSED:
		{
			paintForegroundFocused(g);
			break;
		}
	case SpinnerPreviousButtonPainter::FOREGROUND_MOUSEOVER_FOCUSED:
		{
			paintForegroundMouseOverAndFocused(g);
			break;
		}
	case SpinnerPreviousButtonPainter::FOREGROUND_PRESSED_FOCUSED:
		{
			paintForegroundPressedAndFocused(g);
			break;
		}
	case SpinnerPreviousButtonPainter::FOREGROUND_MOUSEOVER:
		{
			paintForegroundMouseOver(g);
			break;
		}
	case SpinnerPreviousButtonPainter::FOREGROUND_PRESSED:
		{
			paintForegroundPressed(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* SpinnerPreviousButtonPainter::getPaintContext() {
	return this->ctx;
}

void SpinnerPreviousButtonPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath3());
	$nc(g)->setPaint(this->color6);
	g->fill(this->path);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintBackgroundFocused($Graphics2D* g) {
	$set(this, path, decodePath4());
	$nc(g)->setPaint(this->color13);
	g->fill(this->path);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintBackgroundMouseOverAndFocused($Graphics2D* g) {
	$set(this, path, decodePath5());
	$nc(g)->setPaint(this->color13);
	g->fill(this->path);
	$set(this, path, decodePath6());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath7());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintBackgroundPressedAndFocused($Graphics2D* g) {
	$set(this, path, decodePath4());
	$nc(g)->setPaint(this->color13);
	g->fill(this->path);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$set(this, path, decodePath3());
	$nc(g)->setPaint(this->color26);
	g->fill(this->path);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$set(this, path, decodePath8());
	$nc(g)->setPaint(this->color27);
	g->fill(this->path);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintForegroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color28);
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintForegroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color29);
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintForegroundFocused($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color29);
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintForegroundMouseOverAndFocused($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color29);
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintForegroundPressedAndFocused($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color30);
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintForegroundMouseOver($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color29);
	g->fill(this->path);
}

void SpinnerPreviousButtonPainter::paintForegroundPressed($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color30);
	g->fill(this->path);
}

$Path2D* SpinnerPreviousButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6666667f));
	double var$2 = (double)decodeX(2.142857f);
	$nc(this->path)->lineTo(var$2, decodeY(2.6666667f));
	double var$3 = (double)decodeAnchorX(2.142857f, 3.0f);
	double var$4 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.7142859f, 0.0f);
	double var$6 = (double)decodeAnchorY(2.0f, 2.0f);
	double var$7 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.0f));
	double var$8 = (double)decodeX(2.7142859f);
	$nc(this->path)->lineTo(var$8, decodeY(1.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.5f));
	double var$2 = (double)decodeX(2.142857f);
	$nc(this->path)->lineTo(var$2, decodeY(2.5f));
	double var$3 = (double)decodeAnchorX(2.142857f, 2.0f);
	double var$4 = (double)decodeAnchorY(2.5f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.5714285f, 0.0f);
	double var$6 = (double)decodeAnchorY(2.0f, 1.0f);
	double var$7 = (double)decodeX(2.5714285f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.0f));
	double var$8 = (double)decodeX(2.5714285f);
	$nc(this->path)->lineTo(var$8, decodeY(1.0f));
	double var$9 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$9, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6666667f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.8333333f));
	double var$2 = (double)decodeX(2.0324676f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8333333f));
	double var$3 = (double)decodeAnchorX(2.0324676f, 2.1136363f);
	double var$4 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.7142859f, 0.0f);
	double var$6 = (double)decodeAnchorY(2.0f, 3.0f);
	double var$7 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.0f));
	double var$8 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$8, decodeY(2.6666667f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.8999999f));
	double var$2 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8999999f));
	double var$3 = (double)decodeAnchorX(2.2f, 3.0f);
	double var$4 = (double)decodeAnchorY(2.8999999f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.9142857f, 0.0f);
	double var$6 = (double)decodeAnchorY(2.2333333f, 3.0f);
	double var$7 = (double)decodeX(2.9142857f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.2333333f));
	double var$8 = (double)decodeX(2.9142857f);
	$nc(this->path)->lineTo(var$8, decodeY(1.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.8999999f));
	double var$2 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8999999f));
	double var$3 = (double)decodeAnchorX(2.2f, 3.0f);
	double var$4 = (double)decodeAnchorY(2.8999999f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.9142857f, 0.0f);
	double var$6 = (double)decodeAnchorY(2.2333333f, 3.0f);
	double var$7 = (double)decodeX(2.9142857f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.2333333f));
	double var$8 = (double)decodeX(2.9142857f);
	$nc(this->path)->lineTo(var$8, decodeY(0.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6666667f));
	double var$2 = (double)decodeX(2.142857f);
	$nc(this->path)->lineTo(var$2, decodeY(2.6666667f));
	double var$3 = (double)decodeAnchorX(2.142857f, 3.0f);
	double var$4 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.7142859f, 0.0f);
	double var$6 = (double)decodeAnchorY(2.0f, 2.0f);
	double var$7 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.0f));
	double var$8 = (double)decodeX(2.7142859f);
	$nc(this->path)->lineTo(var$8, decodeY(0.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.5f));
	double var$2 = (double)decodeX(2.142857f);
	$nc(this->path)->lineTo(var$2, decodeY(2.5f));
	double var$3 = (double)decodeAnchorX(2.142857f, 2.0f);
	double var$4 = (double)decodeAnchorY(2.5f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.5714285f, 0.0f);
	double var$6 = (double)decodeAnchorY(2.0f, 1.0f);
	double var$7 = (double)decodeX(2.5714285f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.0f));
	double var$8 = (double)decodeX(2.5714285f);
	$nc(this->path)->lineTo(var$8, decodeY(0.0f));
	double var$9 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6666667f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.8333333f));
	double var$2 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$3 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.0324676f, -2.1136363f);
	double var$5 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$6 = (double)decodeX(2.0324676f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(2.8333333f));
	double var$7 = (double)decodeAnchorX(2.0324676f, 2.1136363f);
	double var$8 = (double)decodeAnchorY(2.8333333f, 0.0f);
	double var$9 = (double)decodeAnchorX(2.7142859f, 0.0f);
	double var$10 = (double)decodeAnchorY(2.0f, 3.0f);
	double var$11 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(2.0f));
	double var$12 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$12, decodeY(2.6666667f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerPreviousButtonPainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(1.5045455f);
	$nc(this->path)->lineTo(var$1, decodeY(1.9943181f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$3, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* SpinnerPreviousButtonPainter::decodeGradient1($Shape* s) {
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

$Paint* SpinnerPreviousButtonPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.05748663f,
		0.11497326f,
		0.55748665f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* SpinnerPreviousButtonPainter::decodeGradient3($Shape* s) {
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
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* SpinnerPreviousButtonPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.05748663f,
		0.11497326f,
		0.2419786f,
		0.36898395f,
		0.684492f,
		1.0f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12
	}));
}

$Paint* SpinnerPreviousButtonPainter::decodeGradient5($Shape* s) {
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
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15
	}));
}

$Paint* SpinnerPreviousButtonPainter::decodeGradient6($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.05748663f,
		0.11497326f,
		0.2419786f,
		0.36898395f,
		0.684492f,
		1.0f
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

$Paint* SpinnerPreviousButtonPainter::decodeGradient7($Shape* s) {
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
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21
	}));
}

$Paint* SpinnerPreviousButtonPainter::decodeGradient8($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.05748663f,
		0.11497326f,
		0.2419786f,
		0.36898395f,
		0.684492f,
		1.0f
	}), $$new($ColorArray, {
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23,
		$(decodeColor(this->color23, this->color24, 0.5f)),
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25
	}));
}

SpinnerPreviousButtonPainter::SpinnerPreviousButtonPainter() {
}

$Class* SpinnerPreviousButtonPainter::load$($String* name, bool initialize) {
	$loadClass(SpinnerPreviousButtonPainter, name, initialize, &_SpinnerPreviousButtonPainter_ClassInfo_, allocate$SpinnerPreviousButtonPainter);
	return class$;
}

$Class* SpinnerPreviousButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
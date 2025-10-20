#include <javax/swing/plaf/nimbus/SpinnerNextButtonPainter.h>

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

$FieldInfo _SpinnerNextButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, BACKGROUND_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, BACKGROUND_PRESSED_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, BACKGROUND_PRESSED)},
	{"FOREGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, FOREGROUND_DISABLED)},
	{"FOREGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, FOREGROUND_ENABLED)},
	{"FOREGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, FOREGROUND_FOCUSED)},
	{"FOREGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, FOREGROUND_MOUSEOVER_FOCUSED)},
	{"FOREGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, FOREGROUND_PRESSED_FOCUSED)},
	{"FOREGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, FOREGROUND_MOUSEOVER)},
	{"FOREGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(SpinnerNextButtonPainter, FOREGROUND_PRESSED)},
	{"state", "I", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, color29)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(SpinnerNextButtonPainter, componentColors)},
	{}
};

$MethodInfo _SpinnerNextButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(SpinnerNextButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&SpinnerNextButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient12))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(SpinnerNextButtonPainter::*)($Shape*)>(&SpinnerNextButtonPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodePath9))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(SpinnerNextButtonPainter::*)()>(&SpinnerNextButtonPainter::decodeRect2))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintBackgroundEnabled))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintBackgroundFocused))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintBackgroundMouseOverAndFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintBackgroundPressedAndFocused))},
	{"paintForegroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintForegroundDisabled))},
	{"paintForegroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintForegroundEnabled))},
	{"paintForegroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintForegroundFocused))},
	{"paintForegroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintForegroundMouseOver))},
	{"paintForegroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintForegroundMouseOverAndFocused))},
	{"paintForegroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintForegroundPressed))},
	{"paintForegroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(SpinnerNextButtonPainter::*)($Graphics2D*)>(&SpinnerNextButtonPainter::paintForegroundPressedAndFocused))},
	{}
};

$ClassInfo _SpinnerNextButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.SpinnerNextButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_SpinnerNextButtonPainter_FieldInfo_,
	_SpinnerNextButtonPainter_MethodInfo_
};

$Object* allocate$SpinnerNextButtonPainter($Class* clazz) {
	return $of($alloc(SpinnerNextButtonPainter));
}

void SpinnerNextButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.021348298f, -0.56289876f, 0.2588235f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.010237217f, -0.5607143f, 0.2352941f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.021348298f, -0.59223604f, 0.35294116f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.016586483f, -0.5723659f, 0.31764704f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.021348298f, -0.56182265f, 0.24705881f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.34585923f, -0.007843137f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.27207792f, -0.11764708f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.004681647f, -0.6197143f, 0.43137252f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, -0.0012707114f, -0.5078604f, 0.3098039f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, -0.0028941035f, -0.4800539f, 0.28235292f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 0.0023007393f, -0.3622768f, -0.04705882f, 0));
	$set(this, color12, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.0013483167f, -0.1769987f, -0.12156865f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 0.0013483167f, 0.039961398f, -0.25882354f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, -0.0012707114f, -0.51502466f, 0.3607843f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.0021564364f, -0.49097747f, 0.34509802f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, 5.2034855E-5f, -0.38743842f, 0.019607842f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 0.08801502f, 0.3642857f, -0.454902f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, -4.2033195E-4f, -0.38050595f, 0.20392156f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.15470162f, 0.07058823f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, -4.6235323E-4f, -0.09571427f, 0.039215684f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, 0.018363237f, 0.18135887f, -0.227451f, 0));
	$set(this, color25, $new($Color, 255, 200, 0, 255));
	$set(this, color26, decodeColor("nimbusBase"_s, 0.021348298f, -0.58106947f, 0.16862744f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.043137252f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.24313727f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void SpinnerNextButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case SpinnerNextButtonPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case SpinnerNextButtonPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case SpinnerNextButtonPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case SpinnerNextButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			paintBackgroundMouseOverAndFocused(g);
			break;
		}
	case SpinnerNextButtonPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			paintBackgroundPressedAndFocused(g);
			break;
		}
	case SpinnerNextButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case SpinnerNextButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case SpinnerNextButtonPainter::FOREGROUND_DISABLED:
		{
			paintForegroundDisabled(g);
			break;
		}
	case SpinnerNextButtonPainter::FOREGROUND_ENABLED:
		{
			paintForegroundEnabled(g);
			break;
		}
	case SpinnerNextButtonPainter::FOREGROUND_FOCUSED:
		{
			paintForegroundFocused(g);
			break;
		}
	case SpinnerNextButtonPainter::FOREGROUND_MOUSEOVER_FOCUSED:
		{
			paintForegroundMouseOverAndFocused(g);
			break;
		}
	case SpinnerNextButtonPainter::FOREGROUND_PRESSED_FOCUSED:
		{
			paintForegroundPressedAndFocused(g);
			break;
		}
	case SpinnerNextButtonPainter::FOREGROUND_MOUSEOVER:
		{
			paintForegroundMouseOver(g);
			break;
		}
	case SpinnerNextButtonPainter::FOREGROUND_PRESSED:
		{
			paintForegroundPressed(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* SpinnerNextButtonPainter::getPaintContext() {
	return this->ctx;
}

void SpinnerNextButtonPainter::paintBackgroundDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color5);
	g->fill(this->rect);
}

void SpinnerNextButtonPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath3());
	$nc(g)->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color11);
	g->fill(this->rect);
}

void SpinnerNextButtonPainter::paintBackgroundFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath5());
	$nc(g)->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color11);
	g->fill(this->rect);
}

void SpinnerNextButtonPainter::paintBackgroundMouseOverAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath5());
	$nc(g)->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color18);
	g->fill(this->rect);
}

void SpinnerNextButtonPainter::paintBackgroundPressedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath5());
	$nc(g)->setPaint(this->color12);
	g->fill(this->path);
	$set(this, path, decodePath6());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color24);
	g->fill(this->rect);
}

void SpinnerNextButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath3());
	$nc(g)->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color18);
	g->fill(this->rect);
}

void SpinnerNextButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath6());
	$nc(g)->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color24);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color25);
	g->fill(this->rect);
}

void SpinnerNextButtonPainter::paintForegroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath7());
	$nc(g)->setPaint(this->color26);
	g->fill(this->path);
}

void SpinnerNextButtonPainter::paintForegroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath7());
	$nc(g)->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

void SpinnerNextButtonPainter::paintForegroundFocused($Graphics2D* g) {
	$set(this, path, decodePath8());
	$nc(g)->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

void SpinnerNextButtonPainter::paintForegroundMouseOverAndFocused($Graphics2D* g) {
	$set(this, path, decodePath8());
	$nc(g)->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

void SpinnerNextButtonPainter::paintForegroundPressedAndFocused($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color29);
	g->fill(this->path);
}

void SpinnerNextButtonPainter::paintForegroundMouseOver($Graphics2D* g) {
	$set(this, path, decodePath7());
	$nc(g)->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

void SpinnerNextButtonPainter::paintForegroundPressed($Graphics2D* g) {
	$set(this, path, decodePath9());
	$nc(g)->setPaint(this->color29);
	g->fill(this->path);
}

$Path2D* SpinnerNextButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2857143f));
	double var$2 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$3 = (double)decodeAnchorY(0.2857143f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.0f, -3.6363637f);
	double var$5 = (double)decodeAnchorY(0.2857143f, 0.0f);
	double var$6 = (double)decodeX(2.0f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(0.2857143f));
	double var$7 = (double)decodeAnchorX(2.0f, 3.6363637f);
	double var$8 = (double)decodeAnchorY(0.2857143f, 0.0f);
	double var$9 = (double)decodeAnchorX(2.7142859f, -0.022727273f);
	double var$10 = (double)decodeAnchorY(1.0f, -3.75f);
	double var$11 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.0f));
	double var$12 = (double)decodeAnchorX(2.7142859f, 0.022727273f);
	double var$13 = (double)decodeAnchorY(1.0f, 3.75f);
	double var$14 = (double)decodeAnchorX(2.7142859f, 0.0f);
	double var$15 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$16 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(3.0f));
	double var$17 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$17, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerNextButtonPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.42857143f));
	double var$2 = (double)decodeAnchorX(1.0f, 0.0f);
	double var$3 = (double)decodeAnchorY(0.42857143f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.0f, -3.0f);
	double var$5 = (double)decodeAnchorY(0.42857143f, 0.0f);
	double var$6 = (double)decodeX(2.0f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(0.42857143f));
	double var$7 = (double)decodeAnchorX(2.0f, 3.0f);
	double var$8 = (double)decodeAnchorY(0.42857143f, 0.0f);
	double var$9 = (double)decodeAnchorX(2.5714285f, 0.0f);
	double var$10 = (double)decodeAnchorY(1.0f, -2.0f);
	double var$11 = (double)decodeX(2.5714285f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.0f));
	double var$12 = (double)decodeAnchorX(2.5714285f, 0.0f);
	double var$13 = (double)decodeAnchorY(1.0f, 2.0f);
	double var$14 = (double)decodeAnchorX(2.5714285f, 0.0f);
	double var$15 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$16 = (double)decodeX(2.5714285f);
	$nc(this->path)->curveTo(var$12, var$13, var$14, var$15, var$16, decodeY(2.0f));
	double var$17 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$17, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* SpinnerNextButtonPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(2.0f);
	float var$3 = decodeX(2.5714285f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.0f));
	return this->rect;
}

$Path2D* SpinnerNextButtonPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2857143f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(0.2857143f));
	double var$3 = (double)decodeAnchorX(2.0f, 3.6363637f);
	double var$4 = (double)decodeAnchorY(0.2857143f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.7142859f, -0.022727273f);
	double var$6 = (double)decodeAnchorY(1.0f, -3.75f);
	double var$7 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(1.0f));
	double var$8 = (double)decodeX(2.7142859f);
	$nc(this->path)->lineTo(var$8, decodeY(3.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerNextButtonPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.42857143f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(0.42857143f));
	double var$3 = (double)decodeAnchorX(2.0f, 3.0f);
	double var$4 = (double)decodeAnchorY(0.42857143f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.5714285f, 0.0f);
	double var$6 = (double)decodeAnchorY(1.0f, -2.0f);
	double var$7 = (double)decodeX(2.5714285f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(1.0f));
	double var$8 = (double)decodeX(2.5714285f);
	$nc(this->path)->lineTo(var$8, decodeY(2.0f));
	double var$9 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$9, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerNextButtonPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.08571429f));
	double var$2 = (double)decodeX(2.142857f);
	$nc(this->path)->lineTo(var$2, decodeY(0.08571429f));
	double var$3 = (double)decodeAnchorX(2.142857f, 3.4f);
	double var$4 = (double)decodeAnchorY(0.08571429f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.9142857f, 0.0f);
	double var$6 = (double)decodeAnchorY(1.0f, -3.4f);
	double var$7 = (double)decodeX(2.9142857f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(1.0f));
	double var$8 = (double)decodeX(2.9142857f);
	$nc(this->path)->lineTo(var$8, decodeY(3.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerNextButtonPainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2857143f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(0.2857143f));
	double var$3 = (double)decodeAnchorX(2.0f, 3.4545455f);
	double var$4 = (double)decodeAnchorY(0.2857143f, 0.0f);
	double var$5 = (double)decodeAnchorX(2.7142859f, -0.022727273f);
	double var$6 = (double)decodeAnchorY(1.0f, -3.4772727f);
	double var$7 = (double)decodeX(2.7142859f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(1.0f));
	double var$8 = (double)decodeX(2.7142859f);
	$nc(this->path)->lineTo(var$8, decodeY(3.0f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* SpinnerNextButtonPainter::decodeRect2() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(0.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(0.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Path2D* SpinnerNextButtonPainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(1.490909f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0284091f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.0f));
	double var$3 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$3, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerNextButtonPainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(1.490909f);
	$nc(this->path)->lineTo(var$1, decodeY(1.3522727f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.0f));
	double var$3 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$3, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* SpinnerNextButtonPainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(1.5045455f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0795455f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.0f));
	double var$3 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$3, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* SpinnerNextButtonPainter::decodeGradient1($Shape* s) {
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

$Paint* SpinnerNextButtonPainter::decodeGradient2($Shape* s) {
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
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient3($Shape* s) {
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
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.36497328f,
		0.72994655f,
		0.8649733f,
		1.0f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.37566844f,
		0.7513369f,
		0.8756684f,
		1.0f
	}), $$new($ColorArray, {
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient6($Shape* s) {
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

$Paint* SpinnerNextButtonPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.37967914f,
		0.7593583f,
		0.87967914f,
		1.0f
	}), $$new($ColorArray, {
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient8($Shape* s) {
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

$Paint* SpinnerNextButtonPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.37165776f,
		0.7433155f,
		0.8716577f,
		1.0f
	}), $$new($ColorArray, {
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient10($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.3970588f,
		0.7941176f,
		0.89705884f,
		1.0f
	}), $$new($ColorArray, {
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient11($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.4318182f,
		0.8636364f,
		0.9318182f,
		1.0f
	}), $$new($ColorArray, {
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* SpinnerNextButtonPainter::decodeGradient12($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.48636365f * w) + x, (0.0116959065f * h) + y, (0.4909091f * w) + x, (0.8888889f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28
	}));
}

SpinnerNextButtonPainter::SpinnerNextButtonPainter() {
}

$Class* SpinnerNextButtonPainter::load$($String* name, bool initialize) {
	$loadClass(SpinnerNextButtonPainter, name, initialize, &_SpinnerNextButtonPainter_ClassInfo_, allocate$SpinnerNextButtonPainter);
	return class$;
}

$Class* SpinnerNextButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
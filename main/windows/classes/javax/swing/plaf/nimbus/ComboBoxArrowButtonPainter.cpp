#include <javax/swing/plaf/nimbus/ComboBoxArrowButtonPainter.h>

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
#undef BACKGROUND_DISABLED_EDITABLE
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_EDITABLE
#undef BACKGROUND_ENABLED_MOUSEOVER
#undef BACKGROUND_ENABLED_PRESSED
#undef BACKGROUND_MOUSEOVER_EDITABLE
#undef BACKGROUND_PRESSED_EDITABLE
#undef BACKGROUND_SELECTED_EDITABLE
#undef FOREGROUND_DISABLED
#undef FOREGROUND_ENABLED
#undef FOREGROUND_MOUSEOVER
#undef FOREGROUND_PRESSED
#undef FOREGROUND_SELECTED

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

$FieldInfo _ComboBoxArrowButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_ENABLED_MOUSEOVER)},
	{"BACKGROUND_ENABLED_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_ENABLED_PRESSED)},
	{"BACKGROUND_DISABLED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_DISABLED_EDITABLE)},
	{"BACKGROUND_ENABLED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_ENABLED_EDITABLE)},
	{"BACKGROUND_MOUSEOVER_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_MOUSEOVER_EDITABLE)},
	{"BACKGROUND_PRESSED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_PRESSED_EDITABLE)},
	{"BACKGROUND_SELECTED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, BACKGROUND_SELECTED_EDITABLE)},
	{"FOREGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, FOREGROUND_ENABLED)},
	{"FOREGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, FOREGROUND_MOUSEOVER)},
	{"FOREGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, FOREGROUND_DISABLED)},
	{"FOREGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, FOREGROUND_PRESSED)},
	{"FOREGROUND_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxArrowButtonPainter, FOREGROUND_SELECTED)},
	{"state", "I", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, color31)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ComboBoxArrowButtonPainter, componentColors)},
	{}
};

$MethodInfo _ComboBoxArrowButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ComboBoxArrowButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient1))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxArrowButtonPainter::*)($Shape*)>(&ComboBoxArrowButtonPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxArrowButtonPainter::*)()>(&ComboBoxArrowButtonPainter::decodePath8))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabledAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintBackgroundDisabledAndEditable))},
	{"paintBackgroundEnabledAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintBackgroundEnabledAndEditable))},
	{"paintBackgroundMouseOverAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintBackgroundMouseOverAndEditable))},
	{"paintBackgroundPressedAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintBackgroundPressedAndEditable))},
	{"paintBackgroundSelectedAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintBackgroundSelectedAndEditable))},
	{"paintForegroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintForegroundDisabled))},
	{"paintForegroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintForegroundEnabled))},
	{"paintForegroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintForegroundMouseOver))},
	{"paintForegroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintForegroundPressed))},
	{"paintForegroundSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxArrowButtonPainter::*)($Graphics2D*)>(&ComboBoxArrowButtonPainter::paintForegroundSelected))},
	{}
};

$ClassInfo _ComboBoxArrowButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ComboBoxArrowButtonPainter_FieldInfo_,
	_ComboBoxArrowButtonPainter_MethodInfo_
};

$Object* allocate$ComboBoxArrowButtonPainter($Class* clazz) {
	return $of($alloc(ComboBoxArrowButtonPainter));
}

void ComboBoxArrowButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.74509805f, -247));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.021348298f, -0.56289876f, 0.2588235f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.010237217f, -0.55799407f, 0.20784312f, 0));
	$set(this, color4, $new($Color, 255, 200, 0, 255));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.021348298f, -0.59223604f, 0.35294116f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 0.02391243f, -0.5774183f, 0.32549018f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 0.021348298f, -0.56722116f, 0.3098039f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.021348298f, -0.567841f, 0.31764704f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.74509805f, -191));
	$set(this, color10, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.34585923f, -0.007843137f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.095173776f, -0.25882354f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.004681647f, -0.6197143f, 0.43137252f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.0023007393f, -0.46825016f, 0.27058822f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.43866998f, 0.24705881f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4625541f, 0.35686272f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.0013483167f, -0.1769987f, -0.12156865f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.059279382f, 0.3642857f, -0.43529415f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 0.0023007393f, -0.48084703f, 0.33725488f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4555341f, 0.3215686f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4757143f, 0.43137252f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, -3.528595E-5f, 0.018606722f, -0.23137257f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, -4.2033195E-4f, -0.38050595f, 0.20392156f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 7.13408E-4f, -0.064285696f, 0.027450979f, 0));
	$set(this, color26, decodeColor("nimbusBase"_s, 0.0f, -0.00895375f, 0.007843137f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, 8.9377165E-4f, -0.13853917f, 0.14509803f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.37254906f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.5254902f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, 0.027408898f, -0.57391655f, 0.1490196f, 0));
	$set(this, color31, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ComboBoxArrowButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ComboBoxArrowButtonPainter::BACKGROUND_DISABLED_EDITABLE:
		{
			paintBackgroundDisabledAndEditable(g);
			break;
		}
	case ComboBoxArrowButtonPainter::BACKGROUND_ENABLED_EDITABLE:
		{
			paintBackgroundEnabledAndEditable(g);
			break;
		}
	case ComboBoxArrowButtonPainter::BACKGROUND_MOUSEOVER_EDITABLE:
		{
			paintBackgroundMouseOverAndEditable(g);
			break;
		}
	case ComboBoxArrowButtonPainter::BACKGROUND_PRESSED_EDITABLE:
		{
			paintBackgroundPressedAndEditable(g);
			break;
		}
	case ComboBoxArrowButtonPainter::BACKGROUND_SELECTED_EDITABLE:
		{
			paintBackgroundSelectedAndEditable(g);
			break;
		}
	case ComboBoxArrowButtonPainter::FOREGROUND_ENABLED:
		{
			paintForegroundEnabled(g);
			break;
		}
	case ComboBoxArrowButtonPainter::FOREGROUND_MOUSEOVER:
		{
			paintForegroundMouseOver(g);
			break;
		}
	case ComboBoxArrowButtonPainter::FOREGROUND_DISABLED:
		{
			paintForegroundDisabled(g);
			break;
		}
	case ComboBoxArrowButtonPainter::FOREGROUND_PRESSED:
		{
			paintForegroundPressed(g);
			break;
		}
	case ComboBoxArrowButtonPainter::FOREGROUND_SELECTED:
		{
			paintForegroundSelected(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ComboBoxArrowButtonPainter::getPaintContext() {
	return this->ctx;
}

void ComboBoxArrowButtonPainter::paintBackgroundDisabledAndEditable($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color4);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintBackgroundEnabledAndEditable($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color9);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color4);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintBackgroundMouseOverAndEditable($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color9);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color4);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintBackgroundPressedAndEditable($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color9);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color4);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintBackgroundSelectedAndEditable($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color9);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint(this->color4);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintForegroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath5());
	$nc(g)->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintForegroundMouseOver($Graphics2D* g) {
	$set(this, path, decodePath6());
	$nc(g)->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintForegroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath7());
	$nc(g)->setPaint(this->color30);
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintForegroundPressed($Graphics2D* g) {
	$set(this, path, decodePath8());
	$nc(g)->setPaint(this->color31);
	g->fill(this->path);
}

void ComboBoxArrowButtonPainter::paintForegroundSelected($Graphics2D* g) {
	$set(this, path, decodePath7());
	$nc(g)->setPaint(this->color31);
	g->fill(this->path);
}

$Path2D* ComboBoxArrowButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(2.75f);
	$nc(this->path)->lineTo(var$1, decodeY(2.0f));
	double var$2 = (double)decodeX(2.75f);
	$nc(this->path)->lineTo(var$2, decodeY(2.25f));
	double var$3 = (double)decodeAnchorX(2.75f, 0.0f);
	double var$4 = (double)decodeAnchorY(2.25f, 4.0f);
	double var$5 = (double)decodeAnchorX(2.125f, 3.0f);
	double var$6 = (double)decodeAnchorY(2.875f, 0.0f);
	double var$7 = (double)decodeX(2.125f);
	$nc(this->path)->curveTo(var$3, var$4, var$5, var$6, var$7, decodeY(2.875f));
	double var$8 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$8, decodeY(2.875f));
	double var$9 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$9, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxArrowButtonPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.25f));
	double var$1 = (double)decodeX(2.125f);
	$nc(this->path)->lineTo(var$1, decodeY(0.25f));
	double var$2 = (double)decodeAnchorX(2.125f, 3.0f);
	double var$3 = (double)decodeAnchorY(0.25f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.75f, 0.0f);
	double var$5 = (double)decodeAnchorY(0.875f, -3.0f);
	double var$6 = (double)decodeX(2.75f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(0.875f));
	double var$7 = (double)decodeX(2.75f);
	$nc(this->path)->lineTo(var$7, decodeY(2.125f));
	double var$8 = (double)decodeAnchorX(2.75f, 0.0f);
	double var$9 = (double)decodeAnchorY(2.125f, 3.0f);
	double var$10 = (double)decodeAnchorX(2.125f, 3.0f);
	double var$11 = (double)decodeAnchorY(2.75f, 0.0f);
	double var$12 = (double)decodeX(2.125f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.75f));
	double var$13 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$13, decodeY(2.75f));
	double var$14 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$14, decodeY(0.25f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxArrowButtonPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.85294116f);
	$nc(this->path)->moveTo(var$0, decodeY(2.639706f));
	double var$1 = (double)decodeX(0.85294116f);
	$nc(this->path)->lineTo(var$1, decodeY(2.639706f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxArrowButtonPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.375f));
	double var$1 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.375f));
	double var$2 = (double)decodeAnchorX(2.0f, 4.0f);
	double var$3 = (double)decodeAnchorY(0.375f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.625f, 0.0f);
	double var$5 = (double)decodeAnchorY(1.0f, -4.0f);
	double var$6 = (double)decodeX(2.625f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(2.625f);
	$nc(this->path)->lineTo(var$7, decodeY(2.0f));
	double var$8 = (double)decodeAnchorX(2.625f, 0.0f);
	double var$9 = (double)decodeAnchorY(2.0f, 4.0f);
	double var$10 = (double)decodeAnchorX(2.0f, 4.0f);
	double var$11 = (double)decodeAnchorY(2.625f, 0.0f);
	double var$12 = (double)decodeX(2.0f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.625f));
	double var$13 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$13, decodeY(2.625f));
	double var$14 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$14, decodeY(0.375f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxArrowButtonPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.9995915f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3616071f));
	double var$1 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.8333333f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8571429f));
	double var$3 = (double)decodeX(0.9995915f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3616071f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxArrowButtonPainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.00625f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3526785f));
	double var$1 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.8333333f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8571429f));
	double var$3 = (double)decodeX(1.00625f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3526785f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxArrowButtonPainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0117648f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3616071f));
	double var$1 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.8333333f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8571429f));
	double var$3 = (double)decodeX(1.0117648f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3616071f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxArrowButtonPainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0242647f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3526785f));
	double var$1 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.8333333f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8571429f));
	double var$3 = (double)decodeX(1.0242647f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3526785f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient1($Shape* s) {
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
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.171875f,
		0.34375f,
		0.4815341f,
		0.6193182f,
		0.8096591f,
		1.0f
	}), $$new($ColorArray, {
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient3($Shape* s) {
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
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11
	}));
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12299465f,
		0.44652405f,
		0.5441176f,
		0.64171124f,
		0.8208556f,
		1.0f
	}), $$new($ColorArray, {
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15
	}));
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient5($Shape* s) {
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
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17
	}));
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12299465f,
		0.44652405f,
		0.5441176f,
		0.64171124f,
		0.81283426f,
		0.98395723f
	}), $$new($ColorArray, {
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21
	}));
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient7($Shape* s) {
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
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* ComboBoxArrowButtonPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12299465f,
		0.44652405f,
		0.5441176f,
		0.64171124f,
		0.8208556f,
		1.0f
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

$Paint* ComboBoxArrowButtonPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((1.0f * w) + x, (0.5f * h) + y, (0.0f * w) + x, (0.5f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29
	}));
}

ComboBoxArrowButtonPainter::ComboBoxArrowButtonPainter() {
}

$Class* ComboBoxArrowButtonPainter::load$($String* name, bool initialize) {
	$loadClass(ComboBoxArrowButtonPainter, name, initialize, &_ComboBoxArrowButtonPainter_ClassInfo_, allocate$ComboBoxArrowButtonPainter);
	return class$;
}

$Class* ComboBoxArrowButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/nimbus/ComboBoxPainter.h>

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
#undef BACKGROUND_DISABLED_EDITABLE
#undef BACKGROUND_DISABLED_PRESSED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_EDITABLE
#undef BACKGROUND_ENABLED_SELECTED
#undef BACKGROUND_FOCUSED
#undef BACKGROUND_FOCUSED_EDITABLE
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_EDITABLE
#undef BACKGROUND_MOUSEOVER_FOCUSED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_EDITABLE
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

$FieldInfo _ComboBoxPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_DISABLED_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_DISABLED_PRESSED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_FOCUSED)},
	{"BACKGROUND_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_PRESSED_FOCUSED)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_ENABLED_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_ENABLED_SELECTED)},
	{"BACKGROUND_DISABLED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_DISABLED_EDITABLE)},
	{"BACKGROUND_ENABLED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_ENABLED_EDITABLE)},
	{"BACKGROUND_FOCUSED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_FOCUSED_EDITABLE)},
	{"BACKGROUND_MOUSEOVER_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_MOUSEOVER_EDITABLE)},
	{"BACKGROUND_PRESSED_EDITABLE", "I", nullptr, $STATIC | $FINAL, $constField(ComboBoxPainter, BACKGROUND_PRESSED_EDITABLE)},
	{"state", "I", nullptr, $PRIVATE, $field(ComboBoxPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ComboBoxPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ComboBoxPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ComboBoxPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ComboBoxPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ComboBoxPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color45)},
	{"color46", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color46)},
	{"color47", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color47)},
	{"color48", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color48)},
	{"color49", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color49)},
	{"color50", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color50)},
	{"color51", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color51)},
	{"color52", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color52)},
	{"color53", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ComboBoxPainter, color53)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ComboBoxPainter, componentColors)},
	{}
};

$MethodInfo _ComboBoxPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ComboBoxPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ComboBoxPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient12))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ComboBoxPainter::*)($Shape*)>(&ComboBoxPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodePath6))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodeRect2))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(ComboBoxPainter::*)()>(&ComboBoxPainter::decodeRoundRect1))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getExtendedCacheKeys", "(Ljavax/swing/JComponent;)[Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundDisabled))},
	{"paintBackgroundDisabledAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundDisabledAndEditable))},
	{"paintBackgroundDisabledAndPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundDisabledAndPressed))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundEnabledAndEditable))},
	{"paintBackgroundEnabledAndSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundEnabledAndSelected))},
	{"paintBackgroundFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundFocused))},
	{"paintBackgroundFocusedAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundFocusedAndEditable))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundMouseOverAndEditable))},
	{"paintBackgroundMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundMouseOverAndFocused))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndEditable", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundPressedAndEditable))},
	{"paintBackgroundPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ComboBoxPainter::*)($Graphics2D*)>(&ComboBoxPainter::paintBackgroundPressedAndFocused))},
	{}
};

$ClassInfo _ComboBoxPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ComboBoxPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ComboBoxPainter_FieldInfo_,
	_ComboBoxPainter_MethodInfo_
};

$Object* allocate$ComboBoxPainter($Class* clazz) {
	return $of($alloc(ComboBoxPainter));
}

void ComboBoxPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, -0.6111111f, -0.110526316f, -0.74509805f, -247));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.032459438f, -0.5928571f, 0.2745098f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.032459438f, -0.590029f, 0.2235294f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.032459438f, -0.60996324f, 0.36470586f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.040395975f, -0.60474086f, 0.33725488f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 0.032459438f, -0.5953556f, 0.32549018f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 0.032459438f, -0.5957143f, 0.3333333f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.021348298f, -0.56289876f, 0.2588235f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 0.010237217f, -0.55799407f, 0.20784312f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, 0.021348298f, -0.59223604f, 0.35294116f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 0.02391243f, -0.5774183f, 0.32549018f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.021348298f, -0.56722116f, 0.3098039f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.021348298f, -0.567841f, 0.31764704f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.0f, -0.22f, -176));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.032459438f, -0.5787523f, 0.07058823f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.032459438f, -0.5399696f, -0.18039218f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.08801502f, -0.63174605f, 0.43921566f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, 0.040395975f, -0.6054113f, 0.35686272f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 0.032459438f, -0.5998577f, 0.4352941f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.34585923f, -0.007843137f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.095173776f, -0.25882354f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 0.004681647f, -0.6197143f, 0.43137252f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, -0.0028941035f, -0.4800539f, 0.28235292f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.43866998f, 0.24705881f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4625541f, 0.35686272f, 0));
	$set(this, color26, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, 0.032459438f, -0.54616207f, -0.02352941f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, 0.032459438f, -0.41349208f, -0.33725494f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, 0.08801502f, -0.6317773f, 0.4470588f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, 0.032459438f, -0.6113241f, 0.41568625f, 0));
	$set(this, color31, decodeColor("nimbusBase"_s, 0.032459438f, -0.5985242f, 0.39999998f, 0));
	$set(this, color32, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	$set(this, color33, decodeColor("nimbusBase"_s, 0.0013483167f, -0.1769987f, -0.12156865f, 0));
	$set(this, color34, decodeColor("nimbusBase"_s, 0.059279382f, 0.3642857f, -0.43529415f, 0));
	$set(this, color35, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color36, decodeColor("nimbusBase"_s, -8.738637E-4f, -0.50527954f, 0.35294116f, 0));
	$set(this, color37, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4555341f, 0.3215686f, 0));
	$set(this, color38, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4757143f, 0.43137252f, 0));
	$set(this, color39, decodeColor("nimbusBase"_s, 0.08801502f, 0.3642857f, -0.52156866f, 0));
	$set(this, color40, decodeColor("nimbusBase"_s, 0.032459438f, -0.5246032f, -0.12549022f, 0));
	$set(this, color41, decodeColor("nimbusBase"_s, 0.027408898f, -0.5847884f, 0.2980392f, 0));
	$set(this, color42, decodeColor("nimbusBase"_s, 0.026611507f, -0.53623784f, 0.19999999f, 0));
	$set(this, color43, decodeColor("nimbusBase"_s, 0.029681683f, -0.52701867f, 0.17254901f, 0));
	$set(this, color44, decodeColor("nimbusBase"_s, 0.03801495f, -0.5456242f, 0.3215686f, 0));
	$set(this, color45, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color46, decodeColor("nimbusBase"_s, -3.528595E-5f, 0.018606722f, -0.23137257f, 0));
	$set(this, color47, decodeColor("nimbusBase"_s, -4.2033195E-4f, -0.38050595f, 0.20392156f, 0));
	$set(this, color48, decodeColor("nimbusBase"_s, 4.081726E-4f, -0.12922078f, 0.054901958f, 0));
	$set(this, color49, decodeColor("nimbusBase"_s, 0.0f, -0.00895375f, 0.007843137f, 0));
	$set(this, color50, decodeColor("nimbusBase"_s, -0.0015907288f, -0.1436508f, 0.19215685f, 0));
	$set(this, color51, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -83));
	$set(this, color52, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -88));
	$set(this, color53, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.005263157f, -0.52156866f, -191));
	this->state = state;
	$set(this, ctx, ctx);
}

void ComboBoxPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ComboBoxPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_DISABLED_PRESSED:
		{
			paintBackgroundDisabledAndPressed(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_FOCUSED:
		{
			paintBackgroundFocused(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			paintBackgroundMouseOverAndFocused(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			paintBackgroundPressedAndFocused(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_ENABLED_SELECTED:
		{
			paintBackgroundEnabledAndSelected(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_DISABLED_EDITABLE:
		{
			paintBackgroundDisabledAndEditable(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_ENABLED_EDITABLE:
		{
			paintBackgroundEnabledAndEditable(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_FOCUSED_EDITABLE:
		{
			paintBackgroundFocusedAndEditable(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_MOUSEOVER_EDITABLE:
		{
			paintBackgroundMouseOverAndEditable(g);
			break;
		}
	case ComboBoxPainter::BACKGROUND_PRESSED_EDITABLE:
		{
			paintBackgroundPressedAndEditable(g);
			break;
		}
	}
}

$ObjectArray* ComboBoxPainter::getExtendedCacheKeys($JComponent* c) {
	$var($ObjectArray, extendedCacheKeys, nullptr);
	switch (this->state) {
	case ComboBoxPainter::BACKGROUND_ENABLED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color17, -0.63174605f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color18, -0.6054113f, 0.35686272f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color6, -0.5953556f, 0.32549018f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color19, -0.5998577f, 0.4352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color22, -0.6197143f, 0.43137252f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color23, -0.4800539f, 0.28235292f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color24, -0.43866998f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color25, -0.4625541f, 0.35686272f, 0)))
			}));
			break;
		}
	case ComboBoxPainter::BACKGROUND_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color17, -0.63174605f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color18, -0.6054113f, 0.35686272f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color6, -0.5953556f, 0.32549018f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color19, -0.5998577f, 0.4352941f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color22, -0.6197143f, 0.43137252f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color23, -0.4800539f, 0.28235292f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color24, -0.43866998f, 0.24705881f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color25, -0.4625541f, 0.35686272f, 0)))
			}));
			break;
		}
	case ComboBoxPainter::BACKGROUND_MOUSEOVER_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color29, -0.6317773f, 0.4470588f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color30, -0.6113241f, 0.41568625f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color31, -0.5985242f, 0.39999998f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color32, -0.6357143f, 0.45098037f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color35, -0.6198413f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color36, -0.50527954f, 0.35294116f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color37, -0.4555341f, 0.3215686f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color25, -0.4625541f, 0.35686272f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color38, -0.4757143f, 0.43137252f, 0)))
			}));
			break;
		}
	case ComboBoxPainter::BACKGROUND_MOUSEOVER:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color29, -0.6317773f, 0.4470588f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color30, -0.6113241f, 0.41568625f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color31, -0.5985242f, 0.39999998f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color32, -0.6357143f, 0.45098037f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color35, -0.6198413f, 0.43921566f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color36, -0.50527954f, 0.35294116f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color37, -0.4555341f, 0.3215686f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color25, -0.4625541f, 0.35686272f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color38, -0.4757143f, 0.43137252f, 0)))
			}));
			break;
		}
	case ComboBoxPainter::BACKGROUND_PRESSED_FOCUSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color41, -0.5847884f, 0.2980392f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color42, -0.53623784f, 0.19999999f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color43, -0.52701867f, 0.17254901f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color44, -0.5456242f, 0.3215686f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color47, -0.38050595f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color48, -0.12922078f, 0.054901958f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color49, -0.00895375f, 0.007843137f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color50, -0.1436508f, 0.19215685f, 0)))
			}));
			break;
		}
	case ComboBoxPainter::BACKGROUND_PRESSED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color41, -0.5847884f, 0.2980392f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color42, -0.53623784f, 0.19999999f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color43, -0.52701867f, 0.17254901f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color44, -0.5456242f, 0.3215686f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color47, -0.38050595f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color48, -0.12922078f, 0.054901958f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color49, -0.00895375f, 0.007843137f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color50, -0.1436508f, 0.19215685f, 0)))
			}));
			break;
		}
	case ComboBoxPainter::BACKGROUND_ENABLED_SELECTED:
		{
			$assign(extendedCacheKeys, $new($ObjectArray, {
				$($of(getComponentColor(c, "background"_s, this->color41, -0.5847884f, 0.2980392f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color42, -0.53623784f, 0.19999999f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color43, -0.52701867f, 0.17254901f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color44, -0.5456242f, 0.3215686f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color47, -0.38050595f, 0.20392156f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color48, -0.12922078f, 0.054901958f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color49, -0.00895375f, 0.007843137f, 0))),
				$($of(getComponentColor(c, "background"_s, this->color50, -0.1436508f, 0.19215685f, 0)))
			}));
			break;
		}
	}
	return extendedCacheKeys;
}

$AbstractRegionPainter$PaintContext* ComboBoxPainter::getPaintContext() {
	return this->ctx;
}

void ComboBoxPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundDisabledAndPressed($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color14);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color26);
	g->fill(this->roundRect);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundMouseOverAndFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color26);
	g->fill(this->roundRect);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color14);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundPressedAndFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color26);
	g->fill(this->roundRect);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundPressed($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color51);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundEnabledAndSelected($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color52);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundDisabledAndEditable($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color53);
	g->fill(this->rect);
}

void ComboBoxPainter::paintBackgroundEnabledAndEditable($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color53);
	g->fill(this->rect);
}

void ComboBoxPainter::paintBackgroundFocusedAndEditable($Graphics2D* g) {
	$set(this, path, decodePath6());
	$nc(g)->setPaint(this->color26);
	g->fill(this->path);
}

void ComboBoxPainter::paintBackgroundMouseOverAndEditable($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint(this->color53);
	g->fill(this->rect);
}

void ComboBoxPainter::paintBackgroundPressedAndEditable($Graphics2D* g) {
	$set(this, rect, decodeRect2());
	$nc(g)->setPaint(this->color53);
	g->fill(this->rect);
}

$Path2D* ComboBoxPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.22222222f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(0.22222222f);
	$nc(this->path)->lineTo(var$1, decodeY(2.25f));
	double var$2 = (double)decodeAnchorX(0.22222222f, 0.0f);
	double var$3 = (double)decodeAnchorY(2.25f, 3.0f);
	double var$4 = (double)decodeAnchorX(0.7777778f, -3.0f);
	double var$5 = (double)decodeAnchorY(2.875f, 0.0f);
	double var$6 = (double)decodeX(0.7777778f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(2.875f));
	double var$7 = (double)decodeX(2.631579f);
	$nc(this->path)->lineTo(var$7, decodeY(2.875f));
	double var$8 = (double)decodeAnchorX(2.631579f, 3.0f);
	double var$9 = (double)decodeAnchorY(2.875f, 0.0f);
	double var$10 = (double)decodeAnchorX(2.8947368f, 0.0f);
	double var$11 = (double)decodeAnchorY(2.25f, 3.0f);
	double var$12 = (double)decodeX(2.8947368f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.25f));
	double var$13 = (double)decodeX(2.8947368f);
	$nc(this->path)->lineTo(var$13, decodeY(2.0f));
	double var$14 = (double)decodeX(0.22222222f);
	$nc(this->path)->lineTo(var$14, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.22222222f);
	$nc(this->path)->moveTo(var$0, decodeY(0.875f));
	double var$1 = (double)decodeX(0.22222222f);
	$nc(this->path)->lineTo(var$1, decodeY(2.125f));
	double var$2 = (double)decodeAnchorX(0.22222222f, 0.0f);
	double var$3 = (double)decodeAnchorY(2.125f, 3.0f);
	double var$4 = (double)decodeAnchorX(0.7777778f, -3.0f);
	double var$5 = (double)decodeAnchorY(2.75f, 0.0f);
	double var$6 = (double)decodeX(0.7777778f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(2.75f));
	double var$7 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$7, decodeY(2.75f));
	double var$8 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$8, decodeY(0.25f));
	double var$9 = (double)decodeX(0.7777778f);
	$nc(this->path)->lineTo(var$9, decodeY(0.25f));
	double var$10 = (double)decodeAnchorX(0.7777778f, -3.0f);
	double var$11 = (double)decodeAnchorY(0.25f, 0.0f);
	double var$12 = (double)decodeAnchorX(0.22222222f, 0.0f);
	double var$13 = (double)decodeAnchorY(0.875f, -3.0f);
	double var$14 = (double)decodeX(0.22222222f);
	$nc(this->path)->curveTo(var$10, var$11, var$12, var$13, var$14, decodeY(0.875f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.8888889f);
	$nc(this->path)->moveTo(var$0, decodeY(0.375f));
	double var$1 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.375f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(2.625f));
	double var$3 = (double)decodeX(0.8888889f);
	$nc(this->path)->lineTo(var$3, decodeY(2.625f));
	double var$4 = (double)decodeAnchorX(0.8888889f, -4.0f);
	double var$5 = (double)decodeAnchorY(2.625f, 0.0f);
	double var$6 = (double)decodeAnchorX(0.33333334f, 0.0f);
	double var$7 = (double)decodeAnchorY(2.0f, 4.0f);
	double var$8 = (double)decodeX(0.33333334f);
	$nc(this->path)->curveTo(var$4, var$5, var$6, var$7, var$8, decodeY(2.0f));
	double var$9 = (double)decodeX(0.33333334f);
	$nc(this->path)->lineTo(var$9, decodeY(0.875f));
	double var$10 = (double)decodeAnchorX(0.33333334f, 0.0f);
	double var$11 = (double)decodeAnchorY(0.875f, -3.0f);
	double var$12 = (double)decodeAnchorX(0.8888889f, -4.0f);
	double var$13 = (double)decodeAnchorY(0.375f, 0.0f);
	double var$14 = (double)decodeX(0.8888889f);
	$nc(this->path)->curveTo(var$10, var$11, var$12, var$13, var$14, decodeY(0.375f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.25f));
	double var$1 = (double)decodeX(2.631579f);
	$nc(this->path)->lineTo(var$1, decodeY(0.25f));
	double var$2 = (double)decodeAnchorX(2.631579f, 3.0f);
	double var$3 = (double)decodeAnchorY(0.25f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.8947368f, 0.0f);
	double var$5 = (double)decodeAnchorY(0.875f, -3.0f);
	double var$6 = (double)decodeX(2.8947368f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(0.875f));
	double var$7 = (double)decodeX(2.8947368f);
	$nc(this->path)->lineTo(var$7, decodeY(2.125f));
	double var$8 = (double)decodeAnchorX(2.8947368f, 0.0f);
	double var$9 = (double)decodeAnchorY(2.125f, 3.0f);
	double var$10 = (double)decodeAnchorX(2.631579f, 3.0f);
	double var$11 = (double)decodeAnchorY(2.75f, 0.0f);
	double var$12 = (double)decodeX(2.631579f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.75f));
	double var$13 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$13, decodeY(2.75f));
	double var$14 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$14, decodeY(0.25f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ComboBoxPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.0131578f);
	$nc(this->path)->moveTo(var$0, decodeY(0.375f));
	double var$1 = (double)decodeX(2.5789473f);
	$nc(this->path)->lineTo(var$1, decodeY(0.375f));
	double var$2 = (double)decodeAnchorX(2.5789473f, 4.0f);
	double var$3 = (double)decodeAnchorY(0.375f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.8421054f, 0.0f);
	double var$5 = (double)decodeAnchorY(1.0f, -4.0f);
	double var$6 = (double)decodeX(2.8421054f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(2.8421054f);
	$nc(this->path)->lineTo(var$7, decodeY(2.0f));
	double var$8 = (double)decodeAnchorX(2.8421054f, 0.0f);
	double var$9 = (double)decodeAnchorY(2.0f, 4.0f);
	double var$10 = (double)decodeAnchorX(2.5789473f, 4.0f);
	double var$11 = (double)decodeAnchorY(2.625f, 0.0f);
	double var$12 = (double)decodeX(2.5789473f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.625f));
	double var$13 = (double)decodeX(2.0131578f);
	$nc(this->path)->lineTo(var$13, decodeY(2.625f));
	double var$14 = (double)decodeX(2.0131578f);
	$nc(this->path)->lineTo(var$14, decodeY(0.375f));
	$nc(this->path)->closePath();
	return this->path;
}

$RoundRectangle2D* ComboBoxPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(0.06666667f);
	double var$1 = (double)decodeY(0.075f);
	float var$3 = decodeX(2.9684212f);
	double var$2 = (double)(var$3 - decodeX(0.06666667f));
	float var$4 = decodeY(2.925f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(0.075f), 13.0f, 13.0f);
	return this->roundRect;
}

$Rectangle2D* ComboBoxPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.4385965f);
	double var$1 = (double)decodeY(1.4444444f);
	float var$3 = decodeX(1.4385965f);
	double var$2 = (double)(var$3 - decodeX(1.4385965f));
	float var$4 = decodeY(1.4444444f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.4444444f));
	return this->rect;
}

$Path2D* ComboBoxPainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.120000005f);
	$nc(this->path)->moveTo(var$0, decodeY(0.120000005f));
	double var$1 = (double)decodeX(1.9954545f);
	$nc(this->path)->lineTo(var$1, decodeY(0.120000005f));
	double var$2 = (double)decodeAnchorX(1.9954545f, 3.0f);
	double var$3 = (double)decodeAnchorY(0.120000005f, 0.0f);
	double var$4 = (double)decodeAnchorX(2.8799987f, 0.0f);
	double var$5 = (double)decodeAnchorY(1.0941176f, -3.0f);
	double var$6 = (double)decodeX(2.8799987f);
	$nc(this->path)->curveTo(var$2, var$3, var$4, var$5, var$6, decodeY(1.0941176f));
	double var$7 = (double)decodeX(2.8799987f);
	$nc(this->path)->lineTo(var$7, decodeY(1.964706f));
	double var$8 = (double)decodeAnchorX(2.8799987f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.964706f, 3.0f);
	double var$10 = (double)decodeAnchorX(1.9954545f, 3.0f);
	double var$11 = (double)decodeAnchorY(2.8799999f, 0.0f);
	double var$12 = (double)decodeX(1.9954545f);
	$nc(this->path)->curveTo(var$8, var$9, var$10, var$11, var$12, decodeY(2.8799999f));
	double var$13 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$13, decodeY(2.8799999f));
	double var$14 = (double)decodeX(0.120000005f);
	$nc(this->path)->lineTo(var$14, decodeY(0.120000005f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* ComboBoxPainter::decodeRect2() {
	double var$0 = (double)decodeX(1.4385965f);
	double var$1 = (double)decodeY(1.5f);
	float var$3 = decodeX(1.4385965f);
	double var$2 = (double)(var$3 - decodeX(1.4385965f));
	float var$4 = decodeY(1.5f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.5f));
	return this->rect;
}

$Paint* ComboBoxPainter::decodeGradient1($Shape* s) {
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

$Paint* ComboBoxPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.2002841f,
		0.4005682f,
		0.5326705f,
		0.66477275f,
		0.8323864f,
		1.0f
	}), $$new($ColorArray, {
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7
	}));
}

$Paint* ComboBoxPainter::decodeGradient3($Shape* s) {
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
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* ComboBoxPainter::decodeGradient4($Shape* s) {
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
		this->color10,
		$(decodeColor(this->color10, this->color11, 0.5f)),
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13
	}));
}

$Paint* ComboBoxPainter::decodeGradient5($Shape* s) {
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
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16
	}));
}

$Paint* ComboBoxPainter::decodeGradient6($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.2002841f,
		0.4005682f,
		0.5326705f,
		0.66477275f,
		0.8323864f,
		1.0f
	}), $$new($ColorArray, {
		$cast($Color, $nc(this->componentColors)->get(0)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(0)), $cast($Color, $nc(this->componentColors)->get(1)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(1)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(1)), $cast($Color, $nc(this->componentColors)->get(2)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(2)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(2)), $cast($Color, $nc(this->componentColors)->get(3)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(3))
	}));
}

$Paint* ComboBoxPainter::decodeGradient7($Shape* s) {
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

$Paint* ComboBoxPainter::decodeGradient8($Shape* s) {
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
		$cast($Color, $nc(this->componentColors)->get(4)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(4)), $cast($Color, $nc(this->componentColors)->get(5)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(5)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(5)), $cast($Color, $nc(this->componentColors)->get(6)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(6)),
		$(decodeColor($cast($Color, $nc(this->componentColors)->get(6)), $cast($Color, $nc(this->componentColors)->get(7)), 0.5f)),
		$cast($Color, $nc(this->componentColors)->get(7))
	}));
}

$Paint* ComboBoxPainter::decodeGradient9($Shape* s) {
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
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28
	}));
}

$Paint* ComboBoxPainter::decodeGradient10($Shape* s) {
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
		this->color33,
		$(decodeColor(this->color33, this->color34, 0.5f)),
		this->color34
	}));
}

$Paint* ComboBoxPainter::decodeGradient11($Shape* s) {
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
		this->color39,
		$(decodeColor(this->color39, this->color40, 0.5f)),
		this->color40
	}));
}

$Paint* ComboBoxPainter::decodeGradient12($Shape* s) {
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
		this->color45,
		$(decodeColor(this->color45, this->color46, 0.5f)),
		this->color46
	}));
}

ComboBoxPainter::ComboBoxPainter() {
}

$Class* ComboBoxPainter::load$($String* name, bool initialize) {
	$loadClass(ComboBoxPainter, name, initialize, &_ComboBoxPainter_ClassInfo_, allocate$ComboBoxPainter);
	return class$;
}

$Class* ComboBoxPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
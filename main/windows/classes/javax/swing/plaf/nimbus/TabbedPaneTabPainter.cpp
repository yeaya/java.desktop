#include <javax/swing/plaf/nimbus/TabbedPaneTabPainter.h>

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
#undef BACKGROUND_ENABLED_MOUSEOVER
#undef BACKGROUND_ENABLED_PRESSED
#undef BACKGROUND_SELECTED
#undef BACKGROUND_SELECTED_DISABLED
#undef BACKGROUND_SELECTED_FOCUSED
#undef BACKGROUND_SELECTED_MOUSEOVER
#undef BACKGROUND_SELECTED_MOUSEOVER_FOCUSED
#undef BACKGROUND_SELECTED_PRESSED
#undef BACKGROUND_SELECTED_PRESSED_FOCUSED

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

$FieldInfo _TabbedPaneTabPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_ENABLED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_ENABLED_MOUSEOVER)},
	{"BACKGROUND_ENABLED_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_ENABLED_PRESSED)},
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_SELECTED_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_SELECTED_DISABLED)},
	{"BACKGROUND_SELECTED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_SELECTED)},
	{"BACKGROUND_SELECTED_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_SELECTED_MOUSEOVER)},
	{"BACKGROUND_SELECTED_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_SELECTED_PRESSED)},
	{"BACKGROUND_SELECTED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_SELECTED_FOCUSED)},
	{"BACKGROUND_SELECTED_MOUSEOVER_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_SELECTED_MOUSEOVER_FOCUSED)},
	{"BACKGROUND_SELECTED_PRESSED_FOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(TabbedPaneTabPainter, BACKGROUND_SELECTED_PRESSED_FOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, color37)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(TabbedPaneTabPainter, componentColors)},
	{}
};

$MethodInfo _TabbedPaneTabPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(TabbedPaneTabPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&TabbedPaneTabPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient13))},
	{"decodeGradient14", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient14))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(TabbedPaneTabPainter::*)($Shape*)>(&TabbedPaneTabPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath1))},
	{"decodePath10", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath10))},
	{"decodePath11", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath11))},
	{"decodePath12", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath12))},
	{"decodePath13", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath13))},
	{"decodePath14", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath14))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(TabbedPaneTabPainter::*)()>(&TabbedPaneTabPainter::decodePath9))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundEnabledAndMouseOver))},
	{"paintBackgroundEnabledAndPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundEnabledAndPressed))},
	{"paintBackgroundSelected", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundSelected))},
	{"paintBackgroundSelectedAndDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundSelectedAndDisabled))},
	{"paintBackgroundSelectedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundSelectedAndFocused))},
	{"paintBackgroundSelectedAndMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundSelectedAndMouseOver))},
	{"paintBackgroundSelectedAndMouseOverAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundSelectedAndMouseOverAndFocused))},
	{"paintBackgroundSelectedAndPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundSelectedAndPressed))},
	{"paintBackgroundSelectedAndPressedAndFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(TabbedPaneTabPainter::*)($Graphics2D*)>(&TabbedPaneTabPainter::paintBackgroundSelectedAndPressedAndFocused))},
	{}
};

$ClassInfo _TabbedPaneTabPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.TabbedPaneTabPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_TabbedPaneTabPainter_FieldInfo_,
	_TabbedPaneTabPainter_MethodInfo_
};

$Object* allocate$TabbedPaneTabPainter($Class* clazz) {
	return $of($alloc(TabbedPaneTabPainter));
}

void TabbedPaneTabPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBase"_s, 0.032459438f, -0.55535716f, -0.109803945f, 0));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.08801502f, 0.3642857f, -0.4784314f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.08801502f, -0.63174605f, 0.43921566f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.05468172f, -0.6145278f, 0.37647057f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.032459438f, -0.5953556f, 0.32549018f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 0.032459438f, -0.54616207f, -0.02352941f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 0.08801502f, -0.6317773f, 0.4470588f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.021348298f, -0.61547136f, 0.41960782f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 0.032459438f, -0.5985242f, 0.39999998f, 0));
	$set(this, color10, decodeColor("nimbusBase"_s, 0.08801502f, 0.3642857f, -0.52156866f, 0));
	$set(this, color11, decodeColor("nimbusBase"_s, 0.027408898f, -0.5847884f, 0.2980392f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.035931647f, -0.5553123f, 0.23137254f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.029681683f, -0.5281874f, 0.18039215f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 0.03801495f, -0.5456242f, 0.3215686f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.032459438f, -0.59181184f, 0.25490195f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.05468172f, -0.58308274f, 0.19607842f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.046348333f, -0.6006266f, 0.34509802f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, 0.046348333f, -0.60015875f, 0.3333333f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 0.004681647f, -0.6197143f, 0.43137252f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 7.13408E-4f, -0.543609f, 0.34509802f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, -0.0020751357f, -0.45610264f, 0.2588235f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.43866998f, 0.24705881f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.44879842f, 0.29019606f, 0));
	$set(this, color24, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.08776909f, -0.2627451f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 0.06332368f, 0.3642857f, -0.4431373f, 0));
	$set(this, color26, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, -0.0022627711f, -0.5335866f, 0.372549f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, -0.0017285943f, -0.4608264f, 0.32549018f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.4555341f, 0.3215686f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, 5.1498413E-4f, -0.46404046f, 0.36470586f, 0));
	$set(this, color31, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color32, decodeColor("nimbusBase"_s, -4.2033195E-4f, -0.38050595f, 0.20392156f, 0));
	$set(this, color33, decodeColor("nimbusBase"_s, 0.0013483167f, -0.16401619f, 0.0745098f, 0));
	$set(this, color34, decodeColor("nimbusBase"_s, -0.0010001659f, -0.01599598f, 0.007843137f, 0));
	$set(this, color35, decodeColor("nimbusBase"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color36, decodeColor("nimbusBase"_s, 0.0018727183f, -0.038398862f, 0.035294116f, 0));
	$set(this, color37, decodeColor("nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void TabbedPaneTabPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case TabbedPaneTabPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_ENABLED_MOUSEOVER:
		{
			paintBackgroundEnabledAndMouseOver(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_ENABLED_PRESSED:
		{
			paintBackgroundEnabledAndPressed(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_SELECTED_DISABLED:
		{
			paintBackgroundSelectedAndDisabled(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_SELECTED:
		{
			paintBackgroundSelected(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_SELECTED_MOUSEOVER:
		{
			paintBackgroundSelectedAndMouseOver(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_SELECTED_PRESSED:
		{
			paintBackgroundSelectedAndPressed(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_SELECTED_FOCUSED:
		{
			paintBackgroundSelectedAndFocused(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_SELECTED_MOUSEOVER_FOCUSED:
		{
			paintBackgroundSelectedAndMouseOverAndFocused(g);
			break;
		}
	case TabbedPaneTabPainter::BACKGROUND_SELECTED_PRESSED_FOCUSED:
		{
			paintBackgroundSelectedAndPressedAndFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* TabbedPaneTabPainter::getPaintContext() {
	return this->ctx;
}

void TabbedPaneTabPainter::paintBackgroundEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundEnabledAndMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundEnabledAndPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath3());
	$nc(g)->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath5());
	$nc(g)->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath6());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundSelectedAndDisabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath7());
	$nc(g)->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundSelected($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath7());
	$nc(g)->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundSelectedAndMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath8());
	$nc(g)->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath9());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundSelectedAndPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath8());
	$nc(g)->setPaint($(decodeGradient13(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath9());
	g->setPaint($(decodeGradient14(this->path)));
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundSelectedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath10());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath11());
	g->setPaint(this->color37);
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundSelectedAndMouseOverAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath12());
	$nc(g)->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath13());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath14());
	g->setPaint(this->color37);
	g->fill(this->path);
}

void TabbedPaneTabPainter::paintBackgroundSelectedAndPressedAndFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath12());
	$nc(g)->setPaint($(decodeGradient13(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath13());
	g->setPaint($(decodeGradient14(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath14());
	g->setPaint(this->color37);
	g->fill(this->path);
}

$Path2D* TabbedPaneTabPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.71428573f));
	double var$1 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$2 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$3 = (double)decodeAnchorX(0.71428573f, -3.0f);
	double var$4 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$5 = (double)decodeX(0.71428573f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.0f));
	double var$6 = (double)decodeAnchorX(0.71428573f, 3.0f);
	double var$7 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$8 = (double)decodeAnchorX(2.2857144f, -3.0f);
	double var$9 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$10 = (double)decodeX(2.2857144f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.0f));
	double var$11 = (double)decodeAnchorX(2.2857144f, 3.0f);
	double var$12 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$13 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$14 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$15 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.71428573f));
	double var$16 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$17 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$18 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$20 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(3.0f));
	double var$21 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$21, decodeY(3.0f));
	double var$22 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$23 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$24 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.71428573f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.14285715f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$4 = (double)decodeAnchorY(0.85714287f, 3.5555556f);
	double var$5 = (double)decodeX(0.14285715f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.85714287f));
	double var$6 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$7 = (double)decodeAnchorY(0.85714287f, -3.5555556f);
	double var$8 = (double)decodeAnchorX(0.85714287f, -3.4444444f);
	double var$9 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$10 = (double)decodeX(0.85714287f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.14285715f));
	double var$11 = (double)decodeAnchorX(0.85714287f, 3.4444444f);
	double var$12 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$13 = (double)decodeAnchorX(2.142857f, -3.3333333f);
	double var$14 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$15 = (double)decodeX(2.142857f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.14285715f));
	double var$16 = (double)decodeAnchorX(2.142857f, 3.3333333f);
	double var$17 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$18 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$19 = (double)decodeAnchorY(0.85714287f, -3.2777777f);
	double var$20 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(0.85714287f));
	double var$21 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$22 = (double)decodeAnchorY(0.85714287f, 3.2777777f);
	double var$23 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$24 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$25 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(2.0f));
	double var$26 = (double)decodeX(0.14285715f);
	$nc(this->path)->lineTo(var$26, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.71428573f));
	double var$1 = (double)decodeAnchorX(0.0f, 0.055555556f);
	double var$2 = (double)decodeAnchorY(0.71428573f, 2.6111112f);
	double var$3 = (double)decodeAnchorX(0.8333333f, -2.5f);
	double var$4 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$5 = (double)decodeX(0.8333333f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.0f));
	double var$6 = (double)decodeAnchorX(0.8333333f, 2.5f);
	double var$7 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$8 = (double)decodeAnchorX(2.2857144f, -2.7222223f);
	double var$9 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$10 = (double)decodeX(2.2857144f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.0f));
	double var$11 = (double)decodeAnchorX(2.2857144f, 2.7222223f);
	double var$12 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$13 = (double)decodeAnchorX(3.0f, -0.055555556f);
	double var$14 = (double)decodeAnchorY(0.71428573f, -2.7222223f);
	double var$15 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.71428573f));
	double var$16 = (double)decodeAnchorX(3.0f, 0.055555556f);
	double var$17 = (double)decodeAnchorY(0.71428573f, 2.7222223f);
	double var$18 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$20 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(3.0f));
	double var$21 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$21, decodeY(3.0f));
	double var$22 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$23 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$24 = (double)decodeAnchorX(0.0f, -0.055555556f);
	double var$25 = (double)decodeAnchorY(0.71428573f, -2.6111112f);
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.71428573f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.16666667f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$4 = (double)decodeAnchorY(0.85714287f, 3.6666667f);
	double var$5 = (double)decodeX(0.16666667f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.85714287f));
	double var$6 = (double)decodeAnchorX(0.16666667f, 0.0f);
	double var$7 = (double)decodeAnchorY(0.85714287f, -3.6666667f);
	double var$8 = (double)decodeAnchorX(1.0f, -3.5555556f);
	double var$9 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$10 = (double)decodeX(1.0f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.14285715f));
	double var$11 = (double)decodeAnchorX(1.0f, 3.5555556f);
	double var$12 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$13 = (double)decodeAnchorX(2.142857f, -3.5f);
	double var$14 = (double)decodeAnchorY(0.14285715f, 0.055555556f);
	double var$15 = (double)decodeX(2.142857f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.14285715f));
	double var$16 = (double)decodeAnchorX(2.142857f, 3.5f);
	double var$17 = (double)decodeAnchorY(0.14285715f, -0.055555556f);
	double var$18 = (double)decodeAnchorX(2.857143f, 0.055555556f);
	double var$19 = (double)decodeAnchorY(0.85714287f, -3.6666667f);
	double var$20 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(0.85714287f));
	double var$21 = (double)decodeAnchorX(2.857143f, -0.055555556f);
	double var$22 = (double)decodeAnchorY(0.85714287f, 3.6666667f);
	double var$23 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$24 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$25 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(2.0f));
	double var$26 = (double)decodeX(0.16666667f);
	$nc(this->path)->lineTo(var$26, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.8333333f));
	double var$1 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$2 = (double)decodeAnchorY(0.8333333f, -3.0f);
	double var$3 = (double)decodeAnchorX(0.71428573f, -3.0f);
	double var$4 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$5 = (double)decodeX(0.71428573f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.0f));
	double var$6 = (double)decodeAnchorX(0.71428573f, 3.0f);
	double var$7 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$8 = (double)decodeAnchorX(2.2857144f, -3.0f);
	double var$9 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$10 = (double)decodeX(2.2857144f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.0f));
	double var$11 = (double)decodeAnchorX(2.2857144f, 3.0f);
	double var$12 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$13 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$14 = (double)decodeAnchorY(0.8333333f, -3.0f);
	double var$15 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.8333333f));
	double var$16 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$17 = (double)decodeAnchorY(0.8333333f, 3.0f);
	double var$18 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$20 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(3.0f));
	double var$21 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$21, decodeY(3.0f));
	double var$22 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$23 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$24 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.8333333f, 3.0f);
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.8333333f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.14285715f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.0f, 3.5555556f);
	double var$5 = (double)decodeX(0.14285715f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.0f));
	double var$6 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$7 = (double)decodeAnchorY(1.0f, -3.5555556f);
	double var$8 = (double)decodeAnchorX(0.85714287f, -3.4444444f);
	double var$9 = (double)decodeAnchorY(0.16666667f, 0.0f);
	double var$10 = (double)decodeX(0.85714287f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.16666667f));
	double var$11 = (double)decodeAnchorX(0.85714287f, 3.4444444f);
	double var$12 = (double)decodeAnchorY(0.16666667f, 0.0f);
	double var$13 = (double)decodeAnchorX(2.142857f, -3.3333333f);
	double var$14 = (double)decodeAnchorY(0.16666667f, 0.0f);
	double var$15 = (double)decodeX(2.142857f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.16666667f));
	double var$16 = (double)decodeAnchorX(2.142857f, 3.3333333f);
	double var$17 = (double)decodeAnchorY(0.16666667f, 0.0f);
	double var$18 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$19 = (double)decodeAnchorY(1.0f, -3.2777777f);
	double var$20 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(1.0f));
	double var$21 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$22 = (double)decodeAnchorY(1.0f, 3.2777777f);
	double var$23 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$24 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$25 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(2.0f));
	double var$26 = (double)decodeX(0.14285715f);
	$nc(this->path)->lineTo(var$26, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.71428573f));
	double var$1 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$2 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$3 = (double)decodeAnchorX(0.71428573f, -3.0f);
	double var$4 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$5 = (double)decodeX(0.71428573f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.0f));
	double var$6 = (double)decodeAnchorX(0.71428573f, 3.0f);
	double var$7 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$8 = (double)decodeAnchorX(2.2857144f, -3.0f);
	double var$9 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$10 = (double)decodeX(2.2857144f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.0f));
	double var$11 = (double)decodeAnchorX(2.2857144f, 3.0f);
	double var$12 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$13 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$14 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$15 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.71428573f));
	double var$16 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$17 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$18 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$20 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(2.0f));
	double var$21 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$21, decodeY(2.0f));
	double var$22 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$23 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$24 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.71428573f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.71428573f));
	double var$1 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$2 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$3 = (double)decodeAnchorX(0.5555556f, -3.0f);
	double var$4 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$5 = (double)decodeX(0.5555556f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.0f));
	double var$6 = (double)decodeAnchorX(0.5555556f, 3.0f);
	double var$7 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$8 = (double)decodeAnchorX(2.4444444f, -3.0f);
	double var$9 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$10 = (double)decodeX(2.4444444f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.0f));
	double var$11 = (double)decodeAnchorX(2.4444444f, 3.0f);
	double var$12 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$13 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$14 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$15 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.71428573f));
	double var$16 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$17 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$18 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$20 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(2.0f));
	double var$21 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$21, decodeY(2.0f));
	double var$22 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$23 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$24 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.71428573f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.11111111f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeAnchorX(0.11111111f, 0.0f);
	double var$2 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.11111111f, 0.0f);
	double var$4 = (double)decodeAnchorY(0.85714287f, 3.5555556f);
	double var$5 = (double)decodeX(0.11111111f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.85714287f));
	double var$6 = (double)decodeAnchorX(0.11111111f, 0.0f);
	double var$7 = (double)decodeAnchorY(0.85714287f, -3.5555556f);
	double var$8 = (double)decodeAnchorX(0.6666667f, -3.4444444f);
	double var$9 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$10 = (double)decodeX(0.6666667f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.14285715f));
	double var$11 = (double)decodeAnchorX(0.6666667f, 3.4444444f);
	double var$12 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$13 = (double)decodeAnchorX(2.3333333f, -3.3333333f);
	double var$14 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$15 = (double)decodeX(2.3333333f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.14285715f));
	double var$16 = (double)decodeAnchorX(2.3333333f, 3.3333333f);
	double var$17 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$18 = (double)decodeAnchorX(2.8888888f, 0.0f);
	double var$19 = (double)decodeAnchorY(0.85714287f, -3.2777777f);
	double var$20 = (double)decodeX(2.8888888f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(0.85714287f));
	double var$21 = (double)decodeAnchorX(2.8888888f, 0.0f);
	double var$22 = (double)decodeAnchorY(0.85714287f, 3.2777777f);
	double var$23 = (double)decodeAnchorX(2.8888888f, 0.0f);
	double var$24 = (double)decodeAnchorY(2.0f, 0.0f);
	double var$25 = (double)decodeX(2.8888888f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(2.0f));
	double var$26 = (double)decodeX(0.11111111f);
	$nc(this->path)->lineTo(var$26, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath10() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.14285715f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$2 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$4 = (double)decodeAnchorY(0.85714287f, 3.5555556f);
	double var$5 = (double)decodeX(0.14285715f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.85714287f));
	double var$6 = (double)decodeAnchorX(0.14285715f, 0.0f);
	double var$7 = (double)decodeAnchorY(0.85714287f, -3.5555556f);
	double var$8 = (double)decodeAnchorX(0.85714287f, -3.4444444f);
	double var$9 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$10 = (double)decodeX(0.85714287f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.14285715f));
	double var$11 = (double)decodeAnchorX(0.85714287f, 3.4444444f);
	double var$12 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$13 = (double)decodeAnchorX(2.142857f, -3.3333333f);
	double var$14 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$15 = (double)decodeX(2.142857f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.14285715f));
	double var$16 = (double)decodeAnchorX(2.142857f, 3.3333333f);
	double var$17 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$18 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$19 = (double)decodeAnchorY(0.85714287f, -3.2777777f);
	double var$20 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(0.85714287f));
	double var$21 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$22 = (double)decodeAnchorY(0.85714287f, 3.2777777f);
	double var$23 = (double)decodeAnchorX(2.857143f, 0.0f);
	double var$24 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$25 = (double)decodeX(2.857143f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(3.0f));
	double var$26 = (double)decodeX(0.14285715f);
	$nc(this->path)->lineTo(var$26, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath11() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.4638889f);
	$nc(this->path)->moveTo(var$0, decodeY(2.25f));
	double var$1 = (double)decodeX(1.4652778f);
	$nc(this->path)->lineTo(var$1, decodeY(2.777778f));
	double var$2 = (double)decodeX(0.3809524f);
	$nc(this->path)->lineTo(var$2, decodeY(2.777778f));
	double var$3 = (double)decodeX(0.375f);
	$nc(this->path)->lineTo(var$3, decodeY(0.88095236f));
	double var$4 = (double)decodeAnchorX(0.375f, 0.0f);
	double var$5 = (double)decodeAnchorY(0.88095236f, -2.25f);
	double var$6 = (double)decodeAnchorX(0.8452381f, -1.9166666f);
	double var$7 = (double)decodeAnchorY(0.3809524f, 0.0f);
	double var$8 = (double)decodeX(0.8452381f);
	$nc(this->path)->curveTo(var$4, var$5, var$6, var$7, var$8, decodeY(0.3809524f));
	double var$9 = (double)decodeX(2.1011903f);
	$nc(this->path)->lineTo(var$9, decodeY(0.3809524f));
	double var$10 = (double)decodeAnchorX(2.1011903f, 2.125f);
	double var$11 = (double)decodeAnchorY(0.3809524f, 0.0f);
	double var$12 = (double)decodeAnchorX(2.6309526f, 0.0f);
	double var$13 = (double)decodeAnchorY(0.8630952f, -2.5833333f);
	double var$14 = (double)decodeX(2.6309526f);
	$nc(this->path)->curveTo(var$10, var$11, var$12, var$13, var$14, decodeY(0.8630952f));
	double var$15 = (double)decodeX(2.625f);
	$nc(this->path)->lineTo(var$15, decodeY(2.7638886f));
	double var$16 = (double)decodeX(1.4666667f);
	$nc(this->path)->lineTo(var$16, decodeY(2.777778f));
	double var$17 = (double)decodeX(1.4638889f);
	$nc(this->path)->lineTo(var$17, decodeY(2.2361114f));
	double var$18 = (double)decodeX(2.3869045f);
	$nc(this->path)->lineTo(var$18, decodeY(2.222222f));
	double var$19 = (double)decodeX(2.375f);
	$nc(this->path)->lineTo(var$19, decodeY(0.86904764f));
	double var$20 = (double)decodeAnchorX(2.375f, -7.1054274E-15f);
	double var$21 = (double)decodeAnchorY(0.86904764f, -0.9166667f);
	double var$22 = (double)decodeAnchorX(2.0952382f, 1.0833334f);
	double var$23 = (double)decodeAnchorY(0.60714287f, -1.7763568E-15f);
	double var$24 = (double)decodeX(2.0952382f);
	$nc(this->path)->curveTo(var$20, var$21, var$22, var$23, var$24, decodeY(0.60714287f));
	double var$25 = (double)decodeX(0.8333334f);
	$nc(this->path)->lineTo(var$25, decodeY(0.6130952f));
	double var$26 = (double)decodeAnchorX(0.8333334f, -1.0f);
	double var$27 = (double)decodeAnchorY(0.6130952f, 0.0f);
	double var$28 = (double)decodeAnchorX(0.625f, 0.041666668f);
	double var$29 = (double)decodeAnchorY(0.86904764f, -0.9583333f);
	double var$30 = (double)decodeX(0.625f);
	$nc(this->path)->curveTo(var$26, var$27, var$28, var$29, var$30, decodeY(0.86904764f));
	double var$31 = (double)decodeX(0.6130952f);
	$nc(this->path)->lineTo(var$31, decodeY(2.2361114f));
	double var$32 = (double)decodeX(1.4638889f);
	$nc(this->path)->lineTo(var$32, decodeY(2.25f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath12() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.71428573f));
	double var$1 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$2 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$3 = (double)decodeAnchorX(0.5555556f, -3.0f);
	double var$4 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$5 = (double)decodeX(0.5555556f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.0f));
	double var$6 = (double)decodeAnchorX(0.5555556f, 3.0f);
	double var$7 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$8 = (double)decodeAnchorX(2.4444444f, -3.0f);
	double var$9 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$10 = (double)decodeX(2.4444444f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.0f));
	double var$11 = (double)decodeAnchorX(2.4444444f, 3.0f);
	double var$12 = (double)decodeAnchorY(0.0f, 0.0f);
	double var$13 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$14 = (double)decodeAnchorY(0.71428573f, -3.0f);
	double var$15 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.71428573f));
	double var$16 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$17 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$18 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$20 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(3.0f));
	double var$21 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$21, decodeY(3.0f));
	double var$22 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$23 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$24 = (double)decodeAnchorX(0.0f, 0.0f);
	double var$25 = (double)decodeAnchorY(0.71428573f, 3.0f);
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$22, var$23, var$24, var$25, var$26, decodeY(0.71428573f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath13() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.11111111f);
	$nc(this->path)->moveTo(var$0, decodeY(3.0f));
	double var$1 = (double)decodeAnchorX(0.11111111f, 0.0f);
	double var$2 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.11111111f, 0.0f);
	double var$4 = (double)decodeAnchorY(0.85714287f, 3.5555556f);
	double var$5 = (double)decodeX(0.11111111f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.85714287f));
	double var$6 = (double)decodeAnchorX(0.11111111f, 0.0f);
	double var$7 = (double)decodeAnchorY(0.85714287f, -3.5555556f);
	double var$8 = (double)decodeAnchorX(0.6666667f, -3.4444444f);
	double var$9 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$10 = (double)decodeX(0.6666667f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(0.14285715f));
	double var$11 = (double)decodeAnchorX(0.6666667f, 3.4444444f);
	double var$12 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$13 = (double)decodeAnchorX(2.3333333f, -3.3333333f);
	double var$14 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$15 = (double)decodeX(2.3333333f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(0.14285715f));
	double var$16 = (double)decodeAnchorX(2.3333333f, 3.3333333f);
	double var$17 = (double)decodeAnchorY(0.14285715f, 0.0f);
	double var$18 = (double)decodeAnchorX(2.8888888f, 0.0f);
	double var$19 = (double)decodeAnchorY(0.85714287f, -3.2777777f);
	double var$20 = (double)decodeX(2.8888888f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(0.85714287f));
	double var$21 = (double)decodeAnchorX(2.8888888f, 0.0f);
	double var$22 = (double)decodeAnchorY(0.85714287f, 3.2777777f);
	double var$23 = (double)decodeAnchorX(2.8888888f, 0.0f);
	double var$24 = (double)decodeAnchorY(3.0f, 0.0f);
	double var$25 = (double)decodeX(2.8888888f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(3.0f));
	double var$26 = (double)decodeX(0.11111111f);
	$nc(this->path)->lineTo(var$26, decodeY(3.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* TabbedPaneTabPainter::decodePath14() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.4583333f);
	$nc(this->path)->moveTo(var$0, decodeY(2.25f));
	double var$1 = (double)decodeX(1.4599359f);
	$nc(this->path)->lineTo(var$1, decodeY(2.777778f));
	double var$2 = (double)decodeX(0.2962963f);
	$nc(this->path)->lineTo(var$2, decodeY(2.777778f));
	double var$3 = (double)decodeX(0.29166666f);
	$nc(this->path)->lineTo(var$3, decodeY(0.88095236f));
	double var$4 = (double)decodeAnchorX(0.29166666f, 0.0f);
	double var$5 = (double)decodeAnchorY(0.88095236f, -2.25f);
	double var$6 = (double)decodeAnchorX(0.6574074f, -1.9166666f);
	double var$7 = (double)decodeAnchorY(0.3809524f, 0.0f);
	double var$8 = (double)decodeX(0.6574074f);
	$nc(this->path)->curveTo(var$4, var$5, var$6, var$7, var$8, decodeY(0.3809524f));
	double var$9 = (double)decodeX(2.3009257f);
	$nc(this->path)->lineTo(var$9, decodeY(0.3809524f));
	double var$10 = (double)decodeAnchorX(2.3009257f, 2.125f);
	double var$11 = (double)decodeAnchorY(0.3809524f, 0.0f);
	double var$12 = (double)decodeAnchorX(2.712963f, 0.0f);
	double var$13 = (double)decodeAnchorY(0.8630952f, -2.5833333f);
	double var$14 = (double)decodeX(2.712963f);
	$nc(this->path)->curveTo(var$10, var$11, var$12, var$13, var$14, decodeY(0.8630952f));
	double var$15 = (double)decodeX(2.7083333f);
	$nc(this->path)->lineTo(var$15, decodeY(2.7638886f));
	double var$16 = (double)decodeX(1.4615384f);
	$nc(this->path)->lineTo(var$16, decodeY(2.777778f));
	double var$17 = (double)decodeX(1.4583333f);
	$nc(this->path)->lineTo(var$17, decodeY(2.2361114f));
	double var$18 = (double)decodeX(2.523148f);
	$nc(this->path)->lineTo(var$18, decodeY(2.222222f));
	double var$19 = (double)decodeX(2.5138888f);
	$nc(this->path)->lineTo(var$19, decodeY(0.86904764f));
	double var$20 = (double)decodeAnchorX(2.5138888f, -7.1054274E-15f);
	double var$21 = (double)decodeAnchorY(0.86904764f, -0.9166667f);
	double var$22 = (double)decodeAnchorX(2.2962964f, 1.0833334f);
	double var$23 = (double)decodeAnchorY(0.60714287f, -1.7763568E-15f);
	double var$24 = (double)decodeX(2.2962964f);
	$nc(this->path)->curveTo(var$20, var$21, var$22, var$23, var$24, decodeY(0.60714287f));
	double var$25 = (double)decodeX(0.6481482f);
	$nc(this->path)->lineTo(var$25, decodeY(0.6130952f));
	double var$26 = (double)decodeAnchorX(0.6481482f, -1.0f);
	double var$27 = (double)decodeAnchorY(0.6130952f, 0.0f);
	double var$28 = (double)decodeAnchorX(0.4861111f, 0.041666668f);
	double var$29 = (double)decodeAnchorY(0.86904764f, -0.9583333f);
	double var$30 = (double)decodeX(0.4861111f);
	$nc(this->path)->curveTo(var$26, var$27, var$28, var$29, var$30, decodeY(0.86904764f));
	double var$31 = (double)decodeX(0.47685182f);
	$nc(this->path)->lineTo(var$31, decodeY(2.2361114f));
	double var$32 = (double)decodeX(1.4583333f);
	$nc(this->path)->lineTo(var$32, decodeY(2.25f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* TabbedPaneTabPainter::decodeGradient1($Shape* s) {
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

$Paint* TabbedPaneTabPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.1f,
		0.2f,
		0.6f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient3($Shape* s) {
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
		$(decodeColor(this->color6, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.1f,
		0.2f,
		0.6f,
		1.0f
	}), $$new($ColorArray, {
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient5($Shape* s) {
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
		$(decodeColor(this->color10, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.1f,
		0.2f,
		0.42096776f,
		0.64193547f,
		0.82096773f,
		1.0f
	}), $$new($ColorArray, {
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient7($Shape* s) {
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
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.1f,
		0.2f,
		0.6f,
		1.0f
	}), $$new($ColorArray, {
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18,
		$(decodeColor(this->color18, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12419355f,
		0.2483871f,
		0.42580646f,
		0.6032258f,
		0.6854839f,
		0.7677419f,
		0.88387096f,
		1.0f
	}), $$new($ColorArray, {
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient10($Shape* s) {
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
		this->color24,
		$(decodeColor(this->color24, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient11($Shape* s) {
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
		this->color25,
		$(decodeColor(this->color25, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient12($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12419355f,
		0.2483871f,
		0.42580646f,
		0.6032258f,
		0.6854839f,
		0.7677419f,
		0.86774194f,
		0.9677419f
	}), $$new($ColorArray, {
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28,
		$(decodeColor(this->color28, this->color29, 0.5f)),
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient13($Shape* s) {
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
		this->color25,
		$(decodeColor(this->color25, this->color31, 0.5f)),
		this->color31
	}));
}

$Paint* TabbedPaneTabPainter::decodeGradient14($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12419355f,
		0.2483871f,
		0.42580646f,
		0.6032258f,
		0.6854839f,
		0.7677419f,
		0.8548387f,
		0.9419355f
	}), $$new($ColorArray, {
		this->color32,
		$(decodeColor(this->color32, this->color33, 0.5f)),
		this->color33,
		$(decodeColor(this->color33, this->color34, 0.5f)),
		this->color34,
		$(decodeColor(this->color34, this->color35, 0.5f)),
		this->color35,
		$(decodeColor(this->color35, this->color36, 0.5f)),
		this->color36
	}));
}

TabbedPaneTabPainter::TabbedPaneTabPainter() {
}

$Class* TabbedPaneTabPainter::load$($String* name, bool initialize) {
	$loadClass(TabbedPaneTabPainter, name, initialize, &_TabbedPaneTabPainter_ClassInfo_, allocate$TabbedPaneTabPainter);
	return class$;
}

$Class* TabbedPaneTabPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
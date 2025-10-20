#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMenuButtonPainter.h>

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

#undef ICON_DISABLED
#undef ICON_ENABLED
#undef ICON_ENABLED_WINDOWNOTFOCUSED
#undef ICON_MOUSEOVER
#undef ICON_MOUSEOVER_WINDOWNOTFOCUSED
#undef ICON_PRESSED
#undef ICON_PRESSED_WINDOWNOTFOCUSED

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

$FieldInfo _InternalFrameTitlePaneMenuButtonPainter_FieldInfo_[] = {
	{"ICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMenuButtonPainter, ICON_ENABLED)},
	{"ICON_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMenuButtonPainter, ICON_DISABLED)},
	{"ICON_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMenuButtonPainter, ICON_MOUSEOVER)},
	{"ICON_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMenuButtonPainter, ICON_PRESSED)},
	{"ICON_ENABLED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMenuButtonPainter, ICON_ENABLED_WINDOWNOTFOCUSED)},
	{"ICON_MOUSEOVER_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMenuButtonPainter, ICON_MOUSEOVER_WINDOWNOTFOCUSED)},
	{"ICON_PRESSED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMenuButtonPainter, ICON_PRESSED_WINDOWNOTFOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, color40)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMenuButtonPainter, componentColors)},
	{}
};

$MethodInfo _InternalFrameTitlePaneMenuButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&InternalFrameTitlePaneMenuButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient13))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMenuButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMenuButtonPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneMenuButtonPainter::*)()>(&InternalFrameTitlePaneMenuButtonPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneMenuButtonPainter::*)()>(&InternalFrameTitlePaneMenuButtonPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneMenuButtonPainter::*)()>(&InternalFrameTitlePaneMenuButtonPainter::decodePath3))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneMenuButtonPainter::*)()>(&InternalFrameTitlePaneMenuButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneMenuButtonPainter::*)()>(&InternalFrameTitlePaneMenuButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneMenuButtonPainter::*)()>(&InternalFrameTitlePaneMenuButtonPainter::decodeRoundRect3))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"painticonDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMenuButtonPainter::painticonDisabled))},
	{"painticonEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMenuButtonPainter::painticonEnabled))},
	{"painticonEnabledAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMenuButtonPainter::painticonEnabledAndWindowNotFocused))},
	{"painticonMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMenuButtonPainter::painticonMouseOver))},
	{"painticonMouseOverAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMenuButtonPainter::painticonMouseOverAndWindowNotFocused))},
	{"painticonPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMenuButtonPainter::painticonPressed))},
	{"painticonPressedAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMenuButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMenuButtonPainter::painticonPressedAndWindowNotFocused))},
	{}
};

$ClassInfo _InternalFrameTitlePaneMenuButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_InternalFrameTitlePaneMenuButtonPainter_FieldInfo_,
	_InternalFrameTitlePaneMenuButtonPainter_MethodInfo_
};

$Object* allocate$InternalFrameTitlePaneMenuButtonPainter($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneMenuButtonPainter));
}

void InternalFrameTitlePaneMenuButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.0029994324f, -0.38039216f, -185));
	$set(this, color2, decodeColor("nimbusBase"_s, 0.08801502f, 0.3642857f, -0.5019608f, 0));
	$set(this, color3, decodeColor("nimbusBase"_s, 0.030543745f, -0.3835404f, -0.09803924f, 0));
	$set(this, color4, decodeColor("nimbusBase"_s, 0.029191494f, -0.53801316f, 0.13333333f, 0));
	$set(this, color5, decodeColor("nimbusBase"_s, 0.030543745f, -0.3857143f, -0.09411767f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 0.030543745f, -0.43148893f, 0.007843137f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 0.029191494f, -0.24935067f, -0.20392159f, -132));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.029191494f, -0.24935067f, -0.20392159f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 0.029191494f, -0.24935067f, -0.20392159f, -123));
	$set(this, color10, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.0029994324f, -0.38039216f, -208));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.02551502f, -0.5942635f, 0.20784312f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.032459438f, -0.5490091f, 0.12941176f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 0.032459438f, -0.5469569f, 0.11372548f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.032459438f, -0.5760128f, 0.23921567f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.08801502f, 0.3642857f, -0.4901961f, 0));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.032459438f, -0.1857143f, -0.23529413f, 0));
	$set(this, color18, decodeColor("nimbusBase"_s, 0.029191494f, -0.5438224f, 0.17647058f, 0));
	$set(this, color19, decodeColor("nimbusBase"_s, 0.030543745f, -0.41929638f, -0.02352941f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 0.030543745f, -0.45559007f, 0.082352936f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 0.03409344f, -0.329408f, -0.11372551f, -132));
	$set(this, color22, decodeColor("nimbusBase"_s, 0.03409344f, -0.329408f, -0.11372551f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, 0.03409344f, -0.329408f, -0.11372551f, -123));
	$set(this, color24, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color25, decodeColor("nimbusBase"_s, 0.031104386f, 0.12354499f, -0.33725494f, 0));
	$set(this, color26, decodeColor("nimbusBase"_s, 0.032459438f, -0.4592437f, -0.015686274f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, 0.029191494f, -0.2579365f, -0.19607845f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, 0.03409344f, -0.3149596f, -0.13333336f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, 0.029681683f, 0.07857144f, -0.3294118f, -132));
	$set(this, color30, decodeColor("nimbusBase"_s, 0.029681683f, 0.07857144f, -0.3294118f, 0));
	$set(this, color31, decodeColor("nimbusBase"_s, 0.029681683f, 0.07857144f, -0.3294118f, -123));
	$set(this, color32, decodeColor("nimbusBase"_s, 0.032459438f, -0.53637654f, 0.043137252f, 0));
	$set(this, color33, decodeColor("nimbusBase"_s, 0.032459438f, -0.49935067f, -0.11764708f, 0));
	$set(this, color34, decodeColor("nimbusBase"_s, 0.021348298f, -0.6133929f, 0.32941175f, 0));
	$set(this, color35, decodeColor("nimbusBase"_s, 0.042560518f, -0.5804379f, 0.23137254f, 0));
	$set(this, color36, decodeColor("nimbusBase"_s, 0.032459438f, -0.57417583f, 0.21568626f, 0));
	$set(this, color37, decodeColor("nimbusBase"_s, 0.027408898f, -0.5784226f, 0.20392156f, -132));
	$set(this, color38, decodeColor("nimbusBase"_s, 0.042560518f, -0.5665319f, 0.0745098f, 0));
	$set(this, color39, decodeColor("nimbusBase"_s, 0.036732912f, -0.5642857f, 0.16470587f, -123));
	$set(this, color40, decodeColor("nimbusBase"_s, 0.021348298f, -0.54480517f, -0.11764708f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void InternalFrameTitlePaneMenuButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case InternalFrameTitlePaneMenuButtonPainter::ICON_ENABLED:
		{
			painticonEnabled(g);
			break;
		}
	case InternalFrameTitlePaneMenuButtonPainter::ICON_DISABLED:
		{
			painticonDisabled(g);
			break;
		}
	case InternalFrameTitlePaneMenuButtonPainter::ICON_MOUSEOVER:
		{
			painticonMouseOver(g);
			break;
		}
	case InternalFrameTitlePaneMenuButtonPainter::ICON_PRESSED:
		{
			painticonPressed(g);
			break;
		}
	case InternalFrameTitlePaneMenuButtonPainter::ICON_ENABLED_WINDOWNOTFOCUSED:
		{
			painticonEnabledAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneMenuButtonPainter::ICON_MOUSEOVER_WINDOWNOTFOCUSED:
		{
			painticonMouseOverAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneMenuButtonPainter::ICON_PRESSED_WINDOWNOTFOCUSED:
		{
			painticonPressedAndWindowNotFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* InternalFrameTitlePaneMenuButtonPainter::getPaintContext() {
	return this->ctx;
}

void InternalFrameTitlePaneMenuButtonPainter::painticonEnabled($Graphics2D* g) {
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
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color10);
	g->fill(this->path);
}

void InternalFrameTitlePaneMenuButtonPainter::painticonDisabled($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color11);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath2());
	g->setPaint(this->color15);
	g->fill(this->path);
}

void InternalFrameTitlePaneMenuButtonPainter::painticonMouseOver($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color10);
	g->fill(this->path);
}

void InternalFrameTitlePaneMenuButtonPainter::painticonPressed($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color10);
	g->fill(this->path);
}

void InternalFrameTitlePaneMenuButtonPainter::painticonEnabledAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect2());
	$nc(g)->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient12(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient13(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color40);
	g->fill(this->path);
}

void InternalFrameTitlePaneMenuButtonPainter::painticonMouseOverAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color10);
	g->fill(this->path);
}

void InternalFrameTitlePaneMenuButtonPainter::painticonPressedAndWindowNotFocused($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect3());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color10);
	g->fill(this->path);
}

$RoundRectangle2D* InternalFrameTitlePaneMenuButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.6111112f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.6111112f), 6.0f, 6.0f);
	return this->roundRect;
}

$RoundRectangle2D* InternalFrameTitlePaneMenuButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.9444444f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0f), 8.6f, 8.6f);
	return this->roundRect;
}

$RoundRectangle2D* InternalFrameTitlePaneMenuButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(1.0526316f);
	double var$1 = (double)decodeY(1.0555556f);
	float var$3 = decodeX(1.9473684f);
	double var$2 = (double)(var$3 - decodeX(1.0526316f));
	float var$4 = decodeY(1.8888888f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0555556f), 6.75f, 6.75f);
	return this->roundRect;
}

$Path2D* InternalFrameTitlePaneMenuButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.3157895f);
	$nc(this->path)->moveTo(var$0, decodeY(1.4444444f));
	double var$1 = (double)decodeX(1.6842105f);
	$nc(this->path)->lineTo(var$1, decodeY(1.4444444f));
	double var$2 = (double)decodeX(1.5013158f);
	$nc(this->path)->lineTo(var$2, decodeY(1.7208333f));
	double var$3 = (double)decodeX(1.3157895f);
	$nc(this->path)->lineTo(var$3, decodeY(1.4444444f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFrameTitlePaneMenuButtonPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.3157895f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3333334f));
	double var$1 = (double)decodeX(1.6842105f);
	$nc(this->path)->lineTo(var$1, decodeY(1.3333334f));
	double var$2 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$2, decodeY(1.6083333f));
	double var$3 = (double)decodeX(1.3157895f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3333334f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFrameTitlePaneMenuButtonPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.3157895f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3888888f));
	double var$1 = (double)decodeX(1.6842105f);
	$nc(this->path)->lineTo(var$1, decodeY(1.3888888f));
	double var$2 = (double)decodeX(1.4952153f);
	$nc(this->path)->lineTo(var$2, decodeY(1.655303f));
	double var$3 = (double)decodeX(1.3157895f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3888888f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color2,
		$(decodeColor(this->color2, this->color3, 0.5f)),
		this->color3
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.5951705f,
		0.6505682f,
		0.8252841f,
		1.0f
	}), $$new($ColorArray, {
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color3, 0.5f)),
		this->color3,
		$(decodeColor(this->color3, this->color6, 0.5f)),
		this->color6
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.50714284f * w) + x, (0.095f * h) + y, (0.49285713f * w) + x, (0.91f * h) + y, $$new($floats, {
		0.0f,
		0.24289773f,
		0.48579547f,
		0.74289775f,
		1.0f
	}), $$new($ColorArray, {
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8,
		$(decodeColor(this->color8, this->color9, 0.5f)),
		this->color9
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient4($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.31107953f,
		0.62215906f,
		0.8110795f,
		1.0f
	}), $$new($ColorArray, {
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient5($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color16,
		$(decodeColor(this->color16, this->color17, 0.5f)),
		this->color17
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.5951705f,
		0.6505682f,
		0.8252841f,
		1.0f
	}), $$new($ColorArray, {
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19,
		$(decodeColor(this->color19, this->color19, 0.5f)),
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.50714284f * w) + x, (0.095f * h) + y, (0.49285713f * w) + x, (0.91f * h) + y, $$new($floats, {
		0.0f,
		0.24289773f,
		0.48579547f,
		0.74289775f,
		1.0f
	}), $$new($ColorArray, {
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient9($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.5951705f,
		0.6505682f,
		0.8252841f,
		1.0f
	}), $$new($ColorArray, {
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27,
		$(decodeColor(this->color27, this->color27, 0.5f)),
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient10($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.50714284f * w) + x, (0.095f * h) + y, (0.49285713f * w) + x, (0.91f * h) + y, $$new($floats, {
		0.0f,
		0.24289773f,
		0.48579547f,
		0.74289775f,
		1.0f
	}), $$new($ColorArray, {
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30,
		$(decodeColor(this->color30, this->color31, 0.5f)),
		this->color31
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient11($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.24868421f * w) + x, (0.0014705883f * h) + y, (0.24868421f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color32,
		$(decodeColor(this->color32, this->color33, 0.5f)),
		this->color33
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient12($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.5951705f,
		0.6505682f,
		0.8252841f,
		1.0f
	}), $$new($ColorArray, {
		this->color34,
		$(decodeColor(this->color34, this->color35, 0.5f)),
		this->color35,
		$(decodeColor(this->color35, this->color36, 0.5f)),
		this->color36,
		$(decodeColor(this->color36, this->color15, 0.5f)),
		this->color15
	}));
}

$Paint* InternalFrameTitlePaneMenuButtonPainter::decodeGradient13($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.50714284f * w) + x, (0.095f * h) + y, (0.49285713f * w) + x, (0.91f * h) + y, $$new($floats, {
		0.0f,
		0.24289773f,
		0.48579547f,
		0.74289775f,
		1.0f
	}), $$new($ColorArray, {
		this->color37,
		$(decodeColor(this->color37, this->color38, 0.5f)),
		this->color38,
		$(decodeColor(this->color38, this->color39, 0.5f)),
		this->color39
	}));
}

InternalFrameTitlePaneMenuButtonPainter::InternalFrameTitlePaneMenuButtonPainter() {
}

$Class* InternalFrameTitlePaneMenuButtonPainter::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneMenuButtonPainter, name, initialize, &_InternalFrameTitlePaneMenuButtonPainter_ClassInfo_, allocate$InternalFrameTitlePaneMenuButtonPainter);
	return class$;
}

$Class* InternalFrameTitlePaneMenuButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMaximizeButtonPainter.h>

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
#undef BACKGROUND_DISABLED_WINDOWMAXIMIZED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_WINDOWMAXIMIZED
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_WINDOWMAXIMIZED
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED

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

$FieldInfo _InternalFrameTitlePaneMaximizeButtonPainter_FieldInfo_[] = {
	{"BACKGROUND_DISABLED_WINDOWMAXIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_DISABLED_WINDOWMAXIMIZED)},
	{"BACKGROUND_ENABLED_WINDOWMAXIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_ENABLED_WINDOWMAXIMIZED)},
	{"BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED)},
	{"BACKGROUND_PRESSED_WINDOWMAXIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_PRESSED_WINDOWMAXIMIZED)},
	{"BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED)},
	{"BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED)},
	{"BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED)},
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_DISABLED)},
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_MOUSEOVER", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_MOUSEOVER)},
	{"BACKGROUND_PRESSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_PRESSED)},
	{"BACKGROUND_ENABLED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_ENABLED_WINDOWNOTFOCUSED)},
	{"BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED)},
	{"BACKGROUND_PRESSED_WINDOWNOTFOCUSED", "I", nullptr, $STATIC | $FINAL, $constField(InternalFrameTitlePaneMaximizeButtonPainter, BACKGROUND_PRESSED_WINDOWNOTFOCUSED)},
	{"state", "I", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color45)},
	{"color46", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color46)},
	{"color47", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color47)},
	{"color48", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color48)},
	{"color49", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color49)},
	{"color50", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color50)},
	{"color51", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color51)},
	{"color52", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color52)},
	{"color53", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color53)},
	{"color54", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color54)},
	{"color55", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color55)},
	{"color56", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color56)},
	{"color57", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color57)},
	{"color58", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color58)},
	{"color59", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color59)},
	{"color60", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color60)},
	{"color61", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color61)},
	{"color62", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color62)},
	{"color63", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color63)},
	{"color64", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color64)},
	{"color65", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color65)},
	{"color66", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color66)},
	{"color67", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color67)},
	{"color68", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color68)},
	{"color69", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color69)},
	{"color70", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color70)},
	{"color71", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color71)},
	{"color72", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, color72)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(InternalFrameTitlePaneMaximizeButtonPainter, componentColors)},
	{}
};

$MethodInfo _InternalFrameTitlePaneMaximizeButtonPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&InternalFrameTitlePaneMaximizeButtonPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient13))},
	{"decodeGradient14", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient14))},
	{"decodeGradient15", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient15))},
	{"decodeGradient16", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient16))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(InternalFrameTitlePaneMaximizeButtonPainter::*)($Shape*)>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodePath4))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect1))},
	{"decodeRect10", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect10))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect4))},
	{"decodeRect5", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect5))},
	{"decodeRect6", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect6))},
	{"decodeRect7", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect7))},
	{"decodeRect8", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect8))},
	{"decodeRect9", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRect9))},
	{"decodeRoundRect1", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRoundRect1))},
	{"decodeRoundRect2", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRoundRect2))},
	{"decodeRoundRect3", "()Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $method(static_cast<$RoundRectangle2D*(InternalFrameTitlePaneMaximizeButtonPainter::*)()>(&InternalFrameTitlePaneMaximizeButtonPainter::decodeRoundRect3))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundDisabled))},
	{"paintBackgroundDisabledAndWindowMaximized", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundDisabledAndWindowMaximized))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabled))},
	{"paintBackgroundEnabledAndWindowMaximized", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabledAndWindowMaximized))},
	{"paintBackgroundEnabledAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabledAndWindowNotFocused))},
	{"paintBackgroundEnabledAndWindowNotFocusedAndWindowMaximized", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabledAndWindowNotFocusedAndWindowMaximized))},
	{"paintBackgroundMouseOver", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOver))},
	{"paintBackgroundMouseOverAndWindowMaximized", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOverAndWindowMaximized))},
	{"paintBackgroundMouseOverAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOverAndWindowNotFocused))},
	{"paintBackgroundMouseOverAndWindowNotFocusedAndWindowMaximized", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOverAndWindowNotFocusedAndWindowMaximized))},
	{"paintBackgroundPressed", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressed))},
	{"paintBackgroundPressedAndWindowMaximized", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressedAndWindowMaximized))},
	{"paintBackgroundPressedAndWindowNotFocused", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressedAndWindowNotFocused))},
	{"paintBackgroundPressedAndWindowNotFocusedAndWindowMaximized", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(InternalFrameTitlePaneMaximizeButtonPainter::*)($Graphics2D*)>(&InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressedAndWindowNotFocusedAndWindowMaximized))},
	{}
};

$ClassInfo _InternalFrameTitlePaneMaximizeButtonPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_InternalFrameTitlePaneMaximizeButtonPainter_FieldInfo_,
	_InternalFrameTitlePaneMaximizeButtonPainter_MethodInfo_
};

$Object* allocate$InternalFrameTitlePaneMaximizeButtonPainter($Class* clazz) {
	return $of($alloc(InternalFrameTitlePaneMaximizeButtonPainter));
}

void InternalFrameTitlePaneMaximizeButtonPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusGreen"_s, 0.43362403f, -0.6792196f, 0.054901958f, 0));
	$set(this, color2, decodeColor("nimbusGreen"_s, 0.44056845f, -0.631913f, -0.039215684f, 0));
	$set(this, color3, decodeColor("nimbusGreen"_s, 0.44056845f, -0.67475206f, 0.06666666f, 0));
	$set(this, color4, $new($Color, 255, 200, 0, 255));
	$set(this, color5, decodeColor("nimbusGreen"_s, 0.4355179f, -0.6581704f, -0.011764705f, 0));
	$set(this, color6, decodeColor("nimbusGreen"_s, 0.44484192f, -0.644647f, -0.031372547f, 0));
	$set(this, color7, decodeColor("nimbusGreen"_s, 0.44484192f, -0.6480447f, 0.0f, 0));
	$set(this, color8, decodeColor("nimbusGreen"_s, 0.4366002f, -0.6368381f, -0.04705882f, 0));
	$set(this, color9, decodeColor("nimbusGreen"_s, 0.44484192f, -0.6423572f, -0.05098039f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.062449392f, 0.07058823f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, -0.008547008f, -0.04174325f, -0.0039215684f, -13));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.049920253f, 0.031372547f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, 0.0055555105f, -0.0029994324f, -0.38039216f, -185));
	$set(this, color14, decodeColor("nimbusGreen"_s, 0.1627907f, 0.2793296f, -0.6431373f, 0));
	$set(this, color15, decodeColor("nimbusGreen"_s, 0.025363803f, 0.2454313f, -0.2392157f, 0));
	$set(this, color16, decodeColor("nimbusGreen"_s, 0.02642706f, -0.3456704f, -0.011764705f, 0));
	$set(this, color17, decodeColor("nimbusGreen"_s, 0.025363803f, 0.2373128f, -0.23529413f, 0));
	$set(this, color18, decodeColor("nimbusGreen"_s, 0.025363803f, 0.0655365f, -0.13333333f, 0));
	$set(this, color19, decodeColor("nimbusGreen"_s, -0.0087068975f, -0.009330213f, -0.32156864f, 0));
	$set(this, color20, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -13));
	$set(this, color21, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -33));
	$set(this, color22, decodeColor("nimbusGreen"_s, 0.1627907f, 0.2793296f, -0.627451f, 0));
	$set(this, color23, decodeColor("nimbusGreen"_s, 0.04572721f, 0.2793296f, -0.37254903f, 0));
	$set(this, color24, decodeColor("nimbusGreen"_s, 0.009822637f, -0.34243205f, 0.054901958f, 0));
	$set(this, color25, decodeColor("nimbusGreen"_s, 0.010559708f, 0.13167858f, -0.11764705f, 0));
	$set(this, color26, decodeColor("nimbusGreen"_s, 0.010559708f, 0.12599629f, -0.11372548f, 0));
	$set(this, color27, decodeColor("nimbusGreen"_s, 0.010559708f, 9.2053413E-4f, -0.011764705f, 0));
	$set(this, color28, decodeColor("nimbusGreen"_s, 0.015249729f, 0.2793296f, -0.22352943f, -49));
	$set(this, color29, decodeColor("nimbusGreen"_s, 0.01279068f, 0.2793296f, -0.19215685f, 0));
	$set(this, color30, decodeColor("nimbusGreen"_s, 0.013319805f, 0.2793296f, -0.20784315f, 0));
	$set(this, color31, decodeColor("nimbusGreen"_s, 0.009604409f, 0.2793296f, -0.16862744f, 0));
	$set(this, color32, decodeColor("nimbusGreen"_s, 0.011600211f, 0.2793296f, -0.15294117f, 0));
	$set(this, color33, decodeColor("nimbusGreen"_s, 0.011939123f, 0.2793296f, -0.16470587f, 0));
	$set(this, color34, decodeColor("nimbusGreen"_s, 0.009506017f, 0.257901f, -0.15294117f, 0));
	$set(this, color35, decodeColor("nimbusGreen"_s, -0.17054264f, -0.7206704f, -0.7019608f, 0));
	$set(this, color36, decodeColor("nimbusGreen"_s, 0.07804492f, 0.2793296f, -0.47058827f, 0));
	$set(this, color37, decodeColor("nimbusGreen"_s, 0.03592503f, -0.23865601f, -0.15686274f, 0));
	$set(this, color38, decodeColor("nimbusGreen"_s, 0.035979107f, 0.23766291f, -0.3254902f, 0));
	$set(this, color39, decodeColor("nimbusGreen"_s, 0.03690417f, 0.2793296f, -0.33333334f, 0));
	$set(this, color40, decodeColor("nimbusGreen"_s, 0.09681849f, 0.2793296f, -0.5137255f, 0));
	$set(this, color41, decodeColor("nimbusGreen"_s, 0.06535478f, 0.2793296f, -0.44705883f, 0));
	$set(this, color42, decodeColor("nimbusGreen"_s, 0.0675526f, 0.2793296f, -0.454902f, 0));
	$set(this, color43, decodeColor("nimbusGreen"_s, 0.060800627f, 0.2793296f, -0.4392157f, 0));
	$set(this, color44, decodeColor("nimbusGreen"_s, 0.06419912f, 0.2793296f, -0.42352942f, 0));
	$set(this, color45, decodeColor("nimbusGreen"_s, 0.06375685f, 0.2793296f, -0.43137255f, 0));
	$set(this, color46, decodeColor("nimbusGreen"_s, 0.048207358f, 0.2793296f, -0.3882353f, 0));
	$set(this, color47, decodeColor("nimbusGreen"_s, 0.057156876f, 0.2793296f, -0.42352942f, 0));
	$set(this, color48, decodeColor("nimbusGreen"_s, 0.44056845f, -0.62133265f, -0.109803915f, 0));
	$set(this, color49, decodeColor("nimbusGreen"_s, 0.44056845f, -0.5843068f, -0.27058825f, 0));
	$set(this, color50, decodeColor("nimbusGreen"_s, 0.4294573f, -0.698349f, 0.17647058f, 0));
	$set(this, color51, decodeColor("nimbusGreen"_s, 0.45066953f, -0.665394f, 0.07843137f, 0));
	$set(this, color52, decodeColor("nimbusGreen"_s, 0.44056845f, -0.65913194f, 0.062745094f, 0));
	$set(this, color53, decodeColor("nimbusGreen"_s, 0.44056845f, -0.6609689f, 0.086274505f, 0));
	$set(this, color54, decodeColor("nimbusGreen"_s, 0.44056845f, -0.6578432f, 0.04705882f, 0));
	$set(this, color55, decodeColor("nimbusGreen"_s, 0.4355179f, -0.6633787f, 0.05098039f, 0));
	$set(this, color56, decodeColor("nimbusGreen"_s, 0.4355179f, -0.664548f, 0.06666666f, 0));
	$set(this, color57, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.029445238f, -0.30980393f, -13));
	$set(this, color58, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.027957506f, -0.31764707f, -33));
	$set(this, color59, decodeColor("nimbusGreen"_s, 0.43202144f, -0.64722407f, -0.007843137f, 0));
	$set(this, color60, decodeColor("nimbusGreen"_s, 0.44056845f, -0.6339652f, -0.02352941f, 0));
	$set(this, color61, $new($Color, 165, 169, 176, 255));
	$set(this, color62, decodeColor("nimbusBlueGrey"_s, -0.00505054f, -0.057128258f, 0.062745094f, 0));
	$set(this, color63, decodeColor("nimbusBlueGrey"_s, -0.003968239f, -0.035257496f, -0.015686274f, 0));
	$set(this, color64, $new($Color, 64, 88, 0, 255));
	$set(this, color65, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color66, decodeColor("nimbusBlueGrey"_s, 0.004830897f, -0.00920473f, 0.14509803f, -101));
	$set(this, color67, decodeColor("nimbusGreen"_s, 0.009564877f, 0.100521624f, -0.109803915f, 0));
	$set(this, color68, $new($Color, 113, 125, 0, 255));
	$set(this, color69, decodeColor("nimbusBlueGrey"_s, 0.0025252104f, -0.0067527294f, 0.086274505f, -65));
	$set(this, color70, decodeColor("nimbusGreen"_s, 0.03129223f, 0.2793296f, -0.27450982f, 0));
	$set(this, color71, $new($Color, 19, 48, 0, 255));
	$set(this, color72, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.029445238f, -0.30980393f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void InternalFrameTitlePaneMaximizeButtonPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_DISABLED_WINDOWMAXIMIZED:
		{
			paintBackgroundDisabledAndWindowMaximized(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED_WINDOWMAXIMIZED:
		{
			paintBackgroundEnabledAndWindowMaximized(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED:
		{
			paintBackgroundMouseOverAndWindowMaximized(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED_WINDOWMAXIMIZED:
		{
			paintBackgroundPressedAndWindowMaximized(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED:
		{
			paintBackgroundEnabledAndWindowNotFocusedAndWindowMaximized(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED:
		{
			paintBackgroundMouseOverAndWindowNotFocusedAndWindowMaximized(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED:
		{
			paintBackgroundPressedAndWindowNotFocusedAndWindowMaximized(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER:
		{
			paintBackgroundMouseOver(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED:
		{
			paintBackgroundPressed(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED:
		{
			paintBackgroundEnabledAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED:
		{
			paintBackgroundMouseOverAndWindowNotFocused(g);
			break;
		}
	case InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED:
		{
			paintBackgroundPressedAndWindowNotFocused(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* InternalFrameTitlePaneMaximizeButtonPainter::getPaintContext() {
	return this->ctx;
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundDisabledAndWindowMaximized($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient2(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color5);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color6);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color6);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color7);
	g->fill(this->rect);
	$set(this, rect, decodeRect6());
	g->setPaint(this->color8);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color9);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color7);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color12);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabledAndWindowMaximized($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color13);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, rect, decodeRect9());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color19);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color20);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color21);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOverAndWindowMaximized($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color13);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color28);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color29);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color30);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color31);
	g->fill(this->rect);
	$set(this, rect, decodeRect9());
	g->setPaint(this->color32);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color33);
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color34);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color31);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color20);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color21);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressedAndWindowMaximized($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color13);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color40);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color41);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color42);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color43);
	g->fill(this->rect);
	$set(this, rect, decodeRect6());
	g->setPaint(this->color44);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color45);
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color46);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color47);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color20);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color21);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabledAndWindowNotFocusedAndWindowMaximized($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient11(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color54);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color55);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color56);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color57);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color58);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOverAndWindowNotFocusedAndWindowMaximized($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color13);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient7(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color28);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color29);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color30);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color31);
	g->fill(this->rect);
	$set(this, rect, decodeRect9());
	g->setPaint(this->color32);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color33);
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color34);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color31);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color20);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color21);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressedAndWindowNotFocusedAndWindowMaximized($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color13);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient9(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color40);
	g->fill(this->rect);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color41);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color42);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color43);
	g->fill(this->rect);
	$set(this, rect, decodeRect6());
	g->setPaint(this->color44);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color45);
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color46);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color47);
	g->fill(this->rect);
	$set(this, path, decodePath1());
	g->setPaint(this->color20);
	g->fill(this->path);
	$set(this, path, decodePath2());
	g->setPaint(this->color21);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient1(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient12(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath3());
	g->setPaint(this->color61);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint($(decodeGradient13(this->path)));
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color13);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient4(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient5(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath3());
	g->setPaint(this->color64);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color65);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOver($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color66);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient14(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath3());
	g->setPaint(this->color68);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color65);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressed($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color69);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient15(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath3());
	g->setPaint(this->color71);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color65);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundEnabledAndWindowNotFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect1());
	$nc(g)->setPaint($(decodeGradient10(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient16(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath4());
	g->setPaint(this->color72);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundMouseOverAndWindowNotFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color66);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient6(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient14(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath3());
	g->setPaint(this->color68);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color65);
	g->fill(this->path);
}

void InternalFrameTitlePaneMaximizeButtonPainter::paintBackgroundPressedAndWindowNotFocused($Graphics2D* g) {
	$set(this, roundRect, decodeRoundRect3());
	$nc(g)->setPaint(this->color69);
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect1());
	g->setPaint($(decodeGradient8(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, roundRect, decodeRoundRect2());
	g->setPaint($(decodeGradient15(this->roundRect)));
	g->fill(this->roundRect);
	$set(this, rect, decodeRect1());
	g->setPaint(this->color4);
	g->fill(this->rect);
	$set(this, path, decodePath3());
	g->setPaint(this->color71);
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color65);
	g->fill(this->path);
}

$RoundRectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRoundRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.9444444f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0f), 8.6f, 8.6f);
	return this->roundRect;
}

$RoundRectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRoundRect2() {
	double var$0 = (double)decodeX(1.0526316f);
	double var$1 = (double)decodeY(1.0555556f);
	float var$3 = decodeX(1.9473684f);
	double var$2 = (double)(var$3 - decodeX(1.0526316f));
	float var$4 = decodeY(1.8888888f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.0555556f), 6.75f, 6.75f);
	return this->roundRect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect2() {
	double var$0 = (double)decodeX(1.2165072f);
	double var$1 = (double)decodeY(1.2790405f);
	float var$3 = decodeX(1.6746411f);
	double var$2 = (double)(var$3 - decodeX(1.2165072f));
	float var$4 = decodeY(1.3876263f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.2790405f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect3() {
	double var$0 = (double)decodeX(1.2212919f);
	double var$1 = (double)decodeY(1.6047981f);
	float var$3 = decodeX(1.270335f);
	double var$2 = (double)(var$3 - decodeX(1.2212919f));
	float var$4 = decodeY(1.3876263f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6047981f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect4() {
	double var$0 = (double)decodeX(1.2643541f);
	double var$1 = (double)decodeY(1.5542929f);
	float var$3 = decodeX(1.6315789f);
	double var$2 = (double)(var$3 - decodeX(1.2643541f));
	float var$4 = decodeY(1.5997474f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.5542929f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect5() {
	double var$0 = (double)decodeX(1.6267943f);
	double var$1 = (double)decodeY(1.3888888f);
	float var$3 = decodeX(1.673445f);
	double var$2 = (double)(var$3 - decodeX(1.6267943f));
	float var$4 = decodeY(1.6085858f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.3888888f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect6() {
	double var$0 = (double)decodeX(1.3684211f);
	double var$1 = (double)decodeY(1.6111112f);
	float var$3 = decodeX(1.4210527f);
	double var$2 = (double)(var$3 - decodeX(1.3684211f));
	float var$4 = decodeY(1.7777778f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6111112f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect7() {
	double var$0 = (double)decodeX(1.4389952f);
	double var$1 = (double)decodeY(1.7209597f);
	float var$3 = decodeX(1.7882775f);
	double var$2 = (double)(var$3 - decodeX(1.4389952f));
	float var$4 = decodeY(1.7765152f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.7209597f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect8() {
	double var$0 = (double)decodeX(1.5645933f);
	double var$1 = (double)decodeY(1.4078283f);
	float var$3 = decodeX(1.7870812f);
	double var$2 = (double)(var$3 - decodeX(1.5645933f));
	float var$4 = decodeY(1.5239899f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.4078283f));
	return this->rect;
}

$Path2D* InternalFrameTitlePaneMaximizeButtonPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.2105263f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2222222f));
	double var$1 = (double)decodeX(1.6315789f);
	$nc(this->path)->lineTo(var$1, decodeY(1.2222222f));
	double var$2 = (double)decodeX(1.6315789f);
	$nc(this->path)->lineTo(var$2, decodeY(1.5555556f));
	double var$3 = (double)decodeX(1.2105263f);
	$nc(this->path)->lineTo(var$3, decodeY(1.5555556f));
	double var$4 = (double)decodeX(1.2105263f);
	$nc(this->path)->lineTo(var$4, decodeY(1.3333334f));
	double var$5 = (double)decodeX(1.2631578f);
	$nc(this->path)->lineTo(var$5, decodeY(1.3333334f));
	double var$6 = (double)decodeX(1.2631578f);
	$nc(this->path)->lineTo(var$6, decodeY(1.5f));
	double var$7 = (double)decodeX(1.5789473f);
	$nc(this->path)->lineTo(var$7, decodeY(1.5f));
	double var$8 = (double)decodeX(1.5789473f);
	$nc(this->path)->lineTo(var$8, decodeY(1.3333334f));
	double var$9 = (double)decodeX(1.2105263f);
	$nc(this->path)->lineTo(var$9, decodeY(1.3333334f));
	double var$10 = (double)decodeX(1.2105263f);
	$nc(this->path)->lineTo(var$10, decodeY(1.2222222f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFrameTitlePaneMaximizeButtonPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.6842105f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3888888f));
	double var$1 = (double)decodeX(1.6842105f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5f));
	double var$2 = (double)decodeX(1.7368422f);
	$nc(this->path)->lineTo(var$2, decodeY(1.5f));
	double var$3 = (double)decodeX(1.7368422f);
	$nc(this->path)->lineTo(var$3, decodeY(1.6666667f));
	double var$4 = (double)decodeX(1.4210527f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6666667f));
	double var$5 = (double)decodeX(1.4210527f);
	$nc(this->path)->lineTo(var$5, decodeY(1.6111112f));
	double var$6 = (double)decodeX(1.3684211f);
	$nc(this->path)->lineTo(var$6, decodeY(1.6111112f));
	double var$7 = (double)decodeX(1.3684211f);
	$nc(this->path)->lineTo(var$7, decodeY(1.7222222f));
	double var$8 = (double)decodeX(1.7894738f);
	$nc(this->path)->lineTo(var$8, decodeY(1.7222222f));
	double var$9 = (double)decodeX(1.7894738f);
	$nc(this->path)->lineTo(var$9, decodeY(1.3888888f));
	double var$10 = (double)decodeX(1.6842105f);
	$nc(this->path)->lineTo(var$10, decodeY(1.3888888f));
	$nc(this->path)->closePath();
	return this->path;
}

$RoundRectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRoundRect3() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.6111112f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->roundRect)->setRoundRect(var$0, var$1, var$2, var$4 - decodeY(1.6111112f), 6.0f, 6.0f);
	return this->roundRect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect9() {
	double var$0 = (double)decodeX(1.3815789f);
	double var$1 = (double)decodeY(1.6111112f);
	float var$3 = decodeX(1.4366028f);
	double var$2 = (double)(var$3 - decodeX(1.3815789f));
	float var$4 = decodeY(1.7739899f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6111112f));
	return this->rect;
}

$Rectangle2D* InternalFrameTitlePaneMaximizeButtonPainter::decodeRect10() {
	double var$0 = (double)decodeX(1.7918661f);
	double var$1 = (double)decodeY(1.7752526f);
	float var$3 = decodeX(1.8349283f);
	double var$2 = (double)(var$3 - decodeX(1.7918661f));
	float var$4 = decodeY(1.4217172f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.7752526f));
	return this->rect;
}

$Path2D* InternalFrameTitlePaneMaximizeButtonPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.1913875f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2916666f));
	double var$1 = (double)decodeX(1.1925838f);
	$nc(this->path)->lineTo(var$1, decodeY(1.7462121f));
	double var$2 = (double)decodeX(1.8157895f);
	$nc(this->path)->lineTo(var$2, decodeY(1.7449496f));
	double var$3 = (double)decodeX(1.819378f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2916666f));
	double var$4 = (double)decodeX(1.722488f);
	$nc(this->path)->lineTo(var$4, decodeY(1.2916666f));
	double var$5 = (double)decodeX(1.7320573f);
	$nc(this->path)->lineTo(var$5, decodeY(1.669192f));
	double var$6 = (double)decodeX(1.2799044f);
	$nc(this->path)->lineTo(var$6, decodeY(1.6565657f));
	double var$7 = (double)decodeX(1.284689f);
	$nc(this->path)->lineTo(var$7, decodeY(1.3863636f));
	double var$8 = (double)decodeX(1.7260766f);
	$nc(this->path)->lineTo(var$8, decodeY(1.385101f));
	double var$9 = (double)decodeX(1.722488f);
	$nc(this->path)->lineTo(var$9, decodeY(1.2904041f));
	double var$10 = (double)decodeX(1.1913875f);
	$nc(this->path)->lineTo(var$10, decodeY(1.2916666f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* InternalFrameTitlePaneMaximizeButtonPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.2105263f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2222222f));
	double var$1 = (double)decodeX(1.2105263f);
	$nc(this->path)->lineTo(var$1, decodeY(1.7222222f));
	double var$2 = (double)decodeX(1.7894738f);
	$nc(this->path)->lineTo(var$2, decodeY(1.7222222f));
	double var$3 = (double)decodeX(1.7894738f);
	$nc(this->path)->lineTo(var$3, decodeY(1.3333334f));
	double var$4 = (double)decodeX(1.7368422f);
	$nc(this->path)->lineTo(var$4, decodeY(1.3333334f));
	double var$5 = (double)decodeX(1.7368422f);
	$nc(this->path)->lineTo(var$5, decodeY(1.6666667f));
	double var$6 = (double)decodeX(1.2631578f);
	$nc(this->path)->lineTo(var$6, decodeY(1.6666667f));
	double var$7 = (double)decodeX(1.2631578f);
	$nc(this->path)->lineTo(var$7, decodeY(1.3333334f));
	double var$8 = (double)decodeX(1.7894738f);
	$nc(this->path)->lineTo(var$8, decodeY(1.3333334f));
	double var$9 = (double)decodeX(1.7894738f);
	$nc(this->path)->lineTo(var$9, decodeY(1.2222222f));
	double var$10 = (double)decodeX(1.2105263f);
	$nc(this->path)->lineTo(var$10, decodeY(1.2222222f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient1($Shape* s) {
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
		this->color1,
		$(decodeColor(this->color1, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient3($Shape* s) {
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

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient4($Shape* s) {
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
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient5($Shape* s) {
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
		this->color16,
		$(decodeColor(this->color16, this->color15, 0.5f)),
		this->color15,
		$(decodeColor(this->color15, this->color17, 0.5f)),
		this->color17,
		$(decodeColor(this->color17, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient6($Shape* s) {
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
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient7($Shape* s) {
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
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient8($Shape* s) {
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
		this->color35,
		$(decodeColor(this->color35, this->color36, 0.5f)),
		this->color36
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient9($Shape* s) {
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
		this->color37,
		$(decodeColor(this->color37, this->color38, 0.5f)),
		this->color38,
		$(decodeColor(this->color38, this->color39, 0.5f)),
		this->color39,
		$(decodeColor(this->color39, this->color18, 0.5f)),
		this->color18
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient10($Shape* s) {
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
		this->color48,
		$(decodeColor(this->color48, this->color49, 0.5f)),
		this->color49
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient11($Shape* s) {
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
		this->color50,
		$(decodeColor(this->color50, this->color51, 0.5f)),
		this->color51,
		$(decodeColor(this->color51, this->color52, 0.5f)),
		this->color52,
		$(decodeColor(this->color52, this->color53, 0.5f)),
		this->color53
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient12($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.6082097f,
		0.6766467f,
		0.83832335f,
		1.0f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color59, 0.5f)),
		this->color59,
		$(decodeColor(this->color59, this->color60, 0.5f)),
		this->color60,
		$(decodeColor(this->color60, this->color2, 0.5f)),
		this->color2
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient13($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.26047903f,
		0.6302395f,
		1.0f
	}), $$new($ColorArray, {
		this->color62,
		$(decodeColor(this->color62, this->color63, 0.5f)),
		this->color63
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient14($Shape* s) {
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
		this->color24,
		$(decodeColor(this->color24, this->color67, 0.5f)),
		this->color67,
		$(decodeColor(this->color67, this->color25, 0.5f)),
		this->color25,
		$(decodeColor(this->color25, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient15($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.66659296f,
		0.79341316f,
		0.8967066f,
		1.0f
	}), $$new($ColorArray, {
		this->color37,
		$(decodeColor(this->color37, this->color38, 0.5f)),
		this->color38,
		$(decodeColor(this->color38, this->color39, 0.5f)),
		this->color39,
		$(decodeColor(this->color39, this->color70, 0.5f)),
		this->color70
	}));
}

$Paint* InternalFrameTitlePaneMaximizeButtonPainter::decodeGradient16($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.25441176f * w) + x, (1.0016667f * h) + y, $$new($floats, {
		0.0f,
		0.26988637f,
		0.53977275f,
		0.6291678f,
		0.7185629f,
		0.8592814f,
		1.0f
	}), $$new($ColorArray, {
		this->color50,
		$(decodeColor(this->color50, this->color52, 0.5f)),
		this->color52,
		$(decodeColor(this->color52, this->color52, 0.5f)),
		this->color52,
		$(decodeColor(this->color52, this->color53, 0.5f)),
		this->color53
	}));
}

InternalFrameTitlePaneMaximizeButtonPainter::InternalFrameTitlePaneMaximizeButtonPainter() {
}

$Class* InternalFrameTitlePaneMaximizeButtonPainter::load$($String* name, bool initialize) {
	$loadClass(InternalFrameTitlePaneMaximizeButtonPainter, name, initialize, &_InternalFrameTitlePaneMaximizeButtonPainter_ClassInfo_, allocate$InternalFrameTitlePaneMaximizeButtonPainter);
	return class$;
}

$Class* InternalFrameTitlePaneMaximizeButtonPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
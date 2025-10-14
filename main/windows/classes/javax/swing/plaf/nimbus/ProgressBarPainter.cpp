#include <javax/swing/plaf/nimbus/ProgressBarPainter.h>

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
#undef FOREGROUND_DISABLED
#undef FOREGROUND_DISABLED_FINISHED
#undef FOREGROUND_DISABLED_INDETERMINATE
#undef FOREGROUND_ENABLED
#undef FOREGROUND_ENABLED_FINISHED
#undef FOREGROUND_ENABLED_INDETERMINATE

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

$FieldInfo _ProgressBarPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, BACKGROUND_ENABLED)},
	{"BACKGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, BACKGROUND_DISABLED)},
	{"FOREGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, FOREGROUND_ENABLED)},
	{"FOREGROUND_ENABLED_FINISHED", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, FOREGROUND_ENABLED_FINISHED)},
	{"FOREGROUND_ENABLED_INDETERMINATE", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, FOREGROUND_ENABLED_INDETERMINATE)},
	{"FOREGROUND_DISABLED", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, FOREGROUND_DISABLED)},
	{"FOREGROUND_DISABLED_FINISHED", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, FOREGROUND_DISABLED_FINISHED)},
	{"FOREGROUND_DISABLED_INDETERMINATE", "I", nullptr, $STATIC | $FINAL, $constField(ProgressBarPainter, FOREGROUND_DISABLED_INDETERMINATE)},
	{"state", "I", nullptr, $PRIVATE, $field(ProgressBarPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(ProgressBarPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(ProgressBarPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(ProgressBarPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(ProgressBarPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(ProgressBarPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color45)},
	{"color46", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color46)},
	{"color47", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color47)},
	{"color48", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color48)},
	{"color49", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color49)},
	{"color50", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(ProgressBarPainter, color50)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(ProgressBarPainter, componentColors)},
	{}
};

$MethodInfo _ProgressBarPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(ProgressBarPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&ProgressBarPainter::init$))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient12))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient2))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient3))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(ProgressBarPainter::*)($Shape*)>(&ProgressBarPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodePath1))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodePath2))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodePath3))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodePath5))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect1))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect2))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect3))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect4))},
	{"decodeRect5", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect5))},
	{"decodeRect6", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect6))},
	{"decodeRect7", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect7))},
	{"decodeRect8", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect8))},
	{"decodeRect9", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(ProgressBarPainter::*)()>(&ProgressBarPainter::decodeRect9))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintBackgroundDisabled))},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintBackgroundEnabled))},
	{"paintForegroundDisabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintForegroundDisabled))},
	{"paintForegroundDisabledAndFinished", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintForegroundDisabledAndFinished))},
	{"paintForegroundDisabledAndIndeterminate", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintForegroundDisabledAndIndeterminate))},
	{"paintForegroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintForegroundEnabled))},
	{"paintForegroundEnabledAndFinished", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintForegroundEnabledAndFinished))},
	{"paintForegroundEnabledAndIndeterminate", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(ProgressBarPainter::*)($Graphics2D*)>(&ProgressBarPainter::paintForegroundEnabledAndIndeterminate))},
	{}
};

$ClassInfo _ProgressBarPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.ProgressBarPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_ProgressBarPainter_FieldInfo_,
	_ProgressBarPainter_MethodInfo_
};

$Object* allocate$ProgressBarPainter($Class* clazz) {
	return $of($alloc(ProgressBarPainter));
}

void ProgressBarPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.04845735f, -0.17647058f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.061345987f, -0.027450979f, 0));
	$set(this, color3, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.097921275f, 0.18823528f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.0138888955f, -0.0925083f, 0.12549019f, 0));
	$set(this, color6, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08222443f, 0.086274505f, 0));
	$set(this, color7, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08477524f, 0.16862744f, 0));
	$set(this, color8, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.086996906f, 0.25490195f, 0));
	$set(this, color9, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.061613273f, -0.02352941f, 0));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, -0.01111114f, -0.061265234f, 0.05098039f, 0));
	$set(this, color11, decodeColor("nimbusBlueGrey"_s, 0.0138888955f, -0.09378991f, 0.19215685f, 0));
	$set(this, color12, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.08455229f, 0.1607843f, 0));
	$set(this, color13, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.08362049f, 0.12941176f, 0));
	$set(this, color14, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07826825f, 0.10588235f, 0));
	$set(this, color15, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07982456f, 0.1490196f, 0));
	$set(this, color16, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.08099045f, 0.18431371f, 0));
	$set(this, color17, decodeColor("nimbusOrange"_s, 0.0f, 0.0f, 0.0f, -156));
	$set(this, color18, decodeColor("nimbusOrange"_s, -0.015796512f, 0.02094239f, -0.15294117f, 0));
	$set(this, color19, decodeColor("nimbusOrange"_s, -0.004321605f, 0.02094239f, -0.0745098f, 0));
	$set(this, color20, decodeColor("nimbusOrange"_s, -0.008021399f, 0.02094239f, -0.10196078f, 0));
	$set(this, color21, decodeColor("nimbusOrange"_s, -0.011706904f, -0.1790576f, -0.02352941f, 0));
	$set(this, color22, decodeColor("nimbusOrange"_s, -0.048691254f, 0.02094239f, -0.3019608f, 0));
	$set(this, color23, decodeColor("nimbusOrange"_s, 0.003940329f, -0.7375322f, 0.17647058f, 0));
	$set(this, color24, decodeColor("nimbusOrange"_s, 0.005506739f, -0.46764207f, 0.109803915f, 0));
	$set(this, color25, decodeColor("nimbusOrange"_s, 0.0042127445f, -0.18595415f, 0.04705882f, 0));
	$set(this, color26, decodeColor("nimbusOrange"_s, 0.0047626942f, 0.02094239f, 0.0039215684f, 0));
	$set(this, color27, decodeColor("nimbusOrange"_s, 0.0047626942f, -0.15147138f, 0.1607843f, 0));
	$set(this, color28, decodeColor("nimbusOrange"_s, 0.010665476f, -0.27317524f, 0.25098038f, 0));
	$set(this, color29, decodeColor("nimbusBlueGrey"_s, -0.54444444f, -0.08748484f, 0.10588235f, 0));
	$set(this, color30, decodeColor("nimbusOrange"_s, 0.0047626942f, -0.21715283f, 0.23921567f, 0));
	$set(this, color31, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -173));
	$set(this, color32, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -170));
	$set(this, color33, decodeColor("nimbusOrange"_s, 0.024554357f, -0.8873145f, 0.10588235f, -156));
	$set(this, color34, decodeColor("nimbusOrange"_s, -0.023593787f, -0.7963165f, 0.02352941f, 0));
	$set(this, color35, decodeColor("nimbusOrange"_s, -0.010608241f, -0.7760873f, 0.043137252f, 0));
	$set(this, color36, decodeColor("nimbusOrange"_s, -0.015402906f, -0.7840576f, 0.035294116f, 0));
	$set(this, color37, decodeColor("nimbusOrange"_s, -0.017112307f, -0.8091547f, 0.058823526f, 0));
	$set(this, color38, decodeColor("nimbusOrange"_s, -0.07044564f, -0.844649f, -0.019607842f, 0));
	$set(this, color39, decodeColor("nimbusOrange"_s, -0.009704903f, -0.9381485f, 0.11372548f, 0));
	$set(this, color40, decodeColor("nimbusOrange"_s, -4.4563413E-4f, -0.86742973f, 0.09411764f, 0));
	$set(this, color41, decodeColor("nimbusOrange"_s, -4.4563413E-4f, -0.79896283f, 0.07843137f, 0));
	$set(this, color42, decodeColor("nimbusOrange"_s, 0.0013274103f, -0.7530961f, 0.06666666f, 0));
	$set(this, color43, decodeColor("nimbusOrange"_s, 0.0013274103f, -0.7644457f, 0.109803915f, 0));
	$set(this, color44, decodeColor("nimbusOrange"_s, 0.009244293f, -0.78794646f, 0.13333333f, 0));
	$set(this, color45, decodeColor("nimbusBlueGrey"_s, -0.015872955f, -0.0803539f, 0.16470587f, 0));
	$set(this, color46, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.07968931f, 0.14509803f, 0));
	$set(this, color47, decodeColor("nimbusBlueGrey"_s, 0.02222228f, -0.08779904f, 0.11764705f, 0));
	$set(this, color48, decodeColor("nimbusBlueGrey"_s, 0.0138888955f, -0.075128086f, 0.14117646f, 0));
	$set(this, color49, decodeColor("nimbusBlueGrey"_s, 0.0138888955f, -0.07604356f, 0.16470587f, 0));
	$set(this, color50, decodeColor("nimbusOrange"_s, 0.0014062226f, -0.77816474f, 0.12941176f, 0));
	this->state = state;
	$set(this, ctx, ctx);
}

void ProgressBarPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case ProgressBarPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case ProgressBarPainter::BACKGROUND_DISABLED:
		{
			paintBackgroundDisabled(g);
			break;
		}
	case ProgressBarPainter::FOREGROUND_ENABLED:
		{
			paintForegroundEnabled(g);
			break;
		}
	case ProgressBarPainter::FOREGROUND_ENABLED_FINISHED:
		{
			paintForegroundEnabledAndFinished(g);
			break;
		}
	case ProgressBarPainter::FOREGROUND_ENABLED_INDETERMINATE:
		{
			paintForegroundEnabledAndIndeterminate(g);
			break;
		}
	case ProgressBarPainter::FOREGROUND_DISABLED:
		{
			paintForegroundDisabled(g);
			break;
		}
	case ProgressBarPainter::FOREGROUND_DISABLED_FINISHED:
		{
			paintForegroundDisabledAndFinished(g);
			break;
		}
	case ProgressBarPainter::FOREGROUND_DISABLED_INDETERMINATE:
		{
			paintForegroundDisabledAndIndeterminate(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* ProgressBarPainter::getPaintContext() {
	return this->ctx;
}

void ProgressBarPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint($(decodeGradient1(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient2(this->rect)));
	g->fill(this->rect);
}

void ProgressBarPainter::paintBackgroundDisabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint($(decodeGradient3(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect2());
	g->setPaint($(decodeGradient4(this->rect)));
	g->fill(this->rect);
}

void ProgressBarPainter::paintForegroundEnabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color17);
	g->fill(this->path);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient5(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint($(decodeGradient6(this->rect)));
	g->fill(this->rect);
}

void ProgressBarPainter::paintForegroundEnabledAndFinished($Graphics2D* g) {
	$set(this, path, decodePath2());
	$nc(g)->setPaint(this->color17);
	g->fill(this->path);
	$set(this, rect, decodeRect5());
	g->setPaint($(decodeGradient5(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect6());
	g->setPaint($(decodeGradient6(this->rect)));
	g->fill(this->rect);
}

void ProgressBarPainter::paintForegroundEnabledAndIndeterminate($Graphics2D* g) {
	$set(this, rect, decodeRect7());
	$nc(g)->setPaint($(decodeGradient7(this->rect)));
	g->fill(this->rect);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect8());
	g->setPaint(this->color31);
	g->fill(this->rect);
	$set(this, rect, decodeRect9());
	g->setPaint(this->color32);
	g->fill(this->rect);
}

void ProgressBarPainter::paintForegroundDisabled($Graphics2D* g) {
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color33);
	g->fill(this->path);
	$set(this, rect, decodeRect3());
	g->setPaint($(decodeGradient9(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint($(decodeGradient10(this->rect)));
	g->fill(this->rect);
}

void ProgressBarPainter::paintForegroundDisabledAndFinished($Graphics2D* g) {
	$set(this, path, decodePath4());
	$nc(g)->setPaint(this->color33);
	g->fill(this->path);
	$set(this, rect, decodeRect5());
	g->setPaint($(decodeGradient9(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect6());
	g->setPaint($(decodeGradient10(this->rect)));
	g->fill(this->rect);
}

void ProgressBarPainter::paintForegroundDisabledAndIndeterminate($Graphics2D* g) {
	$set(this, rect, decodeRect7());
	$nc(g)->setPaint($(decodeGradient11(this->rect)));
	g->fill(this->rect);
	$set(this, path, decodePath5());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

$Rectangle2D* ProgressBarPainter::decodeRect1() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.4f));
	return this->rect;
}

$Rectangle2D* ProgressBarPainter::decodeRect2() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.4f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Path2D* ProgressBarPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.21111111f));
	double var$1 = (double)decodeAnchorX(1.0f, -2.0f);
	double var$2 = (double)decodeAnchorY(0.21111111f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.21111111f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.0f, -2.0f);
	double var$5 = (double)decodeX(0.21111111f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.0f));
	double var$6 = (double)decodeAnchorX(0.21111111f, 0.0f);
	double var$7 = (double)decodeAnchorY(1.0f, 2.0f);
	double var$8 = (double)decodeAnchorX(0.21111111f, 0.0f);
	double var$9 = (double)decodeAnchorY(2.0f, -2.0f);
	double var$10 = (double)decodeX(0.21111111f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(2.0f));
	double var$11 = (double)decodeAnchorX(0.21111111f, 0.0f);
	double var$12 = (double)decodeAnchorY(2.0f, 2.0f);
	double var$13 = (double)decodeAnchorX(1.0f, -2.0f);
	double var$14 = (double)decodeAnchorY(2.8222225f, 0.0f);
	double var$15 = (double)decodeX(1.0f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(2.8222225f));
	double var$16 = (double)decodeAnchorX(1.0f, 2.0f);
	double var$17 = (double)decodeAnchorY(2.8222225f, 0.0f);
	double var$18 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$19 = (double)decodeAnchorY(2.8222225f, 0.0f);
	double var$20 = (double)decodeX(3.0f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(2.8222225f));
	double var$21 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$21, decodeY(2.3333333f));
	double var$22 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$22, decodeY(2.3333333f));
	double var$23 = (double)decodeX(0.6666667f);
	$nc(this->path)->lineTo(var$23, decodeY(0.6666667f));
	double var$24 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$24, decodeY(0.6666667f));
	double var$25 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$25, decodeY(0.2f));
	double var$26 = (double)decodeAnchorX(3.0f, 0.0f);
	double var$27 = (double)decodeAnchorY(0.2f, 0.0f);
	double var$28 = (double)decodeAnchorX(1.0f, 2.0f);
	double var$29 = (double)decodeAnchorY(0.21111111f, 0.0f);
	double var$30 = (double)decodeX(1.0f);
	$nc(this->path)->curveTo(var$26, var$27, var$28, var$29, var$30, decodeY(0.21111111f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* ProgressBarPainter::decodeRect3() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(0.6666667f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(2.3333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6666667f));
	return this->rect;
}

$Rectangle2D* ProgressBarPainter::decodeRect4() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.6666667f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Path2D* ProgressBarPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.9111111f);
	$nc(this->path)->moveTo(var$0, decodeY(0.21111111f));
	double var$1 = (double)decodeAnchorX(0.9111111f, -2.0f);
	double var$2 = (double)decodeAnchorY(0.21111111f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.2f, 0.0f);
	double var$4 = (double)decodeAnchorY(1.0025641f, -2.0f);
	double var$5 = (double)decodeX(0.2f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(1.0025641f));
	double var$6 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$6, decodeY(2.0444443f));
	double var$7 = (double)decodeAnchorX(0.2f, 0.0f);
	double var$8 = (double)decodeAnchorY(2.0444443f, 2.0f);
	double var$9 = (double)decodeAnchorX(0.9666667f, -2.0f);
	double var$10 = (double)decodeAnchorY(2.8f, 0.0f);
	double var$11 = (double)decodeX(0.9666667f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(2.8f));
	double var$12 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$12, decodeY(2.788889f));
	double var$13 = (double)decodeAnchorX(2.0f, 1.9709293f);
	double var$14 = (double)decodeAnchorY(2.788889f, 0.01985704f);
	double var$15 = (double)decodeAnchorX(2.777778f, -0.033333335f);
	double var$16 = (double)decodeAnchorY(2.0555553f, 1.9333333f);
	double var$17 = (double)decodeX(2.777778f);
	$nc(this->path)->curveTo(var$13, var$14, var$15, var$16, var$17, decodeY(2.0555553f));
	double var$18 = (double)decodeX(2.788889f);
	$nc(this->path)->lineTo(var$18, decodeY(1.8051281f));
	double var$19 = (double)decodeX(2.777778f);
	$nc(this->path)->lineTo(var$19, decodeY(1.2794871f));
	double var$20 = (double)decodeX(2.777778f);
	$nc(this->path)->lineTo(var$20, decodeY(1.0025641f));
	double var$21 = (double)decodeAnchorX(2.777778f, 0.0042173304f);
	double var$22 = (double)decodeAnchorY(1.0025641f, -1.9503378f);
	double var$23 = (double)decodeAnchorX(2.0999997f, 1.9659461f);
	double var$24 = (double)decodeAnchorY(0.22222222f, 0.017122267f);
	double var$25 = (double)decodeX(2.0999997f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(0.22222222f));
	double var$26 = (double)decodeX(0.9111111f);
	$nc(this->path)->lineTo(var$26, decodeY(0.21111111f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* ProgressBarPainter::decodeRect5() {
	double var$0 = (double)decodeX(0.6666667f);
	double var$1 = (double)decodeY(0.6666667f);
	float var$3 = decodeX(2.3333333f);
	double var$2 = (double)(var$3 - decodeX(0.6666667f));
	float var$4 = decodeY(2.3333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6666667f));
	return this->rect;
}

$Rectangle2D* ProgressBarPainter::decodeRect6() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* ProgressBarPainter::decodeRect7() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Path2D* ProgressBarPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.4285715f));
	double var$1 = (double)decodeAnchorX(0.0f, 2.6785715f);
	double var$2 = (double)decodeAnchorY(1.4285715f, 8.881784E-16f);
	double var$3 = (double)decodeAnchorX(1.3898809f, -6.214286f);
	double var$4 = (double)decodeAnchorY(0.3452381f, -0.035714287f);
	double var$5 = (double)decodeX(1.3898809f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.3452381f));
	double var$6 = (double)decodeX(1.5535715f);
	$nc(this->path)->lineTo(var$6, decodeY(0.3452381f));
	double var$7 = (double)decodeAnchorX(1.5535715f, 8.32967f);
	double var$8 = (double)decodeAnchorY(0.3452381f, 0.0027472528f);
	double var$9 = (double)decodeAnchorX(2.3333333f, -5.285714f);
	double var$10 = (double)decodeAnchorY(1.4285715f, 0.035714287f);
	double var$11 = (double)decodeX(2.3333333f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.4285715f));
	double var$12 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$12, decodeY(1.4285715f));
	double var$13 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$13, decodeY(1.5714285f));
	double var$14 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$14, decodeY(1.5714285f));
	double var$15 = (double)decodeAnchorX(2.3333333f, -5.321429f);
	double var$16 = (double)decodeAnchorY(1.5714285f, 0.035714287f);
	double var$17 = (double)decodeAnchorX(1.5535715f, 8.983517f);
	double var$18 = (double)decodeAnchorY(2.6666667f, 0.03846154f);
	double var$19 = (double)decodeX(1.5535715f);
	$nc(this->path)->curveTo(var$15, var$16, var$17, var$18, var$19, decodeY(2.6666667f));
	double var$20 = (double)decodeX(1.4077381f);
	$nc(this->path)->lineTo(var$20, decodeY(2.6666667f));
	double var$21 = (double)decodeAnchorX(1.4077381f, -6.714286f);
	double var$22 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$23 = (double)decodeAnchorX(0.0f, 2.607143f);
	double var$24 = (double)decodeAnchorY(1.5714285f, 0.035714287f);
	double var$25 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(1.5714285f));
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$26, decodeY(1.4285715f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* ProgressBarPainter::decodeRect8() {
	double var$0 = (double)decodeX(1.2916666f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(1.2916666f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* ProgressBarPainter::decodeRect9() {
	double var$0 = (double)decodeX(1.7083333f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(1.75f);
	double var$2 = (double)(var$3 - decodeX(1.7083333f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Path2D* ProgressBarPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.9888889f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeAnchorX(0.9888889f, -2.0f);
	double var$2 = (double)decodeAnchorY(0.2f, 0.0f);
	double var$3 = (double)decodeAnchorX(0.2f, 0.0f);
	double var$4 = (double)decodeAnchorY(0.9888889f, -2.0f);
	double var$5 = (double)decodeX(0.2f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.9888889f));
	double var$6 = (double)decodeAnchorX(0.2f, 0.0f);
	double var$7 = (double)decodeAnchorY(0.9888889f, 2.0f);
	double var$8 = (double)decodeAnchorX(0.2f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.9974358f, -2.0f);
	double var$10 = (double)decodeX(0.2f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.9974358f));
	double var$11 = (double)decodeAnchorX(0.2f, 0.0f);
	double var$12 = (double)decodeAnchorY(1.9974358f, 2.0f);
	double var$13 = (double)decodeAnchorX(0.9888889f, -2.0f);
	double var$14 = (double)decodeAnchorY(2.8111107f, 0.0f);
	double var$15 = (double)decodeX(0.9888889f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(2.8111107f));
	double var$16 = (double)decodeAnchorX(0.9888889f, 2.0f);
	double var$17 = (double)decodeAnchorY(2.8111107f, 0.0f);
	double var$18 = (double)decodeAnchorX(2.5f, 0.0f);
	double var$19 = (double)decodeAnchorY(2.8f, 0.0f);
	double var$20 = (double)decodeX(2.5f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(2.8f));
	double var$21 = (double)decodeX(2.7444446f);
	$nc(this->path)->lineTo(var$21, decodeY(2.488889f));
	double var$22 = (double)decodeX(2.7555554f);
	$nc(this->path)->lineTo(var$22, decodeY(1.5794872f));
	double var$23 = (double)decodeX(2.7666664f);
	$nc(this->path)->lineTo(var$23, decodeY(1.4358975f));
	double var$24 = (double)decodeX(2.7666664f);
	$nc(this->path)->lineTo(var$24, decodeY(0.62222224f));
	double var$25 = (double)decodeX(2.5999997f);
	$nc(this->path)->lineTo(var$25, decodeY(0.22222222f));
	double var$26 = (double)decodeAnchorX(2.5999997f, 0.0f);
	double var$27 = (double)decodeAnchorY(0.22222222f, 0.0f);
	double var$28 = (double)decodeAnchorX(0.9888889f, 2.0f);
	double var$29 = (double)decodeAnchorY(0.2f, 0.0f);
	double var$30 = (double)decodeX(0.9888889f);
	$nc(this->path)->curveTo(var$26, var$27, var$28, var$29, var$30, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* ProgressBarPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.4285715f));
	double var$1 = (double)decodeAnchorX(0.0f, 2.6785715f);
	double var$2 = (double)decodeAnchorY(1.4285715f, 8.881784E-16f);
	double var$3 = (double)decodeAnchorX(1.3898809f, -6.357143f);
	double var$4 = (double)decodeAnchorY(0.3452381f, -0.035714287f);
	double var$5 = (double)decodeX(1.3898809f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.3452381f));
	double var$6 = (double)decodeX(1.5535715f);
	$nc(this->path)->lineTo(var$6, decodeY(0.3452381f));
	double var$7 = (double)decodeAnchorX(1.5535715f, 4.0f);
	double var$8 = (double)decodeAnchorY(0.3452381f, 0.0f);
	double var$9 = (double)decodeAnchorX(2.3333333f, -5.285714f);
	double var$10 = (double)decodeAnchorY(1.4285715f, 0.035714287f);
	double var$11 = (double)decodeX(2.3333333f);
	$nc(this->path)->curveTo(var$7, var$8, var$9, var$10, var$11, decodeY(1.4285715f));
	double var$12 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$12, decodeY(1.4285715f));
	double var$13 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$13, decodeY(1.5714285f));
	double var$14 = (double)decodeX(2.3333333f);
	$nc(this->path)->lineTo(var$14, decodeY(1.5714285f));
	double var$15 = (double)decodeAnchorX(2.3333333f, -5.321429f);
	double var$16 = (double)decodeAnchorY(1.5714285f, 0.035714287f);
	double var$17 = (double)decodeAnchorX(1.5535715f, 4.0f);
	double var$18 = (double)decodeAnchorY(2.6666667f, 0.0f);
	double var$19 = (double)decodeX(1.5535715f);
	$nc(this->path)->curveTo(var$15, var$16, var$17, var$18, var$19, decodeY(2.6666667f));
	double var$20 = (double)decodeX(1.4077381f);
	$nc(this->path)->lineTo(var$20, decodeY(2.6666667f));
	double var$21 = (double)decodeAnchorX(1.4077381f, -6.571429f);
	double var$22 = (double)decodeAnchorY(2.6666667f, -0.035714287f);
	double var$23 = (double)decodeAnchorX(0.0f, 2.607143f);
	double var$24 = (double)decodeAnchorY(1.5714285f, 0.035714287f);
	double var$25 = (double)decodeX(0.0f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(1.5714285f));
	double var$26 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$26, decodeY(1.4285715f));
	$nc(this->path)->closePath();
	return this->path;
}

$Paint* ProgressBarPainter::decodeGradient1($Shape* s) {
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

$Paint* ProgressBarPainter::decodeGradient2($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038709678f,
		0.05967742f,
		0.08064516f,
		0.23709677f,
		0.3935484f,
		0.41612905f,
		0.43870968f,
		0.67419356f,
		0.90967745f,
		0.91451615f,
		0.91935486f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5,
		$(decodeColor(this->color5, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* ProgressBarPainter::decodeGradient3($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.05483871f,
		0.5032258f,
		0.9516129f
	}), $$new($ColorArray, {
		this->color9,
		$(decodeColor(this->color9, this->color10, 0.5f)),
		this->color10
	}));
}

$Paint* ProgressBarPainter::decodeGradient4($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038709678f,
		0.05967742f,
		0.08064516f,
		0.23709677f,
		0.3935484f,
		0.41612905f,
		0.43870968f,
		0.67419356f,
		0.90967745f,
		0.91612905f,
		0.92258066f
	}), $$new($ColorArray, {
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color13, 0.5f)),
		this->color13,
		$(decodeColor(this->color13, this->color14, 0.5f)),
		this->color14,
		$(decodeColor(this->color14, this->color15, 0.5f)),
		this->color15,
		$(decodeColor(this->color15, this->color16, 0.5f)),
		this->color16
	}));
}

$Paint* ProgressBarPainter::decodeGradient5($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038709678f,
		0.05483871f,
		0.07096774f,
		0.28064516f,
		0.4903226f,
		0.6967742f,
		0.9032258f,
		0.9241935f,
		0.9451613f
	}), $$new($ColorArray, {
		this->color18,
		$(decodeColor(this->color18, this->color19, 0.5f)),
		this->color19,
		$(decodeColor(this->color19, this->color20, 0.5f)),
		this->color20,
		$(decodeColor(this->color20, this->color21, 0.5f)),
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22
	}));
}

$Paint* ProgressBarPainter::decodeGradient6($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038709678f,
		0.061290324f,
		0.08387097f,
		0.27258065f,
		0.46129033f,
		0.4903226f,
		0.5193548f,
		0.71774197f,
		0.91612905f,
		0.92419356f,
		0.93225807f
	}), $$new($ColorArray, {
		this->color23,
		$(decodeColor(this->color23, this->color24, 0.5f)),
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27,
		$(decodeColor(this->color27, this->color28, 0.5f)),
		this->color28
	}));
}

$Paint* ProgressBarPainter::decodeGradient7($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.051612902f,
		0.06612903f,
		0.08064516f,
		0.2935484f,
		0.5064516f,
		0.6903226f,
		0.87419355f,
		0.88870966f,
		0.9032258f
	}), $$new($ColorArray, {
		this->color3,
		$(decodeColor(this->color3, this->color4, 0.5f)),
		this->color4,
		$(decodeColor(this->color4, this->color29, 0.5f)),
		this->color29,
		$(decodeColor(this->color29, this->color7, 0.5f)),
		this->color7,
		$(decodeColor(this->color7, this->color8, 0.5f)),
		this->color8
	}));
}

$Paint* ProgressBarPainter::decodeGradient8($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.20645161f,
		0.41290322f,
		0.44193548f,
		0.47096774f,
		0.7354839f,
		1.0f
	}), $$new($ColorArray, {
		this->color24,
		$(decodeColor(this->color24, this->color25, 0.5f)),
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color30, 0.5f)),
		this->color30
	}));
}

$Paint* ProgressBarPainter::decodeGradient9($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038709678f,
		0.05483871f,
		0.07096774f,
		0.28064516f,
		0.4903226f,
		0.6967742f,
		0.9032258f,
		0.9241935f,
		0.9451613f
	}), $$new($ColorArray, {
		this->color34,
		$(decodeColor(this->color34, this->color35, 0.5f)),
		this->color35,
		$(decodeColor(this->color35, this->color36, 0.5f)),
		this->color36,
		$(decodeColor(this->color36, this->color37, 0.5f)),
		this->color37,
		$(decodeColor(this->color37, this->color38, 0.5f)),
		this->color38
	}));
}

$Paint* ProgressBarPainter::decodeGradient10($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.038709678f,
		0.061290324f,
		0.08387097f,
		0.27258065f,
		0.46129033f,
		0.4903226f,
		0.5193548f,
		0.71774197f,
		0.91612905f,
		0.92419356f,
		0.93225807f
	}), $$new($ColorArray, {
		this->color39,
		$(decodeColor(this->color39, this->color40, 0.5f)),
		this->color40,
		$(decodeColor(this->color40, this->color41, 0.5f)),
		this->color41,
		$(decodeColor(this->color41, this->color42, 0.5f)),
		this->color42,
		$(decodeColor(this->color42, this->color43, 0.5f)),
		this->color43,
		$(decodeColor(this->color43, this->color44, 0.5f)),
		this->color44
	}));
}

$Paint* ProgressBarPainter::decodeGradient11($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.051612902f,
		0.06612903f,
		0.08064516f,
		0.2935484f,
		0.5064516f,
		0.6903226f,
		0.87419355f,
		0.88870966f,
		0.9032258f
	}), $$new($ColorArray, {
		this->color45,
		$(decodeColor(this->color45, this->color46, 0.5f)),
		this->color46,
		$(decodeColor(this->color46, this->color47, 0.5f)),
		this->color47,
		$(decodeColor(this->color47, this->color48, 0.5f)),
		this->color48,
		$(decodeColor(this->color48, this->color49, 0.5f)),
		this->color49
	}));
}

$Paint* ProgressBarPainter::decodeGradient12($Shape* s) {
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.20645161f,
		0.41290322f,
		0.44193548f,
		0.47096774f,
		0.7354839f,
		1.0f
	}), $$new($ColorArray, {
		this->color40,
		$(decodeColor(this->color40, this->color41, 0.5f)),
		this->color41,
		$(decodeColor(this->color41, this->color42, 0.5f)),
		this->color42,
		$(decodeColor(this->color42, this->color50, 0.5f)),
		this->color50
	}));
}

ProgressBarPainter::ProgressBarPainter() {
}

$Class* ProgressBarPainter::load$($String* name, bool initialize) {
	$loadClass(ProgressBarPainter, name, initialize, &_ProgressBarPainter_ClassInfo_, allocate$ProgressBarPainter);
	return class$;
}

$Class* ProgressBarPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/nimbus/FileChooserPainter.h>

#include <java/awt/Color.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/LinearGradientPaint.h>
#include <java/awt/MultipleGradientPaint.h>
#include <java/awt/Paint.h>
#include <java/awt/RadialGradientPaint.h>
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

#undef BACKGROUND_ENABLED
#undef COMPUTERICON_ENABLED
#undef DETAILSVIEWICON_ENABLED
#undef DIRECTORYICON_ENABLED
#undef FILEICON_ENABLED
#undef FLOPPYDRIVEICON_ENABLED
#undef HARDDRIVEICON_ENABLED
#undef HOMEFOLDERICON_ENABLED
#undef LISTVIEWICON_ENABLED
#undef NEWFOLDERICON_ENABLED
#undef UPFOLDERICON_ENABLED

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Graphics2D = ::java::awt::Graphics2D;
using $LinearGradientPaint = ::java::awt::LinearGradientPaint;
using $MultipleGradientPaint = ::java::awt::MultipleGradientPaint;
using $Paint = ::java::awt::Paint;
using $RadialGradientPaint = ::java::awt::RadialGradientPaint;
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

$FieldInfo _FileChooserPainter_FieldInfo_[] = {
	{"BACKGROUND_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, BACKGROUND_ENABLED)},
	{"FILEICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, FILEICON_ENABLED)},
	{"DIRECTORYICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, DIRECTORYICON_ENABLED)},
	{"UPFOLDERICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, UPFOLDERICON_ENABLED)},
	{"NEWFOLDERICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, NEWFOLDERICON_ENABLED)},
	{"COMPUTERICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, COMPUTERICON_ENABLED)},
	{"HARDDRIVEICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, HARDDRIVEICON_ENABLED)},
	{"FLOPPYDRIVEICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, FLOPPYDRIVEICON_ENABLED)},
	{"HOMEFOLDERICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, HOMEFOLDERICON_ENABLED)},
	{"DETAILSVIEWICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, DETAILSVIEWICON_ENABLED)},
	{"LISTVIEWICON_ENABLED", "I", nullptr, $STATIC | $FINAL, $constField(FileChooserPainter, LISTVIEWICON_ENABLED)},
	{"state", "I", nullptr, $PRIVATE, $field(FileChooserPainter, state)},
	{"ctx", "Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PRIVATE, $field(FileChooserPainter, ctx)},
	{"path", "Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $field(FileChooserPainter, path)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $field(FileChooserPainter, rect)},
	{"roundRect", "Ljava/awt/geom/RoundRectangle2D;", nullptr, $PRIVATE, $field(FileChooserPainter, roundRect)},
	{"ellipse", "Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $field(FileChooserPainter, ellipse)},
	{"color1", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color1)},
	{"color2", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color2)},
	{"color3", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color3)},
	{"color4", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color4)},
	{"color5", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color5)},
	{"color6", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color6)},
	{"color7", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color7)},
	{"color8", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color8)},
	{"color9", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color9)},
	{"color10", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color10)},
	{"color11", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color11)},
	{"color12", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color12)},
	{"color13", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color13)},
	{"color14", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color14)},
	{"color15", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color15)},
	{"color16", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color16)},
	{"color17", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color17)},
	{"color18", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color18)},
	{"color19", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color19)},
	{"color20", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color20)},
	{"color21", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color21)},
	{"color22", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color22)},
	{"color23", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color23)},
	{"color24", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color24)},
	{"color25", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color25)},
	{"color26", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color26)},
	{"color27", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color27)},
	{"color28", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color28)},
	{"color29", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color29)},
	{"color30", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color30)},
	{"color31", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color31)},
	{"color32", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color32)},
	{"color33", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color33)},
	{"color34", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color34)},
	{"color35", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color35)},
	{"color36", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color36)},
	{"color37", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color37)},
	{"color38", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color38)},
	{"color39", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color39)},
	{"color40", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color40)},
	{"color41", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color41)},
	{"color42", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color42)},
	{"color43", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color43)},
	{"color44", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color44)},
	{"color45", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color45)},
	{"color46", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color46)},
	{"color47", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color47)},
	{"color48", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color48)},
	{"color49", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color49)},
	{"color50", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color50)},
	{"color51", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color51)},
	{"color52", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color52)},
	{"color53", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color53)},
	{"color54", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color54)},
	{"color55", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color55)},
	{"color56", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color56)},
	{"color57", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color57)},
	{"color58", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color58)},
	{"color59", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color59)},
	{"color60", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color60)},
	{"color61", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color61)},
	{"color62", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color62)},
	{"color63", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color63)},
	{"color64", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color64)},
	{"color65", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color65)},
	{"color66", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color66)},
	{"color67", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color67)},
	{"color68", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color68)},
	{"color69", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color69)},
	{"color70", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color70)},
	{"color71", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color71)},
	{"color72", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color72)},
	{"color73", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color73)},
	{"color74", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color74)},
	{"color75", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color75)},
	{"color76", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color76)},
	{"color77", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color77)},
	{"color78", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color78)},
	{"color79", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color79)},
	{"color80", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color80)},
	{"color81", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color81)},
	{"color82", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color82)},
	{"color83", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color83)},
	{"color84", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color84)},
	{"color85", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color85)},
	{"color86", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color86)},
	{"color87", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color87)},
	{"color88", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color88)},
	{"color89", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color89)},
	{"color90", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color90)},
	{"color91", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color91)},
	{"color92", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color92)},
	{"color93", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color93)},
	{"color94", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color94)},
	{"color95", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color95)},
	{"color96", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color96)},
	{"color97", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color97)},
	{"color98", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color98)},
	{"color99", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color99)},
	{"color100", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color100)},
	{"color101", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color101)},
	{"color102", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color102)},
	{"color103", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color103)},
	{"color104", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color104)},
	{"color105", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color105)},
	{"color106", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color106)},
	{"color107", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color107)},
	{"color108", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color108)},
	{"color109", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color109)},
	{"color110", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color110)},
	{"color111", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color111)},
	{"color112", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color112)},
	{"color113", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color113)},
	{"color114", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color114)},
	{"color115", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color115)},
	{"color116", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color116)},
	{"color117", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color117)},
	{"color118", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color118)},
	{"color119", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color119)},
	{"color120", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color120)},
	{"color121", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color121)},
	{"color122", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FileChooserPainter, color122)},
	{"componentColors", "[Ljava/lang/Object;", nullptr, $PRIVATE, $field(FileChooserPainter, componentColors)},
	{}
};

$MethodInfo _FileChooserPainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;I)V", nullptr, $PUBLIC, $method(static_cast<void(FileChooserPainter::*)($AbstractRegionPainter$PaintContext*,int32_t)>(&FileChooserPainter::init$))},
	{"decodeEllipse1", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse1))},
	{"decodeEllipse2", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse2))},
	{"decodeEllipse3", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse3))},
	{"decodeEllipse4", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse4))},
	{"decodeEllipse5", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse5))},
	{"decodeEllipse6", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse6))},
	{"decodeEllipse7", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse7))},
	{"decodeEllipse8", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse8))},
	{"decodeEllipse9", "()Ljava/awt/geom/Ellipse2D;", nullptr, $PRIVATE, $method(static_cast<$Ellipse2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeEllipse9))},
	{"decodeGradient1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient1))},
	{"decodeGradient10", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient10))},
	{"decodeGradient11", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient11))},
	{"decodeGradient12", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient12))},
	{"decodeGradient13", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient13))},
	{"decodeGradient14", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient14))},
	{"decodeGradient15", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient15))},
	{"decodeGradient16", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient16))},
	{"decodeGradient17", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient17))},
	{"decodeGradient18", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient18))},
	{"decodeGradient19", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient19))},
	{"decodeGradient2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient2))},
	{"decodeGradient20", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient20))},
	{"decodeGradient21", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient21))},
	{"decodeGradient22", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient22))},
	{"decodeGradient23", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient23))},
	{"decodeGradient24", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient24))},
	{"decodeGradient25", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient25))},
	{"decodeGradient26", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient26))},
	{"decodeGradient27", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient27))},
	{"decodeGradient28", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient28))},
	{"decodeGradient29", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient29))},
	{"decodeGradient3", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient3))},
	{"decodeGradient30", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient30))},
	{"decodeGradient31", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient31))},
	{"decodeGradient32", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient32))},
	{"decodeGradient33", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient33))},
	{"decodeGradient34", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient34))},
	{"decodeGradient35", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient35))},
	{"decodeGradient4", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient4))},
	{"decodeGradient5", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient5))},
	{"decodeGradient6", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient6))},
	{"decodeGradient7", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient7))},
	{"decodeGradient8", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient8))},
	{"decodeGradient9", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeGradient9))},
	{"decodePath1", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath1))},
	{"decodePath10", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath10))},
	{"decodePath11", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath11))},
	{"decodePath12", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath12))},
	{"decodePath13", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath13))},
	{"decodePath14", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath14))},
	{"decodePath15", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath15))},
	{"decodePath16", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath16))},
	{"decodePath17", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath17))},
	{"decodePath18", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath18))},
	{"decodePath19", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath19))},
	{"decodePath2", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath2))},
	{"decodePath20", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath20))},
	{"decodePath21", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath21))},
	{"decodePath22", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath22))},
	{"decodePath23", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath23))},
	{"decodePath24", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath24))},
	{"decodePath25", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath25))},
	{"decodePath26", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath26))},
	{"decodePath27", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath27))},
	{"decodePath28", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath28))},
	{"decodePath29", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath29))},
	{"decodePath3", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath3))},
	{"decodePath30", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath30))},
	{"decodePath31", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath31))},
	{"decodePath32", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath32))},
	{"decodePath33", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath33))},
	{"decodePath34", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath34))},
	{"decodePath35", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath35))},
	{"decodePath36", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath36))},
	{"decodePath37", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath37))},
	{"decodePath38", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath38))},
	{"decodePath4", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath4))},
	{"decodePath5", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath5))},
	{"decodePath6", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath6))},
	{"decodePath7", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath7))},
	{"decodePath8", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath8))},
	{"decodePath9", "()Ljava/awt/geom/Path2D;", nullptr, $PRIVATE, $method(static_cast<$Path2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodePath9))},
	{"decodeRadial1", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeRadial1))},
	{"decodeRadial2", "(Ljava/awt/Shape;)Ljava/awt/Paint;", nullptr, $PRIVATE, $method(static_cast<$Paint*(FileChooserPainter::*)($Shape*)>(&FileChooserPainter::decodeRadial2))},
	{"decodeRect1", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect1))},
	{"decodeRect10", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect10))},
	{"decodeRect11", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect11))},
	{"decodeRect12", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect12))},
	{"decodeRect13", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect13))},
	{"decodeRect14", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect14))},
	{"decodeRect15", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect15))},
	{"decodeRect16", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect16))},
	{"decodeRect17", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect17))},
	{"decodeRect18", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect18))},
	{"decodeRect19", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect19))},
	{"decodeRect2", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect2))},
	{"decodeRect20", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect20))},
	{"decodeRect21", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect21))},
	{"decodeRect22", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect22))},
	{"decodeRect23", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect23))},
	{"decodeRect24", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect24))},
	{"decodeRect25", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect25))},
	{"decodeRect26", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect26))},
	{"decodeRect27", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect27))},
	{"decodeRect28", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect28))},
	{"decodeRect29", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect29))},
	{"decodeRect3", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect3))},
	{"decodeRect30", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect30))},
	{"decodeRect31", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect31))},
	{"decodeRect32", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect32))},
	{"decodeRect33", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect33))},
	{"decodeRect34", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect34))},
	{"decodeRect35", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect35))},
	{"decodeRect36", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect36))},
	{"decodeRect37", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect37))},
	{"decodeRect38", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect38))},
	{"decodeRect39", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect39))},
	{"decodeRect4", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect4))},
	{"decodeRect40", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect40))},
	{"decodeRect41", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect41))},
	{"decodeRect42", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect42))},
	{"decodeRect43", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect43))},
	{"decodeRect44", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect44))},
	{"decodeRect45", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect45))},
	{"decodeRect46", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect46))},
	{"decodeRect47", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect47))},
	{"decodeRect48", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect48))},
	{"decodeRect49", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect49))},
	{"decodeRect5", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect5))},
	{"decodeRect50", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect50))},
	{"decodeRect51", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect51))},
	{"decodeRect52", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect52))},
	{"decodeRect6", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect6))},
	{"decodeRect7", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect7))},
	{"decodeRect8", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect8))},
	{"decodeRect9", "()Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE, $method(static_cast<$Rectangle2D*(FileChooserPainter::*)()>(&FileChooserPainter::decodeRect9))},
	{"doPaint", "(Ljava/awt/Graphics2D;Ljavax/swing/JComponent;II[Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"getPaintContext", "()Ljavax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext;", nullptr, $PROTECTED | $FINAL},
	{"paintBackgroundEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintBackgroundEnabled))},
	{"paintdetailsViewIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintdetailsViewIconEnabled))},
	{"paintdirectoryIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintdirectoryIconEnabled))},
	{"paintfileIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintfileIconEnabled))},
	{"paintfloppyDriveIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintfloppyDriveIconEnabled))},
	{"painthardDriveIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::painthardDriveIconEnabled))},
	{"painthomeFolderIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::painthomeFolderIconEnabled))},
	{"paintlistViewIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintlistViewIconEnabled))},
	{"paintnewFolderIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintnewFolderIconEnabled))},
	{"paintupFolderIconEnabled", "(Ljava/awt/Graphics2D;)V", nullptr, $PRIVATE, $method(static_cast<void(FileChooserPainter::*)($Graphics2D*)>(&FileChooserPainter::paintupFolderIconEnabled))},
	{}
};

$ClassInfo _FileChooserPainter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.FileChooserPainter",
	"javax.swing.plaf.nimbus.AbstractRegionPainter",
	nullptr,
	_FileChooserPainter_FieldInfo_,
	_FileChooserPainter_MethodInfo_
};

$Object* allocate$FileChooserPainter($Class* clazz) {
	return $of($alloc(FileChooserPainter));
}

void FileChooserPainter::init$($AbstractRegionPainter$PaintContext* ctx, int32_t state) {
	$AbstractRegionPainter::init$();
	$set(this, path, $new($Path2D$Float));
	$set(this, rect, $new($Rectangle2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, roundRect, $new($RoundRectangle2D$Float, (float)0, (float)0, (float)0, (float)0, (float)0, (float)0));
	$set(this, ellipse, $new($Ellipse2D$Float, (float)0, (float)0, (float)0, (float)0));
	$set(this, color1, decodeColor("control"_s, 0.0f, 0.0f, 0.0f, 0));
	$set(this, color2, decodeColor("nimbusBlueGrey"_s, 0.007936537f, -0.065654516f, -0.13333333f, 0));
	$set(this, color3, $new($Color, 97, 98, 102, 255));
	$set(this, color4, decodeColor("nimbusBlueGrey"_s, -0.032679737f, -0.043332636f, 0.24705881f, 0));
	$set(this, color5, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, 0));
	$set(this, color6, decodeColor("nimbusBase"_s, 0.0077680945f, -0.51781034f, 0.3490196f, 0));
	$set(this, color7, decodeColor("nimbusBase"_s, 0.013940871f, -0.599277f, 0.41960782f, 0));
	$set(this, color8, decodeColor("nimbusBase"_s, 0.004681647f, -0.4198052f, 0.14117646f, 0));
	$set(this, color9, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -127));
	$set(this, color10, decodeColor("nimbusBlueGrey"_s, 0.0f, 0.0f, -0.21f, -99));
	$set(this, color11, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.45978838f, 0.2980392f, 0));
	$set(this, color12, decodeColor("nimbusBase"_s, 0.0015952587f, -0.34848025f, 0.18823528f, 0));
	$set(this, color13, decodeColor("nimbusBase"_s, 0.0015952587f, -0.30844158f, 0.09803921f, 0));
	$set(this, color14, decodeColor("nimbusBase"_s, 0.0015952587f, -0.27329817f, 0.035294116f, 0));
	$set(this, color15, decodeColor("nimbusBase"_s, 0.004681647f, -0.6198413f, 0.43921566f, 0));
	$set(this, color16, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -125));
	$set(this, color17, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -50));
	$set(this, color18, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, -100));
	$set(this, color19, decodeColor("nimbusBase"_s, 0.0012094378f, -0.23571429f, -0.0784314f, 0));
	$set(this, color20, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.115166366f, -0.2627451f, 0));
	$set(this, color21, decodeColor("nimbusBase"_s, 0.0027436614f, -0.335015f, 0.011764705f, 0));
	$set(this, color22, decodeColor("nimbusBase"_s, 0.0024294257f, -0.3857143f, 0.031372547f, 0));
	$set(this, color23, decodeColor("nimbusBase"_s, 0.0018081069f, -0.3595238f, -0.13725492f, 0));
	$set(this, color24, $new($Color, 255, 200, 0, 255));
	$set(this, color25, decodeColor("nimbusBase"_s, 0.004681647f, -0.44904763f, 0.039215684f, 0));
	$set(this, color26, decodeColor("nimbusBase"_s, 0.0015952587f, -0.43718487f, -0.015686274f, 0));
	$set(this, color27, decodeColor("nimbusBase"_s, 2.9569864E-4f, -0.39212453f, -0.24313727f, 0));
	$set(this, color28, decodeColor("nimbusBase"_s, 0.004681647f, -0.6117143f, 0.43137252f, 0));
	$set(this, color29, decodeColor("nimbusBase"_s, 0.0012094378f, -0.28015873f, -0.019607842f, 0));
	$set(this, color30, decodeColor("nimbusBase"_s, 0.00254488f, -0.07049692f, -0.2784314f, 0));
	$set(this, color31, decodeColor("nimbusBase"_s, 0.0015952587f, -0.28045115f, 0.04705882f, 0));
	$set(this, color32, decodeColor("nimbusBlueGrey"_s, 0.0f, 5.847961E-4f, -0.21568626f, 0));
	$set(this, color33, decodeColor("nimbusBase"_s, -0.0061469674f, 0.3642857f, 0.14509803f, 0));
	$set(this, color34, decodeColor("nimbusBase"_s, 0.0053939223f, 0.3642857f, -0.0901961f, 0));
	$set(this, color35, decodeColor("nimbusBase"_s, 0.0f, -0.6357143f, 0.45098037f, 0));
	$set(this, color36, decodeColor("nimbusBase"_s, -0.006044388f, -0.23963585f, 0.45098037f, 0));
	$set(this, color37, decodeColor("nimbusBase"_s, -0.0063245893f, 0.01592505f, 0.4078431f, 0));
	$set(this, color38, decodeColor("nimbusBlueGrey"_s, 0.0f, -0.110526316f, 0.25490195f, -170));
	$set(this, color39, decodeColor("nimbusOrange"_s, -0.032758567f, -0.018273294f, 0.25098038f, 0));
	$set(this, color40, $new($Color, 255, 255, 255, 255));
	$set(this, color41, $new($Color, 252, 255, 92, 255));
	$set(this, color42, $new($Color, 253, 191, 4, 255));
	$set(this, color43, $new($Color, 160, 161, 163, 255));
	$set(this, color44, $new($Color, 0, 0, 0, 255));
	$set(this, color45, $new($Color, 239, 241, 243, 255));
	$set(this, color46, $new($Color, 197, 201, 205, 255));
	$set(this, color47, $new($Color, 105, 110, 118, 255));
	$set(this, color48, $new($Color, 63, 67, 72, 255));
	$set(this, color49, $new($Color, 56, 51, 25, 255));
	$set(this, color50, $new($Color, 144, 255, 0, 255));
	$set(this, color51, $new($Color, 243, 245, 246, 255));
	$set(this, color52, $new($Color, 208, 212, 216, 255));
	$set(this, color53, $new($Color, 191, 193, 194, 255));
	$set(this, color54, $new($Color, 170, 172, 175, 255));
	$set(this, color55, $new($Color, 152, 155, 158, 255));
	$set(this, color56, $new($Color, 59, 62, 66, 255));
	$set(this, color57, $new($Color, 46, 46, 46, 255));
	$set(this, color58, $new($Color, 64, 64, 64, 255));
	$set(this, color59, $new($Color, 43, 43, 43, 255));
	$set(this, color60, $new($Color, 164, 179, 206, 255));
	$set(this, color61, $new($Color, 97, 123, 170, 255));
	$set(this, color62, $new($Color, 53, 86, 146, 255));
	$set(this, color63, $new($Color, 48, 82, 144, 255));
	$set(this, color64, $new($Color, 71, 99, 150, 255));
	$set(this, color65, $new($Color, 224, 224, 224, 255));
	$set(this, color66, $new($Color, 232, 232, 232, 255));
	$set(this, color67, $new($Color, 231, 234, 237, 255));
	$set(this, color68, $new($Color, 205, 211, 215, 255));
	$set(this, color69, $new($Color, 149, 153, 156, 54));
	$set(this, color70, $new($Color, 255, 122, 101, 255));
	$set(this, color71, $new($Color, 54, 78, 122, 255));
	$set(this, color72, $new($Color, 51, 60, 70, 255));
	$set(this, color73, $new($Color, 228, 232, 237, 255));
	$set(this, color74, $new($Color, 27, 57, 87, 255));
	$set(this, color75, $new($Color, 75, 109, 137, 255));
	$set(this, color76, $new($Color, 77, 133, 185, 255));
	$set(this, color77, $new($Color, 81, 59, 7, 255));
	$set(this, color78, $new($Color, 97, 74, 18, 255));
	$set(this, color79, $new($Color, 137, 115, 60, 255));
	$set(this, color80, $new($Color, 174, 151, 91, 255));
	$set(this, color81, $new($Color, 114, 92, 13, 255));
	$set(this, color82, $new($Color, 64, 48, 0, 255));
	$set(this, color83, $new($Color, 244, 222, 143, 255));
	$set(this, color84, $new($Color, 160, 161, 162, 255));
	$set(this, color85, $new($Color, 226, 230, 233, 255));
	$set(this, color86, $new($Color, 221, 225, 230, 255));
	$set(this, color87, decodeColor("nimbusBase"_s, 0.004681647f, -0.48756614f, 0.19215685f, 0));
	$set(this, color88, decodeColor("nimbusBase"_s, 0.004681647f, -0.48399013f, 0.019607842f, 0));
	$set(this, color89, decodeColor("nimbusBase"_s, -0.0028941035f, -0.5906323f, 0.4078431f, 0));
	$set(this, color90, decodeColor("nimbusBase"_s, 0.004681647f, -0.51290727f, 0.34509802f, 0));
	$set(this, color91, decodeColor("nimbusBase"_s, 0.009583652f, -0.5642857f, 0.3843137f, 0));
	$set(this, color92, decodeColor("nimbusBase"_s, -0.0072231293f, -0.6074885f, 0.4235294f, 0));
	$set(this, color93, decodeColor("nimbusBase"_s, 7.13408E-4f, -0.52158386f, 0.17254901f, 0));
	$set(this, color94, decodeColor("nimbusBase"_s, 0.012257397f, -0.5775132f, 0.19215685f, 0));
	$set(this, color95, decodeColor("nimbusBase"_s, 0.08801502f, -0.6164835f, -0.14117649f, 0));
	$set(this, color96, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.5019608f, 0));
	$set(this, color97, decodeColor("nimbusBase"_s, -0.0036516786f, -0.555393f, 0.42745095f, 0));
	$set(this, color98, decodeColor("nimbusBase"_s, -0.0010654926f, -0.3634138f, 0.2862745f, 0));
	$set(this, color99, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.29803923f, 0));
	$set(this, color100, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, 0.12156862f, 0));
	$set(this, color101, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.54901963f, 0));
	$set(this, color102, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.48627454f, 0));
	$set(this, color103, decodeColor("nimbusBase"_s, -0.57865167f, -0.6357143f, -0.007843137f, 0));
	$set(this, color104, decodeColor("nimbusBase"_s, -0.0028941035f, -0.5408867f, -0.09411767f, 0));
	$set(this, color105, decodeColor("nimbusBase"_s, -0.011985004f, -0.54721874f, -0.10588238f, 0));
	$set(this, color106, decodeColor("nimbusBase"_s, -0.0022627711f, -0.4305861f, -0.0901961f, 0));
	$set(this, color107, decodeColor("nimbusBase"_s, -0.00573498f, -0.447479f, -0.21568629f, 0));
	$set(this, color108, decodeColor("nimbusBase"_s, 0.004681647f, -0.53271f, 0.36470586f, 0));
	$set(this, color109, decodeColor("nimbusBase"_s, 0.004681647f, -0.5276062f, -0.11372551f, 0));
	$set(this, color110, decodeColor("nimbusBase"_s, -8.738637E-4f, -0.5278006f, -0.0039215684f, 0));
	$set(this, color111, decodeColor("nimbusBase"_s, -0.0028941035f, -0.5338625f, -0.12549022f, 0));
	$set(this, color112, decodeColor("nimbusBlueGrey"_s, -0.03535354f, -0.008674465f, -0.32156864f, 0));
	$set(this, color113, decodeColor("nimbusBlueGrey"_s, -0.027777791f, -0.010526314f, -0.3529412f, 0));
	$set(this, color114, decodeColor("nimbusBase"_s, -0.0028941035f, -0.5234694f, -0.1647059f, 0));
	$set(this, color115, decodeColor("nimbusBase"_s, 0.004681647f, -0.53401935f, -0.086274534f, 0));
	$set(this, color116, decodeColor("nimbusBase"_s, 0.004681647f, -0.52077174f, -0.20784315f, 0));
	$set(this, color117, $new($Color, 108, 114, 120, 255));
	$set(this, color118, $new($Color, 77, 82, 87, 255));
	$set(this, color119, decodeColor("nimbusBase"_s, -0.004577577f, -0.52179027f, -0.2392157f, 0));
	$set(this, color120, decodeColor("nimbusBase"_s, -0.004577577f, -0.547479f, -0.14901963f, 0));
	$set(this, color121, $new($Color, 186, 186, 186, 50));
	$set(this, color122, $new($Color, 186, 186, 186, 40));
	this->state = state;
	$set(this, ctx, ctx);
}

void FileChooserPainter::doPaint($Graphics2D* g, $JComponent* c, int32_t width, int32_t height, $ObjectArray* extendedCacheKeys) {
	$set(this, componentColors, extendedCacheKeys);
	switch (this->state) {
	case FileChooserPainter::BACKGROUND_ENABLED:
		{
			paintBackgroundEnabled(g);
			break;
		}
	case FileChooserPainter::FILEICON_ENABLED:
		{
			paintfileIconEnabled(g);
			break;
		}
	case FileChooserPainter::DIRECTORYICON_ENABLED:
		{
			paintdirectoryIconEnabled(g);
			break;
		}
	case FileChooserPainter::UPFOLDERICON_ENABLED:
		{
			paintupFolderIconEnabled(g);
			break;
		}
	case FileChooserPainter::NEWFOLDERICON_ENABLED:
		{
			paintnewFolderIconEnabled(g);
			break;
		}
	case FileChooserPainter::HARDDRIVEICON_ENABLED:
		{
			painthardDriveIconEnabled(g);
			break;
		}
	case FileChooserPainter::FLOPPYDRIVEICON_ENABLED:
		{
			paintfloppyDriveIconEnabled(g);
			break;
		}
	case FileChooserPainter::HOMEFOLDERICON_ENABLED:
		{
			painthomeFolderIconEnabled(g);
			break;
		}
	case FileChooserPainter::DETAILSVIEWICON_ENABLED:
		{
			paintdetailsViewIconEnabled(g);
			break;
		}
	case FileChooserPainter::LISTVIEWICON_ENABLED:
		{
			paintlistViewIconEnabled(g);
			break;
		}
	}
}

$AbstractRegionPainter$PaintContext* FileChooserPainter::getPaintContext() {
	return this->ctx;
}

void FileChooserPainter::paintBackgroundEnabled($Graphics2D* g) {
	$set(this, rect, decodeRect1());
	$nc(g)->setPaint(this->color1);
	g->fill(this->rect);
}

void FileChooserPainter::paintfileIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath1());
	$nc(g)->setPaint(this->color2);
	g->fill(this->path);
	$set(this, rect, decodeRect2());
	g->setPaint(this->color3);
	g->fill(this->rect);
	$set(this, path, decodePath2());
	g->setPaint($(decodeGradient1(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath3());
	g->setPaint($(decodeGradient2(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath4());
	g->setPaint(this->color8);
	g->fill(this->path);
	$set(this, path, decodePath5());
	g->setPaint(this->color9);
	g->fill(this->path);
}

void FileChooserPainter::paintdirectoryIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath6());
	$nc(g)->setPaint(this->color10);
	g->fill(this->path);
	$set(this, path, decodePath7());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath8());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color17);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color18);
	g->fill(this->rect);
	$set(this, path, decodePath9());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath10());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath11());
	g->setPaint(this->color24);
	g->fill(this->path);
}

void FileChooserPainter::paintupFolderIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath12());
	$nc(g)->setPaint($(decodeGradient7(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath13());
	g->setPaint($(decodeGradient8(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath14());
	g->setPaint($(decodeGradient9(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath15());
	g->setPaint($(decodeGradient10(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath16());
	g->setPaint(this->color32);
	g->fill(this->path);
	$set(this, path, decodePath17());
	g->setPaint($(decodeGradient11(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath18());
	g->setPaint(this->color35);
	g->fill(this->path);
	$set(this, path, decodePath19());
	g->setPaint($(decodeGradient12(this->path)));
	g->fill(this->path);
}

void FileChooserPainter::paintnewFolderIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath6());
	$nc(g)->setPaint(this->color10);
	g->fill(this->path);
	$set(this, path, decodePath7());
	g->setPaint($(decodeGradient3(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath8());
	g->setPaint($(decodeGradient4(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect3());
	g->setPaint(this->color16);
	g->fill(this->rect);
	$set(this, rect, decodeRect4());
	g->setPaint(this->color17);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color18);
	g->fill(this->rect);
	$set(this, path, decodePath9());
	g->setPaint($(decodeGradient5(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath10());
	g->setPaint($(decodeGradient6(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath11());
	g->setPaint(this->color24);
	g->fill(this->path);
	$set(this, path, decodePath20());
	g->setPaint(this->color38);
	g->fill(this->path);
	$set(this, path, decodePath21());
	g->setPaint(this->color39);
	g->fill(this->path);
	$set(this, path, decodePath22());
	g->setPaint($(decodeRadial1(this->path)));
	g->fill(this->path);
}

void FileChooserPainter::painthardDriveIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, rect, decodeRect6());
	$nc(g)->setPaint(this->color43);
	g->fill(this->rect);
	$set(this, rect, decodeRect7());
	g->setPaint(this->color44);
	g->fill(this->rect);
	$set(this, rect, decodeRect8());
	g->setPaint($(decodeGradient13(this->rect)));
	g->fill(this->rect);
	$set(this, path, decodePath23());
	g->setPaint($(decodeGradient14(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect9());
	g->setPaint(this->color49);
	g->fill(this->rect);
	$set(this, rect, decodeRect10());
	g->setPaint(this->color49);
	g->fill(this->rect);
	$set(this, ellipse, decodeEllipse1());
	g->setPaint(this->color50);
	g->fill(this->ellipse);
	$set(this, path, decodePath24());
	g->setPaint($(decodeGradient15(this->path)));
	g->fill(this->path);
	$set(this, ellipse, decodeEllipse2());
	g->setPaint(this->color53);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse3());
	g->setPaint(this->color53);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse4());
	g->setPaint(this->color54);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse5());
	g->setPaint(this->color55);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse6());
	g->setPaint(this->color55);
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse7());
	g->setPaint(this->color55);
	g->fill(this->ellipse);
	$set(this, rect, decodeRect11());
	g->setPaint(this->color56);
	g->fill(this->rect);
	$set(this, rect, decodeRect12());
	g->setPaint(this->color56);
	g->fill(this->rect);
	$set(this, rect, decodeRect13());
	g->setPaint(this->color56);
	g->fill(this->rect);
}

void FileChooserPainter::paintfloppyDriveIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath25());
	$nc(g)->setPaint($(decodeGradient16(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath26());
	g->setPaint($(decodeGradient17(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath27());
	g->setPaint($(decodeGradient18(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath28());
	g->setPaint($(decodeGradient19(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath29());
	g->setPaint(this->color69);
	g->fill(this->path);
	$set(this, rect, decodeRect14());
	g->setPaint(this->color70);
	g->fill(this->rect);
	$set(this, rect, decodeRect15());
	g->setPaint(this->color40);
	g->fill(this->rect);
	$set(this, rect, decodeRect16());
	g->setPaint(this->color67);
	g->fill(this->rect);
	$set(this, rect, decodeRect17());
	g->setPaint(this->color71);
	g->fill(this->rect);
	$set(this, rect, decodeRect18());
	g->setPaint(this->color44);
	g->fill(this->rect);
}

void FileChooserPainter::painthomeFolderIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, path, decodePath30());
	$nc(g)->setPaint(this->color72);
	g->fill(this->path);
	$set(this, path, decodePath31());
	g->setPaint(this->color73);
	g->fill(this->path);
	$set(this, rect, decodeRect19());
	g->setPaint($(decodeGradient20(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect20());
	g->setPaint(this->color76);
	g->fill(this->rect);
	$set(this, path, decodePath32());
	g->setPaint($(decodeGradient21(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect21());
	g->setPaint($(decodeGradient22(this->rect)));
	g->fill(this->rect);
	$set(this, path, decodePath33());
	g->setPaint($(decodeGradient23(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath34());
	g->setPaint(this->color83);
	g->fill(this->path);
	$set(this, path, decodePath35());
	g->setPaint($(decodeGradient24(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath36());
	g->setPaint($(decodeGradient25(this->path)));
	g->fill(this->path);
}

void FileChooserPainter::paintdetailsViewIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, rect, decodeRect22());
	$nc(g)->setPaint($(decodeGradient26(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect23());
	g->setPaint($(decodeGradient27(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect24());
	g->setPaint(this->color93);
	g->fill(this->rect);
	$set(this, rect, decodeRect5());
	g->setPaint(this->color93);
	g->fill(this->rect);
	$set(this, rect, decodeRect25());
	g->setPaint(this->color93);
	g->fill(this->rect);
	$set(this, rect, decodeRect26());
	g->setPaint(this->color94);
	g->fill(this->rect);
	$set(this, ellipse, decodeEllipse8());
	g->setPaint($(decodeGradient28(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, ellipse, decodeEllipse9());
	g->setPaint($(decodeRadial2(this->ellipse)));
	g->fill(this->ellipse);
	$set(this, path, decodePath37());
	g->setPaint($(decodeGradient29(this->path)));
	g->fill(this->path);
	$set(this, path, decodePath38());
	g->setPaint($(decodeGradient30(this->path)));
	g->fill(this->path);
	$set(this, rect, decodeRect27());
	g->setPaint(this->color104);
	g->fill(this->rect);
	$set(this, rect, decodeRect28());
	g->setPaint(this->color105);
	g->fill(this->rect);
	$set(this, rect, decodeRect29());
	g->setPaint(this->color106);
	g->fill(this->rect);
	$set(this, rect, decodeRect30());
	g->setPaint(this->color107);
	g->fill(this->rect);
}

void FileChooserPainter::paintlistViewIconEnabled($Graphics2D* g) {
	$useLocalCurrentObjectStackCache();
	$set(this, rect, decodeRect31());
	$nc(g)->setPaint($(decodeGradient26(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect32());
	g->setPaint($(decodeGradient31(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect33());
	g->setPaint(this->color109);
	g->fill(this->rect);
	$set(this, rect, decodeRect34());
	g->setPaint($(decodeGradient32(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect35());
	g->setPaint(this->color111);
	g->fill(this->rect);
	$set(this, rect, decodeRect36());
	g->setPaint(this->color112);
	g->fill(this->rect);
	$set(this, rect, decodeRect37());
	g->setPaint(this->color113);
	g->fill(this->rect);
	$set(this, rect, decodeRect38());
	g->setPaint($(decodeGradient33(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect39());
	g->setPaint(this->color116);
	g->fill(this->rect);
	$set(this, rect, decodeRect40());
	g->setPaint($(decodeGradient34(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect41());
	g->setPaint($(decodeGradient35(this->rect)));
	g->fill(this->rect);
	$set(this, rect, decodeRect42());
	g->setPaint(this->color119);
	g->fill(this->rect);
	$set(this, rect, decodeRect43());
	g->setPaint(this->color121);
	g->fill(this->rect);
	$set(this, rect, decodeRect44());
	g->setPaint(this->color121);
	g->fill(this->rect);
	$set(this, rect, decodeRect45());
	g->setPaint(this->color121);
	g->fill(this->rect);
	$set(this, rect, decodeRect46());
	g->setPaint(this->color122);
	g->fill(this->rect);
	$set(this, rect, decodeRect47());
	g->setPaint(this->color121);
	g->fill(this->rect);
	$set(this, rect, decodeRect48());
	g->setPaint(this->color122);
	g->fill(this->rect);
	$set(this, rect, decodeRect49());
	g->setPaint(this->color122);
	g->fill(this->rect);
	$set(this, rect, decodeRect50());
	g->setPaint(this->color121);
	g->fill(this->rect);
	$set(this, rect, decodeRect51());
	g->setPaint(this->color122);
	g->fill(this->rect);
	$set(this, rect, decodeRect52());
	g->setPaint(this->color122);
	g->fill(this->rect);
}

$Rectangle2D* FileChooserPainter::decodeRect1() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath1() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2f);
	$nc(this->path)->moveTo(var$0, decodeY(0.0f));
	double var$1 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$1, decodeY(3.0f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$3, decodeY(0.2f));
	double var$4 = (double)decodeX(1.9197531f);
	$nc(this->path)->lineTo(var$4, decodeY(0.2f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(0.9f));
	double var$6 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$6, decodeY(3.0f));
	double var$7 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$7, decodeY(3.0f));
	double var$8 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$8, decodeY(0.88888896f));
	double var$9 = (double)decodeX(1.9537036f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	double var$10 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$10, decodeY(0.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect2() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(2.8f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.8f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath2() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$3, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath3() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(2.8f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(1.0f));
	double var$5 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$6, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath4() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(1.6234567f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(1.6296296f);
	$nc(this->path)->lineTo(var$2, decodeY(1.2037038f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(1.2006173f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(1.0f));
	double var$5 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$6, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath5() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(0.4f));
	double var$1 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(0.2f));
	double var$3 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$3, decodeY(2.8f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(2.8f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$7, decodeY(2.6f));
	double var$8 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$8, decodeY(2.6f));
	double var$9 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$9, decodeY(0.4f));
	double var$10 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$10, decodeY(0.4f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath6() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.4f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$3, decodeY(3.0f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$5, decodeY(2.4f));
	double var$6 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$6, decodeY(2.4f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath7() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6f));
	double var$1 = (double)decodeX(0.6037037f);
	$nc(this->path)->lineTo(var$1, decodeY(1.8425925f));
	double var$2 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$3, decodeY(1.0f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(1.3333334f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(2.6f));
	double var$6 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$6, decodeY(2.6f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath8() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2f);
	$nc(this->path)->moveTo(var$0, decodeY(2.6f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(0.40833336f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8645833f));
	double var$3 = (double)decodeX(0.79583335f);
	$nc(this->path)->lineTo(var$3, decodeY(0.8f));
	double var$4 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$4, decodeY(0.8f));
	double var$5 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$5, decodeY(0.6f));
	double var$6 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$6, decodeY(0.6f));
	double var$7 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$7, decodeY(0.4f));
	double var$8 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$8, decodeY(0.2f));
	double var$9 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$9, decodeY(0.2f));
	double var$10 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$10, decodeY(0.4f));
	double var$11 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$11, decodeY(0.6f));
	double var$12 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$12, decodeY(0.6f));
	double var$13 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$13, decodeY(2.6f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect3() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(0.4f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(0.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect4() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(0.4f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.2f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect5() {
	double var$0 = (double)decodeX(1.5f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(1.5f));
	float var$4 = decodeY(0.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath9() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(3.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.8f));
	double var$1 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$3, decodeY(0.6f));
	double var$4 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$4, decodeY(0.6f));
	double var$5 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$5, decodeY(0.4f));
	double var$6 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$6, decodeY(0.2f));
	double var$7 = (double)decodeX(0.5888889f);
	$nc(this->path)->lineTo(var$7, decodeY(0.20370372f));
	double var$8 = (double)decodeX(0.5962963f);
	$nc(this->path)->lineTo(var$8, decodeY(0.34814817f));
	double var$9 = (double)decodeX(0.34814817f);
	$nc(this->path)->lineTo(var$9, decodeY(0.6f));
	double var$10 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$10, decodeY(0.6f));
	double var$11 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$11, decodeY(2.6f));
	double var$12 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$12, decodeY(2.6f));
	double var$13 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$13, decodeY(1.3333334f));
	double var$14 = (double)decodeX(2.774074f);
	$nc(this->path)->lineTo(var$14, decodeY(1.1604939f));
	double var$15 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$15, decodeY(1.0f));
	double var$16 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$16, decodeY(1.0f));
	double var$17 = (double)decodeX(2.8925927f);
	$nc(this->path)->lineTo(var$17, decodeY(1.1882716f));
	double var$18 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$18, decodeY(1.3333334f));
	double var$19 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$19, decodeY(2.6f));
	double var$20 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$20, decodeY(2.8f));
	double var$21 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$21, decodeY(2.8f));
	double var$22 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$22, decodeY(2.6f));
	double var$23 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$23, decodeY(0.65185183f));
	double var$24 = (double)decodeX(0.63703704f);
	$nc(this->path)->lineTo(var$24, decodeY(0.0f));
	double var$25 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$25, decodeY(0.0f));
	double var$26 = (double)decodeX(1.5925925f);
	$nc(this->path)->lineTo(var$26, decodeY(0.4f));
	double var$27 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$27, decodeY(0.4f));
	double var$28 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$28, decodeY(0.6f));
	double var$29 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$29, decodeY(0.8f));
	double var$30 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$30, decodeY(0.8f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath10() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.4f);
	$nc(this->path)->moveTo(var$0, decodeY(1.0f));
	double var$1 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$1, decodeY(0.8f));
	double var$2 = (double)decodeX(0.74814814f);
	$nc(this->path)->lineTo(var$2, decodeY(0.8f));
	double var$3 = (double)decodeX(0.4037037f);
	$nc(this->path)->lineTo(var$3, decodeY(1.8425925f));
	double var$4 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$5, decodeY(2.6f));
	double var$6 = (double)decodeX(0.5925926f);
	$nc(this->path)->lineTo(var$6, decodeY(2.225926f));
	double var$7 = (double)decodeX(0.916f);
	$nc(this->path)->lineTo(var$7, decodeY(0.996f));
	double var$8 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$8, decodeY(1.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath11() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(2.2f);
	$nc(this->path)->moveTo(var$0, decodeY(2.2f));
	double var$1 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$1, decodeY(2.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath12() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.8f));
	double var$1 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$1, decodeY(3.0f));
	double var$2 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$3, decodeY(2.8f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(1.8333333f));
	double var$5 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$5, decodeY(1.3333334f));
	double var$6 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$7, decodeY(1.0f));
	double var$8 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$8, decodeY(0.4f));
	double var$9 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$9, decodeY(0.2f));
	double var$10 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$10, decodeY(0.2f));
	double var$11 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$11, decodeY(0.4f));
	double var$12 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$12, decodeY(0.6f));
	double var$13 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$13, decodeY(0.6f));
	double var$14 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$14, decodeY(0.8f));
	double var$15 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$15, decodeY(2.8f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath13() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2f);
	$nc(this->path)->moveTo(var$0, decodeY(2.8f));
	double var$1 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$1, decodeY(0.8f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(0.8f));
	double var$3 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$3, decodeY(0.6f));
	double var$4 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$4, decodeY(0.4f));
	double var$5 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$5, decodeY(0.4f));
	double var$6 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$6, decodeY(0.6f));
	double var$7 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$7, decodeY(0.6f));
	double var$8 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$8, decodeY(2.8f));
	double var$9 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$9, decodeY(2.8f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath14() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.4f);
	$nc(this->path)->moveTo(var$0, decodeY(2.0f));
	double var$1 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$1, decodeY(1.1666666f));
	double var$2 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$3, decodeY(1.0f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(2.8f));
	double var$5 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$5, decodeY(3.0f));
	double var$6 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$6, decodeY(3.0f));
	double var$7 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$7, decodeY(2.0f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath15() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6f);
	$nc(this->path)->moveTo(var$0, decodeY(2.8f));
	double var$1 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$1, decodeY(2.0f));
	double var$2 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$2, decodeY(1.1666666f));
	double var$3 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$3, decodeY(1.1666666f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(2.0f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(2.8f));
	double var$6 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$6, decodeY(2.8f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath16() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.1702899f);
	$nc(this->path)->moveTo(var$0, decodeY(1.2536231f));
	double var$1 = (double)decodeX(1.1666666f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0615941f));
	double var$2 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0978261f));
	double var$3 = (double)decodeX(2.7782607f);
	$nc(this->path)->lineTo(var$3, decodeY(1.25f));
	double var$4 = (double)decodeX(2.3913045f);
	$nc(this->path)->lineTo(var$4, decodeY(1.3188406f));
	double var$5 = (double)decodeX(2.3826087f);
	$nc(this->path)->lineTo(var$5, decodeY(1.7246377f));
	double var$6 = (double)decodeX(2.173913f);
	$nc(this->path)->lineTo(var$6, decodeY(1.9347827f));
	double var$7 = (double)decodeX(1.8695652f);
	$nc(this->path)->lineTo(var$7, decodeY(1.923913f));
	double var$8 = (double)decodeX(1.710145f);
	$nc(this->path)->lineTo(var$8, decodeY(1.7246377f));
	double var$9 = (double)decodeX(1.710145f);
	$nc(this->path)->lineTo(var$9, decodeY(1.3115941f));
	double var$10 = (double)decodeX(1.1702899f);
	$nc(this->path)->lineTo(var$10, decodeY(1.2536231f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath17() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.1666666f);
	$nc(this->path)->moveTo(var$0, decodeY(1.1666666f));
	double var$1 = (double)decodeX(1.1666666f);
	$nc(this->path)->lineTo(var$1, decodeY(0.9130435f));
	double var$2 = (double)decodeX(1.9456522f);
	$nc(this->path)->lineTo(var$2, decodeY(0.0f));
	double var$3 = (double)decodeX(2.0608697f);
	$nc(this->path)->lineTo(var$3, decodeY(0.0f));
	double var$4 = (double)decodeX(2.9956522f);
	$nc(this->path)->lineTo(var$4, decodeY(0.9130435f));
	double var$5 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$5, decodeY(1.1666666f));
	double var$6 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$6, decodeY(1.1666666f));
	double var$7 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$7, decodeY(1.6666667f));
	double var$8 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$8, decodeY(1.8333333f));
	double var$9 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$9, decodeY(1.8333333f));
	double var$10 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$10, decodeY(1.6666667f));
	double var$11 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$11, decodeY(1.1666666f));
	double var$12 = (double)decodeX(1.1666666f);
	$nc(this->path)->lineTo(var$12, decodeY(1.1666666f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath18() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.2717391f);
	$nc(this->path)->moveTo(var$0, decodeY(0.9956522f));
	double var$1 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$2, decodeY(1.6666667f));
	double var$3 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$3, decodeY(1.6666667f));
	double var$4 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$4, decodeY(1.0f));
	double var$5 = (double)decodeX(2.8652174f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$6, decodeY(0.13043478f));
	double var$7 = (double)decodeX(1.2717391f);
	$nc(this->path)->lineTo(var$7, decodeY(0.9956522f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath19() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.8333333f);
	$nc(this->path)->moveTo(var$0, decodeY(1.6666667f));
	double var$1 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$1, decodeY(1.0f));
	double var$2 = (double)decodeX(1.3913044f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(1.9963768f);
	$nc(this->path)->lineTo(var$3, decodeY(0.25652176f));
	double var$4 = (double)decodeX(2.6608696f);
	$nc(this->path)->lineTo(var$4, decodeY(1.0f));
	double var$5 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$6, decodeY(1.6666667f));
	double var$7 = (double)decodeX(1.8333333f);
	$nc(this->path)->lineTo(var$7, decodeY(1.6666667f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath20() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.22692308f);
	$nc(this->path)->moveTo(var$0, decodeY(0.061538465f));
	double var$1 = (double)decodeX(0.75384617f);
	$nc(this->path)->lineTo(var$1, decodeY(0.37692308f));
	double var$2 = (double)decodeX(0.91923076f);
	$nc(this->path)->lineTo(var$2, decodeY(0.01923077f));
	double var$3 = (double)decodeX(1.2532052f);
	$nc(this->path)->lineTo(var$3, decodeY(0.40769228f));
	double var$4 = (double)decodeX(1.7115386f);
	$nc(this->path)->lineTo(var$4, decodeY(0.13846155f));
	double var$5 = (double)decodeX(1.6923077f);
	$nc(this->path)->lineTo(var$5, decodeY(0.85f));
	double var$6 = (double)decodeX(2.169231f);
	$nc(this->path)->lineTo(var$6, decodeY(0.9115385f));
	double var$7 = (double)decodeX(1.7852564f);
	$nc(this->path)->lineTo(var$7, decodeY(1.3333334f));
	double var$8 = (double)decodeX(1.9166667f);
	$nc(this->path)->lineTo(var$8, decodeY(1.9679487f));
	double var$9 = (double)decodeX(1.3685898f);
	$nc(this->path)->lineTo(var$9, decodeY(1.8301282f));
	double var$10 = (double)decodeX(1.1314102f);
	$nc(this->path)->lineTo(var$10, decodeY(2.2115386f));
	double var$11 = (double)decodeX(0.63076925f);
	$nc(this->path)->lineTo(var$11, decodeY(1.8205128f));
	double var$12 = (double)decodeX(0.22692308f);
	$nc(this->path)->lineTo(var$12, decodeY(1.9262822f));
	double var$13 = (double)decodeX(0.31153846f);
	$nc(this->path)->lineTo(var$13, decodeY(1.4871795f));
	double var$14 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$14, decodeY(1.1538461f));
	double var$15 = (double)decodeX(0.38461536f);
	$nc(this->path)->lineTo(var$15, decodeY(0.68076926f));
	double var$16 = (double)decodeX(0.22692308f);
	$nc(this->path)->lineTo(var$16, decodeY(0.061538465f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath21() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.23461537f);
	$nc(this->path)->moveTo(var$0, decodeY(0.33076924f));
	double var$1 = (double)decodeX(0.32692307f);
	$nc(this->path)->lineTo(var$1, decodeY(0.21538463f));
	double var$2 = (double)decodeX(0.9653846f);
	$nc(this->path)->lineTo(var$2, decodeY(0.74615383f));
	double var$3 = (double)decodeX(1.0160257f);
	$nc(this->path)->lineTo(var$3, decodeY(0.01923077f));
	double var$4 = (double)decodeX(1.1506411f);
	$nc(this->path)->lineTo(var$4, decodeY(0.01923077f));
	double var$5 = (double)decodeX(1.2275641f);
	$nc(this->path)->lineTo(var$5, decodeY(0.72307694f));
	double var$6 = (double)decodeX(1.6987178f);
	$nc(this->path)->lineTo(var$6, decodeY(0.20769231f));
	double var$7 = (double)decodeX(1.8237178f);
	$nc(this->path)->lineTo(var$7, decodeY(0.37692308f));
	double var$8 = (double)decodeX(1.3878205f);
	$nc(this->path)->lineTo(var$8, decodeY(0.94230765f));
	double var$9 = (double)decodeX(1.9775641f);
	$nc(this->path)->lineTo(var$9, decodeY(1.0256411f));
	double var$10 = (double)decodeX(1.9839742f);
	$nc(this->path)->lineTo(var$10, decodeY(1.1474359f));
	double var$11 = (double)decodeX(1.4070512f);
	$nc(this->path)->lineTo(var$11, decodeY(1.2083334f));
	double var$12 = (double)decodeX(1.7980769f);
	$nc(this->path)->lineTo(var$12, decodeY(1.7307692f));
	double var$13 = (double)decodeX(1.7532051f);
	$nc(this->path)->lineTo(var$13, decodeY(1.8269231f));
	double var$14 = (double)decodeX(1.2211539f);
	$nc(this->path)->lineTo(var$14, decodeY(1.3365384f));
	double var$15 = (double)decodeX(1.1506411f);
	$nc(this->path)->lineTo(var$15, decodeY(1.9839742f));
	double var$16 = (double)decodeX(1.0288461f);
	$nc(this->path)->lineTo(var$16, decodeY(1.9775641f));
	double var$17 = (double)decodeX(0.95384616f);
	$nc(this->path)->lineTo(var$17, decodeY(1.3429488f));
	double var$18 = (double)decodeX(0.28846154f);
	$nc(this->path)->lineTo(var$18, decodeY(1.8012822f));
	double var$19 = (double)decodeX(0.20769231f);
	$nc(this->path)->lineTo(var$19, decodeY(1.7371795f));
	double var$20 = (double)decodeX(0.75f);
	$nc(this->path)->lineTo(var$20, decodeY(1.173077f));
	double var$21 = (double)decodeX(0.011538462f);
	$nc(this->path)->lineTo(var$21, decodeY(1.1634616f));
	double var$22 = (double)decodeX(0.015384616f);
	$nc(this->path)->lineTo(var$22, decodeY(1.0224359f));
	double var$23 = (double)decodeX(0.79615384f);
	$nc(this->path)->lineTo(var$23, decodeY(0.94230765f));
	double var$24 = (double)decodeX(0.23461537f);
	$nc(this->path)->lineTo(var$24, decodeY(0.33076924f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath22() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.58461535f);
	$nc(this->path)->moveTo(var$0, decodeY(0.6615385f));
	double var$1 = (double)decodeX(0.68846154f);
	$nc(this->path)->lineTo(var$1, decodeY(0.56923074f));
	double var$2 = (double)decodeX(0.9884615f);
	$nc(this->path)->lineTo(var$2, decodeY(0.80769235f));
	double var$3 = (double)decodeX(1.0352564f);
	$nc(this->path)->lineTo(var$3, decodeY(0.43076926f));
	double var$4 = (double)decodeX(1.1282052f);
	$nc(this->path)->lineTo(var$4, decodeY(0.43846154f));
	double var$5 = (double)decodeX(1.1891025f);
	$nc(this->path)->lineTo(var$5, decodeY(0.80769235f));
	double var$6 = (double)decodeX(1.4006411f);
	$nc(this->path)->lineTo(var$6, decodeY(0.59615386f));
	double var$7 = (double)decodeX(1.4967948f);
	$nc(this->path)->lineTo(var$7, decodeY(0.70384616f));
	double var$8 = (double)decodeX(1.3173077f);
	$nc(this->path)->lineTo(var$8, decodeY(0.9384615f));
	double var$9 = (double)decodeX(1.625f);
	$nc(this->path)->lineTo(var$9, decodeY(1.0256411f));
	double var$10 = (double)decodeX(1.6282051f);
	$nc(this->path)->lineTo(var$10, decodeY(1.1346154f));
	double var$11 = (double)decodeX(1.2564102f);
	$nc(this->path)->lineTo(var$11, decodeY(1.176282f));
	double var$12 = (double)decodeX(1.4711539f);
	$nc(this->path)->lineTo(var$12, decodeY(1.3910257f));
	double var$13 = (double)decodeX(1.4070512f);
	$nc(this->path)->lineTo(var$13, decodeY(1.4807693f));
	double var$14 = (double)decodeX(1.1858975f);
	$nc(this->path)->lineTo(var$14, decodeY(1.2724359f));
	double var$15 = (double)decodeX(1.1474359f);
	$nc(this->path)->lineTo(var$15, decodeY(1.6602564f));
	double var$16 = (double)decodeX(1.0416666f);
	$nc(this->path)->lineTo(var$16, decodeY(1.6602564f));
	double var$17 = (double)decodeX(0.9769231f);
	$nc(this->path)->lineTo(var$17, decodeY(1.2884616f));
	double var$18 = (double)decodeX(0.6923077f);
	$nc(this->path)->lineTo(var$18, decodeY(1.5f));
	double var$19 = (double)decodeX(0.6423077f);
	$nc(this->path)->lineTo(var$19, decodeY(1.3782052f));
	double var$20 = (double)decodeX(0.83076924f);
	$nc(this->path)->lineTo(var$20, decodeY(1.176282f));
	double var$21 = (double)decodeX(0.46923074f);
	$nc(this->path)->lineTo(var$21, decodeY(1.1474359f));
	double var$22 = (double)decodeX(0.48076925f);
	$nc(this->path)->lineTo(var$22, decodeY(1.0064102f));
	double var$23 = (double)decodeX(0.8230769f);
	$nc(this->path)->lineTo(var$23, decodeY(0.98461545f));
	double var$24 = (double)decodeX(0.58461535f);
	$nc(this->path)->lineTo(var$24, decodeY(0.6615385f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect6() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(2.2f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect7() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(2.2f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.2f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect8() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.2f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.2f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath23() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.4f);
	$nc(this->path)->moveTo(var$0, decodeY(2.2f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(2.8f));
	double var$2 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8f));
	double var$3 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$3, decodeY(2.6f));
	double var$4 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$5, decodeY(2.8f));
	double var$6 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$6, decodeY(2.8f));
	double var$7 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$7, decodeY(2.2f));
	double var$8 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$8, decodeY(2.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect9() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(2.8f);
	float var$3 = decodeX(1.6666667f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.8f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect10() {
	double var$0 = (double)decodeX(1.8333333f);
	double var$1 = (double)decodeY(2.8f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(1.8333333f));
	float var$4 = decodeY(3.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.8f));
	return this->rect;
}

$Ellipse2D* FileChooserPainter::decodeEllipse1() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(2.4f);
	float var$3 = decodeX(0.8f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.6f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(2.4f));
	return this->ellipse;
}

$Path2D* FileChooserPainter::decodePath24() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.4f));
	double var$1 = (double)decodeAnchorX(1.0f, 1.0f);
	double var$2 = (double)decodeAnchorY(0.4f, -1.0f);
	double var$3 = (double)decodeAnchorX(2.0f, -1.0f);
	double var$4 = (double)decodeAnchorY(0.4f, -1.0f);
	double var$5 = (double)decodeX(2.0f);
	$nc(this->path)->curveTo(var$1, var$2, var$3, var$4, var$5, decodeY(0.4f));
	double var$6 = (double)decodeAnchorX(2.0f, 1.0f);
	double var$7 = (double)decodeAnchorY(0.4f, 1.0f);
	double var$8 = (double)decodeAnchorX(2.2f, 0.0f);
	double var$9 = (double)decodeAnchorY(1.0f, -1.0f);
	double var$10 = (double)decodeX(2.2f);
	$nc(this->path)->curveTo(var$6, var$7, var$8, var$9, var$10, decodeY(1.0f));
	double var$11 = (double)decodeAnchorX(2.2f, 0.0f);
	double var$12 = (double)decodeAnchorY(1.0f, 1.0f);
	double var$13 = (double)decodeAnchorX(2.2f, 0.0f);
	double var$14 = (double)decodeAnchorY(1.5f, -2.0f);
	double var$15 = (double)decodeX(2.2f);
	$nc(this->path)->curveTo(var$11, var$12, var$13, var$14, var$15, decodeY(1.5f));
	double var$16 = (double)decodeAnchorX(2.2f, 0.0f);
	double var$17 = (double)decodeAnchorY(1.5f, 2.0f);
	double var$18 = (double)decodeAnchorX(1.6666667f, 1.0f);
	double var$19 = (double)decodeAnchorY(1.8333333f, 0.0f);
	double var$20 = (double)decodeX(1.6666667f);
	$nc(this->path)->curveTo(var$16, var$17, var$18, var$19, var$20, decodeY(1.8333333f));
	double var$21 = (double)decodeAnchorX(1.6666667f, -1.0f);
	double var$22 = (double)decodeAnchorY(1.8333333f, 0.0f);
	double var$23 = (double)decodeAnchorX(1.3333334f, 1.0f);
	double var$24 = (double)decodeAnchorY(1.8333333f, 0.0f);
	double var$25 = (double)decodeX(1.3333334f);
	$nc(this->path)->curveTo(var$21, var$22, var$23, var$24, var$25, decodeY(1.8333333f));
	double var$26 = (double)decodeAnchorX(1.3333334f, -1.0f);
	double var$27 = (double)decodeAnchorY(1.8333333f, 0.0f);
	double var$28 = (double)decodeAnchorX(0.8f, 0.0f);
	double var$29 = (double)decodeAnchorY(1.5f, 2.0f);
	double var$30 = (double)decodeX(0.8f);
	$nc(this->path)->curveTo(var$26, var$27, var$28, var$29, var$30, decodeY(1.5f));
	double var$31 = (double)decodeAnchorX(0.8f, 0.0f);
	double var$32 = (double)decodeAnchorY(1.5f, -2.0f);
	double var$33 = (double)decodeAnchorX(0.8f, 0.0f);
	double var$34 = (double)decodeAnchorY(1.0f, 1.0f);
	double var$35 = (double)decodeX(0.8f);
	$nc(this->path)->curveTo(var$31, var$32, var$33, var$34, var$35, decodeY(1.0f));
	double var$36 = (double)decodeAnchorX(0.8f, 0.0f);
	double var$37 = (double)decodeAnchorY(1.0f, -1.0f);
	double var$38 = (double)decodeAnchorX(1.0f, -1.0f);
	double var$39 = (double)decodeAnchorY(0.4f, 1.0f);
	double var$40 = (double)decodeX(1.0f);
	$nc(this->path)->curveTo(var$36, var$37, var$38, var$39, var$40, decodeY(0.4f));
	$nc(this->path)->closePath();
	return this->path;
}

$Ellipse2D* FileChooserPainter::decodeEllipse2() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(0.8f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(0.4f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.2f));
	return this->ellipse;
}

$Ellipse2D* FileChooserPainter::decodeEllipse3() {
	double var$0 = (double)decodeX(2.2f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(2.2f));
	float var$4 = decodeY(0.4f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.2f));
	return this->ellipse;
}

$Ellipse2D* FileChooserPainter::decodeEllipse4() {
	double var$0 = (double)decodeX(2.2f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(2.2f));
	float var$4 = decodeY(1.1666666f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->ellipse;
}

$Ellipse2D* FileChooserPainter::decodeEllipse5() {
	double var$0 = (double)decodeX(2.2f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(2.2f));
	float var$4 = decodeY(1.8333333f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->ellipse;
}

$Ellipse2D* FileChooserPainter::decodeEllipse6() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(0.8f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(1.8333333f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->ellipse;
}

$Ellipse2D* FileChooserPainter::decodeEllipse7() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(0.8f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(1.1666666f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->ellipse;
}

$Rectangle2D* FileChooserPainter::decodeRect11() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(2.2f);
	float var$3 = decodeX(1.0f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.2f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect12() {
	double var$0 = (double)decodeX(1.1666666f);
	double var$1 = (double)decodeY(2.2f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(1.1666666f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.2f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect13() {
	double var$0 = (double)decodeX(1.5f);
	double var$1 = (double)decodeY(2.2f);
	float var$3 = decodeX(1.6666667f);
	double var$2 = (double)(var$3 - decodeX(1.5f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.2f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath25() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$1, decodeY(0.0f));
	double var$2 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$2, decodeY(0.0f));
	double var$3 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$3, decodeY(0.4f));
	double var$4 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$4, decodeY(2.8f));
	double var$5 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$5, decodeY(3.0f));
	double var$6 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$6, decodeY(3.0f));
	double var$7 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$7, decodeY(2.8f));
	double var$8 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$8, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath26() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2f);
	$nc(this->path)->moveTo(var$0, decodeY(0.4f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$2, decodeY(0.2f));
	double var$3 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$3, decodeY(0.6f));
	double var$4 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$4, decodeY(2.8f));
	double var$5 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$5, decodeY(2.8f));
	double var$6 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$6, decodeY(0.4f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath27() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.8f);
	$nc(this->path)->moveTo(var$0, decodeY(1.6666667f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5f));
	double var$2 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.5f));
	double var$3 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$3, decodeY(1.6666667f));
	double var$4 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$5, decodeY(2.6f));
	double var$6 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$6, decodeY(1.6666667f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath28() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.1666666f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(1.1666666f);
	$nc(this->path)->lineTo(var$1, decodeY(1.1666666f));
	double var$2 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$2, decodeY(1.1666666f));
	double var$3 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$3, decodeY(0.4f));
	double var$4 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$4, decodeY(0.4f));
	double var$5 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$5, decodeY(1.0f));
	double var$6 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$7, decodeY(0.4f));
	double var$8 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$8, decodeY(0.4f));
	double var$9 = (double)decodeX(2.2f);
	$nc(this->path)->lineTo(var$9, decodeY(0.2f));
	double var$10 = (double)decodeX(1.1666666f);
	$nc(this->path)->lineTo(var$10, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath29() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.8f);
	$nc(this->path)->moveTo(var$0, decodeY(0.2f));
	double var$1 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$1, decodeY(0.2f));
	double var$2 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$2, decodeY(1.0f));
	double var$3 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$3, decodeY(1.0f));
	double var$4 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$4, decodeY(0.2f));
	double var$5 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$5, decodeY(0.2f));
	double var$6 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$6, decodeY(1.0f));
	double var$7 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$7, decodeY(1.0f));
	double var$8 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$8, decodeY(1.1666666f));
	double var$9 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$9, decodeY(1.1666666f));
	double var$10 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$10, decodeY(0.2f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect14() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(2.6f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(2.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.6f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect15() {
	double var$0 = (double)decodeX(0.36153847f);
	double var$1 = (double)decodeY(2.3576922f);
	float var$3 = decodeX(0.63461536f);
	double var$2 = (double)(var$3 - decodeX(0.36153847f));
	float var$4 = decodeY(2.6807692f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.3576922f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect16() {
	double var$0 = (double)decodeX(2.376923f);
	double var$1 = (double)decodeY(2.3807693f);
	float var$3 = decodeX(2.6384616f);
	double var$2 = (double)(var$3 - decodeX(2.376923f));
	float var$4 = decodeY(2.6846154f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.3807693f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect17() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(2.4f);
	float var$3 = decodeX(0.6f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.4f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect18() {
	double var$0 = (double)decodeX(2.4f);
	double var$1 = (double)decodeY(2.4f);
	float var$3 = decodeX(2.6f);
	double var$2 = (double)(var$3 - decodeX(2.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.4f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath30() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.4f);
	$nc(this->path)->moveTo(var$0, decodeY(1.5f));
	double var$1 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$2, decodeY(2.8f));
	double var$3 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$3, decodeY(2.8f));
	double var$4 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$4, decodeY(2.6f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(1.5f));
	double var$6 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$6, decodeY(1.5f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath31() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6f);
	$nc(this->path)->moveTo(var$0, decodeY(1.5f));
	double var$1 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$1, decodeY(2.6f));
	double var$2 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$2, decodeY(2.6f));
	double var$3 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$3, decodeY(1.5f));
	double var$4 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$4, decodeY(0.8f));
	double var$5 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$5, decodeY(1.5f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect19() {
	double var$0 = (double)decodeX(1.6666667f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(1.6666667f));
	float var$4 = decodeY(2.2f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect20() {
	double var$0 = (double)decodeX(1.8333333f);
	double var$1 = (double)decodeY(1.8333333f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.8333333f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.8333333f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath32() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.8f));
	double var$1 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$1, decodeY(2.8f));
	double var$2 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$2, decodeY(1.8333333f));
	double var$3 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$3, decodeY(1.6666667f));
	double var$4 = (double)decodeX(1.1666666f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6666667f));
	double var$5 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$5, decodeY(1.8333333f));
	double var$6 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$6, decodeY(2.8f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect21() {
	double var$0 = (double)decodeX(1.1666666f);
	double var$1 = (double)decodeY(1.8333333f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(1.1666666f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.8333333f));
	return this->rect;
}

$Path2D* FileChooserPainter::decodePath33() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3333334f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(1.6666667f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(1.6666667f));
	double var$3 = (double)decodeX(1.3974359f);
	$nc(this->path)->lineTo(var$3, decodeY(0.6f));
	double var$4 = (double)decodeX(1.596154f);
	$nc(this->path)->lineTo(var$4, decodeY(0.6f));
	double var$5 = (double)decodeX(2.6f);
	$nc(this->path)->lineTo(var$5, decodeY(1.6666667f));
	double var$6 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$6, decodeY(1.6666667f));
	double var$7 = (double)decodeX(3.0f);
	$nc(this->path)->lineTo(var$7, decodeY(1.3333334f));
	double var$8 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$8, decodeY(0.0f));
	double var$9 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$9, decodeY(0.0f));
	double var$10 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$10, decodeY(1.3333334f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath34() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.2576923f);
	$nc(this->path)->moveTo(var$0, decodeY(1.3717948f));
	double var$1 = (double)decodeX(0.2f);
	$nc(this->path)->lineTo(var$1, decodeY(1.5f));
	double var$2 = (double)decodeX(0.3230769f);
	$nc(this->path)->lineTo(var$2, decodeY(1.4711539f));
	double var$3 = (double)decodeX(1.4006411f);
	$nc(this->path)->lineTo(var$3, decodeY(0.40384617f));
	double var$4 = (double)decodeX(1.5929487f);
	$nc(this->path)->lineTo(var$4, decodeY(0.4f));
	double var$5 = (double)decodeX(2.6615386f);
	$nc(this->path)->lineTo(var$5, decodeY(1.4615384f));
	double var$6 = (double)decodeX(2.8f);
	$nc(this->path)->lineTo(var$6, decodeY(1.5f));
	double var$7 = (double)decodeX(2.7461538f);
	$nc(this->path)->lineTo(var$7, decodeY(1.3653846f));
	double var$8 = (double)decodeX(1.6089742f);
	$nc(this->path)->lineTo(var$8, decodeY(0.19615385f));
	double var$9 = (double)decodeX(1.4070512f);
	$nc(this->path)->lineTo(var$9, decodeY(0.2f));
	double var$10 = (double)decodeX(0.2576923f);
	$nc(this->path)->lineTo(var$10, decodeY(1.3717948f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath35() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.6f);
	$nc(this->path)->moveTo(var$0, decodeY(1.5f));
	double var$1 = (double)decodeX(1.3333334f);
	$nc(this->path)->lineTo(var$1, decodeY(0.6f));
	double var$2 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$2, decodeY(0.6f));
	double var$3 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$3, decodeY(1.1666666f));
	double var$4 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6666667f));
	double var$5 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$5, decodeY(1.6666667f));
	double var$6 = (double)decodeX(0.6f);
	$nc(this->path)->lineTo(var$6, decodeY(1.5f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath36() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(1.6666667f);
	$nc(this->path)->moveTo(var$0, decodeY(0.6f));
	double var$1 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$1, decodeY(0.6f));
	double var$2 = (double)decodeX(1.5f);
	$nc(this->path)->lineTo(var$2, decodeY(1.1666666f));
	double var$3 = (double)decodeX(2.0f);
	$nc(this->path)->lineTo(var$3, decodeY(1.6666667f));
	double var$4 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$4, decodeY(1.6666667f));
	double var$5 = (double)decodeX(2.4f);
	$nc(this->path)->lineTo(var$5, decodeY(1.3333334f));
	double var$6 = (double)decodeX(1.6666667f);
	$nc(this->path)->lineTo(var$6, decodeY(0.6f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect22() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(2.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect23() {
	double var$0 = (double)decodeX(0.4f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.4f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.2f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect24() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(0.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect25() {
	double var$0 = (double)decodeX(1.5f);
	double var$1 = (double)decodeY(1.3333334f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(1.5f));
	float var$4 = decodeY(1.5f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.3333334f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect26() {
	double var$0 = (double)decodeX(1.5f);
	double var$1 = (double)decodeY(2.0f);
	float var$3 = decodeX(2.4f);
	double var$2 = (double)(var$3 - decodeX(1.5f));
	float var$4 = decodeY(2.2f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.0f));
	return this->rect;
}

$Ellipse2D* FileChooserPainter::decodeEllipse8() {
	double var$0 = (double)decodeX(0.6f);
	double var$1 = (double)decodeY(0.8f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(0.6f));
	float var$4 = decodeY(2.4f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(0.8f));
	return this->ellipse;
}

$Ellipse2D* FileChooserPainter::decodeEllipse9() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(2.2f);
	$nc(this->ellipse)->setFrame(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->ellipse;
}

$Path2D* FileChooserPainter::decodePath37() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.0f);
	$nc(this->path)->moveTo(var$0, decodeY(2.8f));
	double var$1 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$1, decodeY(3.0f));
	double var$2 = (double)decodeX(0.4f);
	$nc(this->path)->lineTo(var$2, decodeY(3.0f));
	double var$3 = (double)decodeX(1.0f);
	$nc(this->path)->lineTo(var$3, decodeY(2.2f));
	double var$4 = (double)decodeX(0.8f);
	$nc(this->path)->lineTo(var$4, decodeY(1.8333333f));
	double var$5 = (double)decodeX(0.0f);
	$nc(this->path)->lineTo(var$5, decodeY(2.8f));
	$nc(this->path)->closePath();
	return this->path;
}

$Path2D* FileChooserPainter::decodePath38() {
	$nc(this->path)->reset();
	double var$0 = (double)decodeX(0.1826087f);
	$nc(this->path)->moveTo(var$0, decodeY(2.7217393f));
	double var$1 = (double)decodeX(0.2826087f);
	$nc(this->path)->lineTo(var$1, decodeY(2.8217392f));
	double var$2 = (double)decodeX(1.0181159f);
	$nc(this->path)->lineTo(var$2, decodeY(2.095652f));
	double var$3 = (double)decodeX(0.9130435f);
	$nc(this->path)->lineTo(var$3, decodeY(1.9891305f));
	double var$4 = (double)decodeX(0.1826087f);
	$nc(this->path)->lineTo(var$4, decodeY(2.7217393f));
	$nc(this->path)->closePath();
	return this->path;
}

$Rectangle2D* FileChooserPainter::decodeRect27() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.3333334f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.5f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.3333334f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect28() {
	double var$0 = (double)decodeX(1.5f);
	double var$1 = (double)decodeY(1.3333334f);
	float var$3 = decodeX(1.8333333f);
	double var$2 = (double)(var$3 - decodeX(1.5f));
	float var$4 = decodeY(1.5f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.3333334f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect29() {
	double var$0 = (double)decodeX(1.5f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(1.8333333f);
	double var$2 = (double)(var$3 - decodeX(1.5f));
	float var$4 = decodeY(1.8333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect30() {
	double var$0 = (double)decodeX(1.0f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(1.3333334f);
	double var$2 = (double)(var$3 - decodeX(1.0f));
	float var$4 = decodeY(1.8333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect31() {
	double var$0 = (double)decodeX(0.0f);
	double var$1 = (double)decodeY(0.0f);
	float var$3 = decodeX(3.0f);
	double var$2 = (double)(var$3 - decodeX(0.0f));
	float var$4 = decodeY(2.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.0f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect32() {
	double var$0 = (double)decodeX(0.2f);
	double var$1 = (double)decodeY(0.2f);
	float var$3 = decodeX(2.8f);
	double var$2 = (double)(var$3 - decodeX(0.2f));
	float var$4 = decodeY(2.6f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.2f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect33() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(0.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect34() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(0.6f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(0.8f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.6f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect35() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(1.1666666f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect36() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(1.0f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(1.1666666f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.0f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect37() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(1.3333334f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(1.5f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.3333334f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect38() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(1.3333334f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(1.5f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.3333334f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect39() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(1.8333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect40() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(1.6666667f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(1.8333333f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.6666667f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect41() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(2.0f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(2.2f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.0f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect42() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(2.0f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(2.2f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.0f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect43() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(0.8f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.8f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect44() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(0.8f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(1.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(0.8f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect45() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(1.1666666f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(1.3333334f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.1666666f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect46() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(1.1666666f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(1.3333334f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.1666666f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect47() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(1.5f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(1.6666667f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.5f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect48() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(1.5f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(1.6666667f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.5f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect49() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(1.8333333f);
	float var$3 = decodeX(2.0f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.8333333f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect50() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(1.8333333f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(2.0f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(1.8333333f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect51() {
	double var$0 = (double)decodeX(0.8f);
	double var$1 = (double)decodeY(2.2f);
	float var$3 = decodeX(1.1666666f);
	double var$2 = (double)(var$3 - decodeX(0.8f));
	float var$4 = decodeY(2.4f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.2f));
	return this->rect;
}

$Rectangle2D* FileChooserPainter::decodeRect52() {
	double var$0 = (double)decodeX(1.3333334f);
	double var$1 = (double)decodeY(2.2f);
	float var$3 = decodeX(2.2f);
	double var$2 = (double)(var$3 - decodeX(1.3333334f));
	float var$4 = decodeY(2.4f);
	$nc(this->rect)->setRect(var$0, var$1, var$2, var$4 - decodeY(2.2f));
	return this->rect;
}

$Paint* FileChooserPainter::decodeGradient1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.046296295f * w) + x, (0.9675926f * h) + y, (0.4861111f * w) + x, (0.5324074f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color4,
		$(decodeColor(this->color4, this->color5, 0.5f)),
		this->color5
	}));
}

$Paint* FileChooserPainter::decodeGradient2($Shape* s) {
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

$Paint* FileChooserPainter::decodeGradient3($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.04191617f,
		0.10329342f,
		0.16467066f,
		0.24550897f,
		0.3263473f,
		0.6631737f,
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

$Paint* FileChooserPainter::decodeGradient4($Shape* s) {
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
		$(decodeColor(this->color6, this->color15, 0.5f)),
		this->color15
	}));
}

$Paint* FileChooserPainter::decodeGradient5($Shape* s) {
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

$Paint* FileChooserPainter::decodeGradient6($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.12724552f,
		0.25449103f,
		0.62724555f,
		1.0f
	}), $$new($ColorArray, {
		this->color21,
		$(decodeColor(this->color21, this->color22, 0.5f)),
		this->color22,
		$(decodeColor(this->color22, this->color23, 0.5f)),
		this->color23
	}));
}

$Paint* FileChooserPainter::decodeGradient7($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.06392045f,
		0.1278409f,
		0.5213069f,
		0.91477275f
	}), $$new($ColorArray, {
		this->color25,
		$(decodeColor(this->color25, this->color26, 0.5f)),
		this->color26,
		$(decodeColor(this->color26, this->color27, 0.5f)),
		this->color27
	}));
}

$Paint* FileChooserPainter::decodeGradient8($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.048295453f,
		0.09659091f,
		0.5482955f,
		1.0f
	}), $$new($ColorArray, {
		this->color28,
		$(decodeColor(this->color28, this->color6, 0.5f)),
		this->color6,
		$(decodeColor(this->color6, this->color15, 0.5f)),
		this->color15
	}));
}

$Paint* FileChooserPainter::decodeGradient9($Shape* s) {
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
		this->color29,
		$(decodeColor(this->color29, this->color30, 0.5f)),
		this->color30
	}));
}

$Paint* FileChooserPainter::decodeGradient10($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.06534091f,
		0.13068181f,
		0.3096591f,
		0.48863637f,
		0.7443182f,
		1.0f
	}), $$new($ColorArray, {
		this->color11,
		$(decodeColor(this->color11, this->color12, 0.5f)),
		this->color12,
		$(decodeColor(this->color12, this->color31, 0.5f)),
		this->color31,
		$(decodeColor(this->color31, this->color14, 0.5f)),
		this->color14
	}));
}

$Paint* FileChooserPainter::decodeGradient11($Shape* s) {
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
		this->color33,
		$(decodeColor(this->color33, this->color34, 0.5f)),
		this->color34
	}));
}

$Paint* FileChooserPainter::decodeGradient12($Shape* s) {
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
		this->color36,
		$(decodeColor(this->color36, this->color37, 0.5f)),
		this->color37
	}));
}

$Paint* FileChooserPainter::decodeRadial1($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeRadialGradient((0.5f * w) + x, (1.0f * h) + y, 0.53913116f, $$new($floats, {
		0.11290322f,
		0.17419355f,
		0.23548387f,
		0.31129032f,
		0.38709676f,
		0.47903225f,
		0.57096773f
	}), $$new($ColorArray, {
		this->color40,
		$(decodeColor(this->color40, this->color41, 0.5f)),
		this->color41,
		$(decodeColor(this->color41, this->color41, 0.5f)),
		this->color41,
		$(decodeColor(this->color41, this->color42, 0.5f)),
		this->color42
	}));
}

$Paint* FileChooserPainter::decodeGradient13($Shape* s) {
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
		this->color45,
		$(decodeColor(this->color45, this->color46, 0.5f)),
		this->color46
	}));
}

$Paint* FileChooserPainter::decodeGradient14($Shape* s) {
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
		this->color47,
		$(decodeColor(this->color47, this->color48, 0.5f)),
		this->color48
	}));
}

$Paint* FileChooserPainter::decodeGradient15($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.3983871f,
		0.7967742f,
		0.8983871f,
		1.0f
	}), $$new($ColorArray, {
		this->color51,
		$(decodeColor(this->color51, this->color52, 0.5f)),
		this->color52,
		$(decodeColor(this->color52, this->color51, 0.5f)),
		this->color51
	}));
}

$Paint* FileChooserPainter::decodeGradient16($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.061290324f,
		0.12258065f,
		0.5016129f,
		0.88064516f,
		0.9403226f,
		1.0f
	}), $$new($ColorArray, {
		this->color57,
		$(decodeColor(this->color57, this->color58, 0.5f)),
		this->color58,
		$(decodeColor(this->color58, this->color59, 0.5f)),
		this->color59,
		$(decodeColor(this->color59, this->color44, 0.5f)),
		this->color44
	}));
}

$Paint* FileChooserPainter::decodeGradient17($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.05f,
		0.1f,
		0.19193548f,
		0.28387097f,
		0.5209677f,
		0.7580645f,
		0.87903225f,
		1.0f
	}), $$new($ColorArray, {
		this->color60,
		$(decodeColor(this->color60, this->color61, 0.5f)),
		this->color61,
		$(decodeColor(this->color61, this->color62, 0.5f)),
		this->color62,
		$(decodeColor(this->color62, this->color63, 0.5f)),
		this->color63,
		$(decodeColor(this->color63, this->color64, 0.5f)),
		this->color64
	}));
}

$Paint* FileChooserPainter::decodeGradient18($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.058064517f,
		0.090322584f,
		0.12258065f,
		0.15645161f,
		0.19032258f,
		0.22741935f,
		0.26451612f,
		0.31290323f,
		0.36129034f,
		0.38225806f,
		0.4032258f,
		0.4596774f,
		0.516129f,
		0.54193544f,
		0.56774193f,
		0.61451614f,
		0.66129035f,
		0.70645165f,
		0.7516129f
	}), $$new($ColorArray, {
		this->color65,
		$(decodeColor(this->color65, this->color40, 0.5f)),
		this->color40,
		$(decodeColor(this->color40, this->color40, 0.5f)),
		this->color40,
		$(decodeColor(this->color40, this->color65, 0.5f)),
		this->color65,
		$(decodeColor(this->color65, this->color65, 0.5f)),
		this->color65,
		$(decodeColor(this->color65, this->color40, 0.5f)),
		this->color40,
		$(decodeColor(this->color40, this->color40, 0.5f)),
		this->color40,
		$(decodeColor(this->color40, this->color66, 0.5f)),
		this->color66,
		$(decodeColor(this->color66, this->color66, 0.5f)),
		this->color66,
		$(decodeColor(this->color66, this->color40, 0.5f)),
		this->color40
	}));
}

$Paint* FileChooserPainter::decodeGradient19($Shape* s) {
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
		this->color67,
		$(decodeColor(this->color67, this->color67, 0.5f)),
		this->color67
	}));
}

$Paint* FileChooserPainter::decodeGradient20($Shape* s) {
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
		this->color74,
		$(decodeColor(this->color74, this->color75, 0.5f)),
		this->color75
	}));
}

$Paint* FileChooserPainter::decodeGradient21($Shape* s) {
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
		this->color77,
		$(decodeColor(this->color77, this->color78, 0.5f)),
		this->color78
	}));
}

$Paint* FileChooserPainter::decodeGradient22($Shape* s) {
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
		this->color79,
		$(decodeColor(this->color79, this->color80, 0.5f)),
		this->color80
	}));
}

$Paint* FileChooserPainter::decodeGradient23($Shape* s) {
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
		this->color81,
		$(decodeColor(this->color81, this->color82, 0.5f)),
		this->color82
	}));
}

$Paint* FileChooserPainter::decodeGradient24($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.43076923f * w) + x, (0.37820512f * h) + y, (0.7076923f * w) + x, (0.6730769f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color84,
		$(decodeColor(this->color84, this->color85, 0.5f)),
		this->color85
	}));
}

$Paint* FileChooserPainter::decodeGradient25($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.63076925f * w) + x, (0.3621795f * h) + y, (0.28846154f * w) + x, (0.73397434f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color84,
		$(decodeColor(this->color84, this->color86, 0.5f)),
		this->color86
	}));
}

$Paint* FileChooserPainter::decodeGradient26($Shape* s) {
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
		this->color87,
		$(decodeColor(this->color87, this->color88, 0.5f)),
		this->color88
	}));
}

$Paint* FileChooserPainter::decodeGradient27($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.056818184f,
		0.11363637f,
		0.34232956f,
		0.57102275f,
		0.7855114f,
		1.0f
	}), $$new($ColorArray, {
		this->color89,
		$(decodeColor(this->color89, this->color90, 0.5f)),
		this->color90,
		$(decodeColor(this->color90, this->color91, 0.5f)),
		this->color91,
		$(decodeColor(this->color91, this->color92, 0.5f)),
		this->color92
	}));
}

$Paint* FileChooserPainter::decodeGradient28($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.75f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.5f,
		1.0f
	}), $$new($ColorArray, {
		this->color95,
		$(decodeColor(this->color95, this->color96, 0.5f)),
		this->color96
	}));
}

$Paint* FileChooserPainter::decodeRadial2($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeRadialGradient((0.49223602f * w) + x, (0.9751553f * h) + y, 0.73615754f, $$new($floats, {
		0.0f,
		0.40625f,
		1.0f
	}), $$new($ColorArray, {
		this->color97,
		$(decodeColor(this->color97, this->color98, 0.5f)),
		this->color98
	}));
}

$Paint* FileChooserPainter::decodeGradient29($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.0f * h) + y, (1.0f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.38352272f,
		0.4190341f,
		0.45454547f,
		0.484375f,
		0.51420456f
	}), $$new($ColorArray, {
		this->color99,
		$(decodeColor(this->color99, this->color100, 0.5f)),
		this->color100,
		$(decodeColor(this->color100, this->color101, 0.5f)),
		this->color101
	}));
}

$Paint* FileChooserPainter::decodeGradient30($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((1.0f * w) + x, (0.0f * h) + y, (0.0f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.12215909f,
		0.16051137f,
		0.19886364f,
		0.2627841f,
		0.32670453f,
		0.43039775f,
		0.53409094f
	}), $$new($ColorArray, {
		this->color102,
		$(decodeColor(this->color102, this->color35, 0.5f)),
		this->color35,
		$(decodeColor(this->color35, this->color35, 0.5f)),
		this->color35,
		$(decodeColor(this->color35, this->color103, 0.5f)),
		this->color103
	}));
}

$Paint* FileChooserPainter::decodeGradient31($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.5f * w) + x, (0.0f * h) + y, (0.5f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.038352273f,
		0.07670455f,
		0.24289773f,
		0.4090909f,
		0.7045455f,
		1.0f
	}), $$new($ColorArray, {
		this->color89,
		$(decodeColor(this->color89, this->color90, 0.5f)),
		this->color90,
		$(decodeColor(this->color90, this->color108, 0.5f)),
		this->color108,
		$(decodeColor(this->color108, this->color92, 0.5f)),
		this->color92
	}));
}

$Paint* FileChooserPainter::decodeGradient32($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.0f * h) + y, (1.0f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.25f,
		0.33522725f,
		0.42045453f,
		0.50142044f,
		0.5823864f
	}), $$new($ColorArray, {
		this->color109,
		$(decodeColor(this->color109, this->color110, 0.5f)),
		this->color110,
		$(decodeColor(this->color110, this->color109, 0.5f)),
		this->color109
	}));
}

$Paint* FileChooserPainter::decodeGradient33($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.25f * w) + x, (0.0f * h) + y, (0.75f * w) + x, (1.0f * h) + y, $$new($floats, {
		0.0f,
		0.24147727f,
		0.48295453f,
		0.74147725f,
		1.0f
	}), $$new($ColorArray, {
		this->color114,
		$(decodeColor(this->color114, this->color115, 0.5f)),
		this->color115,
		$(decodeColor(this->color115, this->color114, 0.5f)),
		this->color114
	}));
}

$Paint* FileChooserPainter::decodeGradient34($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.0f * h) + y, (1.0f * w) + x, (0.0f * h) + y, $$new($floats, {
		0.0f,
		0.21732955f,
		0.4346591f
	}), $$new($ColorArray, {
		this->color117,
		$(decodeColor(this->color117, this->color118, 0.5f)),
		this->color118
	}));
}

$Paint* FileChooserPainter::decodeGradient35($Shape* s) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle2D, bounds, $nc(s)->getBounds2D());
	float x = (float)$nc(bounds)->getX();
	float y = (float)bounds->getY();
	float w = (float)bounds->getWidth();
	float h = (float)bounds->getHeight();
	return decodeGradient((0.0f * w) + x, (0.0f * h) + y, (1.0f * w) + x, (0.0f * h) + y, $$new($floats, {
		0.0f,
		0.21448864f,
		0.42897728f,
		0.7144886f,
		1.0f
	}), $$new($ColorArray, {
		this->color119,
		$(decodeColor(this->color119, this->color120, 0.5f)),
		this->color120,
		$(decodeColor(this->color120, this->color119, 0.5f)),
		this->color119
	}));
}

FileChooserPainter::FileChooserPainter() {
}

$Class* FileChooserPainter::load$($String* name, bool initialize) {
	$loadClass(FileChooserPainter, name, initialize, &_FileChooserPainter_ClassInfo_, allocate$FileChooserPainter);
	return class$;
}

$Class* FileChooserPainter::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
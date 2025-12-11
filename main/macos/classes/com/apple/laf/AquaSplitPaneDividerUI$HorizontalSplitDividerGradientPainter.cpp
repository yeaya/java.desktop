#include <com/apple/laf/AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter.h>

#include <com/apple/laf/AquaSplitPaneDividerUI.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/GradientPaint.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/Paint.h>
#include <jcpp.h>

using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $GradientPaint = ::java::awt::GradientPaint;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $Paint = ::java::awt::Paint;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, instance$)},
	{"startColor", "Ljava/awt/Color;", nullptr, $FINAL, $field(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, startColor)},
	{"endColor", "Ljava/awt/Color;", nullptr, $FINAL, $field(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, endColor)},
	{"borderLines", "Ljava/awt/Color;", nullptr, $FINAL, $field(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, borderLines)},
	{}
};

$MethodInfo _AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::*)()>(&AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"instance", "()Lcom/apple/laf/AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter;", nullptr, $STATIC, $method(static_cast<AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter*(*)()>(&AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::instance))},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter", "com.apple.laf.AquaSplitPaneDividerUI", "HorizontalSplitDividerGradientPainter", $STATIC},
	{}
};

$ClassInfo _AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter",
	"java.lang.Object",
	"javax.swing.border.Border",
	_AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_FieldInfo_,
	_AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSplitPaneDividerUI"
};

$Object* allocate$AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter($Class* clazz) {
	return $of($alloc(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter));
}

$AquaUtils$RecyclableSingleton* AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::instance$ = nullptr;

void AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::init$() {
	$init($Color);
	$set(this, startColor, $Color::white);
	$set(this, endColor, $new($Color, 217, 217, 217));
	$set(this, borderLines, $Color::lightGray);
}

AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter* AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::instance() {
	$init(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter);
	return $cast(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, $nc(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::instance$)->get());
}

$Insets* AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::getBorderInsets($Component* c) {
	return $new($Insets, 0, 0, 0, 0);
}

bool AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::isBorderOpaque() {
	return true;
}

void AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Graphics2D, g))) {
		return;
	}
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	$var($Color, oldColor, $nc(g2d)->getColor());
	g2d->setPaint($$new($GradientPaint, (float)0, (float)0, this->startColor, (float)0, (float)height, this->endColor));
	g2d->fillRect(x, y, width, height);
	g2d->setColor(this->borderLines);
	g2d->drawLine(x, y, x + width, y);
	g2d->drawLine(x, y + height - 1, x + width, y + height - 1);
	g2d->setColor(oldColor);
}

void clinit$AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter($Class* class$) {
	$assignStatic(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::instance$, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::class$));
}

AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter() {
}

$Class* AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::load$($String* name, bool initialize) {
	$loadClass(AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, name, initialize, &_AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter_ClassInfo_, clinit$AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter, allocate$AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter);
	return class$;
}

$Class* AquaSplitPaneDividerUI$HorizontalSplitDividerGradientPainter::class$ = nullptr;

		} // laf
	} // apple
} // com
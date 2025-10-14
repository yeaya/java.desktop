#include <javax/swing/colorchooser/RecentSwatchPanel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $UIManager = ::javax::swing::UIManager;
using $SwatchPanel = ::javax::swing::colorchooser::SwatchPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

$MethodInfo _RecentSwatchPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RecentSwatchPanel::*)()>(&RecentSwatchPanel::init$))},
	{"initColors", "()V", nullptr, $PROTECTED},
	{"initValues", "()V", nullptr, $PROTECTED},
	{"setMostRecentColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RecentSwatchPanel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.RecentSwatchPanel",
	"javax.swing.colorchooser.SwatchPanel",
	nullptr,
	nullptr,
	_RecentSwatchPanel_MethodInfo_
};

$Object* allocate$RecentSwatchPanel($Class* clazz) {
	return $of($alloc(RecentSwatchPanel));
}

void RecentSwatchPanel::init$() {
	$SwatchPanel::init$();
}

void RecentSwatchPanel::initValues() {
	$set(this, swatchSize, $UIManager::getDimension("ColorChooser.swatchesRecentSwatchSize"_s, $(getLocale())));
	$set(this, numSwatches, $new($Dimension, 5, 7));
	$set(this, gap, $new($Dimension, 1, 1));
}

void RecentSwatchPanel::initColors() {
	$var($Color, defaultRecentColor, $UIManager::getColor("ColorChooser.swatchesDefaultRecentColor"_s, $(getLocale())));
	int32_t numColors = $nc(this->numSwatches)->width * $nc(this->numSwatches)->height;
	$set(this, colors, $new($ColorArray, numColors));
	for (int32_t i = 0; i < numColors; ++i) {
		$nc(this->colors)->set(i, defaultRecentColor);
	}
}

void RecentSwatchPanel::setMostRecentColor($Color* c) {
	$System::arraycopy(this->colors, 0, this->colors, 1, $nc(this->colors)->length - 1);
	$nc(this->colors)->set(0, c);
	repaint();
}

RecentSwatchPanel::RecentSwatchPanel() {
}

$Class* RecentSwatchPanel::load$($String* name, bool initialize) {
	$loadClass(RecentSwatchPanel, name, initialize, &_RecentSwatchPanel_ClassInfo_, allocate$RecentSwatchPanel);
	return class$;
}

$Class* RecentSwatchPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
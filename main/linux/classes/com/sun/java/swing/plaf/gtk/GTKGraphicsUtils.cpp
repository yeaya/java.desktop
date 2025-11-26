#include <com/sun/java/swing/plaf/gtk/GTKGraphicsUtils.h>

#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef BLACK
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef FOCUSED
#undef INSTANCE
#undef INTERNAL_FRAME_TITLE_PANE
#undef MENU
#undef MENU_ITEM
#undef MOUSE_OVER
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef TABBED_PANE_TAB
#undef WHITE

using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$MethodInfo _GTKGraphicsUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(GTKGraphicsUtils::*)()>(&GTKGraphicsUtils::init$))},
	{"paintText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/String;III)V", nullptr, $PUBLIC},
	{"paintText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/String;Ljava/awt/Rectangle;I)V", nullptr, $PUBLIC},
	{"shouldShadowText", "(Ljavax/swing/plaf/synth/Region;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Region*,int32_t)>(&GTKGraphicsUtils::shouldShadowText))},
	{}
};

$ClassInfo _GTKGraphicsUtils_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKGraphicsUtils",
	"javax.swing.plaf.synth.SynthGraphicsUtils",
	nullptr,
	nullptr,
	_GTKGraphicsUtils_MethodInfo_
};

$Object* allocate$GTKGraphicsUtils($Class* clazz) {
	return $of($alloc(GTKGraphicsUtils));
}

void GTKGraphicsUtils::init$() {
	$SynthGraphicsUtils::init$();
}

void GTKGraphicsUtils::paintText($SynthContext* context, $Graphics* g, $String* text, int32_t x, int32_t y, int32_t mnemonicIndex) {
	$useLocalCurrentObjectStackCache();
	if (text == nullptr || $nc(text)->length() <= 0) {
		return;
	}
	$init($Region);
	if ($nc(context)->getRegion() == $Region::INTERNAL_FRAME_TITLE_PANE) {
		return;
	}
	int32_t componentState = $nc(context)->getComponentState();
	$var($String, themeName, $GTKLookAndFeel::getGtkThemeName());
	bool var$0 = themeName != nullptr && themeName->startsWith("blueprint"_s);
	if (var$0 && shouldShadowText($(context->getRegion()), componentState)) {
		$init($Color);
		$nc(g)->setColor($Color::BLACK);
		$SynthGraphicsUtils::paintText(context, g, text, x + 1, y + 1, mnemonicIndex);
		g->setColor($Color::WHITE);
	}
	$SynthGraphicsUtils::paintText(context, g, text, x, y, mnemonicIndex);
}

void GTKGraphicsUtils::paintText($SynthContext* context, $Graphics* g, $String* text, $Rectangle* bounds, int32_t mnemonicIndex) {
	$useLocalCurrentObjectStackCache();
	if (text == nullptr || $nc(text)->length() <= 0) {
		return;
	}
	$var($Region, id, $nc(context)->getRegion());
	$init($Region);
	if ((id == $Region::RADIO_BUTTON || id == $Region::CHECK_BOX || id == $Region::TABBED_PANE_TAB) && ((int32_t)(context->getComponentState() & (uint32_t)$SynthConstants::FOCUSED)) != 0) {
		$var($JComponent, source, context->getComponent());
		if (!($instanceOf($AbstractButton, source)) || $nc(($cast($AbstractButton, source)))->isFocusPainted()) {
			int32_t synthState = context->getComponentState();
			$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
			int32_t focusSize = $nc(style)->getClassSpecificIntValue(context, "focus-line-width"_s, 1);
			int32_t focusPad = style->getClassSpecificIntValue(context, "focus-padding"_s, 1);
			int32_t totalFocus = focusSize + focusPad;
			int32_t x = $nc(bounds)->x - totalFocus;
			int32_t y = bounds->y - totalFocus;
			int32_t w = bounds->width + (2 * totalFocus);
			int32_t h = bounds->height + (2 * totalFocus);
			$var($Color, color, $nc(g)->getColor());
			$init($GTKPainter);
			$nc($GTKPainter::INSTANCE)->paintFocus(context, g, id, synthState, "checkbutton"_s, x, y, w, h);
			g->setColor(color);
		}
	}
	$SynthGraphicsUtils::paintText(context, g, text, bounds, mnemonicIndex);
}

bool GTKGraphicsUtils::shouldShadowText($Region* id, int32_t state) {
	$init(GTKGraphicsUtils);
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
	$init($Region);
	return ((gtkState == $SynthConstants::MOUSE_OVER) && (id == $Region::MENU || id == $Region::MENU_ITEM || id == $Region::CHECK_BOX_MENU_ITEM || id == $Region::RADIO_BUTTON_MENU_ITEM));
}

GTKGraphicsUtils::GTKGraphicsUtils() {
}

$Class* GTKGraphicsUtils::load$($String* name, bool initialize) {
	$loadClass(GTKGraphicsUtils, name, initialize, &_GTKGraphicsUtils_ClassInfo_, allocate$GTKGraphicsUtils);
	return class$;
}

$Class* GTKGraphicsUtils::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com
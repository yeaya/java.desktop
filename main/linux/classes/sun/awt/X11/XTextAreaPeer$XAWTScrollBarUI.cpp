#include <sun/awt/X11/XTextAreaPeer$XAWTScrollBarUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/SystemColor.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <sun/awt/X11/XTextAreaPeer$BevelBorder.h>
#include <sun/awt/X11/XTextAreaPeer$XAWTScrollBarButton.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $SystemColor = ::java::awt::SystemColor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $UIDefaults = ::javax::swing::UIDefaults;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XTextAreaPeer$BevelBorder = ::sun::awt::X11::XTextAreaPeer$BevelBorder;
using $XTextAreaPeer$XAWTScrollBarButton = ::sun::awt::X11::XTextAreaPeer$XAWTScrollBarButton;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$XAWTScrollBarUI_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$XAWTScrollBarUI, this$0)},
	{}
};

$MethodInfo _XTextAreaPeer$XAWTScrollBarUI_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer;)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$XAWTScrollBarUI::*)($XTextAreaPeer*)>(&XTextAreaPeer$XAWTScrollBarUI::init$))},
	{"configureScrollBarColors", "()V", nullptr, $PROTECTED},
	{"createDecreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createIncreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getDecreaseButton", "()Ljavax/swing/JButton;", nullptr, $PUBLIC, $method(static_cast<$JButton*(XTextAreaPeer$XAWTScrollBarUI::*)()>(&XTextAreaPeer$XAWTScrollBarUI::getDecreaseButton))},
	{"getIncreaseButton", "()Ljavax/swing/JButton;", nullptr, $PUBLIC, $method(static_cast<$JButton*(XTextAreaPeer$XAWTScrollBarUI::*)()>(&XTextAreaPeer$XAWTScrollBarUI::getIncreaseButton))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintThumb", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$XAWTScrollBarUI_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollBarUI", "sun.awt.X11.XTextAreaPeer", "XAWTScrollBarUI", $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer$XAWTScrollBarUI_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$XAWTScrollBarUI",
	"javax.swing.plaf.basic.BasicScrollBarUI",
	nullptr,
	_XTextAreaPeer$XAWTScrollBarUI_FieldInfo_,
	_XTextAreaPeer$XAWTScrollBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$XAWTScrollBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$XAWTScrollBarUI($Class* clazz) {
	return $of($alloc(XTextAreaPeer$XAWTScrollBarUI));
}

void XTextAreaPeer$XAWTScrollBarUI::init$($XTextAreaPeer* this$0) {
	$set(this, this$0, this$0);
	$BasicScrollBarUI::init$();
}

void XTextAreaPeer$XAWTScrollBarUI::installDefaults() {
	$BasicScrollBarUI::installDefaults();
	$init($SystemColor);
	$nc(this->scrollbar)->setBorder($$new($XTextAreaPeer$BevelBorder, false, $SystemColor::controlDkShadow, $SystemColor::controlLtHighlight));
}

void XTextAreaPeer$XAWTScrollBarUI::configureScrollBarColors() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, uidefaults, $XToolkit::getUIDefaults());
	$var($Color, bg, $nc(this->scrollbar)->getBackground());
	if (bg == nullptr || $instanceOf($UIResource, bg)) {
		$nc(this->scrollbar)->setBackground($($nc(uidefaults)->getColor("ScrollBar.background"_s)));
	}
	$var($Color, fg, $nc(this->scrollbar)->getForeground());
	if (fg == nullptr || $instanceOf($UIResource, fg)) {
		$nc(this->scrollbar)->setForeground($($nc(uidefaults)->getColor("ScrollBar.foreground"_s)));
	}
	$set(this, thumbHighlightColor, $nc(uidefaults)->getColor("ScrollBar.thumbHighlight"_s));
	$set(this, thumbLightShadowColor, uidefaults->getColor("ScrollBar.thumbShadow"_s));
	$set(this, thumbDarkShadowColor, uidefaults->getColor("ScrollBar.thumbDarkShadow"_s));
	$set(this, thumbColor, uidefaults->getColor("ScrollBar.thumb"_s));
	$set(this, trackColor, uidefaults->getColor("ScrollBar.track"_s));
	$set(this, trackHighlightColor, uidefaults->getColor("ScrollBar.trackHighlight"_s));
}

$JButton* XTextAreaPeer$XAWTScrollBarUI::createDecreaseButton(int32_t orientation) {
	$var($JButton, b, $new($XTextAreaPeer$XAWTScrollBarButton, this->this$0, orientation));
	return b;
}

$JButton* XTextAreaPeer$XAWTScrollBarUI::createIncreaseButton(int32_t orientation) {
	$var($JButton, b, $new($XTextAreaPeer$XAWTScrollBarButton, this->this$0, orientation));
	return b;
}

$JButton* XTextAreaPeer$XAWTScrollBarUI::getDecreaseButton() {
	return this->decrButton;
}

$JButton* XTextAreaPeer$XAWTScrollBarUI::getIncreaseButton() {
	return this->incrButton;
}

void XTextAreaPeer$XAWTScrollBarUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	paintTrack(g, c, $(getTrackBounds()));
	$var($Rectangle, thumbBounds, getThumbBounds());
	paintThumb(g, c, thumbBounds);
}

void XTextAreaPeer$XAWTScrollBarUI::paintThumb($Graphics* g, $JComponent* c, $Rectangle* thumbBounds$renamed) {
	$var($Rectangle, thumbBounds, thumbBounds$renamed);
	if (!$nc(this->scrollbar)->isEnabled()) {
		return;
	}
	if ($nc(thumbBounds)->isEmpty()) {
		$assign(thumbBounds, getTrackBounds());
	}
	int32_t w = $nc(thumbBounds)->width;
	int32_t h = thumbBounds->height;
	$nc(g)->translate(thumbBounds->x, thumbBounds->y);
	g->setColor(this->thumbColor);
	g->fillRect(0, 0, w - 1, h - 1);
	g->setColor(this->thumbHighlightColor);
	g->drawLine(0, 0, 0, h - 1);
	g->drawLine(1, 0, w - 1, 0);
	g->setColor(this->thumbLightShadowColor);
	g->drawLine(1, h - 1, w - 1, h - 1);
	g->drawLine(w - 1, 1, w - 1, h - 2);
	g->translate(-thumbBounds->x, -thumbBounds->y);
}

XTextAreaPeer$XAWTScrollBarUI::XTextAreaPeer$XAWTScrollBarUI() {
}

$Class* XTextAreaPeer$XAWTScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$XAWTScrollBarUI, name, initialize, &_XTextAreaPeer$XAWTScrollBarUI_ClassInfo_, allocate$XTextAreaPeer$XAWTScrollBarUI);
	return class$;
}

$Class* XTextAreaPeer$XAWTScrollBarUI::class$ = nullptr;

		} // X11
	} // awt
} // sun
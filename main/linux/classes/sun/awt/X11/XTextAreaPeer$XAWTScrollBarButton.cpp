#include <sun/awt/X11/XTextAreaPeer$XAWTScrollBarButton.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/SystemColor.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

#undef EAST
#undef NORTH
#undef SOUTH
#undef WEST

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $SystemColor = ::java::awt::SystemColor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComponent = ::javax::swing::JComponent;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIDefaults = ::javax::swing::UIDefaults;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $XTextAreaPeer = ::sun::awt::X11::XTextAreaPeer;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XTextAreaPeer$XAWTScrollBarButton_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XTextAreaPeer;", nullptr, $FINAL | $SYNTHETIC, $field(XTextAreaPeer$XAWTScrollBarButton, this$0)},
	{"uidefaults", "Ljavax/swing/UIDefaults;", nullptr, $PRIVATE, $field(XTextAreaPeer$XAWTScrollBarButton, uidefaults)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XTextAreaPeer$XAWTScrollBarButton, darkShadow)},
	{"lightShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XTextAreaPeer$XAWTScrollBarButton, lightShadow)},
	{"buttonBack", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(XTextAreaPeer$XAWTScrollBarButton, buttonBack)},
	{}
};

$MethodInfo _XTextAreaPeer$XAWTScrollBarButton_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XTextAreaPeer;I)V", nullptr, 0, $method(static_cast<void(XTextAreaPeer$XAWTScrollBarButton::*)($XTextAreaPeer*,int32_t)>(&XTextAreaPeer$XAWTScrollBarButton::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XTextAreaPeer$XAWTScrollBarButton_InnerClassesInfo_[] = {
	{"sun.awt.X11.XTextAreaPeer$XAWTScrollBarButton", "sun.awt.X11.XTextAreaPeer", "XAWTScrollBarButton", $FINAL},
	{}
};

$ClassInfo _XTextAreaPeer$XAWTScrollBarButton_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.X11.XTextAreaPeer$XAWTScrollBarButton",
	"javax.swing.plaf.basic.BasicArrowButton",
	nullptr,
	_XTextAreaPeer$XAWTScrollBarButton_FieldInfo_,
	_XTextAreaPeer$XAWTScrollBarButton_MethodInfo_,
	nullptr,
	nullptr,
	_XTextAreaPeer$XAWTScrollBarButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XTextAreaPeer"
};

$Object* allocate$XTextAreaPeer$XAWTScrollBarButton($Class* clazz) {
	return $of($alloc(XTextAreaPeer$XAWTScrollBarButton));
}

void XTextAreaPeer$XAWTScrollBarButton::init$($XTextAreaPeer* this$0, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$BasicArrowButton::init$(direction);
	$set(this, uidefaults, $XToolkit::getUIDefaults());
	$init($SystemColor);
	$set(this, darkShadow, $SystemColor::controlShadow);
	$set(this, lightShadow, $SystemColor::controlLtHighlight);
	$set(this, buttonBack, $nc(this->uidefaults)->getColor("ScrollBar.track"_s));
	switch (direction) {
	case $SwingConstants::NORTH:
		{}
	case $SwingConstants::SOUTH:
		{}
	case $SwingConstants::EAST:
		{}
	case $SwingConstants::WEST:
		{
			this->direction = direction;
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "invalid direction"_s);
		}
	}
	setRequestFocusEnabled(false);
	setOpaque(true);
	setBackground($($nc(this->uidefaults)->getColor("ScrollBar.thumb"_s)));
	setForeground($($nc(this->uidefaults)->getColor("ScrollBar.foreground"_s)));
}

$Dimension* XTextAreaPeer$XAWTScrollBarButton::getPreferredSize() {
	switch (this->direction) {
	case $SwingConstants::NORTH:
		{}
	case $SwingConstants::SOUTH:
		{
			return $new($Dimension, 11, 12);
		}
	case $SwingConstants::EAST:
		{}
	case $SwingConstants::WEST:
		{}
	default:
		{
			return $new($Dimension, 12, 11);
		}
	}
}

$Dimension* XTextAreaPeer$XAWTScrollBarButton::getMinimumSize() {
	return getPreferredSize();
}

$Dimension* XTextAreaPeer$XAWTScrollBarButton::getMaximumSize() {
	return getPreferredSize();
}

bool XTextAreaPeer$XAWTScrollBarButton::isFocusTraversable() {
	return false;
}

void XTextAreaPeer$XAWTScrollBarButton::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	int32_t w = getWidth();
	int32_t h = getHeight();
	if (isOpaque()) {
		$nc(g)->setColor(this->buttonBack);
		g->fillRect(0, 0, w, h);
	}
	bool isPressed = $nc($(getModel()))->isPressed();
	$var($Color, lead, (isPressed) ? this->darkShadow : this->lightShadow);
	$var($Color, trail, (isPressed) ? this->lightShadow : this->darkShadow);
	$var($Color, fill, getBackground());
	int32_t cx = w / 2;
	int32_t cy = h / 2;
	int32_t s = $Math::min(w, h);
	switch (this->direction) {
	case $SwingConstants::NORTH:
		{
			$nc(g)->setColor(lead);
			$nc(g)->drawLine(cx, 0, cx, 0);
			{
				int32_t x = cx - 1;
				int32_t y = 1;
				int32_t dx = 1;
				for (; y <= s - 2; y += 2) {
					$nc(g)->setColor(lead);
					g->drawLine(x, y, x, y);
					if (y >= (s - 2)) {
						g->drawLine(x, y + 1, x, y + 1);
					}
					g->setColor(fill);
					g->drawLine(x + 1, y, x + dx, y);
					if (y < (s - 2)) {
						g->drawLine(x, y + 1, x + dx + 1, y + 1);
					}
					g->setColor(trail);
					g->drawLine(x + dx + 1, y, x + dx + 1, y);
					if (y >= (s - 2)) {
						g->drawLine(x + 1, y + 1, x + dx + 1, y + 1);
					}
					dx += 2;
					x -= 1;
				}
			}
			break;
		}
	case $SwingConstants::SOUTH:
		{
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(cx, s, cx, s);
			{
				int32_t x = cx - 1;
				int32_t y = s - 1;
				int32_t dx = 1;
				for (; y >= 1; y -= 2) {
					$nc(g)->setColor(lead);
					g->drawLine(x, y, x, y);
					if (y <= 2) {
						g->drawLine(x, y - 1, x + dx + 1, y - 1);
					}
					g->setColor(fill);
					g->drawLine(x + 1, y, x + dx, y);
					if (y > 2) {
						g->drawLine(x, y - 1, x + dx + 1, y - 1);
					}
					g->setColor(trail);
					g->drawLine(x + dx + 1, y, x + dx + 1, y);
					dx += 2;
					x -= 1;
				}
			}
			break;
		}
	case $SwingConstants::EAST:
		{
			$nc(g)->setColor(lead);
			$nc(g)->drawLine(s, cy, s, cy);
			{
				int32_t y = cy - 1;
				int32_t x = s - 1;
				int32_t dy = 1;
				for (; x >= 1; x -= 2) {
					$nc(g)->setColor(lead);
					g->drawLine(x, y, x, y);
					if (x <= 2) {
						g->drawLine(x - 1, y, x - 1, y + dy + 1);
					}
					g->setColor(fill);
					g->drawLine(x, y + 1, x, y + dy);
					if (x > 2) {
						g->drawLine(x - 1, y, x - 1, y + dy + 1);
					}
					g->setColor(trail);
					g->drawLine(x, y + dy + 1, x, y + dy + 1);
					dy += 2;
					y -= 1;
				}
			}
			break;
		}
	case $SwingConstants::WEST:
		{
			$nc(g)->setColor(trail);
			$nc(g)->drawLine(0, cy, 0, cy);
			{
				int32_t y = cy - 1;
				int32_t x = 1;
				int32_t dy = 1;
				for (; x <= s - 2; x += 2) {
					$nc(g)->setColor(lead);
					g->drawLine(x, y, x, y);
					if (x >= (s - 2)) {
						g->drawLine(x + 1, y, x + 1, y);
					}
					g->setColor(fill);
					g->drawLine(x, y + 1, x, y + dy);
					if (x < (s - 2)) {
						g->drawLine(x + 1, y, x + 1, y + dy + 1);
					}
					g->setColor(trail);
					g->drawLine(x, y + dy + 1, x, y + dy + 1);
					if (x >= (s - 2)) {
						g->drawLine(x + 1, y + 1, x + 1, y + dy + 1);
					}
					dy += 2;
					y -= 1;
				}
			}
			break;
		}
	}
}

XTextAreaPeer$XAWTScrollBarButton::XTextAreaPeer$XAWTScrollBarButton() {
}

$Class* XTextAreaPeer$XAWTScrollBarButton::load$($String* name, bool initialize) {
	$loadClass(XTextAreaPeer$XAWTScrollBarButton, name, initialize, &_XTextAreaPeer$XAWTScrollBarButton_ClassInfo_, allocate$XTextAreaPeer$XAWTScrollBarButton);
	return class$;
}

$Class* XTextAreaPeer$XAWTScrollBarButton::class$ = nullptr;

		} // X11
	} // awt
} // sun
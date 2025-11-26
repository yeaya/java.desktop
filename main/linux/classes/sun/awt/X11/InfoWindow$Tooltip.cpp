#include <sun/awt/X11/InfoWindow$Tooltip.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Frame.h>
#include <java/awt/Label.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$Tooltip$1.h>
#include <sun/awt/X11/InfoWindow$Tooltip$2.h>
#include <sun/awt/X11/InfoWindow$Tooltip$LiveArguments.h>
#include <sun/awt/X11/InfoWindow.h>
#include <sun/awt/X11/XToolkit.h>
#include <sun/awt/X11/XTrayIconPeer.h>
#include <sun/awt/X11/XWindow.h>
#include <jcpp.h>

#undef TOOLTIP_BACKGROUND_COLOR
#undef TOOLTIP_MAX_LENGTH
#undef TOOLTIP_MOUSE_CURSOR_INDENT
#undef TOOLTIP_SHOW_TIME
#undef TOOLTIP_START_DELAY_TIME
#undef TOOLTIP_TEXT_FONT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Frame = ::java::awt::Frame;
using $Label = ::java::awt::Label;
using $MouseInfo = ::java::awt::MouseInfo;
using $Point = ::java::awt::Point;
using $PointerInfo = ::java::awt::PointerInfo;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InfoWindow = ::sun::awt::X11::InfoWindow;
using $InfoWindow$Tooltip$1 = ::sun::awt::X11::InfoWindow$Tooltip$1;
using $InfoWindow$Tooltip$2 = ::sun::awt::X11::InfoWindow$Tooltip$2;
using $InfoWindow$Tooltip$LiveArguments = ::sun::awt::X11::InfoWindow$Tooltip$LiveArguments;
using $XToolkit = ::sun::awt::X11::XToolkit;
using $XTrayIconPeer = ::sun::awt::X11::XTrayIconPeer;
using $XWindow = ::sun::awt::X11::XWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow$Tooltip_FieldInfo_[] = {
	{"target", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(InfoWindow$Tooltip, target)},
	{"liveArguments", "Lsun/awt/X11/InfoWindow$Tooltip$LiveArguments;", nullptr, $PRIVATE | $FINAL, $field(InfoWindow$Tooltip, liveArguments)},
	{"textLabel", "Ljava/awt/Label;", nullptr, $PRIVATE | $FINAL, $field(InfoWindow$Tooltip, textLabel)},
	{"starter", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(InfoWindow$Tooltip, starter)},
	{"TOOLTIP_SHOW_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Tooltip, TOOLTIP_SHOW_TIME)},
	{"TOOLTIP_START_DELAY_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Tooltip, TOOLTIP_START_DELAY_TIME)},
	{"TOOLTIP_MAX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Tooltip, TOOLTIP_MAX_LENGTH)},
	{"TOOLTIP_MOUSE_CURSOR_INDENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InfoWindow$Tooltip, TOOLTIP_MOUSE_CURSOR_INDENT)},
	{"TOOLTIP_BACKGROUND_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InfoWindow$Tooltip, TOOLTIP_BACKGROUND_COLOR)},
	{"TOOLTIP_TEXT_FONT", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InfoWindow$Tooltip, TOOLTIP_TEXT_FONT)},
	{}
};

$MethodInfo _InfoWindow$Tooltip_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Ljava/lang/Object;Lsun/awt/X11/InfoWindow$Tooltip$LiveArguments;)V", nullptr, $PUBLIC, $method(static_cast<void(InfoWindow$Tooltip::*)($Frame*,Object$*,$InfoWindow$Tooltip$LiveArguments*)>(&InfoWindow$Tooltip::init$))},
	{"display", "()V", nullptr, $PRIVATE, $method(static_cast<void(InfoWindow$Tooltip::*)()>(&InfoWindow$Tooltip::display))},
	{"enter", "()V", nullptr, $PUBLIC},
	{"exit", "()V", nullptr, $PUBLIC},
	{"isPointerOverTrayIcon", "(Ljava/awt/Rectangle;)Z", nullptr, $PRIVATE, $method(static_cast<bool(InfoWindow$Tooltip::*)($Rectangle*)>(&InfoWindow$Tooltip::isPointerOverTrayIcon))},
	{}
};

$InnerClassInfo _InfoWindow$Tooltip_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip$LiveArguments", "sun.awt.X11.InfoWindow$Tooltip", "LiveArguments", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11.InfoWindow$Tooltip$2", nullptr, nullptr, 0},
	{"sun.awt.X11.InfoWindow$Tooltip$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow$Tooltip_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.InfoWindow$Tooltip",
	"sun.awt.X11.InfoWindow",
	nullptr,
	_InfoWindow$Tooltip_FieldInfo_,
	_InfoWindow$Tooltip_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow$Tooltip_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow"
};

$Object* allocate$InfoWindow$Tooltip($Class* clazz) {
	return $of($alloc(InfoWindow$Tooltip));
}

$Color* InfoWindow$Tooltip::TOOLTIP_BACKGROUND_COLOR = nullptr;
$Font* InfoWindow$Tooltip::TOOLTIP_TEXT_FONT = nullptr;

void InfoWindow$Tooltip::init$($Frame* parent, Object$* target, $InfoWindow$Tooltip$LiveArguments* liveArguments) {
	$init($Color);
	$InfoWindow::init$(parent, $Color::black);
	$set(this, textLabel, $new($Label, ""_s));
	$set(this, starter, $new($InfoWindow$Tooltip$1, this));
	$set(this, target, target);
	$set(this, liveArguments, liveArguments);
	$XTrayIconPeer::suppressWarningString(this);
	setCloser(nullptr, InfoWindow$Tooltip::TOOLTIP_SHOW_TIME);
	$nc(this->textLabel)->setBackground(InfoWindow$Tooltip::TOOLTIP_BACKGROUND_COLOR);
	$nc(this->textLabel)->setFont(InfoWindow$Tooltip::TOOLTIP_TEXT_FONT);
	add(static_cast<$Component*>(this->textLabel));
}

void InfoWindow$Tooltip::display() {
	$SunToolkit::executeOnEventHandlerThread(this->target, $$new($InfoWindow$Tooltip$2, this));
}

void InfoWindow$Tooltip::enter() {
	$XToolkit::schedule(this->starter, InfoWindow$Tooltip::TOOLTIP_START_DELAY_TIME);
}

void InfoWindow$Tooltip::exit() {
	$XToolkit::remove(this->starter);
	if (isVisible()) {
		hide();
	}
}

bool InfoWindow$Tooltip::isPointerOverTrayIcon($Rectangle* trayRect) {
	$useLocalCurrentObjectStackCache();
	$var($Point, p, $nc($($MouseInfo::getPointerInfo()))->getLocation());
	return !($nc(p)->x < $nc(trayRect)->x || $nc(p)->x > ($nc(trayRect)->x + trayRect->width) || $nc(p)->y < $nc(trayRect)->y || $nc(p)->y > ($nc(trayRect)->y + trayRect->height));
}

void clinit$InfoWindow$Tooltip($Class* class$) {
	$assignStatic(InfoWindow$Tooltip::TOOLTIP_BACKGROUND_COLOR, $new($Color, 255, 255, 220));
	$assignStatic(InfoWindow$Tooltip::TOOLTIP_TEXT_FONT, $XWindow::getDefaultFont());
}

InfoWindow$Tooltip::InfoWindow$Tooltip() {
}

$Class* InfoWindow$Tooltip::load$($String* name, bool initialize) {
	$loadClass(InfoWindow$Tooltip, name, initialize, &_InfoWindow$Tooltip_ClassInfo_, clinit$InfoWindow$Tooltip, allocate$InfoWindow$Tooltip);
	return class$;
}

$Class* InfoWindow$Tooltip::class$ = nullptr;

		} // X11
	} // awt
} // sun
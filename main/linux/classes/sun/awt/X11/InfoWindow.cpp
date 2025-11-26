#include <sun/awt/X11/InfoWindow.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Frame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/X11/InfoWindow$1.h>
#include <sun/awt/X11/InfoWindow$Closer.h>
#include <jcpp.h>

#undef CENTER
#undef POPUP

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $Window$Type = ::java::awt::Window$Type;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunToolkit = ::sun::awt::SunToolkit;
using $InfoWindow$1 = ::sun::awt::X11::InfoWindow$1;
using $InfoWindow$Closer = ::sun::awt::X11::InfoWindow$Closer;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _InfoWindow_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(InfoWindow, $assertionsDisabled)},
	{"container", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(InfoWindow, container)},
	{"closer", "Lsun/awt/X11/InfoWindow$Closer;", nullptr, $PRIVATE, $field(InfoWindow, closer)},
	{}
};

$MethodInfo _InfoWindow_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Frame;Ljava/awt/Color;)V", nullptr, $PROTECTED, $method(static_cast<void(InfoWindow::*)($Frame*,$Color*)>(&InfoWindow::init$))},
	{"access$001", "(Lsun/awt/X11/InfoWindow;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(InfoWindow*)>(&InfoWindow::access$001))},
	{"add", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, $PUBLIC},
	{"setCloser", "(Ljava/lang/Runnable;I)V", nullptr, $PROTECTED},
	{"show", "(Ljava/awt/Point;I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _InfoWindow_InnerClassesInfo_[] = {
	{"sun.awt.X11.InfoWindow$Balloon", "sun.awt.X11.InfoWindow", "Balloon", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$Tooltip", "sun.awt.X11.InfoWindow", "Tooltip", $PUBLIC | $STATIC},
	{"sun.awt.X11.InfoWindow$LiveArguments", "sun.awt.X11.InfoWindow", "LiveArguments", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.awt.X11.InfoWindow$Closer", "sun.awt.X11.InfoWindow", "Closer", $PRIVATE},
	{"sun.awt.X11.InfoWindow$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InfoWindow_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.InfoWindow",
	"java.awt.Window",
	nullptr,
	_InfoWindow_FieldInfo_,
	_InfoWindow_MethodInfo_,
	nullptr,
	nullptr,
	_InfoWindow_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.InfoWindow$Balloon,sun.awt.X11.InfoWindow$Balloon$Message,sun.awt.X11.InfoWindow$Balloon$Displayer,sun.awt.X11.InfoWindow$Balloon$ActionPerformer,sun.awt.X11.InfoWindow$Balloon$LiveArguments,sun.awt.X11.InfoWindow$Balloon$3,sun.awt.X11.InfoWindow$Balloon$2,sun.awt.X11.InfoWindow$Balloon$1,sun.awt.X11.InfoWindow$Tooltip,sun.awt.X11.InfoWindow$Tooltip$LiveArguments,sun.awt.X11.InfoWindow$Tooltip$2,sun.awt.X11.InfoWindow$Tooltip$2$1,sun.awt.X11.InfoWindow$Tooltip$1,sun.awt.X11.InfoWindow$LiveArguments,sun.awt.X11.InfoWindow$Closer,sun.awt.X11.InfoWindow$Closer$1,sun.awt.X11.InfoWindow$1"
};

$Object* allocate$InfoWindow($Class* clazz) {
	return $of($alloc(InfoWindow));
}

bool InfoWindow::$assertionsDisabled = false;

void InfoWindow::access$001(InfoWindow* x0) {
	$init(InfoWindow);
	$nc(x0)->$Window::hide();
}

void InfoWindow::init$($Frame* parent, $Color* borderColor) {
	$useLocalCurrentObjectStackCache();
	$Window::init$(parent);
	$init($Window$Type);
	setType($Window$Type::POPUP);
	$set(this, container, $new($InfoWindow$1, this));
	setLayout($$new($BorderLayout));
	setBackground(borderColor);
	$init($BorderLayout);
	add(static_cast<$Component*>(this->container), $of($BorderLayout::CENTER));
	$nc(this->container)->setLayout($$new($BorderLayout));
	$set(this, closer, $new($InfoWindow$Closer, this));
}

$Component* InfoWindow::add($Component* c) {
	$init($BorderLayout);
	$nc(this->container)->add(c, $of($BorderLayout::CENTER));
	return c;
}

void InfoWindow::setCloser($Runnable* action, int32_t time) {
	$nc(this->closer)->set(action, time);
}

void InfoWindow::show($Point* corner, int32_t indent) {
	$useLocalCurrentObjectStackCache();
	if (!InfoWindow::$assertionsDisabled && !$SunToolkit::isDispatchThreadForAppContext(this)) {
		$throwNew($AssertionError);
	}
	pack();
	$var($Dimension, size, getSize());
	$var($Rectangle, scrSize, $nc($(getGraphicsConfiguration()))->getBounds());
	if ($nc(corner)->x < $nc(scrSize)->x + scrSize->width / 2 && corner->y < scrSize->y + scrSize->height / 2) {
		setLocation(corner->x + indent, corner->y + indent);
	} else if (corner->x >= scrSize->x + scrSize->width / 2 && corner->y < scrSize->y + scrSize->height / 2) {
		setLocation(corner->x - indent - $nc(size)->width, corner->y + indent);
	} else if (corner->x < scrSize->x + scrSize->width / 2 && corner->y >= scrSize->y + scrSize->height / 2) {
		setLocation(corner->x + indent, corner->y - indent - $nc(size)->height);
	} else if (corner->x >= scrSize->x + scrSize->width / 2 && corner->y >= scrSize->y + scrSize->height / 2) {
		setLocation(corner->x - indent - $nc(size)->width, corner->y - indent - size->height);
	}
	$Window::show();
	$nc(this->closer)->schedule();
}

void InfoWindow::hide() {
	$nc(this->closer)->close();
}

void clinit$InfoWindow($Class* class$) {
	InfoWindow::$assertionsDisabled = !InfoWindow::class$->desiredAssertionStatus();
}

InfoWindow::InfoWindow() {
}

$Class* InfoWindow::load$($String* name, bool initialize) {
	$loadClass(InfoWindow, name, initialize, &_InfoWindow_ClassInfo_, clinit$InfoWindow, allocate$InfoWindow);
	return class$;
}

$Class* InfoWindow::class$ = nullptr;

		} // X11
	} // awt
} // sun
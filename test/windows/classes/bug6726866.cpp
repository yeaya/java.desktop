#include <bug6726866.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JLayeredPane.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef GREEN

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $JLayeredPane = ::javax::swing::JLayeredPane;

$MethodInfo _bug6726866_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6726866::*)()>(&bug6726866::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"setWindowNonOpaque", "(Ljava/awt/Window;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Window*)>(&bug6726866::setWindowNonOpaque))},
	{}
};

$ClassInfo _bug6726866_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6726866",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug6726866_MethodInfo_
};

$Object* allocate$bug6726866($Class* clazz) {
	return $of($alloc(bug6726866));
}

void bug6726866::init$() {
	$JApplet::init$();
}

void bug6726866::init() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $new($JFrame, "bug6726866"_s));
	frame->setUndecorated(true);
	setWindowNonOpaque(frame);
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	$init($Color);
	desktop->setBackground($Color::GREEN);
	$var($JInternalFrame, iFrame, $new($JInternalFrame, "Test"_s, true, true, true, true));
	iFrame->add(static_cast<$Component*>($$new($JLabel, "internal Frame"_s)));
	iFrame->setBounds(10, 10, 300, 200);
	iFrame->setVisible(true);
	desktop->add(static_cast<$Component*>(iFrame));
	frame->add(static_cast<$Component*>(desktop));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->setSize(400, 400);
	frame->setVisible(true);
	frame->toFront();
}

void bug6726866::setWindowNonOpaque($Window* window) {
	$init(bug6726866);
	$useLocalCurrentObjectStackCache();
	$var($Color, bg, $nc(window)->getBackground());
	if (bg == nullptr) {
		$assign(bg, $new($Color, 0, 0, 0, 0));
	}
	int32_t var$0 = $nc(bg)->getRed();
	int32_t var$1 = bg->getGreen();
	window->setBackground($$new($Color, var$0, var$1, bg->getBlue(), 0));
}

bug6726866::bug6726866() {
}

$Class* bug6726866::load$($String* name, bool initialize) {
	$loadClass(bug6726866, name, initialize, &_bug6726866_ClassInfo_, allocate$bug6726866);
	return class$;
}

$Class* bug6726866::class$ = nullptr;
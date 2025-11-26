#include <bug6797139.h>

#include <bug6797139$1.h>
#include <bug6797139$2.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug6797139$1 = ::bug6797139$1;
using $bug6797139$2 = ::bug6797139$2;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;

$MethodInfo _bug6797139_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6797139::*)()>(&bug6797139::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6797139::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6797139::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6797139_InnerClassesInfo_[] = {
	{"bug6797139$2", nullptr, nullptr, 0},
	{"bug6797139$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6797139_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6797139",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6797139_MethodInfo_,
	nullptr,
	nullptr,
	_bug6797139_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6797139$2,bug6797139$1"
};

$Object* allocate$bug6797139($Class* clazz) {
	return $of($alloc(bug6797139));
}

void bug6797139::init$() {
}

void bug6797139::createGui() {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($JButton, "Probably"_s));
	b->setUI(static_cast<$ButtonUI*>($$new($bug6797139$1)));
	b->setSize($(b->getPreferredSize()));
	int32_t var$0 = b->getWidth();
	$var($BufferedImage, image, $new($BufferedImage, var$0, b->getHeight(), $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, image->getGraphics());
	b->paint(g);
	$nc(g)->dispose();
}

void bug6797139::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6797139$2));
}

bug6797139::bug6797139() {
}

$Class* bug6797139::load$($String* name, bool initialize) {
	$loadClass(bug6797139, name, initialize, &_bug6797139_ClassInfo_, allocate$bug6797139);
	return class$;
}

$Class* bug6797139::class$ = nullptr;
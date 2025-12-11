#include <bug6604281$1.h>

#include <bug6604281.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef BLUE
#undef RED
#undef TYPE_INT_RGB

using $bug6604281 = ::bug6604281;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$MethodInfo _bug6604281$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6604281$1::*)()>(&bug6604281$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6604281$1_EnclosingMethodInfo_ = {
	"bug6604281",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6604281$1_InnerClassesInfo_[] = {
	{"bug6604281$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6604281$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6604281$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6604281$1_MethodInfo_,
	nullptr,
	&_bug6604281$1_EnclosingMethodInfo_,
	_bug6604281$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6604281"
};

$Object* allocate$bug6604281$1($Class* clazz) {
	return $of($alloc(bug6604281$1));
}

void bug6604281$1::init$() {
}

void bug6604281$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($SynthLookAndFeel, laf, $new($SynthLookAndFeel));
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>(laf));
	} catch ($Exception& e) {
		$bug6604281::fail($(e->getMessage()));
	}
	$var($BufferedImage, image, $new($BufferedImage, 32, 32, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, graphics, $cast($Graphics2D, image->getGraphics()));
	$init($Color);
	$nc(graphics)->setColor($Color::BLUE);
	int32_t var$0 = image->getWidth();
	graphics->fillRect(0, 0, var$0, image->getHeight());
	graphics->setColor($Color::RED);
	int32_t var$1 = image->getWidth();
	graphics->drawLine(0, 0, var$1, image->getHeight());
	$var($JButton, button1, $new($JButton, static_cast<$Icon*>($$new($IconUIResource, $$new($ImageIcon, static_cast<$Image*>(image))))));
	$var($JButton, button2, $new($JButton, static_cast<$Icon*>($$new($IconUIResource, $$new($ImageIcon, static_cast<$Image*>(image))))));
	button2->setEnabled(false);
	double var$2 = $nc($(button1->getPreferredSize()))->getHeight();
	if (var$2 != $nc($(button2->getPreferredSize()))->getHeight()) {
		$bug6604281::fail("Two similar buttons have different size"_s);
	}
}

bug6604281$1::bug6604281$1() {
}

$Class* bug6604281$1::load$($String* name, bool initialize) {
	$loadClass(bug6604281$1, name, initialize, &_bug6604281$1_ClassInfo_, allocate$bug6604281$1);
	return class$;
}

$Class* bug6604281$1::class$ = nullptr;
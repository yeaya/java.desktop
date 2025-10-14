#include <bug8040328.h>

#include <bug8040328$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Window.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

#undef CENTER
#undef CYAN
#undef DARK_GRAY
#undef HORIZONTAL
#undef VERTICAL

using $bug8040328$1 = ::bug8040328$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Window = ::java::awt::Window;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JSlider = ::javax::swing::JSlider;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

$FieldInfo _bug8040328_FieldInfo_[] = {
	{"synthXml", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(bug8040328, synthXml)},
	{}
};

$MethodInfo _bug8040328_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8040328::*)()>(&bug8040328::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8040328::main)), "java.lang.Exception"},
	{"test", "(Ljavax/swing/JFrame;)V", nullptr, $STATIC, $method(static_cast<void(*)($JFrame*)>(&bug8040328::test))},
	{}
};

$InnerClassInfo _bug8040328_InnerClassesInfo_[] = {
	{"bug8040328$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8040328_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8040328",
	"java.lang.Object",
	nullptr,
	_bug8040328_FieldInfo_,
	_bug8040328_MethodInfo_,
	nullptr,
	nullptr,
	_bug8040328_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8040328$1"
};

$Object* allocate$bug8040328($Class* clazz) {
	return $of($alloc(bug8040328));
}

$String* bug8040328::synthXml = nullptr;

void bug8040328::init$() {
}

void bug8040328::main($StringArray* args) {
	$init(bug8040328);
	$var($SynthLookAndFeel, lookAndFeel, $new($SynthLookAndFeel));
	lookAndFeel->load($$new($ByteArrayInputStream, $($nc(bug8040328::synthXml)->getBytes("UTF8"_s))), bug8040328::class$);
	$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>(lookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug8040328$1));
	$init($System);
	$nc($System::out)->println("ok"_s);
}

void bug8040328::test($JFrame* frame) {
	$init(bug8040328);
	$var($JSlider, hslider, $new($JSlider, $JSlider::HORIZONTAL));
	$init($Color);
	hslider->setBackground($Color::DARK_GRAY);
	$init($BorderLayout);
	$nc($($nc(frame)->getContentPane()))->add(static_cast<$Component*>(hslider), $of($BorderLayout::CENTER));
	$nc($(frame->getContentPane()))->setBackground($Color::CYAN);
	frame->pack();
	$var($Insets, insets, hslider->getInsets());
	if (hslider->getWidth() != 200 + $nc(insets)->left + insets->right) {
		$throwNew($RuntimeException, $$str({"Horizontal slider width is wrong "_s, $$str(hslider->getWidth())}));
	}
	int32_t var$0 = hslider->getHeight();
	if (var$0 != $nc($(hslider->getMinimumSize()))->height) {
		$throwNew($RuntimeException, $$str({"Horizontal slider height is wrong "_s, $$str(hslider->getHeight())}));
	}
	$nc($(frame->getContentPane()))->remove(static_cast<$Component*>(hslider));
	$var($JSlider, vslider, $new($JSlider, $JSlider::VERTICAL));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(vslider));
	frame->pack();
	$assign(insets, vslider->getInsets());
	int32_t var$1 = vslider->getWidth();
	if (var$1 != $nc($(vslider->getMinimumSize()))->width) {
		$throwNew($RuntimeException, $$str({"Verical slider width is wrong "_s, $$str(vslider->getWidth())}));
	}
	if (vslider->getHeight() != 200 + $nc(insets)->top + insets->bottom) {
		$throwNew($RuntimeException, $$str({"Verical slider height is wrong "_s, $$str(vslider->getHeight())}));
	}
}

void clinit$bug8040328($Class* class$) {
	$assignStatic(bug8040328::synthXml, "<synth> <style id=\"all\"> <font name=\"Segoe UI\" size=\"12\"/> </style> <bind style=\"all\" type=\"REGION\" key=\".*\"/> <style id=\"slider\"> <insets top=\"10\" left=\"5\" bottom=\"10\" right=\"5\"/> </style> <bind style=\"slider\" type=\"region\" key=\"Slider\"/></synth>"_s);
}

bug8040328::bug8040328() {
}

$Class* bug8040328::load$($String* name, bool initialize) {
	$loadClass(bug8040328, name, initialize, &_bug8040328_ClassInfo_, clinit$bug8040328, allocate$bug8040328);
	return class$;
}

$Class* bug8040328::class$ = nullptr;
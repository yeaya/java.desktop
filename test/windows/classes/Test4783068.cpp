#include <Test4783068.h>

#include <Test4783068$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef TEST_COLOR
#undef TYPE_INT_ARGB
#undef WHITE

using $Test4783068$1 = ::Test4783068$1;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $Border = ::javax::swing::border::Border;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _Test4783068_FieldInfo_[] = {
	{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $STATIC | $FINAL, $staticField(Test4783068, TEST_COLOR)},
	{"html", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Test4783068, html)},
	{}
};

$MethodInfo _Test4783068_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4783068::*)()>(&Test4783068::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4783068::main)), "java.lang.Exception"},
	{"test", "()V", nullptr, 0},
	{"test", "(Ljavax/swing/JComponent;)V", nullptr, 0},
	{}
};

$InnerClassInfo _Test4783068_InnerClassesInfo_[] = {
	{"Test4783068$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test4783068_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4783068",
	"java.lang.Object",
	nullptr,
	_Test4783068_FieldInfo_,
	_Test4783068_MethodInfo_,
	nullptr,
	nullptr,
	_Test4783068_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test4783068$1"
};

$Object* allocate$Test4783068($Class* clazz) {
	return $of($alloc(Test4783068));
}

$Color* Test4783068::TEST_COLOR = nullptr;
$String* Test4783068::html = nullptr;

void Test4783068::init$() {
}

void Test4783068::test() {
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, e, $catch());
		$throwNew($Error, "Cannot set Metal LAF"_s);
	}
	$UIManager::put("textInactiveText"_s, Test4783068::TEST_COLOR);
	test($$new($JLabel, Test4783068::html));
	test($$new($JButton, Test4783068::html));
	$var($JEditorPane, pane, $new($JEditorPane, "text/html"_s, Test4783068::html));
	pane->setDisabledTextColor(Test4783068::TEST_COLOR);
	test(pane);
}

void Test4783068::test($JComponent* c) {
	$nc(c)->setEnabled(false);
	c->setOpaque(true);
	c->setBackground(Test4783068::TEST_COLOR);
	c->setBorder(nullptr);
	$var($Dimension, size, c->getPreferredSize());
	c->setBounds(0, 0, $nc(size)->width, size->height);
	$var($BufferedImage, image, $new($BufferedImage, $nc(size)->width, size->height, $BufferedImage::TYPE_INT_ARGB));
	c->paint($(image->getGraphics()));
	int32_t rgb = $nc(Test4783068::TEST_COLOR)->getRGB();
	for (int32_t i = 0; i < $nc(size)->height; ++i) {
		for (int32_t j = 0; j < size->width; ++j) {
			if (image->getRGB(j, i) != rgb) {
				$throwNew($RuntimeException, $($String::format("Color mismatch at [%d, %d]"_s, $$new($ObjectArray, {
					$($of($Integer::valueOf(j))),
					$($of($Integer::valueOf(i)))
				}))));
			}
		}
	}
}

void Test4783068::main($StringArray* args) {
	$init(Test4783068);
	$SwingUtilities::invokeAndWait($$new($Test4783068$1));
}

void clinit$Test4783068($Class* class$) {
	$assignStatic(Test4783068::html, "<html>This is a <font color=\'red\'>colored</font> <b>text</b><p>with a <a href=\'http://ru.sun.com\'>link</a><ul><li>an unordered<li>list</ul><ol><li>and an ordered<li>list</ol></html>"_s);
	$init($Color);
	$assignStatic(Test4783068::TEST_COLOR, $Color::WHITE);
}

Test4783068::Test4783068() {
}

$Class* Test4783068::load$($String* name, bool initialize) {
	$loadClass(Test4783068, name, initialize, &_Test4783068_ClassInfo_, clinit$Test4783068, allocate$Test4783068);
	return class$;
}

$Class* Test4783068::class$ = nullptr;
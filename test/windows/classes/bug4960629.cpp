#include <bug4960629.h>

#include <bug4960629$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Window.h>
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
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTMLDocument.h>
#include <javax/swing/text/html/StyleSheet.h>
#include <jcpp.h>

using $bug4960629$1 = ::bug4960629$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Document = ::javax::swing::text::Document;
using $View = ::javax::swing::text::View;
using $HTMLDocument = ::javax::swing::text::html::HTMLDocument;
using $StyleSheet = ::javax::swing::text::html::StyleSheet;

$FieldInfo _bug4960629_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE, $field(bug4960629, passed)},
	{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(bug4960629, label)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug4960629, f)},
	{}
};

$MethodInfo _bug4960629_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug4960629::*)()>(&bug4960629::init$)), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{"createAndShowGUI", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4960629::main)), "java.lang.Throwable"},
	{"test", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4960629::*)()>(&bug4960629::test))},
	{}
};

$InnerClassInfo _bug4960629_InnerClassesInfo_[] = {
	{"bug4960629$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4960629_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4960629",
	"java.lang.Object",
	nullptr,
	_bug4960629_FieldInfo_,
	_bug4960629_MethodInfo_,
	nullptr,
	nullptr,
	_bug4960629_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4960629$1"
};

$Object* allocate$bug4960629($Class* clazz) {
	return $of($alloc(bug4960629));
}

void bug4960629::createAndShowGUI() {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$UIManager::setLookAndFeel($($UIManager::getCrossPlatformLookAndFeelClassName()));
			$set(this, label, $new($JLabel, "<html><P>This is a test of the</P></html>"_s));
			$init($System);
			$nc($System::out)->println($$str({"UIManager.getLookAndFeel()"_s, $nc($of($($UIManager::getLookAndFeel())))->getClass()}));
			$set(this, f, $new($JFrame));
			$nc($($nc(this->f)->getContentPane()))->add(static_cast<$Component*>(this->label));
			$nc(this->f)->pack();
			$nc(this->f)->setVisible(true);
			test();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (this->f != nullptr) {
				$nc(this->f)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug4960629::init$() {
	this->passed = false;
	$set(this, label, nullptr);
	$set(this, f, nullptr);
	$SwingUtilities::invokeAndWait($$new($bug4960629$1, this));
}

void bug4960629::test() {
	$init($BasicHTML);
	$var($View, root, $nc(($cast($View, $($nc(this->label)->getClientProperty($BasicHTML::propertyKey)))))->getView(0));
	int32_t n = $nc(root)->getViewCount();
	$var($View, v, root->getView(n - 1));
	$var($AttributeSet, attrs, $nc(v)->getAttributes());
	$var($StyleSheet, ss, $nc(($cast($HTMLDocument, $(v->getDocument()))))->getStyleSheet());
	$var($Font, font, $nc(ss)->getFont(attrs));
	$init($System);
	$nc($System::out)->println($nc(font)->getSize());
	this->passed = ($nc(font)->getSize() == 12);
	if (!this->passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

void bug4960629::main($StringArray* args) {
	$new(bug4960629);
}

bug4960629::bug4960629() {
}

$Class* bug4960629::load$($String* name, bool initialize) {
	$loadClass(bug4960629, name, initialize, &_bug4960629_ClassInfo_, allocate$bug4960629);
	return class$;
}

$Class* bug4960629::class$ = nullptr;
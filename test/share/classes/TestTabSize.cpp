#include <TestTabSize.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Window.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/GroupLayout$Alignment.h>
#include <javax/swing/GroupLayout$Group.h>
#include <javax/swing/GroupLayout$ParallelGroup.h>
#include <javax/swing/GroupLayout$SequentialGroup.h>
#include <javax/swing/GroupLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef DEFAULT_SIZE
#undef LEADING
#undef MAX_VALUE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Window = ::java::awt::Window;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $GroupLayout = ::javax::swing::GroupLayout;
using $GroupLayout$Alignment = ::javax::swing::GroupLayout$Alignment;
using $GroupLayout$Group = ::javax::swing::GroupLayout$Group;
using $GroupLayout$ParallelGroup = ::javax::swing::GroupLayout$ParallelGroup;
using $GroupLayout$SequentialGroup = ::javax::swing::GroupLayout$SequentialGroup;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class TestTabSize$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestTabSize$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestTabSize::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<TestTabSize$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo TestTabSize$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTabSize$$Lambda$lambda$main$0::*)()>(&TestTabSize$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo TestTabSize$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"TestTabSize$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* TestTabSize$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(TestTabSize$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* TestTabSize$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _TestTabSize_FieldInfo_[] = {
	{"jScrollPane1", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, jScrollPane1)},
	{"jTextArea1", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, jTextArea1)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, f)},
	{"rect", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, rect)},
	{"rect1", "Ljava/awt/geom/Rectangle2D;", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, rect1)},
	{"excpnthrown", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestTabSize, excpnthrown)},
	{}
};

$MethodInfo _TestTabSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestTabSize::*)()>(&TestTabSize::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&TestTabSize::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestTabSize::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _TestTabSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestTabSize",
	"java.lang.Object",
	nullptr,
	_TestTabSize_FieldInfo_,
	_TestTabSize_MethodInfo_
};

$Object* allocate$TestTabSize($Class* clazz) {
	return $of($alloc(TestTabSize));
}

$JScrollPane* TestTabSize::jScrollPane1 = nullptr;
$JTextArea* TestTabSize::jTextArea1 = nullptr;
$JFrame* TestTabSize::f = nullptr;
$Rectangle2D* TestTabSize::rect = nullptr;
$Rectangle2D* TestTabSize::rect1 = nullptr;
bool TestTabSize::excpnthrown = false;

void TestTabSize::init$() {
}

void TestTabSize::main($StringArray* args) {
	$init(TestTabSize);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(TestTabSize$$Lambda$lambda$main$0)));
	if (TestTabSize::excpnthrown) {
		$throwNew($RuntimeException, "BadLocationException thrown"_s);
	}
	int32_t var$0 = $cast(int32_t, $nc(TestTabSize::rect)->getX());
	if (var$0 != $cast(int32_t, $nc(TestTabSize::rect1)->getX())) {
		$throwNew($RuntimeException, "Tab width calculation wrong"_s);
	}
}

void TestTabSize::lambda$main$0() {
	$init(TestTabSize);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assignStatic(TestTabSize::jScrollPane1, $new($JScrollPane));
				$assignStatic(TestTabSize::jTextArea1, $new($JTextArea));
				$nc(TestTabSize::jTextArea1)->setTabSize(8);
				$assignStatic(TestTabSize::f, $new($JFrame));
				$nc(TestTabSize::jTextArea1)->setFont($$new($Font, "Monospaced"_s, 0, 10));
				$var($String, str, "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!#\n! Some Text\t\t\t\t\t#"_s);
				$nc(TestTabSize::jTextArea1)->setText(str);
				$nc(TestTabSize::jScrollPane1)->setViewportView(TestTabSize::jTextArea1);
				$var($GroupLayout, layout, $new($GroupLayout, $($nc(TestTabSize::f)->getContentPane())));
				$nc($($nc(TestTabSize::f)->getContentPane()))->setLayout(layout);
				$init($GroupLayout$Alignment);
				layout->setHorizontalGroup($($nc($(layout->createParallelGroup($GroupLayout$Alignment::LEADING)))->addGroup($($nc($($nc($($nc($(layout->createSequentialGroup()))->addContainerGap()))->addComponent(TestTabSize::jScrollPane1, $GroupLayout::DEFAULT_SIZE, 446, $Short::MAX_VALUE)))->addContainerGap()))));
				layout->setVerticalGroup($($nc($(layout->createParallelGroup($GroupLayout$Alignment::LEADING)))->addGroup($($nc($($nc($($nc($(layout->createSequentialGroup()))->addContainerGap()))->addComponent(TestTabSize::jScrollPane1)))->addContainerGap()))));
				$nc(TestTabSize::f)->pack();
				int32_t first = str->indexOf("#"_s);
				$nc(TestTabSize::jTextArea1)->setCaretPosition(first);
				$var($Caret, caret, $nc(TestTabSize::jTextArea1)->getCaret());
				$assignStatic(TestTabSize::rect, $nc(TestTabSize::jTextArea1)->modelToView2D($nc(caret)->getDot()));
				$nc($System::out)->println($$str({"caret x position "_s, $$str($nc(TestTabSize::rect)->getX())}));
				$nc(TestTabSize::jTextArea1)->setCaretPosition(str->indexOf("#"_s, first + 1));
				$assign(caret, $nc(TestTabSize::jTextArea1)->getCaret());
				$assignStatic(TestTabSize::rect1, $nc(TestTabSize::jTextArea1)->modelToView2D($nc(caret)->getDot()));
				$nc($System::out)->println($$str({"2nd caret x position "_s, $$str($nc(TestTabSize::rect1)->getX())}));
			} catch ($BadLocationException& ex) {
				TestTabSize::excpnthrown = true;
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (TestTabSize::f != nullptr) {
				$nc(TestTabSize::f)->dispose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$TestTabSize($Class* class$) {
	TestTabSize::excpnthrown = false;
}

TestTabSize::TestTabSize() {
}

$Class* TestTabSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(TestTabSize$$Lambda$lambda$main$0::classInfo$.name)) {
			return TestTabSize$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(TestTabSize, name, initialize, &_TestTabSize_ClassInfo_, clinit$TestTabSize, allocate$TestTabSize);
	return class$;
}

$Class* TestTabSize::class$ = nullptr;
#include <bug4697612.h>

#include <bug4697612$1.h>
#include <bug4697612$2.h>
#include <bug4697612$3.h>
#include <bug4697612$4.h>
#include <bug4697612$5.h>
#include <bug4697612$6.h>
#include <bug4697612$7.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/PrintStream.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef FONT_HEIGHT
#undef FRAME_HEIGHT
#undef FRAME_WIDTH
#undef VK_CONTROL
#undef VK_END
#undef VK_HOME
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4697612$1 = ::bug4697612$1;
using $bug4697612$2 = ::bug4697612$2;
using $bug4697612$3 = ::bug4697612$3;
using $bug4697612$4 = ::bug4697612$4;
using $bug4697612$5 = ::bug4697612$5;
using $bug4697612$6 = ::bug4697612$6;
using $bug4697612$7 = ::bug4697612$7;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug4697612$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4697612$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4697612::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4697612$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4697612$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4697612$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo bug4697612$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4697612$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&bug4697612$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4697612$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4697612$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4697612$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4697612$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4697612$$Lambda$lambda$main$0::class$ = nullptr;

class bug4697612$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(bug4697612$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4697612::lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4697612$$Lambda$lambda$new$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4697612$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4697612$$Lambda$lambda$new$1$1::*)()>(&bug4697612$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4697612$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4697612$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4697612$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(bug4697612$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4697612$$Lambda$lambda$new$1$1::class$ = nullptr;

$FieldInfo _bug4697612_FieldInfo_[] = {
	{"FRAME_WIDTH", "I", nullptr, $STATIC | $FINAL, $constField(bug4697612, FRAME_WIDTH)},
	{"FRAME_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(bug4697612, FRAME_HEIGHT)},
	{"FONT_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(bug4697612, FONT_HEIGHT)},
	{"frameHeight", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4697612, frameHeight)},
	{"fontHeight", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4697612, fontHeight)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4697612, frame)},
	{"text", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(bug4697612, text)},
	{"scroller", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4697612, scroller)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug4697612, robot)},
	{}
};

$MethodInfo _bug4697612_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4697612::*)()>(&bug4697612::init$)), "java.lang.Exception"},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4697612::createAndShowGUI))},
	{"getScrollerViewPosition", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&bug4697612::getScrollerViewPosition)), "java.lang.Exception"},
	{"getTextCaretHeight", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&bug4697612::getTextCaretHeight)), "java.lang.Exception"},
	{"getTextCaretPosition", "()I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)()>(&bug4697612::getTextCaretPosition)), "java.lang.Exception"},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4697612::lambda$main$0))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4697612::lambda$new$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4697612::main)), "java.lang.Throwable"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&bug4697612::setLookAndFeel))},
	{}
};

$InnerClassInfo _bug4697612_InnerClassesInfo_[] = {
	{"bug4697612$7", nullptr, nullptr, 0},
	{"bug4697612$6", nullptr, nullptr, 0},
	{"bug4697612$5", nullptr, nullptr, 0},
	{"bug4697612$4", nullptr, nullptr, 0},
	{"bug4697612$3", nullptr, nullptr, 0},
	{"bug4697612$2", nullptr, nullptr, 0},
	{"bug4697612$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4697612_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4697612",
	"java.lang.Object",
	nullptr,
	_bug4697612_FieldInfo_,
	_bug4697612_MethodInfo_,
	nullptr,
	nullptr,
	_bug4697612_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4697612$7,bug4697612$6,bug4697612$5,bug4697612$4,bug4697612$3,bug4697612$2,bug4697612$1"
};

$Object* allocate$bug4697612($Class* clazz) {
	return $of($alloc(bug4697612));
}

$volatile(int32_t) bug4697612::frameHeight = 0;
$volatile(int32_t) bug4697612::fontHeight = 0;
$JFrame* bug4697612::frame = nullptr;
$JTextArea* bug4697612::text = nullptr;
$JScrollPane* bug4697612::scroller = nullptr;
$Robot* bug4697612::robot = nullptr;

void bug4697612::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($ClassNotFoundException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4697612::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$init(bug4697612);
	$assignStatic(bug4697612::robot, $new($Robot));
	$nc(bug4697612::robot)->setAutoDelay(100);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				try {
					$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4697612$$Lambda$lambda$main$0, laf)));
					$init($System);
					$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
					$new(bug4697612);
					$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				} catch ($Exception&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				}
			}
		}
	}
}

void bug4697612::init$() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug4697612$1, this));
			$nc(bug4697612::robot)->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug4697612$2, this));
			$nc(bug4697612::robot)->waitForIdle();
			$nc(bug4697612::robot)->keyPress($KeyEvent::VK_HOME);
			$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_HOME);
			$nc(bug4697612::robot)->keyPress($KeyEvent::VK_PAGE_DOWN);
			$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_PAGE_DOWN);
			$nc(bug4697612::robot)->waitForIdle();
			int32_t pos0 = getTextCaretPosition();
			int32_t caretHeight = getTextCaretHeight();
			bug4697612::fontHeight = bug4697612::FONT_HEIGHT;
			for (int32_t i = 0; i < 2; ++i) {
				$SwingUtilities::invokeAndWait($$new($bug4697612$3, this));
				bug4697612::frameHeight = bug4697612::FRAME_HEIGHT;
				for (int32_t j = 0; j < caretHeight; ++j) {
					$SwingUtilities::invokeAndWait($$new($bug4697612$4, this));
					$nc(bug4697612::robot)->waitForIdle();
					$nc(bug4697612::robot)->keyPress($KeyEvent::VK_PAGE_DOWN);
					$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_PAGE_DOWN);
					$nc(bug4697612::robot)->keyPress($KeyEvent::VK_PAGE_UP);
					$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_PAGE_UP);
					$nc(bug4697612::robot)->waitForIdle();
					int32_t pos = getTextCaretPosition();
					if (pos0 != pos) {
						$throwNew($RuntimeException, "Failed 4697612: PgDn & PgUp keys scroll by different amounts"_s);
					}
					++bug4697612::frameHeight;
				}
				++bug4697612::fontHeight;
			}
			$var($LookAndFeel, laf, $UIManager::getLookAndFeel());
			if ($nc($($nc(laf)->getID()))->equals("Aqua"_s)) {
				$nc(bug4697612::robot)->keyPress($KeyEvent::VK_END);
				$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_END);
			} else {
				$nc(bug4697612::robot)->keyPress($KeyEvent::VK_CONTROL);
				$nc(bug4697612::robot)->keyPress($KeyEvent::VK_END);
				$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_END);
				$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_CONTROL);
			}
			$nc(bug4697612::robot)->waitForIdle();
			$nc(bug4697612::robot)->delay(1000);
			pos0 = getScrollerViewPosition();
			$nc(bug4697612::robot)->keyPress($KeyEvent::VK_PAGE_DOWN);
			$nc(bug4697612::robot)->keyRelease($KeyEvent::VK_PAGE_DOWN);
			$nc(bug4697612::robot)->waitForIdle();
			int32_t pos = getScrollerViewPosition();
			if (pos0 != pos) {
				$init($System);
				$nc($System::out)->println($$str({"pos0 "_s, $$str(pos0), " pos "_s, $$str(pos)}));
				$throwNew($RuntimeException, "Failed 6244705: PgDn at the bottom causes scrolling"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4697612$$Lambda$lambda$new$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t bug4697612::getTextCaretPosition() {
	$useLocalCurrentObjectStackCache();
	$var($ints, result, $new($ints, 1));
	$SwingUtilities::invokeAndWait($$new($bug4697612$5, result));
	return result->get(0);
}

int32_t bug4697612::getTextCaretHeight() {
	$useLocalCurrentObjectStackCache();
	$var($ints, result, $new($ints, 1));
	$SwingUtilities::invokeAndWait($$new($bug4697612$6, result));
	return result->get(0);
}

int32_t bug4697612::getScrollerViewPosition() {
	$useLocalCurrentObjectStackCache();
	$var($ints, result, $new($ints, 1));
	$SwingUtilities::invokeAndWait($$new($bug4697612$7, result));
	return result->get(0);
}

void bug4697612::createAndShowGUI() {
	$load(bug4697612);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init(bug4697612);
	$assignStatic(bug4697612::frame, $new($JFrame));
	$nc(bug4697612::frame)->setSize(bug4697612::FRAME_WIDTH, bug4697612::FRAME_HEIGHT);
	$nc(bug4697612::frame)->setPreferredSize($$new($Dimension, bug4697612::FRAME_WIDTH, bug4697612::FRAME_HEIGHT));
	$nc(bug4697612::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug4697612::text, $new($JTextArea));
	try {
		$var($InputStream, is, bug4697612::class$->getResourceAsStream("bug4697612.txt"_s));
		$nc(bug4697612::text)->read($$new($InputStreamReader, is), nullptr);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($Error, static_cast<$Throwable*>(e));
	}
	$assignStatic(bug4697612::scroller, $new($JScrollPane, bug4697612::text));
	$nc($($nc(bug4697612::frame)->getContentPane()))->add(static_cast<$Component*>(bug4697612::scroller));
	$nc(bug4697612::frame)->pack();
	$nc(bug4697612::frame)->setVisible(true);
}

void bug4697612::lambda$new$1() {
	$init(bug4697612);
	$nc(bug4697612::frame)->dispose();
}

void bug4697612::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

bug4697612::bug4697612() {
}

$Class* bug4697612::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4697612$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4697612$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug4697612$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return bug4697612$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
	}
	$loadClass(bug4697612, name, initialize, &_bug4697612_ClassInfo_, allocate$bug4697612);
	return class$;
}

$Class* bug4697612::class$ = nullptr;
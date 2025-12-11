#include <PopupReferenceMemoryLeak.h>

#include <PopupReferenceMemoryLeak$FrameCloser.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/ArrayList.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef DISPOSE_ON_CLOSE
#undef VK_C
#undef VK_F
#undef VK_F10
#undef VK_M
#undef VK_T

using $PopupReferenceMemoryLeak$FrameCloser = ::PopupReferenceMemoryLeak$FrameCloser;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $ActionListener = ::java::awt::event::ActionListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayList = ::java::util::ArrayList;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $WindowConstants = ::javax::swing::WindowConstants;

class PopupReferenceMemoryLeak$$Lambda$createUI : public $Runnable {
	$class(PopupReferenceMemoryLeak$$Lambda$createUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$(PopupReferenceMemoryLeak* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->createUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PopupReferenceMemoryLeak$$Lambda$createUI>());
	}
	PopupReferenceMemoryLeak* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PopupReferenceMemoryLeak$$Lambda$createUI::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PopupReferenceMemoryLeak$$Lambda$createUI, inst$)},
	{}
};
$MethodInfo PopupReferenceMemoryLeak$$Lambda$createUI::methodInfos[3] = {
	{"<init>", "(LPopupReferenceMemoryLeak;)V", nullptr, $PUBLIC, $method(static_cast<void(PopupReferenceMemoryLeak$$Lambda$createUI::*)(PopupReferenceMemoryLeak*)>(&PopupReferenceMemoryLeak$$Lambda$createUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PopupReferenceMemoryLeak$$Lambda$createUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"PopupReferenceMemoryLeak$$Lambda$createUI",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* PopupReferenceMemoryLeak$$Lambda$createUI::load$($String* name, bool initialize) {
	$loadClass(PopupReferenceMemoryLeak$$Lambda$createUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PopupReferenceMemoryLeak$$Lambda$createUI::class$ = nullptr;

$FieldInfo _PopupReferenceMemoryLeak_FieldInfo_[] = {
	{"referenceToFrame1", "Ljava/lang/ref/WeakReference;", nullptr, $STATIC | $VOLATILE, $staticField(PopupReferenceMemoryLeak, referenceToFrame1)},
	{"frame1", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(PopupReferenceMemoryLeak, frame1)},
	{"frame2", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(PopupReferenceMemoryLeak, frame2)},
	{}
};

$MethodInfo _PopupReferenceMemoryLeak_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PopupReferenceMemoryLeak::*)()>(&PopupReferenceMemoryLeak::init$))},
	{"createUI", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PopupReferenceMemoryLeak::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&PopupReferenceMemoryLeak::setLookAndFeel))},
	{}
};

$InnerClassInfo _PopupReferenceMemoryLeak_InnerClassesInfo_[] = {
	{"PopupReferenceMemoryLeak$FrameCloser", "PopupReferenceMemoryLeak", "FrameCloser", 0},
	{}
};

$ClassInfo _PopupReferenceMemoryLeak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"PopupReferenceMemoryLeak",
	"java.lang.Object",
	nullptr,
	_PopupReferenceMemoryLeak_FieldInfo_,
	_PopupReferenceMemoryLeak_MethodInfo_,
	nullptr,
	nullptr,
	_PopupReferenceMemoryLeak_InnerClassesInfo_,
	nullptr,
	nullptr,
	"PopupReferenceMemoryLeak$FrameCloser"
};

$Object* allocate$PopupReferenceMemoryLeak($Class* clazz) {
	return $of($alloc(PopupReferenceMemoryLeak));
}

$volatile($WeakReference*) PopupReferenceMemoryLeak::referenceToFrame1 = nullptr;
$JFrame* PopupReferenceMemoryLeak::frame1 = nullptr;
$JFrame* PopupReferenceMemoryLeak::frame2 = nullptr;

void PopupReferenceMemoryLeak::init$() {
}

void PopupReferenceMemoryLeak::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(200);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$var($String, lafName, $nc(laf)->getName());
				$nc($System::out)->println($$str({"Testing LaF: "_s, lafName}));
				if (lafName == nullptr || $nc(lafName)->startsWith("Mac OS X"_s)) {
					continue;
				}
				setLookAndFeel(laf);
				$var(PopupReferenceMemoryLeak, newTest, $new(PopupReferenceMemoryLeak));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(PopupReferenceMemoryLeak$$Lambda$createUI, static_cast<PopupReferenceMemoryLeak*>(newTest))));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							bool passed = false;
							robot->waitForIdle();
							$Thread::sleep(2000);
							robot->mouseMove(200, 200);
							robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
							robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
							robot->keyPress($KeyEvent::VK_F10);
							robot->keyRelease($KeyEvent::VK_F10);
							robot->keyPress($KeyEvent::VK_F);
							robot->keyRelease($KeyEvent::VK_F);
							robot->keyPress($KeyEvent::VK_C);
							robot->keyRelease($KeyEvent::VK_C);
							robot->waitForIdle();
							$Thread::sleep(2000);
							robot->mouseMove(600, 200);
							robot->waitForIdle();
							$Thread::sleep(2000);
							robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
							robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
							$var($JFrame, frame3, $new($JFrame, "Workaround"_s));
							frame3->setSize(100, 100);
							frame3->setLocation(0, 0);
							frame3->setVisible(true);
							$Thread::sleep(1000);
							frame3->setVisible(false);
							frame3->dispose();
							for (int32_t i = 0; i < 30; ++i) {
								try {
									$var($ArrayList, gc, $new($ArrayList));
									while (true) {
										gc->add($$new($ints, 0x000186A0));
									}
								} catch ($Throwable& ignore) {
								}
								$System::gc();
								robot->waitForIdle();
								$Thread::sleep(1000);
								$init(PopupReferenceMemoryLeak);
								if ($nc(PopupReferenceMemoryLeak::referenceToFrame1)->get() == nullptr) {
									passed = true;
									break;
								}
							}
							if (!passed) {
								robot->waitForIdle();
								robot->keyPress($KeyEvent::VK_F10);
								robot->keyRelease($KeyEvent::VK_F10);
								robot->keyPress($KeyEvent::VK_T);
								robot->keyRelease($KeyEvent::VK_T);
								robot->keyPress($KeyEvent::VK_M);
								robot->keyRelease($KeyEvent::VK_M);
								robot->waitForIdle();
								$Thread::sleep(2000);
								for (int32_t i = 0; i < 5; ++i) {
									try {
										$var($ArrayList, gc, $new($ArrayList));
										while (true) {
											gc->add($$new($ints, 0x000186A0));
										}
									} catch ($Throwable& ignore) {
									}
									robot->waitForIdle();
									$Thread::sleep(1000);
									$init(PopupReferenceMemoryLeak);
									if ($nc(PopupReferenceMemoryLeak::referenceToFrame1)->get() == nullptr) {
										$throwNew($RuntimeException, "Frame cleared only after menu activated on frame2"_s);
									}
								}
								$throwNew($RuntimeException, "Test finished but menu has not cleared the reference!"_s);
							}
						} catch ($Exception& re) {
							$throwNew($RuntimeException, $(re->getLocalizedMessage()));
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						$init(PopupReferenceMemoryLeak);
						if (PopupReferenceMemoryLeak::frame2 != nullptr) {
							$nc(PopupReferenceMemoryLeak::frame2)->setVisible(false);
							$nc(PopupReferenceMemoryLeak::frame2)->dispose();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
}

void PopupReferenceMemoryLeak::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void PopupReferenceMemoryLeak::createUI() {
	$useLocalCurrentObjectStackCache();
	$assignStatic(PopupReferenceMemoryLeak::frame1, $new($JFrame, "Main test window"_s));
	$var($JMenuBar, menuBar1, $new($JMenuBar));
	$var($JMenu, file1, $new($JMenu, "File"_s));
	file1->setMnemonic(u'f');
	$var($JMenuItem, close1, $new($JMenuItem, "Close"_s));
	close1->setMnemonic(u'c');
	close1->addActionListener($$new($PopupReferenceMemoryLeak$FrameCloser, this, PopupReferenceMemoryLeak::frame1));
	file1->add(close1);
	menuBar1->add(file1);
	$nc(PopupReferenceMemoryLeak::frame1)->setJMenuBar(menuBar1);
	$nc(PopupReferenceMemoryLeak::frame1)->setSize(200, 200);
	$nc(PopupReferenceMemoryLeak::frame1)->setLocation(100, 100);
	$nc(PopupReferenceMemoryLeak::frame1)->setDefaultCloseOperation($WindowConstants::DISPOSE_ON_CLOSE);
	$nc(PopupReferenceMemoryLeak::frame1)->setVisible(true);
	$assignStatic(PopupReferenceMemoryLeak::referenceToFrame1, $new($WeakReference, PopupReferenceMemoryLeak::frame1));
	$assignStatic(PopupReferenceMemoryLeak::frame1, nullptr);
	$assignStatic(PopupReferenceMemoryLeak::frame2, $new($JFrame, "Secondary"_s));
	$var($JMenuBar, menuBar2, $new($JMenuBar));
	$var($JMenu, test, $new($JMenu, "Test"_s));
	test->setMnemonic(u'T');
	$var($JMenuItem, memoryTest, $new($JMenuItem, "Memory"_s));
	memoryTest->setMnemonic(u'M');
	test->add(memoryTest);
	menuBar2->add(test);
	$nc(PopupReferenceMemoryLeak::frame2)->setJMenuBar(menuBar2);
	$nc(PopupReferenceMemoryLeak::frame2)->setLayout($$new($BorderLayout));
	$nc(PopupReferenceMemoryLeak::frame2)->setSize(200, 200);
	$nc(PopupReferenceMemoryLeak::frame2)->setLocation(500, 100);
	$nc(PopupReferenceMemoryLeak::frame2)->setVisible(true);
}

PopupReferenceMemoryLeak::PopupReferenceMemoryLeak() {
}

$Class* PopupReferenceMemoryLeak::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PopupReferenceMemoryLeak$$Lambda$createUI::classInfo$.name)) {
			return PopupReferenceMemoryLeak$$Lambda$createUI::load$(name, initialize);
		}
	}
	$loadClass(PopupReferenceMemoryLeak, name, initialize, &_PopupReferenceMemoryLeak_ClassInfo_, allocate$PopupReferenceMemoryLeak);
	return class$;
}

$Class* PopupReferenceMemoryLeak::class$ = nullptr;
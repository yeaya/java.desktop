#include <bug8075314.h>

#include <bug8075314$1.h>
#include <bug8075314$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug8075314$1 = ::bug8075314$1;
using $bug8075314$2 = ::bug8075314$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$FieldInfo _bug8075314_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075314, frame)},
	{"frame1", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075314, frame1)},
	{"frame2", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8075314, frame2)},
	{}
};

$MethodInfo _bug8075314_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8075314::*)()>(&bug8075314::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8075314::main)), "java.lang.Exception"},
	{"setup", "(Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JFrame*)>(&bug8075314::setup))},
	{}
};

$InnerClassInfo _bug8075314_InnerClassesInfo_[] = {
	{"bug8075314$2", nullptr, nullptr, 0},
	{"bug8075314$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8075314_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8075314",
	"java.lang.Object",
	nullptr,
	_bug8075314_FieldInfo_,
	_bug8075314_MethodInfo_,
	nullptr,
	nullptr,
	_bug8075314_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8075314$2,bug8075314$1"
};

$Object* allocate$bug8075314($Class* clazz) {
	return $of($alloc(bug8075314));
}

$JFrame* bug8075314::frame = nullptr;
$JInternalFrame* bug8075314::frame1 = nullptr;
$JInternalFrame* bug8075314::frame2 = nullptr;

void bug8075314::init$() {
}

void bug8075314::main($StringArray* args) {
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
				{
					$var($Throwable, var$0, nullptr);
					try {
						$SwingUtilities::invokeAndWait($$new($bug8075314$1));
						$SwingUtilities::invokeAndWait($$new($bug8075314$2));
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						$init(bug8075314);
						if (bug8075314::frame != nullptr) {
							$nc(bug8075314::frame)->dispose();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		}
	}
	$init($System);
	$nc($System::out)->println("ok"_s);
}

void bug8075314::setup($JFrame* frame) {
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	$nc(frame)->setContentPane(desktop);
	$init(bug8075314);
	$assignStatic(bug8075314::frame1, $new($JInternalFrame, "1"_s, true, true, true, true));
	$nc(bug8075314::frame1)->setBounds(40, 40, 300, 200);
	$nc(bug8075314::frame1)->setVisible(true);
	desktop->add(static_cast<$Component*>(bug8075314::frame1));
	$assignStatic(bug8075314::frame2, $new($JInternalFrame, "2"_s, true, true, true, true));
	$nc(bug8075314::frame2)->setBounds(20, 20, 300, 200);
	$nc(bug8075314::frame2)->setVisible(true);
	desktop->add(static_cast<$Component*>(bug8075314::frame2));
	frame->setSize(500, 400);
	frame->setVisible(true);
}

bug8075314::bug8075314() {
}

$Class* bug8075314::load$($String* name, bool initialize) {
	$loadClass(bug8075314, name, initialize, &_bug8075314_ClassInfo_, allocate$bug8075314);
	return class$;
}

$Class* bug8075314::class$ = nullptr;
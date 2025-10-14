#include <bug7199708.h>

#include <bug7199708$1.h>
#include <bug7199708$2.h>
#include <bug7199708$ComponentAction.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/attribute/FileAttribute.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef FILE_NUMBER
#undef VK_ESCAPE

using $ComponentArray = $Array<::java::awt::Component>;
using $FileArray = $Array<::java::io::File>;
using $FileAttributeArray = $Array<::java::nio::file::attribute::FileAttribute>;
using $bug7199708$1 = ::bug7199708$1;
using $bug7199708$2 = ::bug7199708$2;
using $bug7199708$ComponentAction = ::bug7199708$ComponentAction;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $FileAttribute = ::java::nio::file::attribute::FileAttribute;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _bug7199708_FieldInfo_[] = {
	{"FILE_NUMBER", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug7199708, FILE_NUMBER)},
	{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, fileChooser)},
	{"locationX", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, locationX)},
	{"locationY", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, locationY)},
	{"width", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7199708, width)},
	{"largeFolder", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(bug7199708, largeFolder)},
	{"files", "[Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(bug7199708, files)},
	{}
};

$MethodInfo _bug7199708_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7199708::*)()>(&bug7199708::init$))},
	{"createLargeFolder", "()Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)()>(&bug7199708::createLargeFolder))},
	{"doAction", "(Ljava/awt/Component;Lbug7199708$ComponentAction;)V", nullptr, $STATIC, $method(static_cast<void(*)($Component*,$bug7199708$ComponentAction*)>(&bug7199708::doAction))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7199708::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7199708_InnerClassesInfo_[] = {
	{"bug7199708$ComponentAction", "bug7199708", "ComponentAction", $STATIC | $INTERFACE | $ABSTRACT},
	{"bug7199708$2", nullptr, nullptr, 0},
	{"bug7199708$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7199708_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7199708",
	"java.lang.Object",
	nullptr,
	_bug7199708_FieldInfo_,
	_bug7199708_MethodInfo_,
	nullptr,
	nullptr,
	_bug7199708_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7199708$ComponentAction,bug7199708$2,bug7199708$2$2,bug7199708$2$1,bug7199708$1"
};

$Object* allocate$bug7199708($Class* clazz) {
	return $of($alloc(bug7199708));
}

int32_t bug7199708::FILE_NUMBER = 0;
$volatile($JFileChooser*) bug7199708::fileChooser = nullptr;
$volatile(int32_t) bug7199708::locationX = 0;
$volatile(int32_t) bug7199708::locationY = 0;
$volatile(int32_t) bug7199708::width = 0;
$File* bug7199708::largeFolder = nullptr;
$FileArray* bug7199708::files = nullptr;

void bug7199708::init$() {
}

void bug7199708::main($StringArray* args) {
	$init(bug7199708);
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($File, folder, createLargeFolder());
			$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
			$SwingUtilities::invokeLater($$new($bug7199708$1, folder));
			robot->waitForIdle();
			$SwingUtilities::invokeLater($$new($bug7199708$2));
			robot->waitForIdle();
			int32_t d = 25;
			for (int32_t i = 0; i < $div(bug7199708::width, d); ++i) {
				robot->mouseMove(bug7199708::locationX + i * d, bug7199708::locationY + 5);
				robot->waitForIdle();
				robot->mousePress($InputEvent::BUTTON1_MASK);
				robot->waitForIdle();
				robot->mouseRelease($InputEvent::BUTTON1_MASK);
				robot->waitForIdle();
			}
			robot->keyPress($KeyEvent::VK_ESCAPE);
			robot->waitForIdle();
			robot->keyRelease($KeyEvent::VK_ESCAPE);
			robot->waitForIdle();
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			for (int32_t i = 0; i < bug7199708::FILE_NUMBER; ++i) {
				$Files::delete$($($nc($nc(bug7199708::files)->get(i))->toPath()));
			}
			$Files::delete$($($nc(bug7199708::largeFolder)->toPath()));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug7199708::doAction($Component* component, $bug7199708$ComponentAction* action) {
	$init(bug7199708);
	if ($nc(action)->accept(component)) {
		action->perform(component);
	} else if ($instanceOf($Container, component)) {
		{
			$var($ComponentArray, arr$, $nc(($cast($Container, component)))->getComponents());
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					doAction(comp, action);
				}
			}
		}
	}
}

$File* bug7199708::createLargeFolder() {
	$init(bug7199708);
	try {
		$assignStatic(bug7199708::largeFolder, $nc($($Files::createTempDirectory("large_folder"_s, $$new($FileAttributeArray, 0))))->toFile());
		for (int32_t i = 0; i < bug7199708::FILE_NUMBER; ++i) {
			$nc(bug7199708::files)->set(i, $$new($File, bug7199708::largeFolder, $$str({"File_"_s, $$str(i), ".txt"_s})));
			$nc($nc(bug7199708::files)->get(i))->createNewFile();
		}
		return bug7199708::largeFolder;
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

void clinit$bug7199708($Class* class$) {
	bug7199708::FILE_NUMBER = 30000;
	$assignStatic(bug7199708::files, $new($FileArray, bug7199708::FILE_NUMBER));
}

bug7199708::bug7199708() {
}

$Class* bug7199708::load$($String* name, bool initialize) {
	$loadClass(bug7199708, name, initialize, &_bug7199708_ClassInfo_, clinit$bug7199708, allocate$bug7199708);
	return class$;
}

$Class* bug7199708::class$ = nullptr;
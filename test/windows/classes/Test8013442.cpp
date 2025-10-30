#include <Test8013442.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <java/lang/Thread$UncaughtExceptionHandler.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

#undef LATCH

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $FileFilterArray = $Array<::javax::swing::filechooser::FileFilter>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Thread$UncaughtExceptionHandler = ::java::lang::Thread$UncaughtExceptionHandler;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

$FieldInfo _Test8013442_FieldInfo_[] = {
	{"LATCH", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8013442, LATCH)},
	{"index", "I", nullptr, $PRIVATE, $field(Test8013442, index)},
	{"infos", "[Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PRIVATE, $field(Test8013442, infos)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE, $field(Test8013442, chooser)},
	{}
};

$MethodInfo _Test8013442_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8013442::*)()>(&Test8013442::init$))},
	{"accept", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8013442::main)), "java.lang.InterruptedException"},
	{"run", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Test8013442_InnerClassesInfo_[] = {
	{"java.lang.Thread$UncaughtExceptionHandler", "java.lang.Thread", "UncaughtExceptionHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Test8013442_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8013442",
	"javax.swing.filechooser.FileFilter",
	"java.lang.Runnable,java.lang.Thread$UncaughtExceptionHandler",
	_Test8013442_FieldInfo_,
	_Test8013442_MethodInfo_,
	nullptr,
	nullptr,
	_Test8013442_InnerClassesInfo_
};

$Object* allocate$Test8013442($Class* clazz) {
	return $of($alloc(Test8013442));
}

int32_t Test8013442::hashCode() {
	 return this->$FileFilter::hashCode();
}

bool Test8013442::equals(Object$* arg0) {
	 return this->$FileFilter::equals(arg0);
}

$Object* Test8013442::clone() {
	 return this->$FileFilter::clone();
}

$String* Test8013442::toString() {
	 return this->$FileFilter::toString();
}

void Test8013442::finalize() {
	this->$FileFilter::finalize();
}

$CountDownLatch* Test8013442::LATCH = nullptr;

void Test8013442::init$() {
	$FileFilter::init$();
}

void Test8013442::main($StringArray* args) {
	$init(Test8013442);
	$SwingUtilities::invokeLater($$new(Test8013442));
	$nc(Test8013442::LATCH)->await();
}

bool Test8013442::accept($File* file) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(file)->isFile();
	return var$0 || $($nc($($nc(file)->getName()))->toLowerCase())->endsWith(".txt"_s);
}

$String* Test8013442::getDescription() {
	return "Text files"_s;
}

void Test8013442::run() {
	$useLocalCurrentObjectStackCache();
	if (this->infos == nullptr) {
		$set(this, infos, $UIManager::getInstalledLookAndFeels());
		$($Thread::currentThread())->setUncaughtExceptionHandler(this);
	}
	if ($nc(this->infos)->length == this->index) {
		$nc(Test8013442::LATCH)->countDown();
	} else if (this->chooser == nullptr) {
		$var($UIManager$LookAndFeelInfo, info, $nc(this->infos)->get(this->index));
		$nc($System::out)->println($($nc(info)->getName()));
		try {
			$UIManager::setLookAndFeel($($nc(info)->getClassName()));
		} catch ($Exception& exception) {
			$throwNew($Error, "could not change look and feel"_s, exception);
		}
		$var($JFrame, frame, $new($JFrame, $($of(this)->getClass()->getSimpleName())));
		frame->add(static_cast<$Component*>(($set(this, chooser, $new($JFileChooser)))));
		frame->setSize(800, 600);
		frame->setLocationRelativeTo(nullptr);
		frame->setVisible(true);
		$SwingUtilities::invokeLater(this);
	} else {
		int32_t count = $nc($($nc(this->chooser)->getChoosableFileFilters()))->length;
		$nc($System::out)->println($$str({"count = "_s, $$str(count), "; "_s, $$str($nc(this->chooser)->isAcceptAllFileFilterUsed())}));
		if (count == 0) {
			if (nullptr != $nc(this->chooser)->getFileFilter()) {
				$throwNew($Error, "file filter is selected"_s);
			}
			$nc($($SwingUtilities::getWindowAncestor(this->chooser)))->dispose();
			$set(this, chooser, nullptr);
			++this->index;
		} else {
			if (nullptr == $nc(this->chooser)->getFileFilter()) {
				$throwNew($Error, "file filter is not selected"_s);
			}
			if (count == 2) {
				$nc(this->chooser)->setAcceptAllFileFilterUsed(false);
			} else if ($nc(this->chooser)->isAcceptAllFileFilterUsed()) {
				$nc(this->chooser)->addChoosableFileFilter(this);
			} else {
				$nc(this->chooser)->removeChoosableFileFilter(this);
			}
		}
		$SwingUtilities::invokeLater(this);
	}
}

void Test8013442::uncaughtException($Thread* thread, $Throwable* throwable) {
	$nc(throwable)->printStackTrace();
	$System::exit(1);
}

void clinit$Test8013442($Class* class$) {
	$assignStatic(Test8013442::LATCH, $new($CountDownLatch, 1));
}

Test8013442::Test8013442() {
}

$Class* Test8013442::load$($String* name, bool initialize) {
	$loadClass(Test8013442, name, initialize, &_Test8013442_ClassInfo_, clinit$Test8013442, allocate$Test8013442);
	return class$;
}

$Class* Test8013442::class$ = nullptr;
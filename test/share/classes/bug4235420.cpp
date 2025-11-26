#include <bug4235420.h>

#include <bug4235420$1.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef LF

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4235420$1 = ::bug4235420$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$MethodInfo _bug4235420_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4235420::*)()>(&bug4235420::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4235420::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4235420_InnerClassesInfo_[] = {
	{"bug4235420$Table", "bug4235420", "Table", $PRIVATE | $STATIC},
	{"bug4235420$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4235420_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4235420",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug4235420_MethodInfo_,
	nullptr,
	nullptr,
	_bug4235420_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4235420$Table,bug4235420$1"
};

$Object* allocate$bug4235420($Class* clazz) {
	return $of($alloc(bug4235420));
}

void bug4235420::init$() {
}

void bug4235420::main($StringArray* argv) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(LF)->getClassName())}));
				} catch ($ClassNotFoundException& e) {
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				} catch ($InstantiationException& e) {
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				} catch ($IllegalAccessException& e) {
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				}
				$nc($System::out)->println($$str({"Testing L&F: "_s, $($nc(LF)->getClassName())}));
				bool var$0 = "Nimbus"_s->equals($($nc($($UIManager::getLookAndFeel()))->getName()));
				if (var$0 || "GTK"_s->equals($($nc($($UIManager::getLookAndFeel()))->getName()))) {
					$nc($System::out)->println("The test is skipped for Nimbus and GTK"_s);
					continue;
				}
				$SwingUtilities::invokeAndWait($$new($bug4235420$1));
			}
		}
	}
}

bug4235420::bug4235420() {
}

$Class* bug4235420::load$($String* name, bool initialize) {
	$loadClass(bug4235420, name, initialize, &_bug4235420_ClassInfo_, allocate$bug4235420);
	return class$;
}

$Class* bug4235420::class$ = nullptr;
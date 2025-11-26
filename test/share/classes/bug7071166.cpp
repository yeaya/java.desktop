#include <bug7071166.h>

#include <bug7071166$1.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef POSITIONS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug7071166$1 = ::bug7071166$1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$FieldInfo _bug7071166_FieldInfo_[] = {
	{"POSITIONS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7071166, POSITIONS)},
	{}
};

$MethodInfo _bug7071166_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7071166::*)()>(&bug7071166::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7071166::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7071166_InnerClassesInfo_[] = {
	{"bug7071166$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7071166_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7071166",
	"java.lang.Object",
	nullptr,
	_bug7071166_FieldInfo_,
	_bug7071166_MethodInfo_,
	nullptr,
	nullptr,
	_bug7071166_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7071166$1"
};

$Object* allocate$bug7071166($Class* clazz) {
	return $of($alloc(bug7071166));
}

$ints* bug7071166::POSITIONS = nullptr;

void bug7071166::init$() {
}

void bug7071166::main($StringArray* args) {
	$init(bug7071166);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					continue;
				}
				$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(lookAndFeelInfo)->getName())}));
				$SwingUtilities::invokeAndWait($$new($bug7071166$1));
				$nc($System::out)->println("passed"_s);
			}
		}
	}
}

void clinit$bug7071166($Class* class$) {
	$assignStatic(bug7071166::POSITIONS, $new($ints, {
		1,
		3,
		5,
		7,
		2,
		4,
		6,
		8,
		123,
		-456
	}));
}

bug7071166::bug7071166() {
}

$Class* bug7071166::load$($String* name, bool initialize) {
	$loadClass(bug7071166, name, initialize, &_bug7071166_ClassInfo_, clinit$bug7071166, allocate$bug7071166);
	return class$;
}

$Class* bug7071166::class$ = nullptr;
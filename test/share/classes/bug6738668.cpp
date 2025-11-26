#include <bug6738668.h>

#include <java/io/File.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

$MethodInfo _bug6738668_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6738668::*)()>(&bug6738668::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6738668::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug6738668_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6738668",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6738668_MethodInfo_
};

$Object* allocate$bug6738668($Class* clazz) {
	return $of($alloc(bug6738668));
}

void bug6738668::init$() {
}

void bug6738668::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(lookAndFeelInfo)->getClassName()));
				$var($String, tmpdir, $System::getProperty("java.io.tmpdir"_s));
				$nc($System::out)->println($$str({"tmp dir "_s, tmpdir}));
				$new($JFileChooser, $$new($File, $$str({tmpdir, "/temp"_s})));
				$nc($System::out)->println($$str({"Test passed for LookAndFeel "_s, $($nc(lookAndFeelInfo)->getClassName())}));
			}
		}
	}
}

bug6738668::bug6738668() {
}

$Class* bug6738668::load$($String* name, bool initialize) {
	$loadClass(bug6738668, name, initialize, &_bug6738668_ClassInfo_, allocate$bug6738668);
	return class$;
}

$Class* bug6738668::class$ = nullptr;
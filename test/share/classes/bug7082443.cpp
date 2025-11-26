#include <bug7082443.h>

#include <bug7082443$1.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef GTK_LAF_CLASS

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug7082443$1 = ::bug7082443$1;
using $PrintStream = ::java::io::PrintStream;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$FieldInfo _bug7082443_FieldInfo_[] = {
	{"GTK_LAF_CLASS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(bug7082443, GTK_LAF_CLASS)},
	{}
};

$MethodInfo _bug7082443_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug7082443::*)()>(&bug7082443::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug7082443::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug7082443_InnerClassesInfo_[] = {
	{"bug7082443$TestComboBox", "bug7082443", "TestComboBox", $PRIVATE | $STATIC},
	{"bug7082443$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7082443_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug7082443",
	"java.lang.Object",
	nullptr,
	_bug7082443_FieldInfo_,
	_bug7082443_MethodInfo_,
	nullptr,
	nullptr,
	_bug7082443_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug7082443$TestComboBox,bug7082443$TestComboBox$1,bug7082443$1"
};

$Object* allocate$bug7082443($Class* clazz) {
	return $of($alloc(bug7082443));
}

$String* bug7082443::GTK_LAF_CLASS = nullptr;

void bug7082443::init$() {
}

void bug7082443::main($StringArray* args) {
	$init(bug7082443);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelInfo, arr$->get(i$));
			{
				if ($nc($($nc(lookAndFeelInfo)->getClassName()))->contains(bug7082443::GTK_LAF_CLASS)) {
					try {
						$UIManager::setLookAndFeel($(lookAndFeelInfo->getClassName()));
					} catch ($UnsupportedLookAndFeelException& ignored) {
						continue;
					}
					$SwingUtilities::invokeAndWait($$new($bug7082443$1));
					return;
				}
			}
		}
	}
	$nc($System::out)->println($$str({bug7082443::GTK_LAF_CLASS, " is not found. The test skipped"_s}));
}

bug7082443::bug7082443() {
}

void clinit$bug7082443($Class* class$) {
	$assignStatic(bug7082443::GTK_LAF_CLASS, "GTKLookAndFeel"_s);
}

$Class* bug7082443::load$($String* name, bool initialize) {
	$loadClass(bug7082443, name, initialize, &_bug7082443_ClassInfo_, clinit$bug7082443, allocate$bug7082443);
	return class$;
}

$Class* bug7082443::class$ = nullptr;
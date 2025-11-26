#include <bug6632953$1.h>

#include <bug6632953.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/metal/MetalComboBoxUI.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug6632953 = ::bug6632953;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $MetalComboBoxUI = ::javax::swing::plaf::metal::MetalComboBoxUI;

$MethodInfo _bug6632953$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug6632953$1::*)()>(&bug6632953$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug6632953$1_EnclosingMethodInfo_ = {
	"bug6632953",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug6632953$1_InnerClassesInfo_[] = {
	{"bug6632953$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6632953$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug6632953$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug6632953$1_MethodInfo_,
	nullptr,
	&_bug6632953$1_EnclosingMethodInfo_,
	_bug6632953$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6632953"
};

$Object* allocate$bug6632953$1($Class* clazz) {
	return $of($alloc(bug6632953$1));
}

void bug6632953$1::init$() {
}

void bug6632953$1::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lafInfo, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(lafInfo)->getClassName()));
				} catch ($UnsupportedLookAndFeelException& ignored) {
					continue;
				} catch ($Exception& e) {
					$throwNew($RuntimeException, static_cast<$Throwable*>(e));
				}
				$var($MetalComboBoxUI, ui, $new($MetalComboBoxUI));
				ui->installUI($$new($JComboBox));
				ui->getBaseline($$new($JComboBox), 0, 0);
				ui->getBaseline($$new($JComboBox), 1, 1);
				ui->getBaseline($$new($JComboBox), 2, 2);
				ui->getBaseline($$new($JComboBox), 3, 3);
				ui->getBaseline($$new($JComboBox), 4, 4);
			}
		}
	}
}

bug6632953$1::bug6632953$1() {
}

$Class* bug6632953$1::load$($String* name, bool initialize) {
	$loadClass(bug6632953$1, name, initialize, &_bug6632953$1_ClassInfo_, allocate$bug6632953$1);
	return class$;
}

$Class* bug6632953$1::class$ = nullptr;
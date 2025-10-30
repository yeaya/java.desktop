#include <BasicComboNPE.h>

#include <java/awt/IllegalComponentStateException.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$MethodInfo _BasicComboNPE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicComboNPE::*)()>(&BasicComboNPE::init$))},
	{"getModel", "()Ljavax/swing/ComboBoxModel;", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BasicComboNPE::main))},
	{}
};

$ClassInfo _BasicComboNPE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BasicComboNPE",
	"javax.swing.JComboBox",
	nullptr,
	nullptr,
	_BasicComboNPE_MethodInfo_
};

$Object* allocate$BasicComboNPE($Class* clazz) {
	return $of($alloc(BasicComboNPE));
}

void BasicComboNPE::init$() {
	$JComboBox::init$();
}

void BasicComboNPE::main($StringArray* args) {
	$init(BasicComboNPE);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				try {
					$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
					$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
					$$new(BasicComboNPE)->getModel();
				} catch ($IllegalComponentStateException& e) {
				} catch ($ClassNotFoundException& e) {
				} catch ($InstantiationException& e) {
				} catch ($IllegalAccessException& e) {
				} catch ($UnsupportedLookAndFeelException& e) {
				}
			}
		}
	}
}

$ComboBoxModel* BasicComboNPE::getModel() {
	setPopupVisible(false);
	isPopupVisible();
	return $JComboBox::getModel();
}

BasicComboNPE::BasicComboNPE() {
}

$Class* BasicComboNPE::load$($String* name, bool initialize) {
	$loadClass(BasicComboNPE, name, initialize, &_BasicComboNPE_ClassInfo_, allocate$BasicComboNPE);
	return class$;
}

$Class* BasicComboNPE::class$ = nullptr;
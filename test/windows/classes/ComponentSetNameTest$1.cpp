#include <ComponentSetNameTest$1.h>

#include <ComponentSetNameTest.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ComponentSetNameTest = ::ComponentSetNameTest;
using $JComponentArray = $Array<::javax::swing::JComponent>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSlider = ::javax::swing::JSlider;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JTable = ::javax::swing::JTable;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _ComponentSetNameTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ComponentSetNameTest$1::*)()>(&ComponentSetNameTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ComponentSetNameTest$1_EnclosingMethodInfo_ = {
	"ComponentSetNameTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ComponentSetNameTest$1_InnerClassesInfo_[] = {
	{"ComponentSetNameTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ComponentSetNameTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ComponentSetNameTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ComponentSetNameTest$1_MethodInfo_,
	nullptr,
	&_ComponentSetNameTest$1_EnclosingMethodInfo_,
	_ComponentSetNameTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ComponentSetNameTest"
};

$Object* allocate$ComponentSetNameTest$1($Class* clazz) {
	return $of($alloc(ComponentSetNameTest$1));
}

void ComponentSetNameTest$1::init$() {
}

void ComponentSetNameTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($UIManager$LookAndFeelInfoArray, looks, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, looks);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, look, arr$->get(i$));
			{
				try {
					$UIManager::setLookAndFeel($($nc(look)->getClassName()));
				} catch ($ClassNotFoundException&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				} catch ($InstantiationException&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				} catch ($UnsupportedLookAndFeelException&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				} catch ($IllegalAccessException&) {
					$var($Exception, e, $catch());
					$throwNew($RuntimeException, $$str({"Failed to set LookAndFeel "_s, $($nc(look)->getClassName())}), e);
				}
				$var($JComponentArray, components, $new($JComponentArray, {
					static_cast<$JComponent*>($$new($JTextArea)),
					static_cast<$JComponent*>($$new($JTextField)),
					static_cast<$JComponent*>($$new($JComboBox)),
					static_cast<$JComponent*>($$new($JCheckBox)),
					static_cast<$JComponent*>($$new($JRadioButton)),
					static_cast<$JComponent*>($$new($JButton)),
					static_cast<$JComponent*>($$new($JPanel)),
					static_cast<$JComponent*>($$new($JTable)),
					static_cast<$JComponent*>($$new($JTabbedPane)),
					static_cast<$JComponent*>($$new($JScrollPane)),
					static_cast<$JComponent*>($$new($JSlider)),
					static_cast<$JComponent*>($$new($JMenu)),
					static_cast<$JComponent*>($$new($JToolBar))
				}));
				{
					$var($JComponentArray, arr$, components);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($JComponent, component, arr$->get(i$));
						{
							$ComponentSetNameTest::testSetName(component, $($nc(look)->getClassName()));
						}
					}
				}
			}
		}
	}
}

ComponentSetNameTest$1::ComponentSetNameTest$1() {
}

$Class* ComponentSetNameTest$1::load$($String* name, bool initialize) {
	$loadClass(ComponentSetNameTest$1, name, initialize, &_ComponentSetNameTest$1_ClassInfo_, allocate$ComponentSetNameTest$1);
	return class$;
}

$Class* ComponentSetNameTest$1::class$ = nullptr;
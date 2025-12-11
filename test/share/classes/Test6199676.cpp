#include <Test6199676.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

$MethodInfo _Test6199676_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6199676::*)()>(&Test6199676::init$))},
	{"getPreview", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)($Container*)>(&Test6199676::getPreview))},
	{"isShowing", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Component*)>(&Test6199676::isShowing))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6199676::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&Test6199676::setLookAndFeel))},
	{}
};

$ClassInfo _Test6199676_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6199676",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_Test6199676_MethodInfo_
};

$Object* allocate$Test6199676($Class* clazz) {
	return $of($alloc(Test6199676));
}

void Test6199676::init$() {
}

void Test6199676::main($StringArray* args) {
	$init(Test6199676);
	$SwingUtilities::invokeAndWait($$new(Test6199676));
}

$Component* Test6199676::getPreview($Container* container$renamed) {
	$init(Test6199676);
	$useLocalCurrentObjectStackCache();
	$var($Container, container, container$renamed);
	$var($String, name, "ColorChooser.previewPanelHolder"_s);
	{
		$var($ComponentArray, arr$, $nc(container)->getComponents());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			{
				if (!name->equals($($nc(component)->getName()))) {
					$assign(component, ($instanceOf($Container, component)) ? getPreview($cast($Container, component)) : ($Component*)nullptr);
				}
				if ($instanceOf($Container, component)) {
					$assign(container, $cast($Container, component));
					return 1 == container->getComponentCount() ? container->getComponent(0) : ($Component*)nullptr;
				}
			}
		}
	}
	return nullptr;
}

bool Test6199676::isShowing($Component* component) {
	$init(Test6199676);
	return (component != nullptr) && component->isShowing();
}

void Test6199676::run() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($JColorChooser, chooser, $new($JColorChooser));
		$var($JFrame, frame, $new($JFrame, $($of(this)->getClass()->getName())));
		{
			$var($Throwable, var$0, nullptr);
			try {
				frame->add(static_cast<$Component*>(chooser));
				frame->setVisible(true);
				setLookAndFeel($nc($($UIManager::getInstalledLookAndFeels()))->get(0));
				$SwingUtilities::updateComponentTreeUI(chooser);
				$var($Component, component, chooser->getPreviewPanel());
				if (component == nullptr) {
					$assign(component, getPreview(chooser));
				}
				if (!isShowing(component)) {
					$throwNew($RuntimeException, "default preview panel is not showing"_s);
				}
				chooser->setPreviewPanel($$new($JPanel));
				setLookAndFeel($nc($($UIManager::getInstalledLookAndFeels()))->get(1));
				$SwingUtilities::updateComponentTreeUI(chooser);
				if (isShowing($(chooser->getPreviewPanel()))) {
					$throwNew($RuntimeException, "custom preview panel is showing"_s);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				frame->dispose();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void Test6199676::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(Test6199676);
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

Test6199676::Test6199676() {
}

$Class* Test6199676::load$($String* name, bool initialize) {
	$loadClass(Test6199676, name, initialize, &_Test6199676_ClassInfo_, allocate$Test6199676);
	return class$;
}

$Class* Test6199676::class$ = nullptr;
#include <Test6707406.h>

#include <java/awt/Color.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/plaf/ColorChooserUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <jcpp.h>

#undef BLUE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $ColorChooserUI = ::javax::swing::plaf::ColorChooserUI;
using $BasicColorChooserUI = ::javax::swing::plaf::basic::BasicColorChooserUI;

$MethodInfo _Test6707406_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6707406::*)()>(&Test6707406::init$))},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6707406::main)), "java.lang.Exception"},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test6707406::test))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Test6707406_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6707406",
	"javax.swing.plaf.basic.BasicColorChooserUI",
	"java.beans.PropertyChangeListener",
	nullptr,
	_Test6707406_MethodInfo_
};

$Object* allocate$Test6707406($Class* clazz) {
	return $of($alloc(Test6707406));
}

int32_t Test6707406::hashCode() {
	 return this->$BasicColorChooserUI::hashCode();
}

bool Test6707406::equals(Object$* arg0) {
	 return this->$BasicColorChooserUI::equals(arg0);
}

$Object* Test6707406::clone() {
	 return this->$BasicColorChooserUI::clone();
}

$String* Test6707406::toString() {
	 return this->$BasicColorChooserUI::toString();
}

void Test6707406::finalize() {
	this->$BasicColorChooserUI::finalize();
}

void Test6707406::init$() {
	$BasicColorChooserUI::init$();
}

void Test6707406::main($StringArray* args) {
	$init(Test6707406);
	$useLocalCurrentObjectStackCache();
	test();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$nc($System::out)->println($($nc(laf)->getName()));
				$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
				test();
			}
		}
	}
}

void Test6707406::test() {
	$init(Test6707406);
	$useLocalCurrentObjectStackCache();
	$var($JColorChooser, chooser, $new($JColorChooser));
	$nc($($cast($ColorChooserUI, chooser->getUI())))->uninstallUI(chooser);
	$$new(Test6707406)->installUI(chooser);
	$init($Color);
	$nc($(chooser->getSelectionModel()))->setSelectedColor($Color::BLUE);
}

$PropertyChangeListener* Test6707406::createPropertyChangeListener() {
	return this;
}

void Test6707406::propertyChange($PropertyChangeEvent* event) {
}

Test6707406::Test6707406() {
}

$Class* Test6707406::load$($String* name, bool initialize) {
	$loadClass(Test6707406, name, initialize, &_Test6707406_ClassInfo_, allocate$Test6707406);
	return class$;
}

$Class* Test6707406::class$ = nullptr;
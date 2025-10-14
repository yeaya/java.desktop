#include <SelectAllFilesFilterTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileNameExtensionFilter.h>
#include <jcpp.h>

#undef LABEL_TEXT
#undef OPEN_DIALOG

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileNameExtensionFilter = ::javax::swing::filechooser::FileNameExtensionFilter;

class SelectAllFilesFilterTest$$Lambda$createAndShowGUI : public $Runnable {
	$class(SelectAllFilesFilterTest$$Lambda$createAndShowGUI, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SelectAllFilesFilterTest::createAndShowGUI();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SelectAllFilesFilterTest$$Lambda$createAndShowGUI>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SelectAllFilesFilterTest$$Lambda$createAndShowGUI::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectAllFilesFilterTest$$Lambda$createAndShowGUI::*)()>(&SelectAllFilesFilterTest$$Lambda$createAndShowGUI::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SelectAllFilesFilterTest$$Lambda$createAndShowGUI::classInfo$ = {
	$PUBLIC | $FINAL,
	"SelectAllFilesFilterTest$$Lambda$createAndShowGUI",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SelectAllFilesFilterTest$$Lambda$createAndShowGUI::load$($String* name, bool initialize) {
	$loadClass(SelectAllFilesFilterTest$$Lambda$createAndShowGUI, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SelectAllFilesFilterTest$$Lambda$createAndShowGUI::class$ = nullptr;

class SelectAllFilesFilterTest$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SelectAllFilesFilterTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SelectAllFilesFilterTest$$Lambda$lambda$main$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::*)()>(&SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"SelectAllFilesFilterTest$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::class$ = nullptr;

class SelectAllFilesFilterTest$$Lambda$lambda$main$1$2 : public $Runnable {
	$class(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		SelectAllFilesFilterTest::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<SelectAllFilesFilterTest$$Lambda$lambda$main$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::*)()>(&SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"SelectAllFilesFilterTest$$Lambda$lambda$main$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$loadClass(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::class$ = nullptr;

$FieldInfo _SelectAllFilesFilterTest_FieldInfo_[] = {
	{"LABEL_TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SelectAllFilesFilterTest, LABEL_TEXT)},
	{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(SelectAllFilesFilterTest, fileChooser)},
	{"comboBox", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(SelectAllFilesFilterTest, comboBox)},
	{}
};

$MethodInfo _SelectAllFilesFilterTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SelectAllFilesFilterTest::*)()>(&SelectAllFilesFilterTest::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&SelectAllFilesFilterTest::createAndShowGUI))},
	{"findComboBox", "(Ljava/awt/Component;)Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JComboBox*(*)($Component*)>(&SelectAllFilesFilterTest::findComboBox))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SelectAllFilesFilterTest::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&SelectAllFilesFilterTest::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&SelectAllFilesFilterTest::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _SelectAllFilesFilterTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"SelectAllFilesFilterTest",
	"java.lang.Object",
	nullptr,
	_SelectAllFilesFilterTest_FieldInfo_,
	_SelectAllFilesFilterTest_MethodInfo_
};

$Object* allocate$SelectAllFilesFilterTest($Class* clazz) {
	return $of($alloc(SelectAllFilesFilterTest));
}

$String* SelectAllFilesFilterTest::LABEL_TEXT = nullptr;
$volatile($JFileChooser*) SelectAllFilesFilterTest::fileChooser = nullptr;
$JComboBox* SelectAllFilesFilterTest::comboBox = nullptr;

void SelectAllFilesFilterTest::init$() {
}

void SelectAllFilesFilterTest::main($StringArray* args) {
	$init(SelectAllFilesFilterTest);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(SelectAllFilesFilterTest$$Lambda$createAndShowGUI)));
	while (SelectAllFilesFilterTest::fileChooser == nullptr) {
		$Thread::sleep(100);
	}
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2)));
}

void SelectAllFilesFilterTest::createAndShowGUI() {
	$init(SelectAllFilesFilterTest);
	$assignStatic(SelectAllFilesFilterTest::fileChooser, $new($JFileChooser));
	$nc(SelectAllFilesFilterTest::fileChooser)->setAcceptAllFileFilterUsed(true);
	$nc(SelectAllFilesFilterTest::fileChooser)->setDialogType($JFileChooser::OPEN_DIALOG);
	$var($FileFilter, txtFilter, $new($FileNameExtensionFilter, "Text files"_s, $$new($StringArray, {"txt"_s})));
	$nc(SelectAllFilesFilterTest::fileChooser)->addChoosableFileFilter(txtFilter);
	$nc(SelectAllFilesFilterTest::fileChooser)->setFileFilter(txtFilter);
	$nc(SelectAllFilesFilterTest::fileChooser)->showOpenDialog(nullptr);
}

$JComboBox* SelectAllFilesFilterTest::findComboBox($Component* comp) {
	$init(SelectAllFilesFilterTest);
	if ($instanceOf($JLabel, comp)) {
		$var($JLabel, label, $cast($JLabel, comp));
		if ($nc(SelectAllFilesFilterTest::LABEL_TEXT)->equals($($nc(label)->getText()))) {
			return $cast($JComboBox, $nc(label)->getLabelFor());
		}
	}
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		for (int32_t i = 0; i < $nc(cont)->getComponentCount(); ++i) {
			$var($JComboBox, result, findComboBox($(cont->getComponent(i))));
			if (result != nullptr) {
				return result;
			}
		}
	}
	return nullptr;
}

void SelectAllFilesFilterTest::lambda$main$1() {
	$init(SelectAllFilesFilterTest);
	int32_t selectedIndex = $nc(SelectAllFilesFilterTest::comboBox)->getSelectedIndex();
	$nc(SelectAllFilesFilterTest::fileChooser)->setVisible(false);
	if (selectedIndex != 0) {
		$throwNew($RuntimeException, "Select All file filter is not selected!"_s);
	}
}

void SelectAllFilesFilterTest::lambda$main$0() {
	$init(SelectAllFilesFilterTest);
	$assignStatic(SelectAllFilesFilterTest::comboBox, findComboBox(SelectAllFilesFilterTest::fileChooser));
	$nc(SelectAllFilesFilterTest::comboBox)->setSelectedIndex(0);
}

SelectAllFilesFilterTest::SelectAllFilesFilterTest() {
}

void clinit$SelectAllFilesFilterTest($Class* class$) {
	$assignStatic(SelectAllFilesFilterTest::LABEL_TEXT, "File Format:"_s);
}

$Class* SelectAllFilesFilterTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(SelectAllFilesFilterTest$$Lambda$createAndShowGUI::classInfo$.name)) {
			return SelectAllFilesFilterTest$$Lambda$createAndShowGUI::load$(name, initialize);
		}
		if (name->equals(SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return SelectAllFilesFilterTest$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals(SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::classInfo$.name)) {
			return SelectAllFilesFilterTest$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
	}
	$loadClass(SelectAllFilesFilterTest, name, initialize, &_SelectAllFilesFilterTest_ClassInfo_, clinit$SelectAllFilesFilterTest, allocate$SelectAllFilesFilterTest);
	return class$;
}

$Class* SelectAllFilesFilterTest::class$ = nullptr;
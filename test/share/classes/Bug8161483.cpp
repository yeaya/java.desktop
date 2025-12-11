#include <Bug8161483.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleAction.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleAction = ::javax::accessibility::AccessibleAction;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class Bug8161483$$Lambda$lambda$main$0 : public $Runnable {
	$class(Bug8161483$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Bug8161483::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Bug8161483$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Bug8161483$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8161483$$Lambda$lambda$main$0::*)()>(&Bug8161483$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Bug8161483$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Bug8161483$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Bug8161483$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(Bug8161483$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Bug8161483$$Lambda$lambda$main$0::class$ = nullptr;

class Bug8161483$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(Bug8161483$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Bug8161483::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Bug8161483$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Bug8161483$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8161483$$Lambda$lambda$main$1$1::*)()>(&Bug8161483$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Bug8161483$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Bug8161483$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Bug8161483$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(Bug8161483$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Bug8161483$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _Bug8161483_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Bug8161483, frame)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Bug8161483, exception)},
	{"countryList", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/lang/String;>;", $PRIVATE, $field(Bug8161483, countryList)},
	{}
};

$MethodInfo _Bug8161483_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8161483::*)()>(&Bug8161483::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Bug8161483::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Bug8161483::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug8161483::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug8161483_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8161483",
	"javax.swing.JFrame",
	nullptr,
	_Bug8161483_FieldInfo_,
	_Bug8161483_MethodInfo_
};

$Object* allocate$Bug8161483($Class* clazz) {
	return $of($alloc(Bug8161483));
}

$JFrame* Bug8161483::frame = nullptr;
$volatile($Exception*) Bug8161483::exception = nullptr;

void Bug8161483::init$() {
	$JFrame::init$();
}

void Bug8161483::main($StringArray* args) {
	$init(Bug8161483);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Bug8161483$$Lambda$lambda$main$0)));
			if (Bug8161483::exception != nullptr) {
				$nc($System::out)->println($$str({"Test failed: "_s, $($nc(Bug8161483::exception)->getMessage())}));
				$throw(Bug8161483::exception);
			} else {
				$nc($System::out)->println("Test passed."_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Bug8161483$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Bug8161483::lambda$main$1() {
	$init(Bug8161483);
	if (Bug8161483::frame != nullptr) {
		$nc(Bug8161483::frame)->dispose();
	}
}

void Bug8161483::lambda$main$0() {
	$init(Bug8161483);
	$useLocalCurrentObjectStackCache();
	$var($DefaultListModel, listModel, $new($DefaultListModel));
	listModel->addElement("one"_s);
	listModel->addElement("two"_s);
	listModel->addElement("three"_s);
	$var($JList, list, $new($JList, static_cast<$ListModel*>(listModel)));
	$assignStatic(Bug8161483::frame, $new($JFrame));
	$nc(Bug8161483::frame)->add(static_cast<$Component*>(list));
	$nc(Bug8161483::frame)->pack();
	try {
		$var($AccessibleContext, acList, list->getAccessibleContext());
		$var($Accessible, accChild, $nc(acList)->getAccessibleChild(1));
		$var($AccessibleContext, acChild, $nc(accChild)->getAccessibleContext());
		$var($AccessibleAction, aa, $nc(acChild)->getAccessibleAction());
		int32_t c = $nc(aa)->getAccessibleActionCount();
		if (c != 1) {
			$throwNew($RuntimeException, "getAccessibleActionCount is not 1"_s);
		}
		$var($String, s, aa->getAccessibleActionDescription(0));
		if (!$nc(s)->equals("click"_s)) {
			$throwNew($RuntimeException, "getAccessibleActionDescription is not click"_s);
		}
		bool b = aa->doAccessibleAction(0);
		if (!b) {
			$throwNew($RuntimeException, "doAccessibleAction did not return true"_s);
		}
		$var($AccessibleSelection, as, acList->getAccessibleSelection());
		int32_t asc = $nc(as)->getAccessibleSelectionCount();
		if (asc != 1) {
			$throwNew($RuntimeException, "getAccessibleSelectionCount is not 1"_s);
		}
		bool isSelected = as->isAccessibleChildSelected(0);
		if (isSelected) {
			$throwNew($RuntimeException, "isAccessibleChildSelected(0) did not return false"_s);
		}
		isSelected = as->isAccessibleChildSelected(1);
		if (!isSelected) {
			$throwNew($RuntimeException, "isAccessibleChildSelected(1) did not return true"_s);
		}
	} catch ($Exception& e) {
		$assignStatic(Bug8161483::exception, e);
	}
}

void clinit$Bug8161483($Class* class$) {
	$assignStatic(Bug8161483::frame, nullptr);
	$assignStatic(Bug8161483::exception, nullptr);
}

Bug8161483::Bug8161483() {
}

$Class* Bug8161483::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Bug8161483$$Lambda$lambda$main$0::classInfo$.name)) {
			return Bug8161483$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(Bug8161483$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return Bug8161483$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(Bug8161483, name, initialize, &_Bug8161483_ClassInfo_, clinit$Bug8161483, allocate$Bug8161483);
	return class$;
}

$Class* Bug8161483::class$ = nullptr;
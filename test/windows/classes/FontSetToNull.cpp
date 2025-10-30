#include <FontSetToNull.h>

#include <FontSetToNull$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef BOLD
#undef USERS_FONT

using $FontSetToNull$1 = ::FontSetToNull$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $UIResource = ::javax::swing::plaf::UIResource;

class FontSetToNull$$Lambda$lambda$main$0 : public $Runnable {
	$class(FontSetToNull$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		FontSetToNull::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FontSetToNull$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FontSetToNull$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FontSetToNull$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo FontSetToNull$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(FontSetToNull$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&FontSetToNull$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FontSetToNull$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FontSetToNull$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FontSetToNull$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(FontSetToNull$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FontSetToNull$$Lambda$lambda$main$0::class$ = nullptr;

class FontSetToNull$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(FontSetToNull$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FontSetToNull::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FontSetToNull$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo FontSetToNull$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontSetToNull$$Lambda$lambda$main$1$1::*)()>(&FontSetToNull$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FontSetToNull$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"FontSetToNull$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* FontSetToNull$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(FontSetToNull$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FontSetToNull$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _FontSetToNull_FieldInfo_[] = {
	{"USERS_FONT", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontSetToNull, USERS_FONT)},
	{}
};

$MethodInfo _FontSetToNull_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontSetToNull::*)()>(&FontSetToNull::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FontSetToNull::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&FontSetToNull::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FontSetToNull::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FontSetToNull::setLookAndFeel))},
	{"test", "(Ljavax/swing/JSpinner;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JSpinner*)>(&FontSetToNull::test))},
	{}
};

$InnerClassInfo _FontSetToNull_InnerClassesInfo_[] = {
	{"FontSetToNull$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FontSetToNull_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"FontSetToNull",
	"java.lang.Object",
	nullptr,
	_FontSetToNull_FieldInfo_,
	_FontSetToNull_MethodInfo_,
	nullptr,
	nullptr,
	_FontSetToNull_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FontSetToNull$1"
};

$Object* allocate$FontSetToNull($Class* clazz) {
	return $of($alloc(FontSetToNull));
}

$Font* FontSetToNull::USERS_FONT = nullptr;

void FontSetToNull::init$() {
}

void FontSetToNull::main($StringArray* args) {
	$init(FontSetToNull);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FontSetToNull$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FontSetToNull$$Lambda$lambda$main$1$1)));
			}
		}
	}
}

void FontSetToNull::test($JSpinner* spinner) {
	$init(FontSetToNull);
	$useLocalCurrentObjectStackCache();
	$var($JSpinner$DefaultEditor, de, $cast($JSpinner$DefaultEditor, $nc(spinner)->getEditor()));
	spinner->setFont(nullptr);
	$SwingUtilities::updateComponentTreeUI(de);
	spinner->setFont(nullptr);
	$nc($($nc(de)->getTextField()))->setFont(FontSetToNull::USERS_FONT);
	spinner->setFont(nullptr);
	$var($Font, tff, $nc($(de->getTextField()))->getFont());
	if ($instanceOf($UIResource, tff) || !$nc(tff)->equals(FontSetToNull::USERS_FONT)) {
		$throwNew($RuntimeException, $$str({"Wrong font: "_s, tff}));
	}
	spinner->setEditor($($$new($JSpinner)->getEditor()));
}

void FontSetToNull::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(FontSetToNull);
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void FontSetToNull::lambda$main$1() {
	$init(FontSetToNull);
	$useLocalCurrentObjectStackCache();
	test($$new($JSpinner));
	test($$new($FontSetToNull$1));
}

void FontSetToNull::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(FontSetToNull);
	setLookAndFeel(laf);
}

void clinit$FontSetToNull($Class* class$) {
	$assignStatic(FontSetToNull::USERS_FONT, $new($Font, "dialog"_s, $Font::BOLD, 41));
}

FontSetToNull::FontSetToNull() {
}

$Class* FontSetToNull::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FontSetToNull$$Lambda$lambda$main$0::classInfo$.name)) {
			return FontSetToNull$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(FontSetToNull$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return FontSetToNull$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(FontSetToNull, name, initialize, &_FontSetToNull_ClassInfo_, clinit$FontSetToNull, allocate$FontSetToNull);
	return class$;
}

$Class* FontSetToNull::class$ = nullptr;
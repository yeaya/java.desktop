#include <FontSetByUser.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Window.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef BOLD
#undef CENTER
#undef USERS_FONT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $LayoutManager = ::java::awt::LayoutManager;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $UIResource = ::javax::swing::plaf::UIResource;

class FontSetByUser$$Lambda$lambda$main$0 : public $Runnable {
	$class(FontSetByUser$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		FontSetByUser::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<FontSetByUser$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo FontSetByUser$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(FontSetByUser$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo FontSetByUser$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(FontSetByUser$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&FontSetByUser$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo FontSetByUser$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"FontSetByUser$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* FontSetByUser$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(FontSetByUser$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* FontSetByUser$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _FontSetByUser_FieldInfo_[] = {
	{"USERS_FONT", "Ljava/awt/Font;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FontSetByUser, USERS_FONT)},
	{}
};

$MethodInfo _FontSetByUser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FontSetByUser::*)()>(&FontSetByUser::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FontSetByUser::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FontSetByUser::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&FontSetByUser::setLookAndFeel))},
	{"testDefaultFont", "(Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JFrame*)>(&FontSetByUser::testDefaultFont))},
	{}
};

$ClassInfo _FontSetByUser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FontSetByUser",
	"java.lang.Object",
	"java.lang.Runnable",
	_FontSetByUser_FieldInfo_,
	_FontSetByUser_MethodInfo_
};

$Object* allocate$FontSetByUser($Class* clazz) {
	return $of($alloc(FontSetByUser));
}

$Font* FontSetByUser::USERS_FONT = nullptr;

void FontSetByUser::init$() {
}

void FontSetByUser::main($StringArray* args) {
	$init(FontSetByUser);
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(FontSetByUser$$Lambda$lambda$main$0, laf)));
				$SwingUtilities::invokeAndWait($$new(FontSetByUser));
			}
		}
	}
}

void FontSetByUser::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame1, $new($JFrame));
	{
		$var($Throwable, var$0, nullptr);
		try {
			testDefaultFont(frame1);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			frame1->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void FontSetByUser::testDefaultFont($JFrame* frame) {
	$init(FontSetByUser);
	$useLocalCurrentObjectStackCache();
	$var($JSpinner, spinner, $new($JSpinner));
	$var($JSpinner, spinner_u, $new($JSpinner));
	$nc(frame)->setLayout($$new($FlowLayout, $FlowLayout::CENTER, 50, 50));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(spinner));
	$nc($(frame->getContentPane()))->add(static_cast<$Component*>(spinner_u));
	frame->pack();
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
	$var($JSpinner$DefaultEditor, ed, $cast($JSpinner$DefaultEditor, spinner->getEditor()));
	$var($JSpinner$DefaultEditor, ed_u, $cast($JSpinner$DefaultEditor, spinner_u->getEditor()));
	$nc($($nc(ed_u)->getTextField()))->setFont(FontSetByUser::USERS_FONT);
	for (int32_t i = 5; i < 40; i += 5) {
		$var($Font, tff, $nc($($nc(ed)->getTextField()))->getFont());
		if (!($instanceOf($UIResource, tff))) {
			$throwNew($RuntimeException, "Font must be UIResource"_s);
		}
		int32_t var$0 = $nc($(spinner->getFont()))->getSize();
		if (var$0 != $nc(tff)->getSize()) {
			$throwNew($RuntimeException, "Rrong size"_s);
		}
		spinner->setFont($$new($Font, "dialog"_s, $Font::BOLD, i));
		$var($Font, tff_u, $nc($(ed_u->getTextField()))->getFont());
		if ($instanceOf($UIResource, tff_u) || !$nc(tff_u)->equals(FontSetByUser::USERS_FONT)) {
			$throwNew($RuntimeException, "Font must NOT be UIResource"_s);
		}
		int32_t var$1 = $nc($(spinner_u->getFont()))->getSize();
		if (var$1 == $nc(tff_u)->getSize()) {
			$throwNew($RuntimeException, "Wrong size"_s);
		}
		spinner_u->setFont($$new($Font, "dialog"_s, $Font::BOLD, i));
	}
}

void FontSetByUser::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$init(FontSetByUser);
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

void FontSetByUser::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	$init(FontSetByUser);
	setLookAndFeel(laf);
}

void clinit$FontSetByUser($Class* class$) {
	$assignStatic(FontSetByUser::USERS_FONT, $new($Font, "dialog"_s, $Font::BOLD, 41));
}

FontSetByUser::FontSetByUser() {
}

$Class* FontSetByUser::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(FontSetByUser$$Lambda$lambda$main$0::classInfo$.name)) {
			return FontSetByUser$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(FontSetByUser, name, initialize, &_FontSetByUser_ClassInfo_, clinit$FontSetByUser, allocate$FontSetByUser);
	return class$;
}

$Class* FontSetByUser::class$ = nullptr;
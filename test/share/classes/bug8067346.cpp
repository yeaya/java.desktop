#include <bug8067346.h>

#include <bug8067346$1.h>
#include <java/awt/Insets.h>
#include <java/awt/Window.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef CHECKICONOFFSET
#undef MARGIN

using $bug8067346$1 = ::bug8067346$1;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$FieldInfo _bug8067346_FieldInfo_[] = {
	{"menuBar", "Ljavax/swing/JMenuBar;", nullptr, $PRIVATE, $field(bug8067346, menuBar)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug8067346, frame)},
	{"menuClasses", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(bug8067346, menuClasses)},
	{"MARGIN", "Ljava/lang/String;", nullptr, $PRIVATE, $field(bug8067346, MARGIN)},
	{"CHECKICONOFFSET", "Ljava/lang/String;", nullptr, $PRIVATE, $field(bug8067346, CHECKICONOFFSET)},
	{"runTest", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8067346, runTest)},
	{}
};

$MethodInfo _bug8067346_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8067346::*)()>(&bug8067346::init$))},
	{"createUI", "()V", nullptr, $PUBLIC},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8067346::main)), "java.lang.Exception"},
	{"performTest", "()V", nullptr, $PUBLIC},
	{"testCheckIconOffset", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(bug8067346::*)()>(&bug8067346::testCheckIconOffset))},
	{"testMargin", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(bug8067346::*)()>(&bug8067346::testMargin))},
	{}
};

$InnerClassInfo _bug8067346_InnerClassesInfo_[] = {
	{"bug8067346$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8067346_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8067346",
	"java.lang.Object",
	nullptr,
	_bug8067346_FieldInfo_,
	_bug8067346_MethodInfo_,
	nullptr,
	nullptr,
	_bug8067346_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8067346$1"
};

$Object* allocate$bug8067346($Class* clazz) {
	return $of($alloc(bug8067346));
}

bool bug8067346::runTest = false;

void bug8067346::init$() {
	$set(this, menuClasses, $new($StringArray, {
		"MenuItem"_s,
		"Menu"_s,
		"CheckBoxMenuItem"_s,
		"RadioButtonMenuItem"_s
	}));
	$set(this, MARGIN, ".margin"_s);
	$set(this, CHECKICONOFFSET, ".checkIconOffset"_s);
}

void bug8067346::main($StringArray* args) {
	$init(bug8067346);
	$SwingUtilities::invokeAndWait($$new($bug8067346$1));
}

void bug8067346::createUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $new($JFrame));
	$set(this, menuBar, $new($JMenuBar));
	$nc(this->frame)->setJMenuBar(this->menuBar);
	$var($JMenu, menu, nullptr);
	$var($JMenu, submenu, nullptr);
	$var($JMenuItem, menuItem, nullptr);
	$assign(menu, $new($JMenu, "A Menu"_s));
	$nc(this->menuBar)->add(menu);
	menu->addSeparator();
	$assign(submenu, $new($JMenu, "A submenu"_s));
	$assign(menuItem, $new($JMenuItem, "An item in the submenu"_s));
	submenu->add(menuItem);
	menu->add(static_cast<$JMenuItem*>(submenu));
}

void bug8067346::performTest() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, errorMessage, "Incorrect value for "_s);
			$var($StringBuilder, errorMessageBuilder, $new($StringBuilder, errorMessage));
			bool error = false;
			int32_t retVal = testMargin();
			if (retVal != 0) {
				errorMessageBuilder->append($nc(this->menuClasses)->get(retVal))->append(this->MARGIN)->append("\n"_s);
				error = true;
			}
			retVal = testCheckIconOffset();
			if (retVal != 0) {
				errorMessageBuilder->append(errorMessage)->append($nc(this->menuClasses)->get(retVal))->append(this->CHECKICONOFFSET);
			}
			if (error || retVal != 0) {
				$throwNew($RuntimeException, $(errorMessageBuilder->toString()));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

int32_t bug8067346::testMargin() {
	$useLocalCurrentObjectStackCache();
	for (int32_t inx = 0; inx < $nc(this->menuClasses)->length; ++inx) {
		$var($Insets, margin, $cast($Insets, $UIManager::get($$str({$nc(this->menuClasses)->get(inx), this->MARGIN}))));
		if (margin != nullptr && margin->bottom == 0 && margin->left == 0 && margin->right == 0 && margin->top == 0) {
			return inx + 1;
		}
	}
	return 0;
}

int32_t bug8067346::testCheckIconOffset() {
	$useLocalCurrentObjectStackCache();
	for (int32_t inx = 0; inx < $nc(this->menuClasses)->length; ++inx) {
		$var($Object, checkIconOffset, $UIManager::get($$str({$nc(this->menuClasses)->get(inx), this->CHECKICONOFFSET})));
		if (checkIconOffset != nullptr && $nc(($cast($Integer, checkIconOffset)))->intValue() == 0) {
			return inx + 1;
		}
	}
	return 0;
}

void bug8067346::dispose() {
	$nc(this->frame)->dispose();
}

void clinit$bug8067346($Class* class$) {
	bug8067346::runTest = true;
}

bug8067346::bug8067346() {
}

$Class* bug8067346::load$($String* name, bool initialize) {
	$loadClass(bug8067346, name, initialize, &_bug8067346_ClassInfo_, clinit$bug8067346, allocate$bug8067346);
	return class$;
}

$Class* bug8067346::class$ = nullptr;
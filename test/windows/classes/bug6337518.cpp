#include <bug6337518.h>

#include <bug6337518$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $bug6337518$1 = ::bug6337518$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JButton = ::javax::swing::JButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;

$MethodInfo _bug6337518_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6337518::*)()>(&bug6337518::init$))},
	{"createArrowButton", "()Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6337518::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6337518_InnerClassesInfo_[] = {
	{"bug6337518$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6337518_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6337518",
	"javax.swing.plaf.basic.BasicComboBoxUI",
	nullptr,
	nullptr,
	_bug6337518_MethodInfo_,
	nullptr,
	nullptr,
	_bug6337518_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6337518$1"
};

$Object* allocate$bug6337518($Class* clazz) {
	return $of($alloc(bug6337518));
}

void bug6337518::init$() {
	$BasicComboBoxUI::init$();
}

$JButton* bug6337518::createArrowButton() {
	return nullptr;
}

void bug6337518::main($StringArray* args) {
	$init(bug6337518);
	$SwingUtilities::invokeAndWait($$new($bug6337518$1));
}

bug6337518::bug6337518() {
}

$Class* bug6337518::load$($String* name, bool initialize) {
	$loadClass(bug6337518, name, initialize, &_bug6337518_ClassInfo_, allocate$bug6337518);
	return class$;
}

$Class* bug6337518::class$ = nullptr;
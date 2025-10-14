#include <bug6342301$HackedFileChooser.h>

#include <bug6342301.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $bug6342301 = ::bug6342301;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

$MethodInfo _bug6342301$HackedFileChooser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug6342301$HackedFileChooser::*)()>(&bug6342301$HackedFileChooser::init$))},
	{"setUI", "(Ljavax/swing/plaf/ComponentUI;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug6342301$HackedFileChooser_InnerClassesInfo_[] = {
	{"bug6342301$HackedFileChooser", "bug6342301", "HackedFileChooser", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6342301$HackedFileChooser_ClassInfo_ = {
	$ACC_SUPER,
	"bug6342301$HackedFileChooser",
	"javax.swing.JFileChooser",
	nullptr,
	nullptr,
	_bug6342301$HackedFileChooser_MethodInfo_,
	nullptr,
	nullptr,
	_bug6342301$HackedFileChooser_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6342301"
};

$Object* allocate$bug6342301$HackedFileChooser($Class* clazz) {
	return $of($alloc(bug6342301$HackedFileChooser));
}

void bug6342301$HackedFileChooser::init$() {
	$JFileChooser::init$();
}

void bug6342301$HackedFileChooser::setUI($ComponentUI* newUI) {
	$JFileChooser::setUI(newUI);
}

bug6342301$HackedFileChooser::bug6342301$HackedFileChooser() {
}

$Class* bug6342301$HackedFileChooser::load$($String* name, bool initialize) {
	$loadClass(bug6342301$HackedFileChooser, name, initialize, &_bug6342301$HackedFileChooser_ClassInfo_, allocate$bug6342301$HackedFileChooser);
	return class$;
}

$Class* bug6342301$HackedFileChooser::class$ = nullptr;